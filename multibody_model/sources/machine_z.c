#include "multibody_model_macros.h"
#include "machine_z.h"
#include "rtwtypes.h"
#include "machine_z_private.h"
#include <string.h>
#include "rt_roundd_snf.h"
#include <stddef.h>

P_machine_z_T machine_z_P = {

  0.0,

  0.0,

  -0.75,

  0.75,

  0.0,

  0.0,

  -0.001,

  0.001,

  0.0001,

  0.0001,

  0.0375,

  30.0,

  0.001,

  1.273,

  0.0,

  1,

  -1,

  1,

  -1
};

void machine_z_Init(RT_MODEL_machine_z_T * const machine_z_M, DW_machine_z_f_T
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
  tmp = nesl_lease_simulator("machine_z/Solver Configuration1_1", 0, 0);
  localDW->STATE_1_Simulator = (void *)tmp;
  tmp_0 = pointer_is_null(localDW->STATE_1_Simulator);
  if (tmp_0) {
    machine_z_a47a947d_1_gateway();
    tmp = nesl_lease_simulator("machine_z/Solver Configuration1_1", 0, 0);
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
    tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(machine_z_M));
    if (tmp_0) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(machine_z_M, msg);
    }
  }

  tmp = nesl_lease_simulator("machine_z/Solver Configuration1_1", 1, 0);
  localDW->OUTPUT_1_0_Simulator = (void *)tmp;
  tmp_0 = pointer_is_null(localDW->OUTPUT_1_0_Simulator);
  if (tmp_0) {
    machine_z_a47a947d_1_gateway();
    tmp = nesl_lease_simulator("machine_z/Solver Configuration1_1", 1, 0);
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
  diagnosticManager = (NeuDiagnosticManager *)localDW->OUTPUT_1_0_DiagMgr;
  diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = nesl_initialize_simulator((NeslSimulator *)
    localDW->OUTPUT_1_0_Simulator, &modelParameters_0, diagnosticManager);
  if (tmp_2 != 0) {
    tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(machine_z_M));
    if (tmp_0) {
      msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
      rtmSetErrorStatus(machine_z_M, msg_0);
    }
  }

  localDW->UnitDelay_DSTATE = machine_z_P.UnitDelay_InitialCondition;
  localDW->Integrator_DSTATE =
    machine_z_P.PIDController_InitialConditionForIntegrator;
  localDW->Filter_DSTATE = machine_z_P.PIDController_InitialConditionForFilter;
}

void machine_z_Reset(DW_machine_z_f_T *localDW)
{
  localDW->UnitDelay_DSTATE = machine_z_P.UnitDelay_InitialCondition;
  localDW->Integrator_DSTATE =
    machine_z_P.PIDController_InitialConditionForIntegrator;
  localDW->Filter_DSTATE = machine_z_P.PIDController_InitialConditionForFilter;
}

void machine_z(RT_MODEL_machine_z_T * const machine_z_M, const real_T
               *rtu_step_z_in, real_T *rty_enc_pos_z, B_machine_z_c_T *localB,
               DW_machine_z_f_T *localDW)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  NeuDiagnosticTree *diagnosticTree_0;
  NeuDiagnosticTree *diagnosticTree_1;
  char *msg;
  char *msg_0;
  char *msg_1;
  real_T tmp_3[16];
  real_T tmp_0[8];
  real_T tmp_5[8];
  real_T rtb_DeadZone;
  real_T rtb_FilterCoefficient;
  real_T rtb_IntegralGain;
  real_T rtb_Quantizer;
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
  int_T tmp_4[4];
  int_T tmp_1[3];
  int_T tmp_6[3];
  int8_T tmp_7;
  int8_T tmp_8;
  boolean_T tmp;
  rtb_IntegralGain = *rtu_step_z_in - localDW->UnitDelay_DSTATE;
  if (rtb_IntegralGain > machine_z_P.DeadZone_End) {
    rtb_IntegralGain -= machine_z_P.DeadZone_End;
  } else if (rtb_IntegralGain >= machine_z_P.DeadZone_Start) {
    rtb_IntegralGain = 0.0;
  } else {
    rtb_IntegralGain -= machine_z_P.DeadZone_Start;
  }

  rtb_FilterCoefficient = (rtP_Dz * rtb_IntegralGain - localDW->Filter_DSTATE) *
    rtP_Nz;
  rtb_DeadZone = (rtP_Pz * rtb_IntegralGain + localDW->Integrator_DSTATE) +
    rtb_FilterCoefficient;
  if (rtb_DeadZone > machine_z_P.PIDController_UpperSaturationLimit) {
    rtb_Quantizer = machine_z_P.PIDController_UpperSaturationLimit;
  } else if (rtb_DeadZone < machine_z_P.PIDController_LowerSaturationLimit) {
    rtb_Quantizer = machine_z_P.PIDController_LowerSaturationLimit;
  } else {
    rtb_Quantizer = rtb_DeadZone;
  }

  localB->Sum1 = rtb_Quantizer + machine_z_P.Gravityincrement_Value;
  localB->INPUT_2_1_1[0] = localB->Sum1;
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
  localB->INPUT_1_1_1[0] = machine_z_P.Gravitymass_Value;
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
  simulationData = (NeslSimulationData *)localDW->STATE_1_SimData;
  time_tmp = (( rtmGetClockTick0(machine_z_M) + rtmGetClockTickH0(machine_z_M)*
               4294967296.0 ) * 0.0001);
  time = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 8;
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
  tmp_0[0] = localB->INPUT_2_1_1[0];
  tmp_0[1] = localB->INPUT_2_1_1[1];
  tmp_0[2] = localB->INPUT_2_1_1[2];
  tmp_0[3] = localB->INPUT_2_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = localB->INPUT_1_1_1[0];
  tmp_0[5] = localB->INPUT_1_1_1[1];
  tmp_0[6] = localB->INPUT_1_1_1[2];
  tmp_0[7] = localB->INPUT_1_1_1[3];
  tmp_1[2] = 8;
  simulationData->mData->mInputValues.mN = 8;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 3;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  simulationData->mData->mOutputs.mN = 8;
  simulationData->mData->mOutputs.mX = &localB->STATE_1[0];
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  simulationData->mData->mDstateHasChanged = false;
  time_tmp_0 = (( rtmGetClockTick0(machine_z_M) + rtmGetClockTickH0(machine_z_M)*
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
    tmp = error_buffer_is_empty(rtmGetErrorStatus(machine_z_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(machine_z_M, msg);
    }
  }

  localDW->STATE_1_Inertiaw = localDW->STATE_1_Discrete[0];
  localDW->STATE_1_Ideal_Rotational_Motion_Sensorphi = localDW->
    STATE_1_Discrete[1];
  localDW->STATE_1_Massv = localDW->STATE_1_Discrete[2];
  localDW->STATE_1_Rotational_Springphi = localDW->STATE_1_Discrete[3];
  localDW->STATE_1_Rotational_Springw = localDW->STATE_1_Discrete[4];
  localDW->STATE_1_Inertiat = localDW->STATE_1_Discrete[5];
  localDW->STATE_1_Leadscrewnut_frc = localDW->STATE_1_Discrete[6];
  localDW->STATE_1_Leadscrewscrew_trq = localDW->STATE_1_Discrete[7];
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
  tmp_3[0] = localB->INPUT_2_1_1[0];
  tmp_3[1] = localB->INPUT_2_1_1[1];
  tmp_3[2] = localB->INPUT_2_1_1[2];
  tmp_3[3] = localB->INPUT_2_1_1[3];
  tmp_4[1] = 4;
  tmp_3[4] = localB->INPUT_1_1_1[0];
  tmp_3[5] = localB->INPUT_1_1_1[1];
  tmp_3[6] = localB->INPUT_1_1_1[2];
  tmp_3[7] = localB->INPUT_1_1_1[3];
  tmp_4[2] = 8;
  memcpy(&tmp_3[8], &localB->STATE_1[0], sizeof(real_T) << 3U);
  tmp_4[3] = 16;
  simulationData->mData->mInputValues.mN = 16;
  simulationData->mData->mInputValues.mX = &tmp_3[0];
  simulationData->mData->mInputOffsets.mN = 4;
  simulationData->mData->mInputOffsets.mX = &tmp_4[0];
  simulationData->mData->mOutputs.mN = 1;
  simulationData->mData->mOutputs.mX = &rtb_Quantizer;
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
    tmp = error_buffer_is_empty(rtmGetErrorStatus(machine_z_M));
    if (tmp) {
      msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
      rtmSetErrorStatus(machine_z_M, msg_0);
    }
  }

  rtb_Quantizer = rt_roundd_snf(rtb_Quantizer / machine_z_P.Quantizer_Interval) *
    machine_z_P.Quantizer_Interval;
  *rty_enc_pos_z = machine_z_P.Gain_Gain * rtb_Quantizer;
  if (rtb_DeadZone > machine_z_P.PIDController_UpperSaturationLimit) {
    rtb_DeadZone -= machine_z_P.PIDController_UpperSaturationLimit;
  } else if (rtb_DeadZone >= machine_z_P.PIDController_LowerSaturationLimit) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone -= machine_z_P.PIDController_LowerSaturationLimit;
  }

  rtb_IntegralGain *= rtP_Iz;
  localDW->UnitDelay_DSTATE = *rty_enc_pos_z;
  if (rtb_DeadZone > machine_z_P.Clamping_zero_Value) {
    tmp_7 = machine_z_P.Constant_Value;
  } else {
    tmp_7 = machine_z_P.Constant2_Value;
  }

  if (rtb_IntegralGain > machine_z_P.Clamping_zero_Value) {
    tmp_8 = machine_z_P.Constant3_Value;
  } else {
    tmp_8 = machine_z_P.Constant4_Value;
  }

  if ((machine_z_P.Clamping_zero_Value != rtb_DeadZone) && (tmp_7 == tmp_8)) {
    rtb_IntegralGain = machine_z_P.Constant1_Value;
  }

  localDW->Integrator_DSTATE += machine_z_P.Integrator_gainval *
    rtb_IntegralGain;
  localDW->Filter_DSTATE += machine_z_P.Filter_gainval * rtb_FilterCoefficient;
  simulationData = (NeslSimulationData *)localDW->STATE_1_SimData;
  time_3 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_3;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 8;
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
  tmp_5[0] = localB->INPUT_2_1_1[0];
  tmp_5[1] = localB->INPUT_2_1_1[1];
  tmp_5[2] = localB->INPUT_2_1_1[2];
  tmp_5[3] = localB->INPUT_2_1_1[3];
  tmp_6[1] = 4;
  tmp_5[4] = localB->INPUT_1_1_1[0];
  tmp_5[5] = localB->INPUT_1_1_1[1];
  tmp_5[6] = localB->INPUT_1_1_1[2];
  tmp_5[7] = localB->INPUT_1_1_1[3];
  tmp_6[2] = 8;
  simulationData->mData->mInputValues.mN = 8;
  simulationData->mData->mInputValues.mX = &tmp_5[0];
  simulationData->mData->mInputOffsets.mN = 3;
  simulationData->mData->mInputOffsets.mX = &tmp_6[0];
  localDW->STATE_1_Discrete[0] = localDW->STATE_1_Inertiaw;
  localDW->STATE_1_Discrete[1] =
    localDW->STATE_1_Ideal_Rotational_Motion_Sensorphi;
  localDW->STATE_1_Discrete[2] = localDW->STATE_1_Massv;
  localDW->STATE_1_Discrete[3] = localDW->STATE_1_Rotational_Springphi;
  localDW->STATE_1_Discrete[4] = localDW->STATE_1_Rotational_Springw;
  localDW->STATE_1_Discrete[5] = localDW->STATE_1_Inertiat;
  localDW->STATE_1_Discrete[6] = localDW->STATE_1_Leadscrewnut_frc;
  localDW->STATE_1_Discrete[7] = localDW->STATE_1_Leadscrewscrew_trq;
  diagnosticManager = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr;
  diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)localDW->STATE_1_Simulator,
    NESL_SIM_UPDATE, simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(machine_z_M));
    if (tmp) {
      msg_1 = rtw_diagnostics_msg(diagnosticTree_1);
      rtmSetErrorStatus(machine_z_M, msg_1);
    }
  }
}

void machine_z_Term(DW_machine_z_f_T *localDW)
{
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    localDW->STATE_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)localDW->STATE_1_SimData);
  nesl_erase_simulator("machine_z/Solver Configuration1_1");
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    localDW->OUTPUT_1_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)localDW->OUTPUT_1_0_SimData);
  nesl_erase_simulator("machine_z/Solver Configuration1_1");
}

void machine_z_initialize(const char_T **rt_errorStatus, const rtTimingBridge
  *timingBridge, int_T mdlref_TID0, RT_MODEL_machine_z_T *const machine_z_M,
  B_machine_z_c_T *localB, DW_machine_z_f_T *localDW)
{
  (void) memset((void *)machine_z_M, 0,
                sizeof(RT_MODEL_machine_z_T));
  machine_z_M->Timing.mdlref_GlobalTID[0] = mdlref_TID0;
  machine_z_M->timingBridge = (timingBridge);
  rtmSetErrorStatusPointer(machine_z_M, rt_errorStatus);
  (void) memset(((void *) localB), 0,
                sizeof(B_machine_z_c_T));
  (void) memset((void *)localDW, 0,
                sizeof(DW_machine_z_f_T));
}
