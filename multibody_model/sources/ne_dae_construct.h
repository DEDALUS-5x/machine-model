#ifndef __ne_dae_construct_h__
#define __ne_dae_construct_h__
#include "pm_std.h"
#include "mc_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
McLinearAlgebraFactory const*mc_get_csparse_linear_algebra(void);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "mc_std_fwd.h"
#include "ne_std_fwd.h"
#include "ne_std.h"
#include "ne_std.h"
#include "pm_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef enum StateModelInputsModeTag{STATE_MODEL_INPUTS_UNSET= -1,
STATE_MODEL_INPUTS_NOINPUTS,STATE_MODEL_INPUTS_INPUTS,STATE_MODEL_INPUTS_NUM}
StateModelInputsMode;char const*state_model_inputs_mode_to_string(
StateModelInputsMode);StateModelInputsMode to_state_model_inputs_mode(char
const*);typedef enum StateModelModeTag{STATE_MODEL_MODE_UNSET= -1,
STATE_MODEL_MODE_NORMAL,STATE_MODEL_MODE_IMPORTED,STATE_MODEL_MODE_NUM}
StateModelMode;char const*state_model_mode_to_string(StateModelMode);
StateModelMode to_state_model_mode(char const*);typedef struct CStateManagerTag
CStateManager;typedef struct CStateManagerDataTag CStateManagerData;struct
CStateManagerTag{char const*(*mModel)(CStateManager const*);size_t(*mSize)(
CStateManager const*,int);void(*mAllocate)(CStateManager const*);int32_T*(*
mInteger)(CStateManager const*);size_t*(*mIndex)(CStateManager const*);double*
(*mReal)(CStateManager const*);double*(*mRealTarget)(CStateManager const*);
double*(*mRealPrestart)(CStateManager const*);void(*mEliminated)(CStateManager
const*,char const*);boolean_T(*mIsEliminated)(CStateManager const*,char const*
);void(*mSatisfied)(CStateManager const*,char const*,boolean_T);boolean_T(*
mIsSatisfied)(CStateManager const*,char const*);void(*mInputDependent)(
CStateManager const*,char const*);boolean_T(*mIsInputDependent)(CStateManager
const*,char const*);void(*mAlgebraic)(CStateManager const*,char const*);
boolean_T(*mIsAlgebraic)(CStateManager const*,char const*);void(*mErrorAll)(
CStateManager const*,boolean_T);void(*mError)(CStateManager const*,char const*
,boolean_T);boolean_T(*mHasError)(CStateManager const*,char const*);boolean_T(
*mIsHideValue)(CStateManager const*,char const*);void(*mSteadyStateAll)(
CStateManager const*);void(*mSteadyState)(CStateManager const*,char const*);
boolean_T(*mIsSteadyState)(CStateManager const*,char const*);StateModelMode(*
mGetModelMode)(CStateManager const*);void(*mSetModelMode)(CStateManager const*
,StateModelMode);StateModelInputsMode(*mGetModelInputsMode)(CStateManager const
*);void(*mSetModelInputsMode)(CStateManager const*,StateModelInputsMode);int(*
mGetModelModifiedTimeStamp)(CStateManager const*);void(*
mSetModelModifiedTimeStamp)(CStateManager const*,int);char const*(*
mGetModelLastUpdatedDateTime)(CStateManager const*);void(*
mSetModelLastUpdatedDateTime)(CStateManager const*,char const*);void(*mUpdate)
(CStateManager const*);void(*mUpdateMode)(CStateManager const*);void(*
mUpdateViewer)(CStateManager const*);void(*mUpdateTarget)(CStateManager const*
);void(*mUpdatePrestart)(CStateManager const*);void(*mUpdateISI)(CStateManager
const*,void*);void(*mUpdateModeISI)(CStateManager const*,void*);void(*
mUpdateViewerISI)(CStateManager const*,void*);void(*mUpdateTargetISI)(
CStateManager const*,void*);void(*mUpdatePrestartISI)(CStateManager const*,
void*);void(*mApplyISI)(CStateManager const*,void const*);CStateManager*(*
mClone)(CStateManager const*);void(*mDestroy)(CStateManager*);
CStateManagerData*mData;};
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ssc_dae_fwd.h"
#include "ssc_dae_fwd.h"
#include "ne_ds.h"
#include "pm_std.h"
#include "pm_std.h"
#include "mc_std_fwd.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef enum{MC_SOLVER_STATUS_INVALID= -1,MC_SOLVER_SUCCESS,MC_SOLVER_FAILURE,
MC_SOLVER_SINGULAR_MATRIX,MC_SOLVER_NO_CONVERGENCE,MC_SOLVER_TOLERANCE_UNMET,
MC_SOLVER_LINEAR_INCONSISTENT,MC_SOLVER_STATUS_COUNT}McSolverStatus;typedef
struct McRealFunctionPrivateDataTag McRealFunctionPrivateData;struct
McRealFunctionTag{McRealFunctionPrivateData*mPrivateDataPtr;McSolverStatus(*
mFunctionPtr)(void const*input,PmRealVector const*output,
McRealFunctionPrivateData*data);void const*(*mGetDefaultInput)(McRealFunction
const*function);void(*mDestroy)(McRealFunction*function);};typedef struct
McIntFunctionPrivateDataTag McIntFunctionPrivateData;struct McIntFunctionTag{
McIntFunctionPrivateData*mPrivateDataPtr;void(*mFunctionPtr)(void const*input,
PmIntVector const*output,McIntFunctionPrivateData*data);void const*(*
mGetDefaultInput)(McIntFunction const*function);void(*mDestroy)(McIntFunction*
function);};typedef struct McMatrixFunctionPrivateDataTag
McMatrixFunctionPrivateData;struct McMatrixFunctionTag{
McMatrixFunctionPrivateData*mPrivateDataPtr;PmSparsityPattern const*
mPatternPtr;void(*mFunctionPtr)(void const*input,PmRealVector const*output,
McMatrixFunctionPrivateData*data);void const*(*mGetDefaultInput)(
McMatrixFunction const*function);void(*mDestroy)(McMatrixFunction*function);};
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_std.h"
#include "ne_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct DDIWrapperPrivateDataTag DDIWrapperPrivateData;typedef struct
DaeDynamicInfoWrapperTag DaeDynamicInfoWrapper;struct DaeDynamicInfoWrapperTag
{DDIWrapperPrivateData*mPrivateData;void(*mReportIC)(DaeDynamicInfoWrapper
const*,NeSystemInput const*,NeParameterBundle const*,NeDerivedParameterBundle
const*,size_t,boolean_T,boolean_T);void(*mReportMode)(DaeDynamicInfoWrapper
const*,NeSystemInput const*,boolean_T,boolean_T,boolean_T,int16_T);void(*
mPushInfo)(DaeDynamicInfoWrapper const*,size_t);void(*mInitializeState)(
DaeDynamicInfoWrapper*,McMatrixFunction*,McMatrixFunction*,McMatrixFunction*,
McMatrixFunction*,McMatrixFunction*,McRealFunction*,McRealFunction*,size_t,
size_t,size_t,size_t);void(*mDestroy)(DaeDynamicInfoWrapper*);};
DaeDynamicInfoWrapper*ddi_wrapper_create(char const*solverPath);typedef enum{
DAEMON_CHOICE_INVALID= -1,DAEMON_CHOICE_NONE,DAEMON_CHOICE_LOG_NUM_ITERATIONS,
DAEMON_CHOICE_SSC2HDL,NUM_DAEMON_CHOICES}DaemonChoice;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct NeRtpValuesTag NeRtpValues;struct NeRtpValuesTag{void(*
mSetRtpValues)(NeRtpValues*rtpValues,void*ss);void*mData;};NeRtpValues*
make_rtw_rtp_values(NeParameterBundle*pb);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct NeConstraintStatTag NeConstraintStat;struct NeConstraintStatTag
{void(*mVariable)(NeConstraintStat const*,NeVariableData const*);struct
NeConstraintStatData*mData;};typedef struct NeCompStatsTag NeCompStats;struct
NeCompStatsTag{NeConstraintStat const*(*mConstraint)(NeCompStats const*);
struct NeCompStatsData*mData;};
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_initer_fwd.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
PmfMessageId ne_dae_create(NeDae**dae,NeDynamicSystem*dynamicsystemPtr,
SscIniter*initer,boolean_T isIniter,NeRtpValues*rtpValues,NeSolverParameters
solverParameters,NeModelParameters modelParameters,McLinearAlgebraFactory const
*linearAlgebraPtr,NeProfiler*profiler,NeCompStats const*compStats,
CStateManager*csm,PmAllocator*allocatorPtr,DaeDynamicInfoWrapper*ddiWrapper,
DaemonChoice const dc,StateTracer*st);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __ne_dae_construct_h__ */
