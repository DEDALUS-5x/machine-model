#ifndef machine_y_h_
#define machine_y_h_
#ifndef machine_y_COMMON_INCLUDES_
#define machine_y_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "nesl_rtw.h"
#include "machine_y_ac6adea4_1_gateway.h"
#include "RTWCG_FMU_util.h"
#include "machine_y_4d193148_1_gateway.h"
#include "machine_y_430a60f0_1_gateway.h"
#endif

#include "machine_y_types.h"
#include "rtGetInf.h"
#include "model_reference_types.h"
#include <string.h>

typedef struct {
  real_T INPUT_1_1_1[4];
  real_T Gain3;
  real_T INPUT_2_1_1[4];
  real_T STATE_1[3];
  real_T uh;
  real_T INPUT_2_1_1_b[4];
  real_T INPUT_1_1_1_k[4];
  real_T STATE_1_d[6];
  real_T INPUT_1_1_1_o[4];
  real_T STATE_1_f[6];
} B_machine_y_c_T;

typedef struct {
  real_T INPUT_1_1_1_SimscapeInternalDiscrete_E94280DC[2];
  real_T UnitDelay_DSTATE;
  real_T INPUT_2_1_1_SimscapeInternalDiscrete_AEE2FA0C[2];
  real_T STATE_1_Inertiaw;
  real_T STATE_1_Ideal_Rotational_Motion_Sensor1phi;
  real_T STATE_1_Rotational_Springphi;
  real_T INPUT_2_1_1_SimscapeInternalDiscrete_90110512[2];
  real_T INPUT_1_1_1_SimscapeInternalDiscrete_D7B17FC2[2];
  real_T STATE_1_DC_Motori_L;
  real_T STATE_1_DC_Motorw;
  real_T STATE_1_Massv;
  real_T STATE_1_Translational_Springx;
  real_T STATE_1_Ideal_Rotational_Motion_Sensorphi;
  real_T STATE_1_Ideal_Translational_Motion_Sensorx;
  real_T INPUT_1_1_1_SimscapeInternalDiscrete_D03A2D9C[2];
  real_T STATE_1_Inertia1w;
  real_T STATE_1_Ideal_Rotational_Motion_Sensor2phi;
  real_T STATE_1_Rotational_Spring1phi;
  real_T STATE_1_Rotational_Spring1w;
  real_T STATE_1_Inertia1t;
  real_T STATE_1_Rotational_Frictiont;
  real_T STATE_1_Discrete[3];
  real_T STATE_1_JacobElems;
  real_T STATE_1_ZcValueStore;
  real_T OUTPUT_1_1_Discrete;
  real_T OUTPUT_1_1_JacobElems;
  real_T OUTPUT_1_1_ZcValueStore;
  real_T STATE_1_Discrete_n[6];
  real_T STATE_1_JacobElems_d;
  real_T STATE_1_ZcValueStore_m;
  real_T OUTPUT_1_0_Discrete;
  real_T OUTPUT_1_0_JacobElems;
  real_T OUTPUT_1_0_ZcValueStore;
  real_T OUTPUT_1_0_Discrete_c;
  real_T OUTPUT_1_0_JacobElems_o;
  real_T OUTPUT_1_0_ZcValueStore_k;
  real_T STATE_1_Discrete_o[6];
  real_T STATE_1_JacobElems_dt;
  real_T STATE_1_ZcValueStore_p;
  real_T OUTPUT_1_0_Discrete_i;
  real_T OUTPUT_1_0_JacobElems_n;
  real_T OUTPUT_1_0_ZcValueStore_c;
  void* STATE_1_Simulator;
  void* STATE_1_SimData;
  void* STATE_1_DiagMgr;
  void* STATE_1_ZcLogger;
  void* STATE_1_TsInfo;
  void* OUTPUT_1_1_Simulator;
  void* OUTPUT_1_1_SimData;
  void* OUTPUT_1_1_DiagMgr;
  void* OUTPUT_1_1_ZcLogger;
  void* OUTPUT_1_1_TsInfo;
  void* STATE_1_Simulator_o;
  void* STATE_1_SimData_i;
  void* STATE_1_DiagMgr_f;
  void* STATE_1_ZcLogger_g;
  void* STATE_1_TsInfo_d;
  void* OUTPUT_1_0_Simulator;
  void* OUTPUT_1_0_SimData;
  void* OUTPUT_1_0_DiagMgr;
  void* OUTPUT_1_0_ZcLogger;
  void* OUTPUT_1_0_TsInfo;
  void* OUTPUT_1_0_Simulator_l;
  void* OUTPUT_1_0_SimData_j;
  void* OUTPUT_1_0_DiagMgr_e;
  void* OUTPUT_1_0_ZcLogger_f;
  void* OUTPUT_1_0_TsInfo_l;
  void* STATE_1_Simulator_a;
  void* STATE_1_SimData_l;
  void* STATE_1_DiagMgr_g;
  void* STATE_1_ZcLogger_f;
  void* STATE_1_TsInfo_dc;
  void* OUTPUT_1_0_Simulator_h;
  void* OUTPUT_1_0_SimData_b;
  void* OUTPUT_1_0_DiagMgr_k;
  void* OUTPUT_1_0_ZcLogger_i;
  void* OUTPUT_1_0_TsInfo_ly;
  int_T STATE_1_Modes;
  int_T STATE_1_SwtgCoeffs;
  int_T OUTPUT_1_1_Modes;
  int_T OUTPUT_1_1_SwtgCoeffs;
  int_T STATE_1_Modes_k;
  int_T STATE_1_SwtgCoeffs_d;
  int_T OUTPUT_1_0_Modes;
  int_T OUTPUT_1_0_SwtgCoeffs;
  int_T OUTPUT_1_0_Modes_d;
  int_T OUTPUT_1_0_SwtgCoeffs_d;
  int_T STATE_1_Modes_ka;
  int_T STATE_1_SwtgCoeffs_k;
  int_T OUTPUT_1_0_Modes_a;
  int_T OUTPUT_1_0_SwtgCoeffs_l;
  uint8_T STATE_1_ZcSignalDir;
  uint8_T STATE_1_ZcStateStore;
  uint8_T OUTPUT_1_1_ZcSignalDir;
  uint8_T OUTPUT_1_1_ZcStateStore;
  uint8_T STATE_1_ZcSignalDir_f;
  uint8_T STATE_1_ZcStateStore_n;
  uint8_T OUTPUT_1_0_ZcSignalDir;
  uint8_T OUTPUT_1_0_ZcStateStore;
  uint8_T OUTPUT_1_0_ZcSignalDir_c;
  uint8_T OUTPUT_1_0_ZcStateStore_f;
  uint8_T STATE_1_ZcSignalDir_d;
  uint8_T STATE_1_ZcStateStore_p;
  uint8_T OUTPUT_1_0_ZcSignalDir_d;
  uint8_T OUTPUT_1_0_ZcStateStore_e;
  boolean_T STATE_1_FirstOutput;
  boolean_T OUTPUT_1_1_FirstOutput;
  boolean_T STATE_1_FirstOutput_l;
  boolean_T OUTPUT_1_0_FirstOutput;
  boolean_T OUTPUT_1_0_FirstOutput_n;
  boolean_T STATE_1_FirstOutput_o;
  boolean_T OUTPUT_1_0_FirstOutput_j;
} DW_machine_y_f_T;

struct P_machine_y_T_ {
  real_T UnitDelay_InitialCondition;
  real_T Gain3_Gain;
  real_T uh_Gain;
  real_T Quantizer2_Interval;
  real_T Gain_Gain;
  real_T Quantizer3_Interval;
  real_T Quantizer_Interval;
  real_T Gain1_Gain;
  real_T Quantizer1_Interval;
  real_T Gain2_Gain;
};

struct tag_RTM_machine_y_T {
  const char_T **errorStatus;
  const rtTimingBridge *timingBridge;
  struct {
    int_T mdlref_GlobalTID[1];
  } Timing;
};

typedef struct {
  B_machine_y_c_T rtb;
  DW_machine_y_f_T rtdw;
  RT_MODEL_machine_y_T rtm;
} MdlrefDW_machine_y_T;

extern void machine_y_initialize(const char_T **rt_errorStatus, const
  rtTimingBridge *timingBridge, int_T mdlref_TID0, RT_MODEL_machine_y_T *const
  machine_y_M, B_machine_y_c_T *localB, DW_machine_y_f_T *localDW);
extern void machine_y_Init(RT_MODEL_machine_y_T * const machine_y_M,
  DW_machine_y_f_T *localDW);
extern void machine_y_Reset(DW_machine_y_f_T *localDW);
extern void machine_y(RT_MODEL_machine_y_T * const machine_y_M, const real_T
                      *rtu_pwm_in_y, const real_T *rtu_step_pitch_in, const
                      real_T *rtu_step_yaw_in, real_T *rty_enc_vel_out_y, real_T
                      *rty_enc_pos_out_y, real_T *rty_enc_pitch_out, real_T
                      *rty_enc_yaw_out, B_machine_y_c_T *localB,
                      DW_machine_y_f_T *localDW);
extern void machine_y_Term(DW_machine_y_f_T *localDW);

#endif
