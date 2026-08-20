#ifndef control_x_h_
#define control_x_h_
#ifndef control_x_COMMON_INCLUDES_
#define control_x_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "math.h"
#endif

#include "control_x_types.h"
#include "model_reference_types.h"
#include <string.h>

typedef struct {
  real_T Saturation;
} B_control_x_c_T;

typedef struct {
  real_T Filter_DSTATE;
  real_T Integrator_DSTATE;
  real_T Integrator_DSTATE_k;
  real_T Filter_DSTATE_k;
} DW_control_x_f_T;

struct P_control_x_T_ {
  real_T PIDposition1kHz_InitialConditionForFilter;
  real_T PIDvelocity10kHz_InitialConditionForFilter;
  real_T PIDposition1kHz_InitialConditionForIntegrator;
  real_T PIDvelocity10kHz_InitialConditionForIntegrator;
  real_T PIDposition1kHz_LowerSaturationLimit;
  real_T PIDvelocity10kHz_LowerSaturationLimit;
  real_T PIDposition1kHz_UpperSaturationLimit;
  real_T PIDvelocity10kHz_UpperSaturationLimit;
  real_T Constant1_Value;
  real_T Filter_gainval;
  real_T Integrator_gainval;
  real_T Clamping_zero_Value;
  real_T Saturation_UpperSat;
  real_T Saturation_LowerSat;
  real_T Integrator_gainval_f;
  real_T Filter_gainval_j;
  real_T Voltage_Gain;
  int8_T Constant_Value;
  int8_T Constant2_Value;
  int8_T Constant3_Value;
  int8_T Constant4_Value;
};

struct tag_RTM_control_x_T {
  const char_T **errorStatus;
  const rtTimingBridge *timingBridge;
  struct {
    int_T mdlref_GlobalTID[2];
  } Timing;
};

typedef struct {
  B_control_x_c_T rtb;
  DW_control_x_f_T rtdw;
  RT_MODEL_control_x_T rtm;
} MdlrefDW_control_x_T;

extern real_T rtP_Dvx;
extern real_T rtP_Ivx;
extern real_T rtP_Nvx;
extern real_T rtP_Pvx;
extern real_T Dpx;
extern real_T Ipx;
extern real_T Npx;
extern real_T Ppx;
extern void control_x_initialize(const char_T **rt_errorStatus, const
  rtTimingBridge *timingBridge, int_T mdlref_TID0, int_T mdlref_TID1,
  RT_MODEL_control_x_T *const control_x_M, B_control_x_c_T *localB,
  DW_control_x_f_T *localDW);
extern void control_x_Init(DW_control_x_f_T *localDW);
extern void control_x_Reset(DW_control_x_f_T *localDW);
extern void control_x(RT_MODEL_control_x_T * const control_x_M, const real_T
                      *rtu_enc_pos_in_x, const real_T *rtu_enc_vel_in_x, const
                      real_T *rtu_target_pos_x, const real_T *rtu_target_vel_x,
                      real_T *rty_pwm_out_x, B_control_x_c_T *localB,
                      DW_control_x_f_T *localDW);

#endif
