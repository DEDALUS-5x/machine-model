#ifndef control_y_h_
#define control_y_h_
#ifndef control_y_COMMON_INCLUDES_
#define control_y_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "math.h"
#endif

#include "control_y_types.h"
#include "model_reference_types.h"
#include <string.h>

typedef struct {
  real_T Saturation;
} B_control_y_c_T;

typedef struct {
  real_T Filter_DSTATE;
  real_T Integrator_DSTATE;
  real_T Integrator_DSTATE_o;
  real_T Filter_DSTATE_i;
  real_T Filter_DSTATE_a;
  real_T Integrator_DSTATE_m;
  real_T Filter_DSTATE_k;
  real_T Integrator_DSTATE_f;
} DW_control_y_f_T;

struct P_control_y_T_ {
  real_T PIDposition1kHz_InitialConditionForFilter;
  real_T PIDvelocity10kHz_InitialConditionForFilter;
  real_T PIDController_InitialConditionForFilter;
  real_T PIDController1_InitialConditionForFilter;
  real_T PIDposition1kHz_InitialConditionForIntegrator;
  real_T PIDvelocity10kHz_InitialConditionForIntegrator;
  real_T PIDController_InitialConditionForIntegrator;
  real_T PIDController1_InitialConditionForIntegrator;
  real_T PIDposition1kHz_LowerSaturationLimit;
  real_T PIDvelocity10kHz_LowerSaturationLimit;
  real_T PIDController_LowerSaturationLimit;
  real_T PIDController1_LowerSaturationLimit;
  real_T PIDController1_N;
  real_T PIDController1_P;
  real_T PIDposition1kHz_UpperSaturationLimit;
  real_T PIDvelocity10kHz_UpperSaturationLimit;
  real_T PIDController_UpperSaturationLimit;
  real_T PIDController1_UpperSaturationLimit;
  real_T Constant1_Value;
  real_T Filter_gainval;
  real_T Integrator_gainval;
  real_T Clamping_zero_Value;
  real_T Saturation_UpperSat;
  real_T Saturation_LowerSat;
  real_T Integrator_gainval_k;
  real_T Filter_gainval_a;
  real_T Voltage_Gain;
  real_T DeadZone1_Start;
  real_T DeadZone1_End;
  real_T Filter_gainval_n;
  real_T Integrator_gainval_h;
  real_T DeadZone2_Start;
  real_T DeadZone2_End;
  real_T Filter_gainval_i;
  real_T Integrator_gainval_l;
  int8_T Constant_Value;
  int8_T Constant2_Value;
  int8_T Constant3_Value;
  int8_T Constant4_Value;
};

struct tag_RTM_control_y_T {
  const char_T **errorStatus;
  const rtTimingBridge *timingBridge;
  struct {
    int_T mdlref_GlobalTID[2];
  } Timing;
};

typedef struct {
  B_control_y_c_T rtb;
  DW_control_y_f_T rtdw;
  RT_MODEL_control_y_T rtm;
} MdlrefDW_control_y_T;

extern real_T rtP_Da;
extern real_T rtP_Dc;
extern real_T rtP_Dpy;
extern real_T rtP_Dvy;
extern real_T rtP_Ia;
extern real_T rtP_Ic;
extern real_T rtP_Ipy;
extern real_T rtP_Ivy;
extern real_T rtP_Na;
extern real_T rtP_Npy;
extern real_T rtP_Nvy;
extern real_T rtP_Pa;
extern real_T rtP_Ppy;
extern real_T rtP_Pvy;
extern void control_y_initialize(const char_T **rt_errorStatus, const
  rtTimingBridge *timingBridge, int_T mdlref_TID0, int_T mdlref_TID1,
  RT_MODEL_control_y_T *const control_y_M, B_control_y_c_T *localB,
  DW_control_y_f_T *localDW);
extern void control_y_Init(DW_control_y_f_T *localDW);
extern void control_y_Reset(DW_control_y_f_T *localDW);
extern void control_y(RT_MODEL_control_y_T * const control_y_M, const real_T
                      *rtu_enc_pos_in_y, const real_T *rtu_enc_vel_in_y, const
                      real_T *rtu_target_pos_y, const real_T *rtu_target_vel_y,
                      const real_T *rtu_target_pitch, const real_T
                      *rtu_target_yaw, const real_T *rtu_enc_pitch, const real_T
                      *rtu_enc_yaw, real_T *rty_pwm_out_y, real_T
                      *rty_step_pitch_out, real_T *rty_step_yaw_out,
                      B_control_y_c_T *localB, DW_control_y_f_T *localDW);

#endif
