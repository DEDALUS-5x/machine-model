#include "multibody_model_macros.h"
#include "machine_y.h"
#include "rtwtypes.h"
#include "machine_y_private.h"
#include <math.h>
#include "rt_roundd_snf.h"
#include <stddef.h>
#include <string.h>

P_machine_y_T machine_y_P = {

  0.0,

  -0.294,

  0.02,

  0.001,

  6.36,

  0.005,

  0.001,

  57.3,

  0.001,

  57.3
};

void machine_y_Init(RT_MODEL_machine_y_T * const machine_y_M, DW_machine_y_f_T
                    *localDW)
{
  NeModelParameters modelParameters;
  NeModelParameters modelParameters_0;
  NeModelParameters modelParameters_1;
  NeModelParameters modelParameters_2;
  NeModelParameters modelParameters_3;
  NeModelParameters modelParameters_4;
  NeModelParameters modelParameters_5;
  NeslSimulationData *tmp_1;
  NeslSimulator *tmp;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  NeuDiagnosticTree *diagnosticTree_0;
  NeuDiagnosticTree *diagnosticTree_1;
  NeuDiagnosticTree *diagnosticTree_2;
  NeuDiagnosticTree *diagnosticTree_3;
  NeuDiagnosticTree *diagnosticTree_4;
  NeuDiagnosticTree *diagnosticTree_5;
  char *msg;
  char *msg_0;
  char *msg_1;
  char *msg_2;
  char *msg_3;
  char *msg_4;
  char *msg_5;
  real_T fixedStepSize;
  int32_T tmp_2;
  boolean_T tmp_0;
  tmp = nesl_lease_simulator("machine_y/Solver Configuration1_1", 0, 0);
  localDW->STATE_1_Simulator = (void *)tmp;
  tmp_0 = pointer_is_null(localDW->STATE_1_Simulator);
  if (tmp_0) {
    machine_y_ac6adea4_1_gateway();
    tmp = nesl_lease_simulator("machine_y/Solver Configuration1_1", 0, 0);
    localDW->STATE_1_Simulator = (void *)tmp;
  }

  ;
  tmp_1 = nesl_create_simulation_data();
  localDW->STATE_1_SimData = (void *)tmp_1;
  diagnosticManager = rtw_create_diagnostics();
  localDW->STATE_1_DiagMgr = (void *)diagnosticManager;
  modelParameters.mSolverType = NE_SOLVER_TYPE_DAE;
  modelParameters.mSolverAbsTol = 0.001;
  modelParameters.mSolverRelTol = 0.001;
  modelParameters.mVariableStepSolver = false;
  modelParameters.mIsUsingODEN = false;
  modelParameters.mFixedStepSize = 0.0001;
  modelParameters.mStartTime = 0.0;
  modelParameters.mLoadInitialState = false;
  modelParameters.mUseSimState = false;
  modelParameters.mLinTrimCompile = false;
  modelParameters.mLoggingMode = SSC_LOGGING_OFF;
  modelParameters.mRTWModifiedTimeStamp = 7.0411104E+8;
  modelParameters.mZcDisabled = true;
  modelParameters.mUseModelRefSolver = false;
  tmp_0 = false;
  if (tmp_0) {
    fixedStepSize = (rtInf);
  } else {
    fixedStepSize = 0.0001;
  }

  modelParameters.mFixedStepSize = fixedStepSize;
  tmp_0 = false;
  modelParameters.mVariableStepSolver = tmp_0;
  tmp_0 = false;
  modelParameters.mIsUsingODEN = tmp_0;
  tmp_0 = fmu_restoreSimScapeInitialState();
  modelParameters.mLoadInitialState = tmp_0;
  tmp_0 = fmu_restoreSimScapeInitialState();
  modelParameters.mUseSimState = tmp_0;
  modelParameters.mZcDisabled = true;
  diagnosticManager = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = nesl_initialize_simulator((NeslSimulator *)localDW->STATE_1_Simulator,
    &modelParameters, diagnosticManager);
  if (tmp_2 != 0) {
    tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(machine_y_M));
    if (tmp_0) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(machine_y_M, msg);
    }
  }

  tmp = nesl_lease_simulator("machine_y/Solver Configuration1_1", 1, 1);
  localDW->OUTPUT_1_1_Simulator = (void *)tmp;
  tmp_0 = pointer_is_null(localDW->OUTPUT_1_1_Simulator);
  if (tmp_0) {
    machine_y_ac6adea4_1_gateway();
    tmp = nesl_lease_simulator("machine_y/Solver Configuration1_1", 1, 1);
    localDW->OUTPUT_1_1_Simulator = (void *)tmp;
  }

  ;
  tmp_1 = nesl_create_simulation_data();
  localDW->OUTPUT_1_1_SimData = (void *)tmp_1;
  diagnosticManager = rtw_create_diagnostics();
  localDW->OUTPUT_1_1_DiagMgr = (void *)diagnosticManager;
  modelParameters_0.mSolverType = NE_SOLVER_TYPE_DAE;
  modelParameters_0.mSolverAbsTol = 0.001;
  modelParameters_0.mSolverRelTol = 0.001;
  modelParameters_0.mVariableStepSolver = false;
  modelParameters_0.mIsUsingODEN = false;
  modelParameters_0.mFixedStepSize = 0.0001;
  modelParameters_0.mStartTime = 0.0;
  modelParameters_0.mLoadInitialState = false;
  modelParameters_0.mUseSimState = false;
  modelParameters_0.mLinTrimCompile = false;
  modelParameters_0.mLoggingMode = SSC_LOGGING_OFF;
  modelParameters_0.mRTWModifiedTimeStamp = 7.0411104E+8;
  modelParameters_0.mZcDisabled = true;
  modelParameters_0.mUseModelRefSolver = false;
  tmp_0 = false;
  if (tmp_0) {
    fixedStepSize = (rtInf);
  } else {
    fixedStepSize = 0.0001;
  }

  modelParameters_0.mFixedStepSize = fixedStepSize;
  tmp_0 = false;
  modelParameters_0.mVariableStepSolver = tmp_0;
  tmp_0 = false;
  modelParameters_0.mIsUsingODEN = tmp_0;
  tmp_0 = fmu_restoreSimScapeInitialState();
  modelParameters_0.mLoadInitialState = tmp_0;
  tmp_0 = fmu_restoreSimScapeInitialState();
  modelParameters_0.mUseSimState = tmp_0;
  modelParameters_0.mZcDisabled = true;
  diagnosticManager = (NeuDiagnosticManager *)localDW->OUTPUT_1_1_DiagMgr;
  diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = nesl_initialize_simulator((NeslSimulator *)
    localDW->OUTPUT_1_1_Simulator, &modelParameters_0, diagnosticManager);
  if (tmp_2 != 0) {
    tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(machine_y_M));
    if (tmp_0) {
      msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
      rtmSetErrorStatus(machine_y_M, msg_0);
    }
  }

  tmp = nesl_lease_simulator("machine_y/Solver Configuration_1", 0, 0);
  localDW->STATE_1_Simulator_o = (void *)tmp;
  tmp_0 = pointer_is_null(localDW->STATE_1_Simulator_o);
  if (tmp_0) {
    machine_y_4d193148_1_gateway();
    tmp = nesl_lease_simulator("machine_y/Solver Configuration_1", 0, 0);
    localDW->STATE_1_Simulator_o = (void *)tmp;
  }

  ;
  tmp_1 = nesl_create_simulation_data();
  localDW->STATE_1_SimData_i = (void *)tmp_1;
  diagnosticManager = rtw_create_diagnostics();
  localDW->STATE_1_DiagMgr_f = (void *)diagnosticManager;
  modelParameters_1.mSolverType = NE_SOLVER_TYPE_DAE;
  modelParameters_1.mSolverAbsTol = 0.001;
  modelParameters_1.mSolverRelTol = 0.001;
  modelParameters_1.mVariableStepSolver = false;
  modelParameters_1.mIsUsingODEN = false;
  modelParameters_1.mFixedStepSize = 0.0001;
  modelParameters_1.mStartTime = 0.0;
  modelParameters_1.mLoadInitialState = false;
  modelParameters_1.mUseSimState = false;
  modelParameters_1.mLinTrimCompile = false;
  modelParameters_1.mLoggingMode = SSC_LOGGING_OFF;
  modelParameters_1.mRTWModifiedTimeStamp = 7.0411104E+8;
  modelParameters_1.mZcDisabled = true;
  modelParameters_1.mUseModelRefSolver = false;
  tmp_0 = false;
  if (tmp_0) {
    fixedStepSize = (rtInf);
  } else {
    fixedStepSize = 0.0001;
  }

  modelParameters_1.mFixedStepSize = fixedStepSize;
  tmp_0 = false;
  modelParameters_1.mVariableStepSolver = tmp_0;
  tmp_0 = false;
  modelParameters_1.mIsUsingODEN = tmp_0;
  tmp_0 = fmu_restoreSimScapeInitialState();
  modelParameters_1.mLoadInitialState = tmp_0;
  tmp_0 = fmu_restoreSimScapeInitialState();
  modelParameters_1.mUseSimState = tmp_0;
  modelParameters_1.mZcDisabled = true;
  diagnosticManager = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr_f;
  diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = nesl_initialize_simulator((NeslSimulator *)
    localDW->STATE_1_Simulator_o, &modelParameters_1, diagnosticManager);
  if (tmp_2 != 0) {
    tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(machine_y_M));
    if (tmp_0) {
      msg_1 = rtw_diagnostics_msg(diagnosticTree_1);
      rtmSetErrorStatus(machine_y_M, msg_1);
    }
  }

  tmp = nesl_lease_simulator("machine_y/Solver Configuration_1", 1, 0);
  localDW->OUTPUT_1_0_Simulator = (void *)tmp;
  tmp_0 = pointer_is_null(localDW->OUTPUT_1_0_Simulator);
  if (tmp_0) {
    machine_y_4d193148_1_gateway();
    tmp = nesl_lease_simulator("machine_y/Solver Configuration_1", 1, 0);
    localDW->OUTPUT_1_0_Simulator = (void *)tmp;
  }

  ;
  tmp_1 = nesl_create_simulation_data();
  localDW->OUTPUT_1_0_SimData = (void *)tmp_1;
  diagnosticManager = rtw_create_diagnostics();
  localDW->OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
  modelParameters_2.mSolverType = NE_SOLVER_TYPE_DAE;
  modelParameters_2.mSolverAbsTol = 0.001;
  modelParameters_2.mSolverRelTol = 0.001;
  modelParameters_2.mVariableStepSolver = false;
  modelParameters_2.mIsUsingODEN = false;
  modelParameters_2.mFixedStepSize = 0.0001;
  modelParameters_2.mStartTime = 0.0;
  modelParameters_2.mLoadInitialState = false;
  modelParameters_2.mUseSimState = false;
  modelParameters_2.mLinTrimCompile = false;
  modelParameters_2.mLoggingMode = SSC_LOGGING_OFF;
  modelParameters_2.mRTWModifiedTimeStamp = 7.0411104E+8;
  modelParameters_2.mZcDisabled = true;
  modelParameters_2.mUseModelRefSolver = false;
  tmp_0 = false;
  if (tmp_0) {
    fixedStepSize = (rtInf);
  } else {
    fixedStepSize = 0.0001;
  }

  modelParameters_2.mFixedStepSize = fixedStepSize;
  tmp_0 = false;
  modelParameters_2.mVariableStepSolver = tmp_0;
  tmp_0 = false;
  modelParameters_2.mIsUsingODEN = tmp_0;
  tmp_0 = fmu_restoreSimScapeInitialState();
  modelParameters_2.mLoadInitialState = tmp_0;
  tmp_0 = fmu_restoreSimScapeInitialState();
  modelParameters_2.mUseSimState = tmp_0;
  modelParameters_2.mZcDisabled = true;
  diagnosticManager = (NeuDiagnosticManager *)localDW->OUTPUT_1_0_DiagMgr;
  diagnosticTree_2 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = nesl_initialize_simulator((NeslSimulator *)
    localDW->OUTPUT_1_0_Simulator, &modelParameters_2, diagnosticManager);
  if (tmp_2 != 0) {
    tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(machine_y_M));
    if (tmp_0) {
      msg_2 = rtw_diagnostics_msg(diagnosticTree_2);
      rtmSetErrorStatus(machine_y_M, msg_2);
    }
  }

  tmp = nesl_lease_simulator("machine_y/Solver Configuration1_1", 1, 0);
  localDW->OUTPUT_1_0_Simulator_l = (void *)tmp;
  tmp_0 = pointer_is_null(localDW->OUTPUT_1_0_Simulator_l);
  if (tmp_0) {
    machine_y_ac6adea4_1_gateway();
    tmp = nesl_lease_simulator("machine_y/Solver Configuration1_1", 1, 0);
    localDW->OUTPUT_1_0_Simulator_l = (void *)tmp;
  }

  ;
  tmp_1 = nesl_create_simulation_data();
  localDW->OUTPUT_1_0_SimData_j = (void *)tmp_1;
  diagnosticManager = rtw_create_diagnostics();
  localDW->OUTPUT_1_0_DiagMgr_e = (void *)diagnosticManager;
  modelParameters_3.mSolverType = NE_SOLVER_TYPE_DAE;
  modelParameters_3.mSolverAbsTol = 0.001;
  modelParameters_3.mSolverRelTol = 0.001;
  modelParameters_3.mVariableStepSolver = false;
  modelParameters_3.mIsUsingODEN = false;
  modelParameters_3.mFixedStepSize = 0.0001;
  modelParameters_3.mStartTime = 0.0;
  modelParameters_3.mLoadInitialState = false;
  modelParameters_3.mUseSimState = false;
  modelParameters_3.mLinTrimCompile = false;
  modelParameters_3.mLoggingMode = SSC_LOGGING_OFF;
  modelParameters_3.mRTWModifiedTimeStamp = 7.0411104E+8;
  modelParameters_3.mZcDisabled = true;
  modelParameters_3.mUseModelRefSolver = false;
  tmp_0 = false;
  if (tmp_0) {
    fixedStepSize = (rtInf);
  } else {
    fixedStepSize = 0.0001;
  }

  modelParameters_3.mFixedStepSize = fixedStepSize;
  tmp_0 = false;
  modelParameters_3.mVariableStepSolver = tmp_0;
  tmp_0 = false;
  modelParameters_3.mIsUsingODEN = tmp_0;
  tmp_0 = fmu_restoreSimScapeInitialState();
  modelParameters_3.mLoadInitialState = tmp_0;
  tmp_0 = fmu_restoreSimScapeInitialState();
  modelParameters_3.mUseSimState = tmp_0;
  modelParameters_3.mZcDisabled = true;
  diagnosticManager = (NeuDiagnosticManager *)localDW->OUTPUT_1_0_DiagMgr_e;
  diagnosticTree_3 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = nesl_initialize_simulator((NeslSimulator *)
    localDW->OUTPUT_1_0_Simulator_l, &modelParameters_3, diagnosticManager);
  if (tmp_2 != 0) {
    tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(machine_y_M));
    if (tmp_0) {
      msg_3 = rtw_diagnostics_msg(diagnosticTree_3);
      rtmSetErrorStatus(machine_y_M, msg_3);
    }
  }

  tmp = nesl_lease_simulator("machine_y/Solver Configuration2_1", 0, 0);
  localDW->STATE_1_Simulator_a = (void *)tmp;
  tmp_0 = pointer_is_null(localDW->STATE_1_Simulator_a);
  if (tmp_0) {
    machine_y_430a60f0_1_gateway();
    tmp = nesl_lease_simulator("machine_y/Solver Configuration2_1", 0, 0);
    localDW->STATE_1_Simulator_a = (void *)tmp;
  }

  ;
  tmp_1 = nesl_create_simulation_data();
  localDW->STATE_1_SimData_l = (void *)tmp_1;
  diagnosticManager = rtw_create_diagnostics();
  localDW->STATE_1_DiagMgr_g = (void *)diagnosticManager;
  modelParameters_4.mSolverType = NE_SOLVER_TYPE_DAE;
  modelParameters_4.mSolverAbsTol = 0.001;
  modelParameters_4.mSolverRelTol = 0.001;
  modelParameters_4.mVariableStepSolver = false;
  modelParameters_4.mIsUsingODEN = false;
  modelParameters_4.mFixedStepSize = 0.0001;
  modelParameters_4.mStartTime = 0.0;
  modelParameters_4.mLoadInitialState = false;
  modelParameters_4.mUseSimState = false;
  modelParameters_4.mLinTrimCompile = false;
  modelParameters_4.mLoggingMode = SSC_LOGGING_OFF;
  modelParameters_4.mRTWModifiedTimeStamp = 7.0411104E+8;
  modelParameters_4.mZcDisabled = true;
  modelParameters_4.mUseModelRefSolver = false;
  tmp_0 = false;
  if (tmp_0) {
    fixedStepSize = (rtInf);
  } else {
    fixedStepSize = 0.0001;
  }

  modelParameters_4.mFixedStepSize = fixedStepSize;
  tmp_0 = false;
  modelParameters_4.mVariableStepSolver = tmp_0;
  tmp_0 = false;
  modelParameters_4.mIsUsingODEN = tmp_0;
  tmp_0 = fmu_restoreSimScapeInitialState();
  modelParameters_4.mLoadInitialState = tmp_0;
  tmp_0 = fmu_restoreSimScapeInitialState();
  modelParameters_4.mUseSimState = tmp_0;
  modelParameters_4.mZcDisabled = true;
  diagnosticManager = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr_g;
  diagnosticTree_4 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = nesl_initialize_simulator((NeslSimulator *)
    localDW->STATE_1_Simulator_a, &modelParameters_4, diagnosticManager);
  if (tmp_2 != 0) {
    tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(machine_y_M));
    if (tmp_0) {
      msg_4 = rtw_diagnostics_msg(diagnosticTree_4);
      rtmSetErrorStatus(machine_y_M, msg_4);
    }
  }

  tmp = nesl_lease_simulator("machine_y/Solver Configuration2_1", 1, 0);
  localDW->OUTPUT_1_0_Simulator_h = (void *)tmp;
  tmp_0 = pointer_is_null(localDW->OUTPUT_1_0_Simulator_h);
  if (tmp_0) {
    machine_y_430a60f0_1_gateway();
    tmp = nesl_lease_simulator("machine_y/Solver Configuration2_1", 1, 0);
    localDW->OUTPUT_1_0_Simulator_h = (void *)tmp;
  }

  ;
  tmp_1 = nesl_create_simulation_data();
  localDW->OUTPUT_1_0_SimData_b = (void *)tmp_1;
  diagnosticManager = rtw_create_diagnostics();
  localDW->OUTPUT_1_0_DiagMgr_k = (void *)diagnosticManager;
  modelParameters_5.mSolverType = NE_SOLVER_TYPE_DAE;
  modelParameters_5.mSolverAbsTol = 0.001;
  modelParameters_5.mSolverRelTol = 0.001;
  modelParameters_5.mVariableStepSolver = false;
  modelParameters_5.mIsUsingODEN = false;
  modelParameters_5.mFixedStepSize = 0.0001;
  modelParameters_5.mStartTime = 0.0;
  modelParameters_5.mLoadInitialState = false;
  modelParameters_5.mUseSimState = false;
  modelParameters_5.mLinTrimCompile = false;
  modelParameters_5.mLoggingMode = SSC_LOGGING_OFF;
  modelParameters_5.mRTWModifiedTimeStamp = 7.0411104E+8;
  modelParameters_5.mZcDisabled = true;
  modelParameters_5.mUseModelRefSolver = false;
  tmp_0 = false;
  if (tmp_0) {
    fixedStepSize = (rtInf);
  } else {
    fixedStepSize = 0.0001;
  }

  modelParameters_5.mFixedStepSize = fixedStepSize;
  tmp_0 = false;
  modelParameters_5.mVariableStepSolver = tmp_0;
  tmp_0 = false;
  modelParameters_5.mIsUsingODEN = tmp_0;
  tmp_0 = fmu_restoreSimScapeInitialState();
  modelParameters_5.mLoadInitialState = tmp_0;
  tmp_0 = fmu_restoreSimScapeInitialState();
  modelParameters_5.mUseSimState = tmp_0;
  modelParameters_5.mZcDisabled = true;
  diagnosticManager = (NeuDiagnosticManager *)localDW->OUTPUT_1_0_DiagMgr_k;
  diagnosticTree_5 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = nesl_initialize_simulator((NeslSimulator *)
    localDW->OUTPUT_1_0_Simulator_h, &modelParameters_5, diagnosticManager);
  if (tmp_2 != 0) {
    tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(machine_y_M));
    if (tmp_0) {
      msg_5 = rtw_diagnostics_msg(diagnosticTree_5);
      rtmSetErrorStatus(machine_y_M, msg_5);
    }
  }

  localDW->UnitDelay_DSTATE = machine_y_P.UnitDelay_InitialCondition;
}

void machine_y_Reset(DW_machine_y_f_T *localDW)
{
  localDW->UnitDelay_DSTATE = machine_y_P.UnitDelay_InitialCondition;
}

void machine_y(RT_MODEL_machine_y_T * const machine_y_M, const real_T
               *rtu_pwm_in_y, const real_T *rtu_step_pitch_in, const real_T
               *rtu_step_yaw_in, real_T *rty_enc_vel_out_y, real_T
               *rty_enc_pos_out_y, real_T *rty_enc_pitch_out, real_T
               *rty_enc_yaw_out, B_machine_y_c_T *localB, DW_machine_y_f_T
               *localDW)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  NeuDiagnosticTree *diagnosticTree_0;
  NeuDiagnosticTree *diagnosticTree_1;
  NeuDiagnosticTree *diagnosticTree_2;
  NeuDiagnosticTree *diagnosticTree_3;
  NeuDiagnosticTree *diagnosticTree_4;
  NeuDiagnosticTree *diagnosticTree_5;
  NeuDiagnosticTree *diagnosticTree_6;
  NeuDiagnosticTree *diagnosticTree_7;
  NeuDiagnosticTree *diagnosticTree_8;
  char *msg;
  char *msg_0;
  char *msg_1;
  char *msg_2;
  char *msg_3;
  char *msg_4;
  char *msg_5;
  char *msg_6;
  char *msg_7;
  char *msg_8;
  real_T tmp_7[14];
  real_T tmp_3[11];
  real_T tmp_9[11];
  real_T tmp_d[10];
  real_T tmp_0[8];
  real_T tmp_5[8];
  real_T tmp_f[8];
  real_T tmp_h[8];
  real_T tmp_b[4];
  real_T tmp_j[4];
  real_T rtb_OUTPUT_1_0_p[2];
  real_T rtb_OUTPUT_1_0;
  real_T rtb_Quantizer1;
  real_T rtb_TrigonometricFunction;
  real_T time;
  real_T time_0;
  real_T time_1;
  real_T time_2;
  real_T time_3;
  real_T time_4;
  real_T time_5;
  real_T time_6;
  real_T time_7;
  real_T time_8;
  real_T time_9;
  real_T time_a;
  real_T time_b;
  real_T time_c;
  real_T time_d;
  real_T time_e;
  real_T time_f;
  real_T time_tmp;
  real_T tmp_l;
  int32_T isHit;
  int32_T isHit_0;
  int32_T isHit_1;
  int32_T isHit_2;
  int32_T isHit_3;
  int32_T isHit_4;
  int32_T isHit_5;
  int32_T tmp_2;
  int_T tmp_4[4];
  int_T tmp_8[4];
  int_T tmp_a[4];
  int_T tmp_1[3];
  int_T tmp_6[3];
  int_T tmp_e[3];
  int_T tmp_g[3];
  int_T tmp_i[3];
  int_T tmp_c[2];
  int_T tmp_k[2];
  boolean_T tmp;
  localB->INPUT_1_1_1[0] = *rtu_step_pitch_in;
  localB->INPUT_1_1_1[1] = 0.0;
  localB->INPUT_1_1_1[2] = 0.0;
  localDW->INPUT_1_1_1_SimscapeInternalDiscrete_E94280DC[0] =
    !(localB->INPUT_1_1_1[0] ==
      localDW->INPUT_1_1_1_SimscapeInternalDiscrete_E94280DC[1]);
  localDW->INPUT_1_1_1_SimscapeInternalDiscrete_E94280DC[1] =
    localB->INPUT_1_1_1[0];
  localB->INPUT_1_1_1[0] =
    localDW->INPUT_1_1_1_SimscapeInternalDiscrete_E94280DC[1];
  localB->INPUT_1_1_1[3] =
    localDW->INPUT_1_1_1_SimscapeInternalDiscrete_E94280DC[0];
  rtb_Quantizer1 = localDW->UnitDelay_DSTATE;
  rtb_TrigonometricFunction = sin(rtb_Quantizer1);
  localB->Gain3 = machine_y_P.Gain3_Gain * rtb_TrigonometricFunction;
  localB->INPUT_2_1_1[0] = localB->Gain3;
  localB->INPUT_2_1_1[1] = 0.0;
  localB->INPUT_2_1_1[2] = 0.0;
  localDW->INPUT_2_1_1_SimscapeInternalDiscrete_AEE2FA0C[0] =
    !(localB->INPUT_2_1_1[0] ==
      localDW->INPUT_2_1_1_SimscapeInternalDiscrete_AEE2FA0C[1]);
  localDW->INPUT_2_1_1_SimscapeInternalDiscrete_AEE2FA0C[1] =
    localB->INPUT_2_1_1[0];
  localB->INPUT_2_1_1[0] =
    localDW->INPUT_2_1_1_SimscapeInternalDiscrete_AEE2FA0C[1];
  localB->INPUT_2_1_1[3] =
    localDW->INPUT_2_1_1_SimscapeInternalDiscrete_AEE2FA0C[0];
  simulationData = (NeslSimulationData *)localDW->STATE_1_SimData;
  rtb_TrigonometricFunction = (( rtmGetClockTick0(machine_y_M) +
    rtmGetClockTickH0(machine_y_M)*4294967296.0 ) * 0.0001);
  time = rtb_TrigonometricFunction;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 3;
  simulationData->mData->mDiscStates.mX = &localDW->STATE_1_Discrete[0];
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &localDW->STATE_1_Modes;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX = &localDW->STATE_1_SwtgCoeffs;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX = &localDW->STATE_1_JacobElems;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = true;
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = true;
  tmp_1[0] = 0;
  tmp_0[0] = localB->INPUT_1_1_1[0];
  tmp_0[1] = localB->INPUT_1_1_1[1];
  tmp_0[2] = localB->INPUT_1_1_1[2];
  tmp_0[3] = localB->INPUT_1_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = localB->INPUT_2_1_1[0];
  tmp_0[5] = localB->INPUT_2_1_1[1];
  tmp_0[6] = localB->INPUT_2_1_1[2];
  tmp_0[7] = localB->INPUT_2_1_1[3];
  tmp_1[2] = 8;
  simulationData->mData->mInputValues.mN = 8;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 3;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  simulationData->mData->mOutputs.mN = 3;
  simulationData->mData->mOutputs.mX = &localB->STATE_1[0];
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  simulationData->mData->mDstateHasChanged = false;
  time_tmp = (( rtmGetClockTick0(machine_y_M) + rtmGetClockTickH0(machine_y_M)*
               4294967296.0 ) * 0.0001);
  time_0 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_0;
  isHit = 0;
  simulationData->mData->mSampleHits.mN = 1;
  simulationData->mData->mSampleHits.mX = &isHit;
  simulationData->mData->mIsFundamentalSampleHit = true;
  simulationData->mData->mHadEvents = false;
  diagnosticManager = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)localDW->STATE_1_Simulator,
    NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(machine_y_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(machine_y_M, msg);
    }
  }

  localDW->STATE_1_Inertiaw = localDW->STATE_1_Discrete[0];
  localDW->STATE_1_Ideal_Rotational_Motion_Sensor1phi =
    localDW->STATE_1_Discrete[1];
  localDW->STATE_1_Rotational_Springphi = localDW->STATE_1_Discrete[2];
  simulationData = (NeslSimulationData *)localDW->OUTPUT_1_1_SimData;
  time_1 = rtb_TrigonometricFunction;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_1;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &localDW->OUTPUT_1_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &localDW->OUTPUT_1_1_Modes;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX = &localDW->OUTPUT_1_1_SwtgCoeffs;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX = &localDW->OUTPUT_1_1_JacobElems;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = true;
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = true;
  tmp_4[0] = 0;
  tmp_3[0] = localB->INPUT_1_1_1[0];
  tmp_3[1] = localB->INPUT_1_1_1[1];
  tmp_3[2] = localB->INPUT_1_1_1[2];
  tmp_3[3] = localB->INPUT_1_1_1[3];
  tmp_4[1] = 4;
  tmp_3[4] = localB->INPUT_2_1_1[0];
  tmp_3[5] = localB->INPUT_2_1_1[1];
  tmp_3[6] = localB->INPUT_2_1_1[2];
  tmp_3[7] = localB->INPUT_2_1_1[3];
  tmp_4[2] = 8;
  tmp_3[8] = localB->STATE_1[0];
  tmp_3[9] = localB->STATE_1[1];
  tmp_3[10] = localB->STATE_1[2];
  tmp_4[3] = 11;
  simulationData->mData->mInputValues.mN = 11;
  simulationData->mData->mInputValues.mX = &tmp_3[0];
  simulationData->mData->mInputOffsets.mN = 4;
  simulationData->mData->mInputOffsets.mX = &tmp_4[0];
  simulationData->mData->mOutputs.mN = 1;
  simulationData->mData->mOutputs.mX = &rtb_Quantizer1;
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  simulationData->mData->mDstateHasChanged = false;
  time_2 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_2;
  isHit_0 = 0;
  simulationData->mData->mSampleHits.mN = 1;
  simulationData->mData->mSampleHits.mX = &isHit_0;
  simulationData->mData->mIsFundamentalSampleHit = true;
  simulationData->mData->mHadEvents = false;
  diagnosticManager = (NeuDiagnosticManager *)localDW->OUTPUT_1_1_DiagMgr;
  diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)localDW->OUTPUT_1_1_Simulator,
    NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(machine_y_M));
    if (tmp) {
      msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
      rtmSetErrorStatus(machine_y_M, msg_0);
    }
  }

  localB->uh = machine_y_P.uh_Gain * rtb_Quantizer1;
  localB->INPUT_2_1_1_b[0] = localB->uh;
  localB->INPUT_2_1_1_b[1] = 0.0;
  localB->INPUT_2_1_1_b[2] = 0.0;
  localDW->INPUT_2_1_1_SimscapeInternalDiscrete_90110512[0] =
    !(localB->INPUT_2_1_1_b[0] ==
      localDW->INPUT_2_1_1_SimscapeInternalDiscrete_90110512[1]);
  localDW->INPUT_2_1_1_SimscapeInternalDiscrete_90110512[1] =
    localB->INPUT_2_1_1_b[0];
  localB->INPUT_2_1_1_b[0] =
    localDW->INPUT_2_1_1_SimscapeInternalDiscrete_90110512[1];
  localB->INPUT_2_1_1_b[3] =
    localDW->INPUT_2_1_1_SimscapeInternalDiscrete_90110512[0];
  localB->INPUT_1_1_1_k[0] = *rtu_pwm_in_y;
  localB->INPUT_1_1_1_k[1] = 0.0;
  localB->INPUT_1_1_1_k[2] = 0.0;
  localDW->INPUT_1_1_1_SimscapeInternalDiscrete_D7B17FC2[0] =
    !(localB->INPUT_1_1_1_k[0] ==
      localDW->INPUT_1_1_1_SimscapeInternalDiscrete_D7B17FC2[1]);
  localDW->INPUT_1_1_1_SimscapeInternalDiscrete_D7B17FC2[1] =
    localB->INPUT_1_1_1_k[0];
  localB->INPUT_1_1_1_k[0] =
    localDW->INPUT_1_1_1_SimscapeInternalDiscrete_D7B17FC2[1];
  localB->INPUT_1_1_1_k[3] =
    localDW->INPUT_1_1_1_SimscapeInternalDiscrete_D7B17FC2[0];
  simulationData = (NeslSimulationData *)localDW->STATE_1_SimData_i;
  time_3 = rtb_TrigonometricFunction;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_3;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 6;
  simulationData->mData->mDiscStates.mX = &localDW->STATE_1_Discrete_n[0];
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &localDW->STATE_1_Modes_k;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX = &localDW->STATE_1_SwtgCoeffs_d;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX = &localDW->STATE_1_JacobElems_d;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = true;
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = true;
  tmp_6[0] = 0;
  tmp_5[0] = localB->INPUT_2_1_1_b[0];
  tmp_5[1] = localB->INPUT_2_1_1_b[1];
  tmp_5[2] = localB->INPUT_2_1_1_b[2];
  tmp_5[3] = localB->INPUT_2_1_1_b[3];
  tmp_6[1] = 4;
  tmp_5[4] = localB->INPUT_1_1_1_k[0];
  tmp_5[5] = localB->INPUT_1_1_1_k[1];
  tmp_5[6] = localB->INPUT_1_1_1_k[2];
  tmp_5[7] = localB->INPUT_1_1_1_k[3];
  tmp_6[2] = 8;
  simulationData->mData->mInputValues.mN = 8;
  simulationData->mData->mInputValues.mX = &tmp_5[0];
  simulationData->mData->mInputOffsets.mN = 3;
  simulationData->mData->mInputOffsets.mX = &tmp_6[0];
  simulationData->mData->mOutputs.mN = 6;
  simulationData->mData->mOutputs.mX = &localB->STATE_1_d[0];
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  simulationData->mData->mDstateHasChanged = false;
  time_4 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_4;
  isHit_1 = 0;
  simulationData->mData->mSampleHits.mN = 1;
  simulationData->mData->mSampleHits.mX = &isHit_1;
  simulationData->mData->mIsFundamentalSampleHit = true;
  simulationData->mData->mHadEvents = false;
  diagnosticManager = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr_f;
  diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)localDW->STATE_1_Simulator_o,
    NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(machine_y_M));
    if (tmp) {
      msg_1 = rtw_diagnostics_msg(diagnosticTree_1);
      rtmSetErrorStatus(machine_y_M, msg_1);
    }
  }

  localDW->STATE_1_DC_Motori_L = localDW->STATE_1_Discrete_n[0];
  localDW->STATE_1_DC_Motorw = localDW->STATE_1_Discrete_n[1];
  localDW->STATE_1_Massv = localDW->STATE_1_Discrete_n[2];
  localDW->STATE_1_Translational_Springx = localDW->STATE_1_Discrete_n[3];
  localDW->STATE_1_Ideal_Rotational_Motion_Sensorphi =
    localDW->STATE_1_Discrete_n[4];
  localDW->STATE_1_Ideal_Translational_Motion_Sensorx =
    localDW->STATE_1_Discrete_n[5];
  simulationData = (NeslSimulationData *)localDW->OUTPUT_1_0_SimData;
  time_5 = rtb_TrigonometricFunction;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_5;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &localDW->OUTPUT_1_0_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &localDW->OUTPUT_1_0_Modes;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX = &localDW->OUTPUT_1_0_SwtgCoeffs;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX = &localDW->OUTPUT_1_0_JacobElems;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = true;
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = true;
  tmp_8[0] = 0;
  tmp_7[0] = localB->INPUT_2_1_1_b[0];
  tmp_7[1] = localB->INPUT_2_1_1_b[1];
  tmp_7[2] = localB->INPUT_2_1_1_b[2];
  tmp_7[3] = localB->INPUT_2_1_1_b[3];
  tmp_8[1] = 4;
  tmp_7[4] = localB->INPUT_1_1_1_k[0];
  tmp_7[5] = localB->INPUT_1_1_1_k[1];
  tmp_7[6] = localB->INPUT_1_1_1_k[2];
  tmp_7[7] = localB->INPUT_1_1_1_k[3];
  tmp_8[2] = 8;
  tmp_7[8] = localB->STATE_1_d[0];
  tmp_7[9] = localB->STATE_1_d[1];
  tmp_7[10] = localB->STATE_1_d[2];
  tmp_7[11] = localB->STATE_1_d[3];
  tmp_7[12] = localB->STATE_1_d[4];
  tmp_7[13] = localB->STATE_1_d[5];
  tmp_8[3] = 14;
  simulationData->mData->mInputValues.mN = 14;
  simulationData->mData->mInputValues.mX = &tmp_7[0];
  simulationData->mData->mInputOffsets.mN = 4;
  simulationData->mData->mInputOffsets.mX = &tmp_8[0];
  simulationData->mData->mOutputs.mN = 2;
  simulationData->mData->mOutputs.mX = &rtb_OUTPUT_1_0_p[0];
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  simulationData->mData->mDstateHasChanged = false;
  time_6 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_6;
  isHit_2 = 0;
  simulationData->mData->mSampleHits.mN = 1;
  simulationData->mData->mSampleHits.mX = &isHit_2;
  simulationData->mData->mIsFundamentalSampleHit = true;
  simulationData->mData->mHadEvents = false;
  diagnosticManager = (NeuDiagnosticManager *)localDW->OUTPUT_1_0_DiagMgr;
  diagnosticTree_2 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)localDW->OUTPUT_1_0_Simulator,
    NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(machine_y_M));
    if (tmp) {
      msg_2 = rtw_diagnostics_msg(diagnosticTree_2);
      rtmSetErrorStatus(machine_y_M, msg_2);
    }
  }

  tmp_l = rtb_OUTPUT_1_0_p[0];
  rtb_Quantizer1 = rt_roundd_snf(tmp_l / machine_y_P.Quantizer2_Interval) *
    machine_y_P.Quantizer2_Interval;
  *rty_enc_vel_out_y = machine_y_P.Gain_Gain * rtb_Quantizer1;
  tmp_l = rtb_OUTPUT_1_0_p[1];
  *rty_enc_pos_out_y = rt_roundd_snf(tmp_l / machine_y_P.Quantizer3_Interval) *
    machine_y_P.Quantizer3_Interval;
  simulationData = (NeslSimulationData *)localDW->OUTPUT_1_0_SimData_j;
  time_7 = rtb_TrigonometricFunction;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_7;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &localDW->OUTPUT_1_0_Discrete_c;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &localDW->OUTPUT_1_0_Modes_d;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX = &localDW->OUTPUT_1_0_SwtgCoeffs_d;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX = &localDW->OUTPUT_1_0_JacobElems_o;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = true;
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = true;
  tmp_a[0] = 0;
  tmp_9[0] = localB->INPUT_1_1_1[0];
  tmp_9[1] = localB->INPUT_1_1_1[1];
  tmp_9[2] = localB->INPUT_1_1_1[2];
  tmp_9[3] = localB->INPUT_1_1_1[3];
  tmp_a[1] = 4;
  tmp_9[4] = localB->INPUT_2_1_1[0];
  tmp_9[5] = localB->INPUT_2_1_1[1];
  tmp_9[6] = localB->INPUT_2_1_1[2];
  tmp_9[7] = localB->INPUT_2_1_1[3];
  tmp_a[2] = 8;
  tmp_9[8] = localB->STATE_1[0];
  tmp_9[9] = localB->STATE_1[1];
  tmp_9[10] = localB->STATE_1[2];
  tmp_a[3] = 11;
  simulationData->mData->mInputValues.mN = 11;
  simulationData->mData->mInputValues.mX = &tmp_9[0];
  simulationData->mData->mInputOffsets.mN = 4;
  simulationData->mData->mInputOffsets.mX = &tmp_a[0];
  simulationData->mData->mOutputs.mN = 1;
  simulationData->mData->mOutputs.mX = &rtb_OUTPUT_1_0;
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  simulationData->mData->mDstateHasChanged = false;
  time_8 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_8;
  isHit_3 = 0;
  simulationData->mData->mSampleHits.mN = 1;
  simulationData->mData->mSampleHits.mX = &isHit_3;
  simulationData->mData->mIsFundamentalSampleHit = true;
  simulationData->mData->mHadEvents = false;
  diagnosticManager = (NeuDiagnosticManager *)localDW->OUTPUT_1_0_DiagMgr_e;
  diagnosticTree_3 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)localDW->OUTPUT_1_0_Simulator_l,
    NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(machine_y_M));
    if (tmp) {
      msg_3 = rtw_diagnostics_msg(diagnosticTree_3);
      rtmSetErrorStatus(machine_y_M, msg_3);
    }
  }

  tmp_l = rtb_OUTPUT_1_0;
  rtb_Quantizer1 = rt_roundd_snf(tmp_l / machine_y_P.Quantizer_Interval) *
    machine_y_P.Quantizer_Interval;
  *rty_enc_pitch_out = machine_y_P.Gain1_Gain * rtb_Quantizer1;
  localB->INPUT_1_1_1_o[0] = *rtu_step_yaw_in;
  localB->INPUT_1_1_1_o[1] = 0.0;
  localB->INPUT_1_1_1_o[2] = 0.0;
  localDW->INPUT_1_1_1_SimscapeInternalDiscrete_D03A2D9C[0] =
    !(localB->INPUT_1_1_1_o[0] ==
      localDW->INPUT_1_1_1_SimscapeInternalDiscrete_D03A2D9C[1]);
  localDW->INPUT_1_1_1_SimscapeInternalDiscrete_D03A2D9C[1] =
    localB->INPUT_1_1_1_o[0];
  localB->INPUT_1_1_1_o[0] =
    localDW->INPUT_1_1_1_SimscapeInternalDiscrete_D03A2D9C[1];
  localB->INPUT_1_1_1_o[3] =
    localDW->INPUT_1_1_1_SimscapeInternalDiscrete_D03A2D9C[0];
  simulationData = (NeslSimulationData *)localDW->STATE_1_SimData_l;
  time_9 = rtb_TrigonometricFunction;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_9;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 6;
  simulationData->mData->mDiscStates.mX = &localDW->STATE_1_Discrete_o[0];
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &localDW->STATE_1_Modes_ka;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX = &localDW->STATE_1_SwtgCoeffs_k;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX = &localDW->STATE_1_JacobElems_dt;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = true;
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = true;
  tmp_c[0] = 0;
  tmp_b[0] = localB->INPUT_1_1_1_o[0];
  tmp_b[1] = localB->INPUT_1_1_1_o[1];
  tmp_b[2] = localB->INPUT_1_1_1_o[2];
  tmp_b[3] = localB->INPUT_1_1_1_o[3];
  tmp_c[1] = 4;
  simulationData->mData->mInputValues.mN = 4;
  simulationData->mData->mInputValues.mX = &tmp_b[0];
  simulationData->mData->mInputOffsets.mN = 2;
  simulationData->mData->mInputOffsets.mX = &tmp_c[0];
  simulationData->mData->mOutputs.mN = 6;
  simulationData->mData->mOutputs.mX = &localB->STATE_1_f[0];
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  simulationData->mData->mDstateHasChanged = false;
  time_a = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_a;
  isHit_4 = 0;
  simulationData->mData->mSampleHits.mN = 1;
  simulationData->mData->mSampleHits.mX = &isHit_4;
  simulationData->mData->mIsFundamentalSampleHit = true;
  simulationData->mData->mHadEvents = false;
  diagnosticManager = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr_g;
  diagnosticTree_4 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)localDW->STATE_1_Simulator_a,
    NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(machine_y_M));
    if (tmp) {
      msg_4 = rtw_diagnostics_msg(diagnosticTree_4);
      rtmSetErrorStatus(machine_y_M, msg_4);
    }
  }

  localDW->STATE_1_Inertia1w = localDW->STATE_1_Discrete_o[0];
  localDW->STATE_1_Ideal_Rotational_Motion_Sensor2phi =
    localDW->STATE_1_Discrete_o[1];
  localDW->STATE_1_Rotational_Spring1phi = localDW->STATE_1_Discrete_o[2];
  localDW->STATE_1_Rotational_Spring1w = localDW->STATE_1_Discrete_o[3];
  localDW->STATE_1_Inertia1t = localDW->STATE_1_Discrete_o[4];
  localDW->STATE_1_Rotational_Frictiont = localDW->STATE_1_Discrete_o[5];
  simulationData = (NeslSimulationData *)localDW->OUTPUT_1_0_SimData_b;
  time_b = rtb_TrigonometricFunction;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_b;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &localDW->OUTPUT_1_0_Discrete_i;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &localDW->OUTPUT_1_0_Modes_a;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX = &localDW->OUTPUT_1_0_SwtgCoeffs_l;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX = &localDW->OUTPUT_1_0_JacobElems_n;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = true;
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = true;
  tmp_e[0] = 0;
  tmp_d[0] = localB->INPUT_1_1_1_o[0];
  tmp_d[1] = localB->INPUT_1_1_1_o[1];
  tmp_d[2] = localB->INPUT_1_1_1_o[2];
  tmp_d[3] = localB->INPUT_1_1_1_o[3];
  tmp_e[1] = 4;
  tmp_d[4] = localB->STATE_1_f[0];
  tmp_d[5] = localB->STATE_1_f[1];
  tmp_d[6] = localB->STATE_1_f[2];
  tmp_d[7] = localB->STATE_1_f[3];
  tmp_d[8] = localB->STATE_1_f[4];
  tmp_d[9] = localB->STATE_1_f[5];
  tmp_e[2] = 10;
  simulationData->mData->mInputValues.mN = 10;
  simulationData->mData->mInputValues.mX = &tmp_d[0];
  simulationData->mData->mInputOffsets.mN = 3;
  simulationData->mData->mInputOffsets.mX = &tmp_e[0];
  simulationData->mData->mOutputs.mN = 1;
  simulationData->mData->mOutputs.mX = &rtb_Quantizer1;
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  simulationData->mData->mDstateHasChanged = false;
  time_c = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_c;
  isHit_5 = 0;
  simulationData->mData->mSampleHits.mN = 1;
  simulationData->mData->mSampleHits.mX = &isHit_5;
  simulationData->mData->mIsFundamentalSampleHit = true;
  simulationData->mData->mHadEvents = false;
  diagnosticManager = (NeuDiagnosticManager *)localDW->OUTPUT_1_0_DiagMgr_k;
  diagnosticTree_5 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)localDW->OUTPUT_1_0_Simulator_h,
    NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(machine_y_M));
    if (tmp) {
      msg_5 = rtw_diagnostics_msg(diagnosticTree_5);
      rtmSetErrorStatus(machine_y_M, msg_5);
    }
  }

  rtb_Quantizer1 = rt_roundd_snf(rtb_Quantizer1 /
    machine_y_P.Quantizer1_Interval) * machine_y_P.Quantizer1_Interval;
  *rty_enc_yaw_out = machine_y_P.Gain2_Gain * rtb_Quantizer1;
  localDW->UnitDelay_DSTATE = rtb_OUTPUT_1_0;
  simulationData = (NeslSimulationData *)localDW->STATE_1_SimData;
  time_d = rtb_TrigonometricFunction;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_d;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 3;
  simulationData->mData->mDiscStates.mX = &localDW->STATE_1_Discrete[0];
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &localDW->STATE_1_Modes;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX = &localDW->STATE_1_SwtgCoeffs;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX = &localDW->STATE_1_JacobElems;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = true;
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = true;
  tmp_g[0] = 0;
  tmp_f[0] = localB->INPUT_1_1_1[0];
  tmp_f[1] = localB->INPUT_1_1_1[1];
  tmp_f[2] = localB->INPUT_1_1_1[2];
  tmp_f[3] = localB->INPUT_1_1_1[3];
  tmp_g[1] = 4;
  tmp_f[4] = localB->INPUT_2_1_1[0];
  tmp_f[5] = localB->INPUT_2_1_1[1];
  tmp_f[6] = localB->INPUT_2_1_1[2];
  tmp_f[7] = localB->INPUT_2_1_1[3];
  tmp_g[2] = 8;
  simulationData->mData->mInputValues.mN = 8;
  simulationData->mData->mInputValues.mX = &tmp_f[0];
  simulationData->mData->mInputOffsets.mN = 3;
  simulationData->mData->mInputOffsets.mX = &tmp_g[0];
  localDW->STATE_1_Discrete[0] = localDW->STATE_1_Inertiaw;
  localDW->STATE_1_Discrete[1] =
    localDW->STATE_1_Ideal_Rotational_Motion_Sensor1phi;
  localDW->STATE_1_Discrete[2] = localDW->STATE_1_Rotational_Springphi;
  diagnosticManager = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr;
  diagnosticTree_6 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)localDW->STATE_1_Simulator,
    NESL_SIM_UPDATE, simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(machine_y_M));
    if (tmp) {
      msg_6 = rtw_diagnostics_msg(diagnosticTree_6);
      rtmSetErrorStatus(machine_y_M, msg_6);
    }
  }

  simulationData = (NeslSimulationData *)localDW->STATE_1_SimData_i;
  time_e = rtb_TrigonometricFunction;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_e;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 6;
  simulationData->mData->mDiscStates.mX = &localDW->STATE_1_Discrete_n[0];
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &localDW->STATE_1_Modes_k;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX = &localDW->STATE_1_SwtgCoeffs_d;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX = &localDW->STATE_1_JacobElems_d;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = true;
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = true;
  tmp_i[0] = 0;
  tmp_h[0] = localB->INPUT_2_1_1_b[0];
  tmp_h[1] = localB->INPUT_2_1_1_b[1];
  tmp_h[2] = localB->INPUT_2_1_1_b[2];
  tmp_h[3] = localB->INPUT_2_1_1_b[3];
  tmp_i[1] = 4;
  tmp_h[4] = localB->INPUT_1_1_1_k[0];
  tmp_h[5] = localB->INPUT_1_1_1_k[1];
  tmp_h[6] = localB->INPUT_1_1_1_k[2];
  tmp_h[7] = localB->INPUT_1_1_1_k[3];
  tmp_i[2] = 8;
  simulationData->mData->mInputValues.mN = 8;
  simulationData->mData->mInputValues.mX = &tmp_h[0];
  simulationData->mData->mInputOffsets.mN = 3;
  simulationData->mData->mInputOffsets.mX = &tmp_i[0];
  localDW->STATE_1_Discrete_n[0] = localDW->STATE_1_DC_Motori_L;
  localDW->STATE_1_Discrete_n[1] = localDW->STATE_1_DC_Motorw;
  localDW->STATE_1_Discrete_n[2] = localDW->STATE_1_Massv;
  localDW->STATE_1_Discrete_n[3] = localDW->STATE_1_Translational_Springx;
  localDW->STATE_1_Discrete_n[4] =
    localDW->STATE_1_Ideal_Rotational_Motion_Sensorphi;
  localDW->STATE_1_Discrete_n[5] =
    localDW->STATE_1_Ideal_Translational_Motion_Sensorx;
  diagnosticManager = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr_f;
  diagnosticTree_7 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)localDW->STATE_1_Simulator_o,
    NESL_SIM_UPDATE, simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(machine_y_M));
    if (tmp) {
      msg_7 = rtw_diagnostics_msg(diagnosticTree_7);
      rtmSetErrorStatus(machine_y_M, msg_7);
    }
  }

  simulationData = (NeslSimulationData *)localDW->STATE_1_SimData_l;
  time_f = rtb_TrigonometricFunction;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_f;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 6;
  simulationData->mData->mDiscStates.mX = &localDW->STATE_1_Discrete_o[0];
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &localDW->STATE_1_Modes_ka;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX = &localDW->STATE_1_SwtgCoeffs_k;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX = &localDW->STATE_1_JacobElems_dt;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = true;
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = true;
  tmp_k[0] = 0;
  tmp_j[0] = localB->INPUT_1_1_1_o[0];
  tmp_j[1] = localB->INPUT_1_1_1_o[1];
  tmp_j[2] = localB->INPUT_1_1_1_o[2];
  tmp_j[3] = localB->INPUT_1_1_1_o[3];
  tmp_k[1] = 4;
  simulationData->mData->mInputValues.mN = 4;
  simulationData->mData->mInputValues.mX = &tmp_j[0];
  simulationData->mData->mInputOffsets.mN = 2;
  simulationData->mData->mInputOffsets.mX = &tmp_k[0];
  localDW->STATE_1_Discrete_o[0] = localDW->STATE_1_Inertia1w;
  localDW->STATE_1_Discrete_o[1] =
    localDW->STATE_1_Ideal_Rotational_Motion_Sensor2phi;
  localDW->STATE_1_Discrete_o[2] = localDW->STATE_1_Rotational_Spring1phi;
  localDW->STATE_1_Discrete_o[3] = localDW->STATE_1_Rotational_Spring1w;
  localDW->STATE_1_Discrete_o[4] = localDW->STATE_1_Inertia1t;
  localDW->STATE_1_Discrete_o[5] = localDW->STATE_1_Rotational_Frictiont;
  diagnosticManager = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr_g;
  diagnosticTree_8 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)localDW->STATE_1_Simulator_a,
    NESL_SIM_UPDATE, simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(machine_y_M));
    if (tmp) {
      msg_8 = rtw_diagnostics_msg(diagnosticTree_8);
      rtmSetErrorStatus(machine_y_M, msg_8);
    }
  }
}

void machine_y_Term(DW_machine_y_f_T *localDW)
{
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    localDW->STATE_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)localDW->STATE_1_SimData);
  nesl_erase_simulator("machine_y/Solver Configuration1_1");
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    localDW->OUTPUT_1_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)localDW->OUTPUT_1_1_SimData);
  nesl_erase_simulator("machine_y/Solver Configuration1_1");
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    localDW->STATE_1_DiagMgr_f);
  nesl_destroy_simulation_data((NeslSimulationData *)localDW->STATE_1_SimData_i);
  nesl_erase_simulator("machine_y/Solver Configuration_1");
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    localDW->OUTPUT_1_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)localDW->OUTPUT_1_0_SimData);
  nesl_erase_simulator("machine_y/Solver Configuration_1");
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    localDW->OUTPUT_1_0_DiagMgr_e);
  nesl_destroy_simulation_data((NeslSimulationData *)
    localDW->OUTPUT_1_0_SimData_j);
  nesl_erase_simulator("machine_y/Solver Configuration1_1");
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    localDW->STATE_1_DiagMgr_g);
  nesl_destroy_simulation_data((NeslSimulationData *)localDW->STATE_1_SimData_l);
  nesl_erase_simulator("machine_y/Solver Configuration2_1");
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    localDW->OUTPUT_1_0_DiagMgr_k);
  nesl_destroy_simulation_data((NeslSimulationData *)
    localDW->OUTPUT_1_0_SimData_b);
  nesl_erase_simulator("machine_y/Solver Configuration2_1");
}

void machine_y_initialize(const char_T **rt_errorStatus, const rtTimingBridge
  *timingBridge, int_T mdlref_TID0, RT_MODEL_machine_y_T *const machine_y_M,
  B_machine_y_c_T *localB, DW_machine_y_f_T *localDW)
{
  (void) memset((void *)machine_y_M, 0,
                sizeof(RT_MODEL_machine_y_T));
  machine_y_M->Timing.mdlref_GlobalTID[0] = mdlref_TID0;
  machine_y_M->timingBridge = (timingBridge);
  rtmSetErrorStatusPointer(machine_y_M, rt_errorStatus);
  (void) memset(((void *) localB), 0,
                sizeof(B_machine_y_c_T));
  (void) memset((void *)localDW, 0,
                sizeof(DW_machine_y_f_T));
}
