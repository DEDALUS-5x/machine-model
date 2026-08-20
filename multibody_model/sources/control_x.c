#include "multibody_model_macros.h"
#include "control_x.h"
#include "rtwtypes.h"
#include "control_x_private.h"
#include <string.h>

P_control_x_T control_x_P = {

  0.0,

  0.0,

  0.0,

  0.0,

  -150.0,

  -1.0,

  150.0,

  1.0,

  0.0,

  0.001,

  0.001,

  0.0,

  300.0,

  -300.0,

  0.0001,

  0.0001,

  12.0,

  1,

  -1,

  1,

  -1
};

void control_x_Init(DW_control_x_f_T *localDW)
{
  localDW->Filter_DSTATE = control_x_P.PIDposition1kHz_InitialConditionForFilter;
  localDW->Integrator_DSTATE =
    control_x_P.PIDposition1kHz_InitialConditionForIntegrator;
  localDW->Integrator_DSTATE_k =
    control_x_P.PIDvelocity10kHz_InitialConditionForIntegrator;
  localDW->Filter_DSTATE_k =
    control_x_P.PIDvelocity10kHz_InitialConditionForFilter;
}

void control_x_Reset(DW_control_x_f_T *localDW)
{
  localDW->Filter_DSTATE = control_x_P.PIDposition1kHz_InitialConditionForFilter;
  localDW->Integrator_DSTATE =
    control_x_P.PIDposition1kHz_InitialConditionForIntegrator;
  localDW->Integrator_DSTATE_k =
    control_x_P.PIDvelocity10kHz_InitialConditionForIntegrator;
  localDW->Filter_DSTATE_k =
    control_x_P.PIDvelocity10kHz_InitialConditionForFilter;
}

void control_x(RT_MODEL_control_x_T * const control_x_M, const real_T
               *rtu_enc_pos_in_x, const real_T *rtu_enc_vel_in_x, const real_T
               *rtu_target_pos_x, const real_T *rtu_target_vel_x, real_T
               *rty_pwm_out_x, B_control_x_c_T *localB, DW_control_x_f_T
               *localDW)
{
  real_T rtb_DeadZone;
  real_T rtb_FilterCoefficient;
  real_T rtb_FilterCoefficient_l;
  real_T rtb_IntegralGain;
  real_T rtb_Saturation;
  real_T rtb_Sum;
  int8_T tmp_0;
  int8_T tmp_1;
  boolean_T tmp;
  tmp = rtmIsSampleHit(control_x_M, 1);
  if (tmp) {
    rtb_Sum = *rtu_target_pos_x - *rtu_enc_pos_in_x;
    rtb_IntegralGain = Ipx * rtb_Sum;
    rtb_FilterCoefficient = (Dpx * rtb_Sum - localDW->Filter_DSTATE) * Npx;
    rtb_Sum = (Ppx * rtb_Sum + localDW->Integrator_DSTATE) +
      rtb_FilterCoefficient;
    if (rtb_Sum > control_x_P.PIDposition1kHz_UpperSaturationLimit) {
      localB->Saturation = control_x_P.PIDposition1kHz_UpperSaturationLimit;
    } else if (rtb_Sum < control_x_P.PIDposition1kHz_LowerSaturationLimit) {
      localB->Saturation = control_x_P.PIDposition1kHz_LowerSaturationLimit;
    } else {
      localB->Saturation = rtb_Sum;
    }
  }

  rtb_Sum = localB->Saturation + *rtu_target_vel_x;
  if (rtb_Sum > control_x_P.Saturation_UpperSat) {
    rtb_Sum = control_x_P.Saturation_UpperSat;
  } else if (rtb_Sum < control_x_P.Saturation_LowerSat) {
    rtb_Sum = control_x_P.Saturation_LowerSat;
  }

  rtb_Sum -= *rtu_enc_vel_in_x;
  rtb_FilterCoefficient_l = (rtP_Dvx * rtb_Sum - localDW->Filter_DSTATE_k) *
    rtP_Nvx;
  rtb_Saturation = (rtP_Pvx * rtb_Sum + localDW->Integrator_DSTATE_k) +
    rtb_FilterCoefficient_l;
  if (rtb_Saturation > control_x_P.PIDvelocity10kHz_UpperSaturationLimit) {
    rtb_DeadZone = rtb_Saturation -
      control_x_P.PIDvelocity10kHz_UpperSaturationLimit;
    rtb_Saturation = control_x_P.PIDvelocity10kHz_UpperSaturationLimit;
  } else {
    if (rtb_Saturation >= control_x_P.PIDvelocity10kHz_LowerSaturationLimit) {
      rtb_DeadZone = 0.0;
    } else {
      rtb_DeadZone = rtb_Saturation -
        control_x_P.PIDvelocity10kHz_LowerSaturationLimit;
    }

    if (rtb_Saturation < control_x_P.PIDvelocity10kHz_LowerSaturationLimit) {
      rtb_Saturation = control_x_P.PIDvelocity10kHz_LowerSaturationLimit;
    }
  }

  rtb_Sum *= rtP_Ivx;
  *rty_pwm_out_x = control_x_P.Voltage_Gain * rtb_Saturation;
  if (tmp) {
    localDW->Filter_DSTATE += control_x_P.Filter_gainval * rtb_FilterCoefficient;
    localDW->Integrator_DSTATE += control_x_P.Integrator_gainval *
      rtb_IntegralGain;
  }

  if (rtb_DeadZone > control_x_P.Clamping_zero_Value) {
    tmp_0 = control_x_P.Constant_Value;
  } else {
    tmp_0 = control_x_P.Constant2_Value;
  }

  if (rtb_Sum > control_x_P.Clamping_zero_Value) {
    tmp_1 = control_x_P.Constant3_Value;
  } else {
    tmp_1 = control_x_P.Constant4_Value;
  }

  if ((control_x_P.Clamping_zero_Value != rtb_DeadZone) && (tmp_0 == tmp_1)) {
    rtb_Sum = control_x_P.Constant1_Value;
  }

  localDW->Integrator_DSTATE_k += control_x_P.Integrator_gainval_f * rtb_Sum;
  localDW->Filter_DSTATE_k += control_x_P.Filter_gainval_j *
    rtb_FilterCoefficient_l;
}

void control_x_initialize(const char_T **rt_errorStatus, const rtTimingBridge
  *timingBridge, int_T mdlref_TID0, int_T mdlref_TID1, RT_MODEL_control_x_T *
  const control_x_M, B_control_x_c_T *localB, DW_control_x_f_T *localDW)
{
  (void) memset((void *)control_x_M, 0,
                sizeof(RT_MODEL_control_x_T));
  control_x_M->Timing.mdlref_GlobalTID[0] = mdlref_TID0;
  control_x_M->Timing.mdlref_GlobalTID[1] = mdlref_TID1;
  control_x_M->timingBridge = (timingBridge);
  rtmSetErrorStatusPointer(control_x_M, rt_errorStatus);
  (void) memset(((void *) localB), 0,
                sizeof(B_control_x_c_T));
  (void) memset((void *)localDW, 0,
                sizeof(DW_control_x_f_T));
}
