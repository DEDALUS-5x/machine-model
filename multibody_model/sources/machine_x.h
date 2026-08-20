#ifndef machine_x_h_
#define machine_x_h_
#ifndef machine_x_COMMON_INCLUDES_
#define machine_x_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "nesl_rtw.h"
#include "machine_x_d13b1ab2_1_gateway.h"
#include "RTWCG_FMU_util.h"
#endif

#include "machine_x_types.h"
#include "rtGetInf.h"
#include "model_reference_types.h"
#include <string.h>

typedef struct {
  real_T INPUT_1_1_1[4];
  real_T STATE_1[6];
} B_machine_x_c_T;

typedef struct {
  real_T INPUT_1_1_1_SimscapeInternalDiscrete_D7B17FC2[2];
  real_T STATE_1_DC_Motori_L;
  real_T STATE_1_DC_Motorw;
  real_T STATE_1_Massv;
  real_T STATE_1_Translational_Springx;
  real_T STATE_1_Ideal_Rotational_Motion_Sensorphi;
  real_T STATE_1_Ideal_Translational_Motion_Sensorx;
  real_T STATE_1_Discrete[6];
  real_T STATE_1_JacobElems;
  real_T STATE_1_ZcValueStore;
  real_T OUTPUT_1_0_Discrete;
  real_T OUTPUT_1_0_JacobElems;
  real_T OUTPUT_1_0_ZcValueStore;
  void* STATE_1_Simulator;
  void* STATE_1_SimData;
  void* STATE_1_DiagMgr;
  void* STATE_1_ZcLogger;
  void* STATE_1_TsInfo;
  void* OUTPUT_1_0_Simulator;
  void* OUTPUT_1_0_SimData;
  void* OUTPUT_1_0_DiagMgr;
  void* OUTPUT_1_0_ZcLogger;
  void* OUTPUT_1_0_TsInfo;
  int_T STATE_1_Modes;
  int_T STATE_1_SwtgCoeffs;
  int_T OUTPUT_1_0_Modes;
  int_T OUTPUT_1_0_SwtgCoeffs;
  uint8_T STATE_1_ZcSignalDir;
  uint8_T STATE_1_ZcStateStore;
  uint8_T OUTPUT_1_0_ZcSignalDir;
  uint8_T OUTPUT_1_0_ZcStateStore;
  boolean_T STATE_1_FirstOutput;
  boolean_T OUTPUT_1_0_FirstOutput;
} DW_machine_x_f_T;

struct P_machine_x_T_ {
  real_T Quantizer_Interval;
  real_T Gain_Gain;
  real_T Quantizer3_Interval;
};

struct tag_RTM_machine_x_T {
  const char_T **errorStatus;
  const rtTimingBridge *timingBridge;
  struct {
    int_T mdlref_GlobalTID[1];
  } Timing;
};

typedef struct {
  B_machine_x_c_T rtb;
  DW_machine_x_f_T rtdw;
  RT_MODEL_machine_x_T rtm;
} MdlrefDW_machine_x_T;

extern void machine_x_initialize(const char_T **rt_errorStatus, const
  rtTimingBridge *timingBridge, int_T mdlref_TID0, RT_MODEL_machine_x_T *const
  machine_x_M, B_machine_x_c_T *localB, DW_machine_x_f_T *localDW);
extern void machine_x_Init(RT_MODEL_machine_x_T * const machine_x_M,
  DW_machine_x_f_T *localDW);
extern void machine_x(RT_MODEL_machine_x_T * const machine_x_M, const real_T
                      *rtu_pwm_in_x, real_T *rty_enc_vel_out_x, real_T
                      *rty_enc_pos_out_x, B_machine_x_c_T *localB,
                      DW_machine_x_f_T *localDW);
extern void machine_x_Term(DW_machine_x_f_T *localDW);

#endif
