#ifndef machine_z_h_
#define machine_z_h_
#ifndef machine_z_COMMON_INCLUDES_
#define machine_z_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "nesl_rtw.h"
#include "machine_z_a47a947d_1_gateway.h"
#include "RTWCG_FMU_util.h"
#endif

#include "machine_z_types.h"
#include "rtGetInf.h"
#include "model_reference_types.h"
#include <string.h>

typedef struct {
  real_T Sum1;
  real_T INPUT_2_1_1[4];
  real_T INPUT_1_1_1[4];
  real_T STATE_1[8];
} B_machine_z_c_T;

typedef struct {
  real_T UnitDelay_DSTATE;
  real_T Integrator_DSTATE;
  real_T Filter_DSTATE;
  real_T INPUT_2_1_1_SimscapeInternalDiscrete_AEE2FA0C[2];
  real_T INPUT_1_1_1_SimscapeInternalDiscrete_E94280DC[2];
  real_T STATE_1_Inertiaw;
  real_T STATE_1_Ideal_Rotational_Motion_Sensorphi;
  real_T STATE_1_Massv;
  real_T STATE_1_Rotational_Springphi;
  real_T STATE_1_Rotational_Springw;
  real_T STATE_1_Inertiat;
  real_T STATE_1_Leadscrewnut_frc;
  real_T STATE_1_Leadscrewscrew_trq;
  real_T STATE_1_Discrete[8];
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
} DW_machine_z_f_T;

struct P_machine_z_T_ {
  real_T PIDController_InitialConditionForFilter;
  real_T PIDController_InitialConditionForIntegrator;
  real_T PIDController_LowerSaturationLimit;
  real_T PIDController_UpperSaturationLimit;
  real_T Constant1_Value;
  real_T UnitDelay_InitialCondition;
  real_T DeadZone_Start;
  real_T DeadZone_End;
  real_T Integrator_gainval;
  real_T Filter_gainval;
  real_T Gravityincrement_Value;
  real_T Gravitymass_Value;
  real_T Quantizer_Interval;
  real_T Gain_Gain;
  real_T Clamping_zero_Value;
  int8_T Constant_Value;
  int8_T Constant2_Value;
  int8_T Constant3_Value;
  int8_T Constant4_Value;
};

struct tag_RTM_machine_z_T {
  const char_T **errorStatus;
  const rtTimingBridge *timingBridge;
  struct {
    int_T mdlref_GlobalTID[1];
  } Timing;
};

typedef struct {
  B_machine_z_c_T rtb;
  DW_machine_z_f_T rtdw;
  RT_MODEL_machine_z_T rtm;
} MdlrefDW_machine_z_T;

extern real_T rtP_Dz;
extern real_T rtP_Iz;
extern real_T rtP_Nz;
extern real_T rtP_Pz;
extern void machine_z_initialize(const char_T **rt_errorStatus, const
  rtTimingBridge *timingBridge, int_T mdlref_TID0, RT_MODEL_machine_z_T *const
  machine_z_M, B_machine_z_c_T *localB, DW_machine_z_f_T *localDW);
extern void machine_z_Init(RT_MODEL_machine_z_T * const machine_z_M,
  DW_machine_z_f_T *localDW);
extern void machine_z_Reset(DW_machine_z_f_T *localDW);
extern void machine_z(RT_MODEL_machine_z_T * const machine_z_M, const real_T
                      *rtu_step_z_in, real_T *rty_enc_pos_z, B_machine_z_c_T
                      *localB, DW_machine_z_f_T *localDW);
extern void machine_z_Term(DW_machine_z_f_T *localDW);

#endif
