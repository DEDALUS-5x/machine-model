#include "multibody_model_macros.h"
#include "control_y.h"
#include "rtwtypes.h"
#include "control_y_private.h"
#include <string.h>

P_control_y_T control_y_P = {

  0.0,

  0.0,

  0.0,

  0.0,

  0.0,

  0.0,

  0.0,

  0.0,

  -150.0,

  -1.0,

  -0.75,

  -0.3,

  10.0,

  0.4,

  150.0,

  1.0,

  0.75,

  0.3,

  0.0,

  0.001,

  0.001,

  0.0,

  200.0,

  -200.0,

  0.0001,

  0.0001,

  12.0,

  -0.001,

  0.001,

  0.0001,

  0.0001,

  -0.001,

  0.001,

  0.0001,

  0.0001,

  1,

  -1,

  1,

  -1
};

void control_y_Init(DW_control_y_f_T *localDW)
{
  localDW->Filter_DSTATE = control_y_P.PIDposition1kHz_InitialConditionForFilter;
  localDW->Integrator_DSTATE =
    control_y_P.PIDposition1kHz_InitialConditionForIntegrator;
  localDW->Integrator_DSTATE_o =
    control_y_P.PIDvelocity10kHz_InitialConditionForIntegrator;
  localDW->Filter_DSTATE_i =
    control_y_P.PIDvelocity10kHz_InitialConditionForFilter;
  localDW->Filter_DSTATE_a = control_y_P.PIDController_InitialConditionForFilter;
  localDW->Integrator_DSTATE_m =
    control_y_P.PIDController_InitialConditionForIntegrator;
  localDW->Filter_DSTATE_k =
    control_y_P.PIDController1_InitialConditionForFilter;
  localDW->Integrator_DSTATE_f =
    control_y_P.PIDController1_InitialConditionForIntegrator;
}

void control_y_Reset(DW_control_y_f_T *localDW)
{
  localDW->Filter_DSTATE = control_y_P.PIDposition1kHz_InitialConditionForFilter;
  localDW->Integrator_DSTATE =
    control_y_P.PIDposition1kHz_InitialConditionForIntegrator;
  localDW->Integrator_DSTATE_o =
    control_y_P.PIDvelocity10kHz_InitialConditionForIntegrator;
  localDW->Filter_DSTATE_i =
    control_y_P.PIDvelocity10kHz_InitialConditionForFilter;
  localDW->Filter_DSTATE_a = control_y_P.PIDController_InitialConditionForFilter;
  localDW->Integrator_DSTATE_m =
    control_y_P.PIDController_InitialConditionForIntegrator;
  localDW->Filter_DSTATE_k =
    control_y_P.PIDController1_InitialConditionForFilter;
  localDW->Integrator_DSTATE_f =
    control_y_P.PIDController1_InitialConditionForIntegrator;
}

void control_y(RT_MODEL_control_y_T * const control_y_M, const real_T
               *rtu_enc_pos_in_y, const real_T *rtu_enc_vel_in_y, const real_T
               *rtu_target_pos_y, const real_T *rtu_target_vel_y, const real_T
               *rtu_target_pitch, const real_T *rtu_target_yaw, const real_T
               *rtu_enc_pitch, const real_T *rtu_enc_yaw, real_T *rty_pwm_out_y,
               real_T *rty_step_pitch_out, real_T *rty_step_yaw_out,
               B_control_y_c_T *localB, DW_control_y_f_T *localDW)
{
  real_T rtb_FilterCoefficient;
  real_T rtb_FilterCoefficient_a;
  real_T rtb_FilterCoefficient_b;
  real_T rtb_FilterCoefficient_m;
  real_T rtb_Filter_d;
  real_T rtb_IntegralGain;
  real_T rtb_Sum;
  real_T rtb_Sum_d;
  real_T u0;
  int8_T tmp_0;
  int8_T tmp_1;
  boolean_T rtb_RelationalOperator;
  boolean_T tmp;
  tmp = rtmIsSampleHit(control_y_M, 1);
  if (tmp) {
    rtb_Sum = *rtu_target_pos_y - *rtu_enc_pos_in_y;
    rtb_IntegralGain = rtP_Ipy * rtb_Sum;
    rtb_FilterCoefficient = (rtP_Dpy * rtb_Sum - localDW->Filter_DSTATE) *
      rtP_Npy;
    u0 = (rtP_Ppy * rtb_Sum + localDW->Integrator_DSTATE) +
      rtb_FilterCoefficient;
    if (u0 > control_y_P.PIDposition1kHz_UpperSaturationLimit) {
      localB->Saturation = control_y_P.PIDposition1kHz_UpperSaturationLimit;
    } else if (u0 < control_y_P.PIDposition1kHz_LowerSaturationLimit) {
      localB->Saturation = control_y_P.PIDposition1kHz_LowerSaturationLimit;
    } else {
      localB->Saturation = u0;
    }
  }

  u0 = localB->Saturation + *rtu_target_vel_y;
  if (u0 > control_y_P.Saturation_UpperSat) {
    u0 = control_y_P.Saturation_UpperSat;
  } else if (u0 < control_y_P.Saturation_LowerSat) {
    u0 = control_y_P.Saturation_LowerSat;
  }

  rtb_Sum = u0 - *rtu_enc_vel_in_y;
  rtb_FilterCoefficient_m = (rtP_Dvy * rtb_Sum - localDW->Filter_DSTATE_i) *
    rtP_Nvy;
  rtb_Filter_d = (rtP_Pvy * rtb_Sum + localDW->Integrator_DSTATE_o) +
    rtb_FilterCoefficient_m;
  if (rtb_Filter_d > control_y_P.PIDvelocity10kHz_UpperSaturationLimit) {
    rtb_Sum_d = rtb_Filter_d - control_y_P.PIDvelocity10kHz_UpperSaturationLimit;
  } else if (rtb_Filter_d >= control_y_P.PIDvelocity10kHz_LowerSaturationLimit)
  {
    rtb_Sum_d = 0.0;
  } else {
    rtb_Sum_d = rtb_Filter_d - control_y_P.PIDvelocity10kHz_LowerSaturationLimit;
  }

  rtb_RelationalOperator = (control_y_P.Clamping_zero_Value != rtb_Sum_d);
  rtb_Sum *= rtP_Ivy;
  if (rtb_Sum_d > control_y_P.Clamping_zero_Value) {
    tmp_0 = control_y_P.Constant_Value;
  } else {
    tmp_0 = control_y_P.Constant2_Value;
  }

  if (rtb_Sum > control_y_P.Clamping_zero_Value) {
    tmp_1 = control_y_P.Constant3_Value;
  } else {
    tmp_1 = control_y_P.Constant4_Value;
  }

  if (rtb_Filter_d > control_y_P.PIDvelocity10kHz_UpperSaturationLimit) {
    rtb_Filter_d = control_y_P.PIDvelocity10kHz_UpperSaturationLimit;
  } else if (rtb_Filter_d < control_y_P.PIDvelocity10kHz_LowerSaturationLimit) {
    rtb_Filter_d = control_y_P.PIDvelocity10kHz_LowerSaturationLimit;
  }

  *rty_pwm_out_y = control_y_P.Voltage_Gain * rtb_Filter_d;
  rtb_Sum_d = *rtu_target_pitch - *rtu_enc_pitch;
  if (rtb_Sum_d > control_y_P.DeadZone1_End) {
    rtb_Sum_d -= control_y_P.DeadZone1_End;
  } else if (rtb_Sum_d >= control_y_P.DeadZone1_Start) {
    rtb_Sum_d = 0.0;
  } else {
    rtb_Sum_d -= control_y_P.DeadZone1_Start;
  }

  rtb_Filter_d = rtP_Ia * rtb_Sum_d;
  rtb_FilterCoefficient_a = (rtP_Da * rtb_Sum_d - localDW->Filter_DSTATE_a) *
    rtP_Na;
  u0 = (rtP_Pa * rtb_Sum_d + localDW->Integrator_DSTATE_m) +
    rtb_FilterCoefficient_a;
  if (u0 > control_y_P.PIDController_UpperSaturationLimit) {
    *rty_step_pitch_out = control_y_P.PIDController_UpperSaturationLimit;
  } else if (u0 < control_y_P.PIDController_LowerSaturationLimit) {
    *rty_step_pitch_out = control_y_P.PIDController_LowerSaturationLimit;
  } else {
    *rty_step_pitch_out = u0;
  }

  rtb_Sum_d = *rtu_target_yaw - *rtu_enc_yaw;
  if (rtb_Sum_d > control_y_P.DeadZone2_End) {
    rtb_Sum_d -= control_y_P.DeadZone2_End;
  } else if (rtb_Sum_d >= control_y_P.DeadZone2_Start) {
    rtb_Sum_d = 0.0;
  } else {
    rtb_Sum_d -= control_y_P.DeadZone2_Start;
  }

  rtb_FilterCoefficient_b = (rtP_Dc * rtb_Sum_d - localDW->Filter_DSTATE_k) *
    control_y_P.PIDController1_N;
  u0 = (control_y_P.PIDController1_P * rtb_Sum_d + localDW->Integrator_DSTATE_f)
    + rtb_FilterCoefficient_b;
  if (u0 > control_y_P.PIDController1_UpperSaturationLimit) {
    *rty_step_yaw_out = control_y_P.PIDController1_UpperSaturationLimit;
  } else if (u0 < control_y_P.PIDController1_LowerSaturationLimit) {
    *rty_step_yaw_out = control_y_P.PIDController1_LowerSaturationLimit;
  } else {
    *rty_step_yaw_out = u0;
  }

  if (tmp) {
    localDW->Filter_DSTATE += control_y_P.Filter_gainval * rtb_FilterCoefficient;
    localDW->Integrator_DSTATE += control_y_P.Integrator_gainval *
      rtb_IntegralGain;
  }

  if (rtb_RelationalOperator && (tmp_0 == tmp_1)) {
    rtb_Sum = control_y_P.Constant1_Value;
  }

  localDW->Integrator_DSTATE_o += control_y_P.Integrator_gainval_k * rtb_Sum;
  localDW->Filter_DSTATE_i += control_y_P.Filter_gainval_a *
    rtb_FilterCoefficient_m;
  localDW->Filter_DSTATE_a += control_y_P.Filter_gainval_n *
    rtb_FilterCoefficient_a;
  localDW->Integrator_DSTATE_m += control_y_P.Integrator_gainval_h *
    rtb_Filter_d;
  localDW->Filter_DSTATE_k += control_y_P.Filter_gainval_i *
    rtb_FilterCoefficient_b;
  localDW->Integrator_DSTATE_f += rtP_Ic * rtb_Sum_d *
    control_y_P.Integrator_gainval_l;
}

void control_y_initialize(const char_T **rt_errorStatus, const rtTimingBridge
  *timingBridge, int_T mdlref_TID0, int_T mdlref_TID1, RT_MODEL_control_y_T *
  const control_y_M, B_control_y_c_T *localB, DW_control_y_f_T *localDW)
{
  (void) memset((void *)control_y_M, 0,
                sizeof(RT_MODEL_control_y_T));
  control_y_M->Timing.mdlref_GlobalTID[0] = mdlref_TID0;
  control_y_M->Timing.mdlref_GlobalTID[1] = mdlref_TID1;
  control_y_M->timingBridge = (timingBridge);
  rtmSetErrorStatusPointer(control_y_M, rt_errorStatus);
  (void) memset(((void *) localB), 0,
                sizeof(B_control_y_c_T));
  (void) memset((void *)localDW, 0,
                sizeof(DW_control_y_f_T));
}
