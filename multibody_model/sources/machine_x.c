#include "multibody_model_macros.h"
#include "machine_x.h"
#include "rtwtypes.h"
#include "machine_x_private.h"
#include "rt_roundd_snf.h"
#include <stddef.h>
#include <string.h>

P_machine_x_T machine_x_P = {

  0.001,

  6.36,

  0.005
};

void machine_x_Init(RT_MODEL_machine_x_T * const machine_x_M, DW_machine_x_f_T
                    *localDW)
{
  NeModelParameters modelParameters;
  NeModelParameters modelParameters_0;
  NeslSimulationData *tmp_1;
  NeslSimulator *tmp;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  NeuDiagnosticTree *diagnosticTree_0;
  char *msg;
  char *msg_0;
  real_T fixedStepSize;
  int32_T tmp_2;
  boolean_T tmp_0;
  tmp = nesl_lease_simulator("machine_x/Solver Configuration_1", 0, 0);
  localDW->STATE_1_Simulator = (void *)tmp;
  tmp_0 = pointer_is_null(localDW->STATE_1_Simulator);
  if (tmp_0) {
    machine_x_d13b1ab2_1_gateway();
    tmp = nesl_lease_simulator("machine_x/Solver Configuration_1", 0, 0);
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
  modelParameters.mRTWModifiedTimeStamp = 7.04111039E+8;
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
    tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(machine_x_M));
    if (tmp_0) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(machine_x_M, msg);
    }
  }

  tmp = nesl_lease_simulator("machine_x/Solver Configuration_1", 1, 0);
  localDW->OUTPUT_1_0_Simulator = (void *)tmp;
  tmp_0 = pointer_is_null(localDW->OUTPUT_1_0_Simulator);
  if (tmp_0) {
    machine_x_d13b1ab2_1_gateway();
    tmp = nesl_lease_simulator("machine_x/Solver Configuration_1", 1, 0);
    localDW->OUTPUT_1_0_Simulator = (void *)tmp;
  }

  ;
  tmp_1 = nesl_create_simulation_data();
  localDW->OUTPUT_1_0_SimData = (void *)tmp_1;
  diagnosticManager = rtw_create_diagnostics();
  localDW->OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
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
  modelParameters_0.mRTWModifiedTimeStamp = 7.04111039E+8;
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
  diagnosticManager = (NeuDiagnosticManager *)localDW->OUTPUT_1_0_DiagMgr;
  diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = nesl_initialize_simulator((NeslSimulator *)
    localDW->OUTPUT_1_0_Simulator, &modelParameters_0, diagnosticManager);
  if (tmp_2 != 0) {
    tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(machine_x_M));
    if (tmp_0) {
      msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
      rtmSetErrorStatus(machine_x_M, msg_0);
    }
  }
}

void machine_x(RT_MODEL_machine_x_T * const machine_x_M, const real_T
               *rtu_pwm_in_x, real_T *rty_enc_vel_out_x, real_T
               *rty_enc_pos_out_x, B_machine_x_c_T *localB, DW_machine_x_f_T
               *localDW)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  NeuDiagnosticTree *diagnosticTree_0;
  NeuDiagnosticTree *diagnosticTree_1;
  char *msg;
  char *msg_0;
  char *msg_1;
  real_T tmp_3[10];
  real_T tmp_0[4];
  real_T tmp_5[4];
  real_T rtb_OUTPUT_1_0[2];
  real_T time;
  real_T time_0;
  real_T time_1;
  real_T time_2;
  real_T time_3;
  real_T time_tmp;
  real_T time_tmp_0;
  int32_T isHit;
  int32_T isHit_0;
  int32_T tmp_2;
  int_T tmp_4[3];
  int_T tmp_1[2];
  int_T tmp_6[2];
  boolean_T tmp;
  localB->INPUT_1_1_1[0] = *rtu_pwm_in_x;
  localB->INPUT_1_1_1[1] = 0.0;
  localB->INPUT_1_1_1[2] = 0.0;
  localDW->INPUT_1_1_1_SimscapeInternalDiscrete_D7B17FC2[0] =
    !(localB->INPUT_1_1_1[0] ==
      localDW->INPUT_1_1_1_SimscapeInternalDiscrete_D7B17FC2[1]);
  localDW->INPUT_1_1_1_SimscapeInternalDiscrete_D7B17FC2[1] =
    localB->INPUT_1_1_1[0];
  localB->INPUT_1_1_1[0] =
    localDW->INPUT_1_1_1_SimscapeInternalDiscrete_D7B17FC2[1];
  localB->INPUT_1_1_1[3] =
    localDW->INPUT_1_1_1_SimscapeInternalDiscrete_D7B17FC2[0];
  simulationData = (NeslSimulationData *)localDW->STATE_1_SimData;
  time_tmp = (( rtmGetClockTick0(machine_x_M) + rtmGetClockTickH0(machine_x_M)*
               4294967296.0 ) * 0.0001);
  time = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 6;
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
  simulationData->mData->mInputValues.mN = 4;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 2;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  simulationData->mData->mOutputs.mN = 6;
  simulationData->mData->mOutputs.mX = &localB->STATE_1[0];
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  simulationData->mData->mDstateHasChanged = false;
  time_tmp_0 = (( rtmGetClockTick0(machine_x_M) + rtmGetClockTickH0(machine_x_M)*
                 4294967296.0 ) * 0.0001);
  time_0 = time_tmp_0;
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
    tmp = error_buffer_is_empty(rtmGetErrorStatus(machine_x_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(machine_x_M, msg);
    }
  }

  localDW->STATE_1_DC_Motori_L = localDW->STATE_1_Discrete[0];
  localDW->STATE_1_DC_Motorw = localDW->STATE_1_Discrete[1];
  localDW->STATE_1_Massv = localDW->STATE_1_Discrete[2];
  localDW->STATE_1_Translational_Springx = localDW->STATE_1_Discrete[3];
  localDW->STATE_1_Ideal_Rotational_Motion_Sensorphi = localDW->
    STATE_1_Discrete[4];
  localDW->STATE_1_Ideal_Translational_Motion_Sensorx =
    localDW->STATE_1_Discrete[5];
  simulationData = (NeslSimulationData *)localDW->OUTPUT_1_0_SimData;
  time_1 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_1;
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
  tmp_4[0] = 0;
  tmp_3[0] = localB->INPUT_1_1_1[0];
  tmp_3[1] = localB->INPUT_1_1_1[1];
  tmp_3[2] = localB->INPUT_1_1_1[2];
  tmp_3[3] = localB->INPUT_1_1_1[3];
  tmp_4[1] = 4;
  tmp_3[4] = localB->STATE_1[0];
  tmp_3[5] = localB->STATE_1[1];
  tmp_3[6] = localB->STATE_1[2];
  tmp_3[7] = localB->STATE_1[3];
  tmp_3[8] = localB->STATE_1[4];
  tmp_3[9] = localB->STATE_1[5];
  tmp_4[2] = 10;
  simulationData->mData->mInputValues.mN = 10;
  simulationData->mData->mInputValues.mX = &tmp_3[0];
  simulationData->mData->mInputOffsets.mN = 3;
  simulationData->mData->mInputOffsets.mX = &tmp_4[0];
  simulationData->mData->mOutputs.mN = 2;
  simulationData->mData->mOutputs.mX = &rtb_OUTPUT_1_0[0];
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  simulationData->mData->mDstateHasChanged = false;
  time_2 = time_tmp_0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_2;
  isHit_0 = 0;
  simulationData->mData->mSampleHits.mN = 1;
  simulationData->mData->mSampleHits.mX = &isHit_0;
  simulationData->mData->mIsFundamentalSampleHit = true;
  simulationData->mData->mHadEvents = false;
  diagnosticManager = (NeuDiagnosticManager *)localDW->OUTPUT_1_0_DiagMgr;
  diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)localDW->OUTPUT_1_0_Simulator,
    NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(machine_x_M));
    if (tmp) {
      msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
      rtmSetErrorStatus(machine_x_M, msg_0);
    }
  }

  time_tmp_0 = rtb_OUTPUT_1_0[0];
  *rty_enc_vel_out_x = rt_roundd_snf(time_tmp_0 / machine_x_P.Quantizer_Interval)
    * machine_x_P.Quantizer_Interval * machine_x_P.Gain_Gain;
  time_tmp_0 = rtb_OUTPUT_1_0[1];
  *rty_enc_pos_out_x = rt_roundd_snf(time_tmp_0 /
    machine_x_P.Quantizer3_Interval) * machine_x_P.Quantizer3_Interval;
  simulationData = (NeslSimulationData *)localDW->STATE_1_SimData;
  time_3 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_3;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 6;
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
  tmp_6[0] = 0;
  tmp_5[0] = localB->INPUT_1_1_1[0];
  tmp_5[1] = localB->INPUT_1_1_1[1];
  tmp_5[2] = localB->INPUT_1_1_1[2];
  tmp_5[3] = localB->INPUT_1_1_1[3];
  tmp_6[1] = 4;
  simulationData->mData->mInputValues.mN = 4;
  simulationData->mData->mInputValues.mX = &tmp_5[0];
  simulationData->mData->mInputOffsets.mN = 2;
  simulationData->mData->mInputOffsets.mX = &tmp_6[0];
  localDW->STATE_1_Discrete[0] = localDW->STATE_1_DC_Motori_L;
  localDW->STATE_1_Discrete[1] = localDW->STATE_1_DC_Motorw;
  localDW->STATE_1_Discrete[2] = localDW->STATE_1_Massv;
  localDW->STATE_1_Discrete[3] = localDW->STATE_1_Translational_Springx;
  localDW->STATE_1_Discrete[4] =
    localDW->STATE_1_Ideal_Rotational_Motion_Sensorphi;
  localDW->STATE_1_Discrete[5] =
    localDW->STATE_1_Ideal_Translational_Motion_Sensorx;
  diagnosticManager = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr;
  diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)localDW->STATE_1_Simulator,
    NESL_SIM_UPDATE, simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(machine_x_M));
    if (tmp) {
      msg_1 = rtw_diagnostics_msg(diagnosticTree_1);
      rtmSetErrorStatus(machine_x_M, msg_1);
    }
  }
}

void machine_x_Term(DW_machine_x_f_T *localDW)
{
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    localDW->STATE_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)localDW->STATE_1_SimData);
  nesl_erase_simulator("machine_x/Solver Configuration_1");
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    localDW->OUTPUT_1_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)localDW->OUTPUT_1_0_SimData);
  nesl_erase_simulator("machine_x/Solver Configuration_1");
}

void machine_x_initialize(const char_T **rt_errorStatus, const rtTimingBridge
  *timingBridge, int_T mdlref_TID0, RT_MODEL_machine_x_T *const machine_x_M,
  B_machine_x_c_T *localB, DW_machine_x_f_T *localDW)
{
  (void) memset((void *)machine_x_M, 0,
                sizeof(RT_MODEL_machine_x_T));
  machine_x_M->Timing.mdlref_GlobalTID[0] = mdlref_TID0;
  machine_x_M->timingBridge = (timingBridge);
  rtmSetErrorStatusPointer(machine_x_M, rt_errorStatus);
  (void) memset(((void *) localB), 0,
                sizeof(B_machine_x_c_T));
  (void) memset((void *)localDW, 0,
                sizeof(DW_machine_x_f_T));
}
