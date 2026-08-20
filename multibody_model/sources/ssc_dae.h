#ifndef __ssc_dae_h__
#define __ssc_dae_h__
#include "pm_std.h"
#include "pm_inline.h"
#include "pm_std.h"
#include "pm_log.h"
#include "mc_std.h"
#include "ne_std_fwd.h"
#include "ne_std_fwd.h"
#include "ne_std_fwd.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ne_std_fwd.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ssc_dae_fwd.h"
#include "ssc_dae_fwd.h"
#include "ssc_dae_fwd.h"
#include "pm_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct SlSparseMatrixTag{PmSparsityPattern*mPattern;PmRealVector*mPr;}
SlSparseMatrix;typedef struct SLMatricesTag{boolean_T mIsYAffineTermUpdated;
boolean_T mIsXP0AffineTermUpdated;size_t mOffsetX0InD;size_t mOffsetU0InD;
size_t mSlDaeNumDiscreteMajor;size_t mSlDaeNumCache;PmRealVector mAffineY;
PmRealVector mAffineXP0;PmRealVector mYX0;PmRealVector mYU0;SlSparseMatrix
mDxddotDxd;SlSparseMatrix mDxddotDu;SlSparseMatrix mDyDxd;SlSparseMatrix mDyDu
;SlSparseMatrix mDxaDxd;SlSparseMatrix mDxaDu;PmIntVector mMode;PmIntVector
mMajor;PmIntVector mCache;}SLMatrices;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ssc_dae_fwd.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef union NeDaeMethodOutputTag{PmSparsityPattern mM_P;PmRealVector mM;
PmSparsityPattern mDXM_P;PmRealVector mDXM;PmSparsityPattern mDUM_P;
PmRealVector mDUM;PmRealVector mF;PmSparsityPattern mDXF_P;PmRealVector mDXF;
PmSparsityPattern mDUF_P;PmRealVector mDUF;PmSparsityPattern mDTF_P;
PmRealVector mDTF;PmRealVector mY;PmSparsityPattern mDXY_P;PmRealVector mDXY;
PmRealVector mFREQS;PmRealVector mSOLVERHITS;PmSparsityPattern mDUY_P;
PmSparsityPattern mTDUY_P;PmRealVector mDUY;PmRealVector mXP0;PmRealVector mZC
;PmIntVector mASSERT;PmIntVector mPASSERT;PmIntVector mIASSERT;PmRealVector mSO
;PmRealVector mSP;PmIntVector mMODE;PmIntVector mUDOT_REQ;PmRealVector mDELAYS
;PmBoolVector mDXF_V_X;PmBoolVector mDUF_V_X;PmRealVector mOBS_EXP;
PmRealVector mOBS_ACT;PmRealVector mEQ_TOL;PmRealVector mNUMJAC_DX_LO;
PmRealVector mNUMJAC_DX_HI;PmRealVector mJACOB;PmRealVector mSTATE;}
NeDaeMethodOutput;typedef enum NeDaeMethodIdTag{NE_INVALID_DAE_METHOD_ID= -1,
NE_DAE_METHOD_M_P,NE_DAE_METHOD_M,NE_DAE_METHOD_DXM_P,NE_DAE_METHOD_DXM,
NE_DAE_METHOD_DUM_P,NE_DAE_METHOD_DUM,NE_DAE_METHOD_F,NE_DAE_METHOD_DXF_P,
NE_DAE_METHOD_DXF,NE_DAE_METHOD_DUF_P,NE_DAE_METHOD_DUF,NE_DAE_METHOD_DTF_P,
NE_DAE_METHOD_DTF,NE_DAE_METHOD_Y,NE_DAE_METHOD_DXY_P,NE_DAE_METHOD_DXY,
NE_DAE_METHOD_FREQS,NE_DAE_METHOD_SOLVERHITS,NE_DAE_METHOD_DUY_P,
NE_DAE_METHOD_TDUY_P,NE_DAE_METHOD_DUY,NE_DAE_METHOD_XP0,NE_DAE_METHOD_ZC,
NE_DAE_METHOD_ASSERT,NE_DAE_METHOD_PASSERT,NE_DAE_METHOD_IASSERT,
NE_DAE_METHOD_SO,NE_DAE_METHOD_SP,NE_DAE_METHOD_MODE,NE_DAE_METHOD_UDOT_REQ,
NE_DAE_METHOD_DELAYS,NE_DAE_METHOD_DXF_V_X,NE_DAE_METHOD_DUF_V_X,
NE_DAE_METHOD_OBS_EXP,NE_DAE_METHOD_OBS_ACT,NE_DAE_METHOD_EQ_TOL,
NE_DAE_METHOD_NUMJAC_DX_LO,NE_DAE_METHOD_NUMJAC_DX_HI,NE_DAE_METHOD_JACOB,
NE_DAE_METHOD_STATE,NE_NUM_DAE_METHODS}NeDaeMethodId;typedef enum
NeDaeSolveIdTag{NE_DAE_SOLVE_INVALID= -1,NE_DAE_SOLVE_IC_MODE,
NE_DAE_SOLVE_IC_LIS,NE_DAE_SOLVE_IC_LSS,NE_DAE_SOLVE_CIC_MODE,
NE_DAE_SOLVE_CONSAT,NE_DAE_SOLVE_CIC,NE_DAE_SOLVE_RESET,NE_DAE_SOLVE_NUDGE,
NE_DAE_SOLVE_NUM}NeDaeSolveId;typedef PmfMessageId(*NeDaeMethod)(const NeDae*,
const NeSystemInput*,NeDaeMethodOutput*,NeuDiagnosticManager*);typedef
PmfMessageId(*NeDaeSolve)(NeDae const*,NeSystemInput const*,
NeuDiagnosticManager*);typedef PmfMessageId(*NeDaeFunction)(NeDae const*,
NeSystemInput const*);typedef void(*NeDaeReportFcn)(NeDae const*);typedef
PmfMessageId(*NeDaeStateSelectorFcn)(NeDae const*,NeSystemInput const*,
boolean_T*,NeuDiagnosticManager*);typedef PmfMessageId(*NeDaeLinearizeFcn)(
NeDae const*,NeSystemInput const*,PmRealVector*,NeuDiagnosticManager*);typedef
NeDaeMethodOutput*(*NeDaeMakeOutputFcn)(NeDae const*,PmAllocator*);typedef void
(*NeDaeFreeOutputFcn)(NeDaeMethodOutput*,PmAllocator*);typedef NeRealFunctor*(
*NeRealFunctorFcn)(NeDae const*dae,NeDaeMethodId id,PmAllocator*allocator);
typedef void(*NeDaeSetParameters)(NeDae const*,NeParameterBundle const*);
typedef struct NeDaePrivateDataTag NeDaePrivateData;struct NeDaeTag{size_t
mNumStates;size_t mNumDifferentialStates;size_t mNumDiscreteStates;size_t
mNumInputs;size_t mInputOrder;size_t mNumOutputs;size_t mNumMassMatrixNzMax;
size_t mNumTrimResiduals;size_t mNumLinJacobianNzMax;size_t mNumModes;size_t
mNumMajorModes;size_t mNumRealCache;size_t mNumIntCache;size_t mNumZcs;size_t
mNumAsserts;size_t mNumParamAsserts;size_t mNumInitialAsserts;size_t mNumRanges
;size_t mNumEquationRanges;size_t mNumAssertRanges;size_t mNumParamAssertRanges
;size_t mNumInitialAssertRanges;size_t mNumSamples;size_t mNumSolverHits;
size_t mNumFreqs;size_t mNumDelays;size_t mNumDxfNzMax;size_t mNumDufNzMax;
size_t mNumDtfNzMax;size_t mNumDxyNzMax;size_t mNumDuyNzMax;size_t
mNumTDuyNzMax;size_t mNumDtyNzMax;size_t mNumDxmNzMax;size_t mNumDumNzMax;
size_t mNumObservables;size_t mNumObservableElements;size_t mNumSwitchingCoeffs
;size_t mNumJacobianElems;size_t mNumSwitchingEquations;size_t
mNumSwitchingStates;boolean_T mIsMConstant;boolean_T mIsMPwConstant;boolean_T
mIsMRuntimeScaled;boolean_T mIsDxfConstant;boolean_T mIsDufConstant;boolean_T
mIsYLinear;boolean_T mHasConstraints;boolean_T mHasConstraintEquations;
boolean_T mSupportsLinearization;boolean_T mIsDae;boolean_T mIsContinuousLti;
boolean_T mIsSwitchedLinear;boolean_T mIsDfAnalytic;boolean_T mIsDmAnalytic;
boolean_T mIsDyAnalytic;real_T mFundamentalSampleTime;size_t mRefCount;
boolean_T mIsNormalizable;NeEquationData*mEquationData;NeVariableData*
mVariableData;NeVariableData*mDiscreteData;NeObservableData*mObservableData;
NeModeData*mMajorModeData;NeZCData*mZCData;NeSwitchingCoeffsData*
mSwitchingCoeffsData;NeJacobianElemsData*mJacobianElemsData;
NeSwitchingStatesData*mSwitchingStatesData;NeAssertData*mAssertData;
NeAssertData*mParamAssertData;NeAssertData*mInitialAssertData;NeRange*mRanges;
NeRange*mEquationRanges;NeRange*mAssertRanges;NeRange*mParamAssertRanges;
NeRange*mInitialAssertRanges;size_t*mSwitchingEquationsData;NeParameterInfo
mParameterInfo;PmBoolVector const*mDirectFeedthrough;PmIntVector const*
mOutputFunctionMap;size_t mNumIo[NUM_IO_TYPES];SscIoInfo const*mIo[
NUM_IO_TYPES];NeChecksum*mChecksum;NeProfiler*mProfiler;NeDaePrivateData*
mPrivateData;void(*mDestroy)(NeDae*);NeDae*(*mCloneFcn)(NeDae const*);
NeDaeMethod mMethods[NE_NUM_DAE_METHODS];NeDaeSolve mSolves[NE_DAE_SOLVE_NUM];
NeDaeSolve mCheck;NeDaeSetParameters mSetParameters;NeDaeFunction
mPreTrDiagnoseFcn;NeDaeFunction mPreDcDiagnoseFcn;NeDaeReportFcn mPushInfo;
NeDaeSolve mAllInputsWorkFcn;NeDaeLinearizeFcn mResidualsFcn;
NeDaeStateSelectorFcn mStateSelectorFcn;NeDaeLinearizeFcn mLinearizeFcn;
NeDaeLinearizeFcn mLinearizeDssFcn;PmfMessageId(*mInitializeFcn)(NeDae*dae,
NeModelParameters mp,NeuDiagnosticManager*mgr);PmfMessageId(*
mStiffDiagnosticFcn)(NeDae const*,NeSystemInput const*,void*,
NeuDiagnosticManager*);void(*mLogIterationsFcn)(NeDae const*,IterationsLogCore
*);void(*mSetStateTracer)(NeDae*,StateTracer*);void(*mSolverFailureNotify)(
NeDae*dae,size_t num_consecutive_failures);void(*mSetupLoggerFcn)(NeDae const*
,NeLoggerBuilder*);PmfMessageId(*mLogFcn)(NeDae const*,NeSystemInput const*,
PmRealVector*,NeuDiagnosticManager*);void(*mGenerateFcn)(NeDae const*,
NeCgParams const*,NeCgResults*);SLMatrices const**(*mSwitchedLinearDataFcn)(
NeDae const*);NeDaeMakeOutputFcn mMakeOutput[NE_NUM_DAE_METHODS];
NeDaeFreeOutputFcn mFreeOutput[NE_NUM_DAE_METHODS];NeRealFunctorFcn
mRealFunctorFcn;void(*mSetOutputFunction)(NeDae const*,size_t
outputFunctionIndex);void(*mStartOutputLoop)(NeDae const*);NeCustomData*(*
mGetCustomDataFcn)(NeDae const*);PmfMessageId(*mSetCustomDataFcn)(NeCustomData
const*,NeDae const*,NeuDiagnosticManager*mgr);boolean_T mIsScalable;};
PMF_DEPLOY_STATIC PmfMessageId ne_dae_state_selector(NeDae const*dae,
NeSystemInput const*input,boolean_T*changed,NeuDiagnosticManager*mgr){return
dae->mNumSwitchingStates!=0?dae->mStateSelectorFcn(dae,input,changed,mgr):NULL
;}PMF_DEPLOY_STATIC PmfMessageId ne_dae_linearize(NeDae const*dae,
NeSystemInput const*input,PmRealVector*LinJacobian,NeuDiagnosticManager*mgr){
return dae->mLinearizeFcn(dae,input,LinJacobian,mgr);}PMF_DEPLOY_STATIC
PmfMessageId ne_dae_linearize_dss(NeDae const*dae,NeSystemInput const*input,
PmRealVector*LinJacobian,NeuDiagnosticManager*mgr){return dae->
mLinearizeDssFcn(dae,input,LinJacobian,mgr);}PMF_DEPLOY_STATIC PmfMessageId
ne_dae_residuals(NeDae const*daePtr,NeSystemInput const*inputPtr,PmRealVector*
residualsRvPtr,NeuDiagnosticManager*mgr){return daePtr->mResidualsFcn(daePtr,
inputPtr,residualsRvPtr,mgr);}PMF_DEPLOY_STATIC PmfMessageId ne_dae_call_method
(NeDae const*dae,NeDaeMethodId id,NeSystemInput const*input,NeDaeMethodOutput*
output,NeuDiagnosticManager*mgr){return dae->mMethods[id](dae,input,output,mgr
);}PMF_DEPLOY_STATIC NeDaeMethodOutput*ne_dae_default_output(NeDae const*dae,
NeDaeMethodId id,PmAllocator*allocator){return dae->mMakeOutput[id](dae,
allocator);}PMF_DEPLOY_STATIC NeDaeMethodOutput*ne_dae_method_output(NeDae
const*dae,NeDaeMethodId id,NeSystemInput const*input,NeuDiagnosticManager*mgr,
PmAllocator*allocator){NeDaeMethodOutput*daeOutput=ne_dae_default_output(dae,
id,allocator);ne_dae_call_method(dae,id,input,daeOutput,mgr);return daeOutput;
}PMF_DEPLOY_STATIC PmfMessageId ne_dae_solve(NeDae const*dae,NeDaeSolveId id,
NeSystemInput const*input,NeuDiagnosticManager*mgr){return dae->mSolves[id](
dae,input,mgr);}PMF_DEPLOY_STATIC NeSystemInputSizes
ne_dae_get_system_input_sizes(NeDae const*dae){NeSystemInputSizes sizes;sizes.
mSizes[NE_SYSTEM_INPUT_ID_Q]=dae->mNumMajorModes;sizes.mSizes[
NE_SYSTEM_INPUT_ID_M]=dae->mNumModes;sizes.mSizes[NE_SYSTEM_INPUT_ID_T]=1;
sizes.mSizes[NE_SYSTEM_INPUT_ID_U]=dae->mNumInputs;sizes.mSizes[
NE_SYSTEM_INPUT_ID_V]=dae->mNumInputs;sizes.mSizes[NE_SYSTEM_INPUT_ID_X]=dae->
mNumStates;sizes.mSizes[NE_SYSTEM_INPUT_ID_D]=dae->mNumDiscreteStates;sizes.
mSizes[NE_SYSTEM_INPUT_ID_E]=dae->mNumSamples;sizes.mSizes[
NE_SYSTEM_INPUT_ID_CR]=dae->mNumRealCache;sizes.mSizes[NE_SYSTEM_INPUT_ID_CI]=
dae->mNumIntCache;sizes.mSizes[NE_SYSTEM_INPUT_ID_A]=dae->mNumSwitchingCoeffs;
sizes.mSizes[NE_SYSTEM_INPUT_ID_J]=dae->mNumJacobianElems;return sizes;}
PMF_DEPLOY_STATIC void ne_dae_default_output_free(NeDae const*dae,
NeDaeMethodOutput*output,NeDaeMethodId id,PmAllocator*allocator){dae->
mFreeOutput[id](output,allocator);}PMF_DEPLOY_STATIC void ne_dae_get_reference
(NeDae*dae){++(dae->mRefCount);}PMF_DEPLOY_STATIC void ne_dae_release_reference
(NeDae*dae){(void)0;;if(--(dae->mRefCount)==0){dae->mDestroy(dae);}}
PMF_DEPLOY_STATIC void ne_dae_push_info(NeDae const*dae){if(dae->mPushInfo!=
NULL){dae->mPushInfo(dae);}}
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_std.h"
#include "ne_std_fwd.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ssc_dae_fwd.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
struct NeRealFunctorTag{PmfMessageId(*mEvaluate)(NeRealFunctor const*functor,
NeSystemInput const*input,PmRealVector const*output,NeuDiagnosticManager*
manager);NeSystemInputSizes(*mGetInputSizes)(NeRealFunctor const*functor);void
(*mDestroy)(NeRealFunctor*functor);NeRealFunctorData*mData;};
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __ssc_dae_h__ */
