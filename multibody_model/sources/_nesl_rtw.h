#ifndef ___nesl_rtw_h__
#define ___nesl_rtw_h__
#include "pm_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
int_T pm_create_sparsity_pattern_fields(PmSparsityPattern*patternPtr,size_t
nNzMax,size_t nRow,size_t nCol,PmAllocator*allocator);PmSparsityPattern*
pm_create_sparsity_pattern(size_t nNzMax,size_t nRow,size_t nCol,PmAllocator*
allocatorPtr);void pm_sp_equals_sp(PmSparsityPattern*Ap,PmSparsityPattern const
*Bp);boolean_T pm_sp_equalequals_sp(PmSparsityPattern const*Ap,
PmSparsityPattern const*Bp);PmSparsityPattern*pm_copy_sparsity_pattern(
PmSparsityPattern const*input_pattern,PmAllocator*allocatorPtr);void
pm_destroy_sparsity_pattern_fields(PmSparsityPattern*patternPtr,PmAllocator*
allocator);void pm_destroy_sparsity_pattern(PmSparsityPattern*patternPtr,
PmAllocator*allocatorPtr);PmSparsityPattern*pm_create_full_sparsity_pattern(
size_t nrows,size_t ncols,PmAllocator*allocatorPtr);PmSparsityPattern*
pm_create_empty_sparsity_pattern(size_t nrows,size_t ncols,PmAllocator*
allocatorPtr);PmSparsityPattern*pm_create_partial_identity_sparsity_pattern(
size_t p,size_t n,PmAllocator*allocatorPtr);PmSparsityPattern*
pm_create_identity_sparsity_pattern(size_t n,PmAllocator*allocatorPtr);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
void pm_rv_equals_rv(PmRealVector const*xPtr,PmRealVector const*yPtr);void
pm_iv_equals_iv(PmIntVector const*xPtr,PmIntVector const*yPtr);void
pm_bv_equals_bv(PmBoolVector const*xPtr,PmBoolVector const*yPtr);void
pm_cv_equals_cv(PmCharVector const*xPtr,PmCharVector const*yPtr);boolean_T
pm_rv_equalequals_rv(PmRealVector const*xPtr,PmRealVector const*yPtr);
boolean_T pm_iv_equalequals_iv(PmIntVector const*xPtr,PmIntVector const*yPtr);
boolean_T pm_bv_equalequals_bv(PmBoolVector const*xPtr,PmBoolVector const*yPtr
);int_T pm_create_real_vector_fields(PmRealVector*vecPtr,size_t size,
PmAllocator*allocatorPtr);PmRealVector*pm_create_real_vector(size_t numElements
,PmAllocator*allocatorPtr);PmRealVector*pm_copy_real_vector(PmRealVector const
*vecPtr,PmAllocator*allocatorPtr);void pm_destroy_real_vector_fields(
PmRealVector*vecPtr,PmAllocator*allocatorPtr);void pm_destroy_real_vector(
PmRealVector*vecPtr,PmAllocator*allocatorPtr);int_T pm_create_int_vector_fields
(PmIntVector*vecPtr,size_t size,PmAllocator*allocatorPtr);PmIntVector*
pm_create_int_vector(size_t numElements,PmAllocator*allocatorPtr);PmIntVector*
pm_copy_int_vector(PmIntVector const*vecPtr,PmAllocator*allocatorPtr);void
pm_destroy_int_vector_fields(PmIntVector*vecPtr,PmAllocator*allocatorPtr);void
pm_destroy_int_vector(PmIntVector*vecPtr,PmAllocator*allocatorPtr);int_T
pm_create_bool_vector_fields(PmBoolVector*vecPtr,size_t size,PmAllocator*
allocatorPtr);PmBoolVector*pm_create_bool_vector(size_t numElements,
PmAllocator*allocatorPtr);void pm_destroy_bool_vector_fields(PmBoolVector*
vecPtr,PmAllocator*allocatorPtr);void pm_destroy_bool_vector(PmBoolVector*
vecPtr,PmAllocator*allocatorPtr);PmBoolVector*pm_copy_bool_vector(PmBoolVector
const*vecPtr,PmAllocator*allocatorPtr);int_T pm_create_char_vector_fields(
PmCharVector*vecPtr,size_t size,PmAllocator*allocatorPtr);PmCharVector*
pm_create_char_vector(size_t numElements,PmAllocator*allocatorPtr);void
pm_destroy_char_vector_fields(PmCharVector*vecPtr,PmAllocator*allocatorPtr);
void pm_destroy_char_vector(PmCharVector*vecPtr,PmAllocator*allocatorPtr);
int_T pm_create_size_vector_fields(PmSizeVector*vecPtr,size_t size,PmAllocator
*allocatorPtr);PmSizeVector*pm_create_size_vector(size_t numElements,
PmAllocator*allocatorPtr);void pm_destroy_size_vector_fields(PmSizeVector*
vecPtr,PmAllocator*allocatorPtr);void pm_destroy_size_vector(PmSizeVector*
vecPtr,PmAllocator*allocatorPtr);void pm_sv_equals_sv(PmSizeVector const*xPtr,
PmSizeVector const*yPtr);boolean_T pm_sv_equalequals_sv(PmSizeVector const*
xPtr,PmSizeVector const*yPtr);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "mc_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
McLinearAlgebraFactory const*mc_get_csparse_linear_algebra(void);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "mc_std.h"
#include "pm_std.h"
#include "ne_std_fwd.h"
#include "pm_std.h"
#include "stdarg.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef NeuDiagnosticTree*NeuDiagnosticId;typedef struct
NeuDiagnosticManagerPrivateDataTag NeuDiagnosticManagerPrivateData;struct
NeuDiagnosticManagerTag{NeuDiagnosticManagerPrivateData*mPrivateData;
NeuDiagnosticId(*mStartSubtree)(NeuDiagnosticManager const*mgr);void(*
mFinishSubtree)(NeuDiagnosticManager const*mgr,NeuDiagnosticId diagId,
NeuDiagnosticLevel verbosity,PmfMessageId msgId,va_list args);void(*
mFinishSubtreeUser)(NeuDiagnosticManager const*mgr,NeuDiagnosticId diagId,
NeuDiagnosticLevel verbosity,PmfMessageId msgId,va_list args);void(*
mClearSubtree)(NeuDiagnosticManager const*mgr,NeuDiagnosticId diagId);void(*
mTransferTree)(NeuDiagnosticManager const*dest,NeuDiagnosticManager const*src)
;NeuDiagnosticTree const*(*mGetInitialTree)(NeuDiagnosticManager const*mgr);
void(*mDestroy)(NeuDiagnosticManager*mgr);};PmfMessageId
neu_diagnostic_finish_subtree(NeuDiagnosticManager const*mgr,NeuDiagnosticId
diagId,NeuDiagnosticLevel verbosity,PmfMessageId msgId,...);PmfMessageId
neu_diagnostic_finish_subtree_user(NeuDiagnosticManager const*mgr,
NeuDiagnosticId diagId,NeuDiagnosticLevel verbosity,PmfMessageId msgId,...);
PmfMessageId neu_diagnostic_one_node_subtree(NeuDiagnosticManager const*mgr,
NeuDiagnosticLevel verbosity,PmfMessageId msgId,...);PmfMessageId
neu_diagnostic_finish_subtree_preformatted(NeuDiagnosticManager const*mgr,
NeuDiagnosticId diagId,NeuDiagnosticLevel verbosity,PmfMessageId msgId,char
const*msg);PmfMessageId neu_diagnostic_one_node_subtree_preformatted(
NeuDiagnosticManager const*mgr,NeuDiagnosticLevel verbosity,PmfMessageId msgId
,char const*msg);NeuDiagnosticManager*neu_create_diagnostic_manager(
PmAllocator*alloc);void neu_destroy_diagnostic_manager(NeuDiagnosticManager*
mgr);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_std.h"
#include "ne_std_fwd.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct NeuDiagnosticTreePrinterTag NeuDiagnosticTreePrinter;typedef
struct NeuDiagnosticTreePrinterPrivateDataTag
NeuDiagnosticTreePrinterPrivateData;struct NeuDiagnosticTreePrinterTag{
NeuDiagnosticTreePrinterPrivateData*mPrivateData;char const*(*mPrint)(
NeuDiagnosticTreePrinter*printer,NeuDiagnosticTree const*tree);void(*mDestroy)
(NeuDiagnosticTreePrinter*printer);};NeuDiagnosticTreePrinter*
neu_create_diagnostic_tree_printer(PmAllocator*alloc);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_std.h"
#include "ne_std_fwd.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
char const*neu_tree_viewer_get_id(NeuDiagnosticTree const*tree);char const*
neu_tree_viewer_get_msg(NeuDiagnosticTree const*tree);NeuDiagnosticLevel
neu_tree_viewer_get_level(NeuDiagnosticTree const*tree);size_t
neu_tree_viewer_get_num_causes(NeuDiagnosticTree const*tree);NeuDiagnosticTree
const*neu_tree_viewer_get_cause_k(NeuDiagnosticTree const*tree,size_t k);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_std_fwd.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
void neu_diagnostic_tree_warning(NeuDiagnosticTree const*tree);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_std_fwd.h"
#include "ssc_dae_fwd.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct NeSolverSystemTag NeSolverSystem;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_std.h"
#include "ssc_dae_fwd.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
void nes_dae_get_base_methods(NeDae*dae_ptr);PmIntVector*
nes_compute_output_function_map(PmSparsityPattern const*duy,uint32_T inputOrder
);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_std.h"
#include "ne_std.h"
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
DAEMON_CHOICE_SSC2HDL,NUM_DAEMON_CHOICES}DaemonChoice;NeSolverSystem*
nes_create_crude_solver_system(NeDynamicSystem*dynamicsystemPtr,
NeModelParameters modelParameters,NeSolverParameters solverParameters,
PmAllocator*allocatorPtr);NeSolverSystem*nes_create_crude_solver_system_daemon
(NeDynamicSystem*dynamicsystemPtr,NeModelParameters modelParameters,
NeSolverParameters solverParameters,PmAllocator*allocatorPtr,
DaeDynamicInfoWrapper*ddiWrapper);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_std.h"
#include "ne_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct NeConstraintStatTag NeConstraintStat;struct NeConstraintStatTag
{void(*mVariable)(NeConstraintStat const*,NeVariableData const*);struct
NeConstraintStatData*mData;};typedef struct NeCompStatsTag NeCompStats;struct
NeCompStatsTag{NeConstraintStat const*(*mConstraint)(NeCompStats const*);
struct NeCompStatsData*mData;};NeSolverSystem*
nes_create_index_reduced_solver_system(NeSolverSystem*basePtr,
NeSolverParameters sp,NeCompStats const*compStats,PmAllocator*allocatorPtr);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
NeSolverSystem*nes_create_optimized_solver_system(NeSolverSystem*
solverSystemPtr,PmAllocator*allocatorPtr);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_std.h"
#include "ne_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
NeSolverSystem*nes_create_regularized_solver_system(NeSolverSystem*ss,
NeSolverParameters sp,PmAllocator*allocator);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_std_fwd.h"
#include "ne_ds.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct NeProfilingServiceTag{NeDynamicSystem*(*mProfileDs)(NeProfiler
const*,NeDynamicSystem*);NeSolverSystem*(*mProfileSs)(NeProfiler const*,
NeSolverSystem*,char const*);NeDae*(*mProfileDae)(NeProfiler const*,NeDae*);}
NeProfilingService;boolean_T nes_set_profiling_service(NeProfilingService*);
NeDynamicSystem*nes_profile_dynamic_system(NeProfiler const*,NeDynamicSystem*)
;NeSolverSystem*nes_profile_solver_system(NeProfiler const*,NeSolverSystem*,
char const*);NeDae*nes_profile_dae(NeProfiler const*,NeDae*);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_std.h"
#include "mc_std.h"
#include "ne_std.h"
#include "pm_std.h"
#include "pm_std.h"
#include "pm_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct McStateTracerInfoTag McStateTracerInfo;struct
McStateTracerInfoTag{void*mPrivateData;void(*mLogSolveInfo)(McStateTracerInfo*
,PmfMessageId solveId,PmfMessageId label);void(*mLogSolveInfoR)(
McStateTracerInfo*,PmfMessageId solveId,PmfMessageId label,real_T data);void(*
mLogSolveInfoRv)(McStateTracerInfo*,PmfMessageId solveId,PmfMessageId label,
PmRealVector const*data);void(*mLogSolveInfoPr)(McStateTracerInfo*,
PmfMessageId solveId,PmfMessageId label,PmSparsityPattern const*pattern,
PmRealVector const*data);};typedef struct McNonlinearEquationTag
McNonlinearEquation;typedef struct McNonlinearEquationPrivateDataTag
McNonlinearEquationPrivateData;typedef struct McNonlinearStateTracerTag
McNonlinearStateTracer;struct McNonlinearStateTracerTag{McStateTracerInfo*
mInfoTracer;void(*mLogSolveValues)(McNonlinearEquation const*eq,PmRealVector
const*in,PmfMessageId solveId);};struct McNonlinearEquationTag{
McNonlinearEquationPrivateData*mPrivateData;PmSparsityPattern const*mPattern;
McNonlinearStateTracer mStateTracer;void(*mEvaluateFunction)(
McNonlinearEquation const*eq,PmRealVector const*in,PmRealVector*out);void(*
mEvaluateJacobian)(McNonlinearEquation const*eq,PmRealVector const*in,
PmRealVector*out);void(*mEvaluateTolerances)(McNonlinearEquation const*eq,
PmRealVector const*in,PmRealVector*out);void(*mDestroy)(McNonlinearEquation*eq
);};typedef struct McNonlinearSolverTag McNonlinearSolver;typedef struct
McNonlinearSolverPrivateDataTag McNonlinearSolverPrivateData;typedef struct
McSolverDiagnosticTag McSolverDiagnostic;struct McSolverDiagnosticTag{int32_T
mBadEquations[5];};PMF_DEPLOY_STATIC McSolverDiagnostic
mc_get_default_diagnostic(void){int32_T i=0;McSolverDiagnostic result;for(i=0;
i<5;i++){result.mBadEquations[i]= -1;}return result;}struct
McNonlinearSolverTag{McNonlinearSolverPrivateData*mPrivateData;
McSolverDiagnostic(*mGetDiagnostic)(McNonlinearSolver const*nls);
McSolverStatus(*mSolve)(McNonlinearSolver const*nls,PmRealVector*rv);void(*
mSetFactor)(McNonlinearSolver const*nls,real_T factor);void(*mUpdateCache)(
McNonlinearSolver const*nls);void(*mDestroy)(McNonlinearSolver*nls);};typedef
struct McNonlinearSolverFactoryTag McNonlinearSolverFactory;typedef struct
McNonlinearSolverFactoryPrivateDataTag McNonlinearSolverFactoryPrivateData;
struct McNonlinearSolverFactoryTag{McNonlinearSolverFactoryPrivateData*
mPrivateData;McNonlinearSolver*(*mCreateSolver)(McNonlinearSolverFactory const
*nlsf,McNonlinearEquation const*eq);void(*mDestroy)(McNonlinearSolverFactory*
nlsf);};typedef struct McHybridEquationTag McHybridEquation;typedef struct
McHybridEquationPrivateDataTag McHybridEquationPrivateData;typedef struct
McHybridStateTracerTag McHybridStateTracer;struct McHybridStateTracerTag{
McStateTracerInfo*mInfoTracer;void(*mLogSolveValues)(McHybridEquation const*eq
,PmIntVector const*modes,PmRealVector const*in,PmfMessageId solveId);};struct
McHybridEquationTag{McHybridEquationPrivateData*mPrivateData;PmSparsityPattern
const*mPattern;size_t mNumModes;McHybridStateTracer mStateTracer;void(*
mEvaluateFunction)(McHybridEquation const*eq,PmIntVector const*modes,
PmRealVector const*in,PmRealVector*out);void(*mEvaluateJacobian)(
McHybridEquation const*eq,PmIntVector const*modes,PmRealVector const*in,
PmRealVector*out);void(*mEvaluateTolerances)(McHybridEquation const*eq,
PmIntVector const*modes,PmRealVector const*in,PmRealVector*out);void(*
mComputeModes)(McHybridEquation const*eq,PmIntVector const*modes,PmRealVector
const*in,PmIntVector*out);void(*mDestroy)(McHybridEquation*eq);};typedef struct
McHybridSolverTag McHybridSolver;typedef struct McHybridSolverPrivateDataTag
McHybridSolverPrivateData;struct McHybridSolverTag{McHybridSolverPrivateData*
mPrivateData;McSolverStatus(*mSolve)(McHybridSolver const*,PmIntVector*,
PmRealVector*);McSolverDiagnostic(*mGetDiagnostic)(McHybridSolver const*nls);
void(*mSetFactor)(McHybridSolver const*nls,real_T factor);void(*mUpdateCache)(
McHybridSolver const*);void(*mDestroy)(McHybridSolver*nls);};typedef struct
McHybridSolverFactoryTag McHybridSolverFactory;typedef struct
McHybridSolverFactoryPrivateDataTag McHybridSolverFactoryPrivateData;struct
McHybridSolverFactoryTag{McHybridSolverFactoryPrivateData*mPrivateData;
McHybridSolver*(*mCreateSolver)(McHybridSolverFactory const*nlsf,
McHybridEquation const*eq);void(*mDestroy)(McHybridSolverFactory*nlsf);};
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct NeuSystemEquationPrivateDataTag NeuSystemEquationPrivateData;
typedef struct NeuSystemEquationTag NeuSystemEquation;struct
NeuSystemEquationTag{McHybridEquation const*mGenericEquation;PmBoolVector const
*mLinearEquations;PmRealVector const*mMin;PmRealVector const*mMax;
NeuSystemEquationPrivateData*mPrivateData;void(*mInitialize)(NeuSystemEquation
const*eq,NeSystemInput const*si,PmRealVector*state);void(*mTerminate)(
NeuSystemEquation const*eq,NeSystemInput const*si,PmRealVector const*state,
PmRealVector*out);NeSystemInputSizes(*mSizes)(NeuSystemEquation const*eq);
McSolverDiagnostic(*mConvertDiagnostic)(NeuSystemEquation const*eq,
McSolverDiagnostic genericEqnDiag);void(*mDestroy)(NeuSystemEquation*);};
typedef struct NeuSystemSolverPrivateDataTag NeuSystemSolverPrivateData;
typedef struct NeuSystemSolverTag NeuSystemSolver;struct NeuSystemSolverTag{
NeuSystemSolverPrivateData*mPrivateData;McSolverStatus(*mSolve)(
NeuSystemSolver const*sol,NeSystemInput const*si);McSolverDiagnostic(*
mGetDiagnostic)(NeuSystemSolver const*sol);void(*mSetFactor)(NeuSystemSolver
const*sol,real_T factor);void(*mUpdateCache)(NeuSystemSolver const*sol);void(*
mDestroy)(NeuSystemSolver*sol);};typedef struct NeuAdvanceableTag
NeuAdvanceable;typedef struct NeuAdvanceablePrivateDataTag
NeuAdvanceablePrivateData;struct NeuAdvanceableTag{McRealFunction*mFF;
McMatrixFunction*mMM;McMatrixFunction*mDxf;McRealFunction*mTol;McRealFunction*
mXdDot;McIntFunction*mModes;McHybridSolverFactory*mSolverFactory;
McHybridSolverFactory*mRobustFactory;real_T mH;};typedef struct
NeuAdvancingSolverTag NeuAdvancingSolver;typedef struct
NeuAdvancingSolverPrivateDataTag NeuAdvancingSolverPrivateData;struct
NeuAdvancingSolverTag{NeuAdvancingSolverPrivateData*mPrivateData;
NeuSystemSolver*mStep;boolean_T mNeedsEventNotify;McSolverStatus(*
mInitSolverState)(NeuAdvancingSolver const*solver,NeSystemInput const*si);
size_t(*mGetSolverStateSize)(NeuAdvancingSolver const*solver);void(*mReset)(
NeuAdvancingSolver const*solver);void(*mPutSolverState)(NeuAdvancingSolver
const*solver,PmRealVector const*state);void(*mGetSolverState)(
NeuAdvancingSolver const*solver,PmRealVector const*state);void(*mDestroy)(
NeuAdvancingSolver*solver);};typedef enum LinearizationFormatTag{
SS_FORMAT_MODE,DSS_NORMAL_MODE,DSS_SWL_MODE}LinearizationFormat;typedef int32_T
(*DiagnosisSupportMethod)(NeSolverSystem const*topSys,NeSystemInput const*
topInput,real_T,PmCharVector,boolean_T);typedef PmfMessageId(*
StiffDiagnosticMethod)(NeSolverSystem const*sys,NeSystemInput const*input,void
*st);typedef PmfMessageId(*LinearizationSupportMethod)(NeSolverSystem const*,
NeSystemInput const*,PmRealVector*,LinearizationFormat const);typedef
PmfMessageId(*VslsSupportMethod)(PmRealVector const*);typedef void(*
EventIterationDiagMethod)(NeSolverSystem const*,NeSystemInput const*,
PmRealVector const*d,PmIntVector const*q,PmCharVector);typedef struct
NeSolverSupportMethodsTag{DiagnosisSupportMethod mDcDiagnosisSupportMethod;
DiagnosisSupportMethod mTrDiagnosisSupportMethod;DiagnosisSupportMethod
mAdvSolDiagnosisSupportMethod;DiagnosisSupportMethod mInconsistentIcMethod;
DiagnosisSupportMethod mIcJacobianDiagnosticsMethod;DiagnosisSupportMethod
mMassMatrixDiagnosticsMethod;LinearizationSupportMethod
mLinearizationSupportMethod;StiffDiagnosticMethod mStiffDiagnosticMethod;
VslsSupportMethod mVslsSupportMethod;EventIterationDiagMethod
mEventIterationDiagMethod;}NeSolverSupportMethods;void
nes_register_solver_support(NeSolverSupportMethods const*methods);
NeSolverSupportMethods const*nes_get_support_methods(void);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_std.h"
#include "ssc_dae_fwd.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct SscRTWLogFcnManagerTag SscRTWLogFcnManager;typedef struct
SscRTWLogFcnManagerObjectTag SscRTWLogFcnManagerObject;struct
SscRTWLogFcnManagerTag{void(*mRtwSetupLogFcn)(SscRTWLogFcnManager*);void(*
mRtwLogFcn)(SscRTWLogFcnManager*,double timeStep,double const*voidInputs,
double*buffer);void(*mRtwDestroy)(SscRTWLogFcnManager*);
SscRTWLogFcnManagerObject*mRtwObject;};
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_std_fwd.h"
#include "ne_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct NeOutputParametersTag NeOutputParameters;struct
NeOutputParametersTag{size_t mDaeIndex;size_t mOutputFunctionIndex;};
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_std.h"
#include "pm_std.h"
#include "ne_std.h"
#include "ne_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct NeslRtpManagerTag NeslRtpManager;typedef struct
NeslRtpManagerUserDataTag NeslRtpManagerUserData;struct NeslRtpManagerTag{
NeslRtpManagerUserData*mUserData;void(*mDestroy)(NeslRtpManager*);
NeParameterInfo(*mParameterInfo)(NeslRtpManager const*);boolean_T(*
mSetParameters)(NeslRtpManager const*,double,NeParameterBundle const*,
NeuDiagnosticManager*);};
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_std.h"
#include "ne_std.h"
#include "ne_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct NeslSolverHitManagerTag NeslSolverHitManager;typedef struct
NeslSolverHitManagerUserDataTag NeslSolverHitManagerUserData;struct
NeslSolverHitManagerTag{NeslSolverHitManagerUserData*mUserData;void(*mDestroy)
(NeslSolverHitManager*);void(*mGetSolverHits)(NeslSolverHitManager const*,
NeuDiagnosticManager*,PmRealVector*);size_t(*mSolverHitsSize)(
NeslSolverHitManager const*);};
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_inline.h"
#include "mc_std.h"
#include "ne_std_fwd.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ssc_dae.h"
#include "ssc_dae_fwd.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
struct NeCustomDataSizeTag{size_t mDoubleSize;size_t mIntegerSize;};struct
NeCustomDataTag{double*mDouble;int32_T*mInteger;NeCustomDataSize mSizes;
NeCustomData*mChildData;};NeCustomDataSize ne_get_zero_custom_data_size(void);
NeCustomData*ne_allocate_custom_data(NeCustomDataSize sizes);NeCustomData*
ne_allocate_empty_custom_data(void);void ne_free_custom_data(NeCustomData*ncd)
;size_t ne_measure_packed_custom_data(NeCustomData const*ncd);void
ne_pack_custom_data(NeCustomData const*ncd,char*store);NeCustomData*
ne_recreate_custom_data(char const*store,size_t len);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_stiffness_fwd.h"
#include "pm_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct McSparseMatrixTag McSparseMatrix;struct McSparseMatrixTag{
PmSparsityPattern*mPattern;PmRealVector*mPr;};McSparseMatrix*
mc_assemble_sparse_matrix(PmSparsityPattern const*patternPtr,PmRealVector const
*prPtr,PmAllocator*allocatorPtr);void mc_disassemble_sparse_matrix(
McSparseMatrix*matrix,PmAllocator*allocatorPtr);McSparseMatrix*
mc_create_sparse_matrix(size_t nNzMax,size_t nRow,size_t nCol,PmAllocator*
allocatorPtr);McSparseMatrix*mc_copy_sparse_matrix(McSparseMatrix const*
matrixPtr,PmAllocator*allocatorPtr);McSparseMatrix*
mc_create_identity_sparse_matrix(size_t n,PmAllocator*allocatorPtr);
McSparseMatrix*mc_create_hcat_sparse_matrix(McSparseMatrix const*a,
McSparseMatrix const*b,PmAllocator*allocatorPtr);McSparseMatrix*
mc_create_vcat_sparse_matrix(McSparseMatrix const*a,McSparseMatrix const*b,
PmAllocator*allocatorPtr);McSparseMatrix*mc_create_section_sparse_matrix(
McSparseMatrix const*matrix,size_t rowStart,size_t rowEndPlusOne,size_t
colStart,size_t colEndPlusOne,PmAllocator*allocatorPtr);McSparseMatrix*
mc_create_transpose_sparse_matrix(McSparseMatrix const*matrix,PmAllocator*
allocatorPtr);McSparseMatrix*mc_create_colperm_sparse_matrix(McSparseMatrix
const*matrix,PmIntVector const*perm,PmAllocator*allocatorPtr);McSparseMatrix*
mc_create_rowperm_sparse_matrix(McSparseMatrix const*matrix,PmIntVector const*
perm,PmAllocator*allocatorPtr);McSparseMatrix*
mc_create_right_padded_sparse_matrix(McSparseMatrix const*matrix,size_t padding
,PmAllocator*allocatorPtr);McSparseMatrix*
mc_create_bottom_padded_sparse_matrix(McSparseMatrix const*matrix,size_t
padding,PmAllocator*allocatorPtr);McSparseMatrix*
mc_create_product_sparse_matrix(McSparseMatrix const*A,McSparseMatrix const*B,
PmAllocator*allocatorPtr);McSparseMatrix*mc_create_sum_sparse_matrix(
McSparseMatrix const*A,McSparseMatrix const*B,PmAllocator*allocatorPtr);
McSparseMatrix*mc_create_sparse_submatrix(McSparseMatrix const*matrix,
PmBoolVector const*selectedRows,PmBoolVector const*selectedCols,PmAllocator*
allocatorPtr);McSparseMatrix*mc_create_sparse_supermatrix(McSparseMatrix const
*matrix,PmBoolVector const*rows,PmBoolVector const*cols,PmAllocator*al);
McSparseMatrix*mc_create_sparse_restriction(McSparseMatrix const*matrix,
PmBoolVector const*selectedRows,PmBoolVector const*selectedCols,PmAllocator*
allocatorPtr);McSparseMatrix*mc_extract_col(McSparseMatrix const*matrix,size_t
col,PmAllocator*allocatorPtr);McSparseMatrix*mc_extract_row(McSparseMatrix
const*matrix,size_t row,PmAllocator*allocatorPtr);McSparseMatrix*mc_remove_col
(McSparseMatrix const*matrix,size_t col,PmAllocator*allocatorPtr);
McSparseMatrix*mc_remove_row(McSparseMatrix const*matrix,size_t row,
PmAllocator*allocatorPtr);void mc_destroy_sparse_matrix(McSparseMatrix*
matrixPtr,PmAllocator*allocatorPtr);McSparseMatrix*mc_remove_element(
McSparseMatrix const*matrix,size_t element,PmAllocator*allocator);
McSparseMatrix*mc_clean_sparse_matrix(McSparseMatrix const*in,PmAllocator*
allocator);typedef struct NeslContLtiDataTag NeslContLtiData;struct
NeslContLtiDataTag{PmRealVector*mLtiFlatU;McSparseMatrix mDx;McSparseMatrix mDu
;PmRealVector mC0;boolean_T mEmptyDx;boolean_T mEmptyDu;};
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_inline.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct NeslSimulationDataTag NeslSimulationData;typedef struct
NeslSimulationDataDataTag NeslSimulationDataData;struct NeslSimulationDataTag{
PmRealVector*(*mTime)(const NeslSimulationData*);PmRealVector*(*mContStates)(
const NeslSimulationData*);PmIntVector*(*mModeVector)(const NeslSimulationData
*);PmRealVector*(*mDiscStates)(const NeslSimulationData*);PmIntVector*(*
mSwitchingCoeffs)(const NeslSimulationData*);PmRealVector*(*mJacobianElems)(
const NeslSimulationData*);PmIntVector*(*mSampleHits)(const NeslSimulationData
*);PmRealVector*(*mOutputs)(const NeslSimulationData*);PmRealVector*(*mDx)(
const NeslSimulationData*);PmRealVector*(*mNonSampledZCs)(const
NeslSimulationData*);PmRealVector*(*mResiduals)(const NeslSimulationData*);
PmRealVector*(*mTolerances)(const NeslSimulationData*);PmSparsityPattern*(*
mM_P)(const NeslSimulationData*);PmRealVector*(*mMassMatrixPr)(const
NeslSimulationData*);PmSparsityPattern*(*mLinJacobianPattern)(const
NeslSimulationData*);PmRealVector*(*mLinJacobian)(const NeslSimulationData*);
PmSparsityPattern*(*mSolJacobianPattern)(const NeslSimulationData*);
PmRealVector*(*mSolJacobianPr)(const NeslSimulationData*);PmRealVector*(*
mNumjacDxLo)(const NeslSimulationData*);PmRealVector*(*mNumjacDxHi)(const
NeslSimulationData*);PmRealVector*(*mInputValues)(const NeslSimulationData*);
PmIntVector*(*mInputOffsets)(const NeslSimulationData*);boolean_T*(*
mFoundZcEvents)(const NeslSimulationData*);boolean_T*(*mHadEvents)(const
NeslSimulationData*);boolean_T*(*mIsMajorTimeStep)(const NeslSimulationData*);
boolean_T*(*mIsSolverAssertCheck)(const NeslSimulationData*);boolean_T*(*
mIsSolverCheckingCIC)(const NeslSimulationData*);boolean_T*(*
mIsComputingJacobian)(const NeslSimulationData*);boolean_T*(*mIsEvaluatingF0)(
const NeslSimulationData*);boolean_T*(*mIsSolverRequestingReset)(const
NeslSimulationData*);boolean_T*(*mIsFundamentalSampleHit)(const
NeslSimulationData*);boolean_T*(*mIsModeUpdateTimeStep)(const
NeslSimulationData*);boolean_T*(*mCstateHasChanged)(const NeslSimulationData*)
;boolean_T*(*mDstateHasChanged)(const NeslSimulationData*);void(*mDestroy)(
NeslSimulationData*);NeslSimulationDataData*mData;};PMF_DEPLOY_STATIC
PmRealVector nesl_get_time(const NeslSimulationData*sd){return*(sd->mTime(sd))
;}PMF_DEPLOY_STATIC PmRealVector nesl_get_cont_states(const NeslSimulationData
*sd){return*(sd->mContStates(sd));}PMF_DEPLOY_STATIC PmIntVector
nesl_get_mode_vector(const NeslSimulationData*sd){return*(sd->mModeVector(sd))
;}PMF_DEPLOY_STATIC PmRealVector nesl_get_disc_states(const NeslSimulationData
*sd){return*(sd->mDiscStates(sd));}PMF_DEPLOY_STATIC PmIntVector
nesl_get_switching_coefficients(const NeslSimulationData*sd){return*(sd->
mSwitchingCoeffs(sd));}PMF_DEPLOY_STATIC PmRealVector
nesl_get_jacobian_elements(const NeslSimulationData*sd){return*(sd->
mJacobianElems(sd));}PMF_DEPLOY_STATIC PmIntVector nesl_get_sample_hits(const
NeslSimulationData*sd){return*(sd->mSampleHits(sd));}PMF_DEPLOY_STATIC
PmRealVector nesl_get_outputs(const NeslSimulationData*sd){return*(sd->
mOutputs(sd));}PMF_DEPLOY_STATIC PmRealVector nesl_get_dx(const
NeslSimulationData*sd){return*(sd->mDx(sd));}PMF_DEPLOY_STATIC PmRealVector
nesl_get_nonsampled_zcs(const NeslSimulationData*sd){return*(sd->
mNonSampledZCs(sd));}PMF_DEPLOY_STATIC PmRealVector nesl_get_residuals(const
NeslSimulationData*sd){return*(sd->mResiduals(sd));}PMF_DEPLOY_STATIC
PmRealVector nesl_get_tolerances(const NeslSimulationData*sd){return*(sd->
mTolerances(sd));}PMF_DEPLOY_STATIC PmSparsityPattern
nesl_get_mass_matrix_pattern(const NeslSimulationData*sd){return*(sd->mM_P(sd)
);}PMF_DEPLOY_STATIC PmRealVector nesl_get_mass_matrix_pr(const
NeslSimulationData*sd){return*(sd->mMassMatrixPr(sd));}PMF_DEPLOY_STATIC
PmSparsityPattern nesl_get_lin_jacobian_pattern(const NeslSimulationData*sd){
return*(sd->mLinJacobianPattern(sd));}PMF_DEPLOY_STATIC PmRealVector
nesl_get_lin_jacobian(const NeslSimulationData*sd){return*(sd->mLinJacobian(sd
));}PMF_DEPLOY_STATIC PmSparsityPattern nesl_get_sol_jacobian_pattern(const
NeslSimulationData*sd){return*(sd->mSolJacobianPattern(sd));}PMF_DEPLOY_STATIC
PmRealVector nesl_get_sol_jacobian_pr(const NeslSimulationData*sd){return*(sd
->mSolJacobianPr(sd));}PMF_DEPLOY_STATIC PmRealVector nesl_get_numjac_dx_lo(
const NeslSimulationData*sd){return*(sd->mNumjacDxLo(sd));}PMF_DEPLOY_STATIC
PmRealVector nesl_get_numjac_dx_hi(const NeslSimulationData*sd){return*(sd->
mNumjacDxHi(sd));}PMF_DEPLOY_STATIC PmRealVector nesl_get_input_values(const
NeslSimulationData*sd){return*(sd->mInputValues(sd));}PMF_DEPLOY_STATIC
PmIntVector nesl_get_input_offsets(const NeslSimulationData*sd){return*(sd->
mInputOffsets(sd));}PMF_DEPLOY_STATIC boolean_T nesl_found_zcs(const
NeslSimulationData*sd){return*(sd->mFoundZcEvents(sd));}PMF_DEPLOY_STATIC
boolean_T nesl_had_events(const NeslSimulationData*sd){return*(sd->mHadEvents(
sd));}PMF_DEPLOY_STATIC boolean_T nesl_is_major_time_step(const
NeslSimulationData*sd){return*(sd->mIsMajorTimeStep(sd));}PMF_DEPLOY_STATIC
boolean_T nesl_is_solver_assert_check(const NeslSimulationData*sd){return*(sd
->mIsSolverAssertCheck(sd));}PMF_DEPLOY_STATIC boolean_T
nesl_is_solver_checking_cic(const NeslSimulationData*sd){return*(sd->
mIsSolverCheckingCIC(sd));}PMF_DEPLOY_STATIC boolean_T
nesl_is_computing_jacobian(const NeslSimulationData*sd){return*(sd->
mIsComputingJacobian(sd));}PMF_DEPLOY_STATIC boolean_T nesl_is_evaluating_f0(
const NeslSimulationData*sd){return*(sd->mIsEvaluatingF0(sd));}
PMF_DEPLOY_STATIC boolean_T nesl_is_solver_requesting_reset(const
NeslSimulationData*sd){return*(sd->mIsSolverRequestingReset(sd));}
PMF_DEPLOY_STATIC boolean_T nesl_is_fundamental_sample_hit(const
NeslSimulationData*sd){return*(sd->mIsFundamentalSampleHit(sd));}
PMF_DEPLOY_STATIC boolean_T nesl_is_mode_update_time_step(const
NeslSimulationData*sd){return*(sd->mIsModeUpdateTimeStep(sd));}
PMF_DEPLOY_STATIC void nesl_set_cstate_has_changed(const NeslSimulationData*sd
,boolean_T value){*(sd->mCstateHasChanged(sd))=value;}PMF_DEPLOY_STATIC
boolean_T nesl_get_cstate_has_changed(const NeslSimulationData*sd){return*(sd
->mCstateHasChanged(sd));}PMF_DEPLOY_STATIC void nesl_set_dstate_has_changed(
const NeslSimulationData*sd,boolean_T value){*(sd->mDstateHasChanged(sd))=
value;}PMF_DEPLOY_STATIC boolean_T nesl_get_dstate_has_changed(const
NeslSimulationData*sd){return*(sd->mDstateHasChanged(sd));}PMF_DEPLOY_STATIC
boolean_T nesl_has_sample_hits(NeslSimulationData const*sd){size_t i;
PmIntVector sample_hits=nesl_get_sample_hits(sd);for(i=0;i<sample_hits.mN;i++)
{if(sample_hits.mX[i]){return true;}}return false;}typedef struct
NeslSimulationSizesTag{size_t mNumContStates;size_t mNumDiscStates;size_t
mNumModes;size_t mNumOutputs;size_t mNumZCs;size_t mNumRanges;size_t
mNumSamples;size_t mNumMassMatrixNzMax;size_t mNumLinJacobianNzMax;size_t
mNumSolJacobianNzMax;size_t mNumTrimResiduals;size_t mNumCStateNames;size_t
mNumDStateNames;size_t mNumSwitchingCoefficients;size_t mNumJacobianElements;
boolean_T mDisableProjection;boolean_T mDefaultLinJacobian;boolean_T
mDisableSolJacobian;boolean_T mIsMConstant;boolean_T mIsMRuntimeScaled;
boolean_T mUpdateJacobianAtReset;boolean_T mIsDae;boolean_T mHasUpdate;
PmIntVector const*mNumInputs;PmBoolVector const*mDirectFeedthrough;}
NeslSimulationSizes;typedef struct NeslStateNameDataTag{size_t mWidth;char
const*mStateName;char const*mBlockName;}NeslStateNameData;typedef struct
NeslStateNameVectorTag{NeslStateNameData*mStateNames;size_t mNumStateNames;}
NeslStateNameVector;typedef enum NeslSimulatorMethodIdTag{NESL_SIM_INVALID= -1
,NESL_SIM_INITIALIZEONCE,NESL_SIM_INITSYSTEMMATRICES,NESL_SIM_OUTPUTS,
NESL_SIM_UPDATE,NESL_SIM_PROJECTION,NESL_SIM_MASSMATRIX,NESL_SIM_DERIVATIVES,
NESL_SIM_FORCINGFUNCTION,NESL_SIM_ZEROCROSSINGS,NESL_SIM_LINJACOBIAN,
NESL_SIM_LINJACOBIAN_DSS,NESL_SIM_SOLJACOBIAN,NESL_SIM_LINJACOBIANIRJC,
NESL_SIM_LINJACOBIANIRJC_DSS,NESL_SIM_SOLJACOBIANIRJC,NESL_SIM_RESIDUALS,
NESL_SIM_TOLERANCES,NESL_SIM_REINIT,NESL_SIM_NUMJAC_DX_BOUNDS,
NESL_SIM_PUSHINFO,NESL_NUM_SIMULATOR_METHODS}NeslSimulatorMethodId;typedef
struct NeslSimulatorTag NeslSimulator;typedef struct NeslSimulatorUserDataTag
NeslSimulatorUserData;typedef enum NeslSimulatorStatusTag{NESL_SIM_ERROR= -1,
NESL_SIM_OK}NeslSimulatorStatus;typedef NeslSimulatorStatus(*
NeslSimulatorMethod)(NeslSimulator const*,NeslSimulationData const*,
NeuDiagnosticManager*);typedef void(*NeslSimulatorInitializeStartStatus)(void*
);typedef void(*NeslSimulatorInitializeEndStatus)(void*);struct
NeslSimulatorTag{NeslSimulatorUserData*mUserData;NeslSimulatorMethod mMethods[
NESL_NUM_SIMULATOR_METHODS];NeslSimulationSizes(*mSizes)(NeslSimulator const*s
);void(*mCStateNames)(NeslSimulator const*s,NeslStateNameVector const*snv);
void(*mDStateNames)(NeslSimulator const*s,NeslStateNameVector const*snv);void(
*mSampleTimes)(NeslSimulator const*s,PmRealVector*periods,PmRealVector*offsets
);NeslSimulatorStatus(*mInitialize)(NeslSimulator const*s,NeModelParameters
const*mp,NeuDiagnosticManager*mgr,NeslSimulatorInitializeStartStatus start,
NeslSimulatorInitializeEndStatus end,void*rb);NeslContLtiData const*(*
mGetContLtiData)(NeslSimulator const*s);SLMatrices const**(*mGetSLMatrices)(
NeslSimulator const*s);NeslSimulatorStatus(*mGetStiffness)(NeslSimulator const
*s,NeslSimulationData const*sim_data,void*st,NeuDiagnosticManager*);
NeStiffness*mStiffness;void(*mLogIterations)(NeslSimulator const*s,
NeslSimulationData const*sim_data,IterationsLogCore*il);NeslSimulatorStatus(*
mGetMaxFreq)(NeslSimulator const*simulator_ptr,double*out);void(*mDestroy)(
NeslSimulator*);NeCustomData*(*mGetCustomData)(NeslSimulator const*);
NeslSimulatorStatus(*mSetCustomData)(NeCustomData const*,NeslSimulator const*,
NeuDiagnosticManager*);NeZCData const*mZCData;NeRange const*mRanges;
NeParameterInfo mParameterInfo;void(*mSetParameters)(NeslSimulator const*,
NeParameterBundle const*);};PMF_DEPLOY_STATIC NeslSimulatorStatus
ne_simulator_method(NeslSimulator const*simulator_ptr,NeslSimulatorMethodId
method_id,NeslSimulationData const*sim_data,NeuDiagnosticManager*mgr){return
simulator_ptr->mMethods[method_id](simulator_ptr,sim_data,mgr);}typedef enum
NeslSimulatorCategoryTag{NESL_SIMULATOR_CATEGORY_INVALID= -1,
NESL_SIMULATOR_CATEGORY_STATE,NESL_SIMULATOR_CATEGORY_OUTPUT,
NESL_SIMULATOR_CATEGORY_NUM}NeslSimulatorCategory;typedef struct
NeslSimulatorGroupTag NeslSimulatorGroup;typedef struct
NeslSimulatorGroupDataTag NeslSimulatorGroupData;struct NeslSimulatorGroupTag{
NeslSimulator const*(*mSimulator)(NeslSimulatorGroup const*g,
NeslSimulatorCategory c,size_t i);NeslRtpManager const*(*mRtpManager)(
NeslSimulatorGroup const*g,size_t i);SscRTWLogFcnManager const*(*
mRtwLogFcnManager)(NeslSimulatorGroup const*g,size_t i);NeslSolverHitManager
const*(*mSolverHitManager)(NeslSimulatorGroup const*g,size_t i);
NeslSimulatorGroup*(*mClone)(NeslSimulatorGroup const*g);void(*mGetReference)(
NeslSimulatorGroup*g);void(*mReleaseReference)(NeslSimulatorGroup*g);
NeProfiler const*mProfiler;NeslSimulatorGroupData*mData;size_t mNumSimulators[
NESL_SIMULATOR_CATEGORY_NUM];size_t mNumRtpManagers;size_t
mNumRtwLogFcnManagers;size_t mNumSolverHitManagers;};PmfMessageId
nesl_register_simulator_group(char const*key,size_t const numDae,NeDae*const*
dae,NeSolverParameters const*sp,NeModelParameters const*mp,size_t const
numOutputs,NeOutputParameters const*op,size_t const numRtpDaes,int const*
rtpDaes,size_t const numRtwLoggingDaes,int const*rtwLoggingDaes,size_t const
numSolverHitDaes,int const*solverhitDaes);typedef struct
NeslSimulatorGroupRegistryTag NeslSimulatorGroupRegistry;typedef struct
NeslSimulatorGroupRegistryDataTag NeslSimulatorGroupRegistryData;struct
NeslSimulatorGroupRegistryTag{void(*mInsert)(NeslSimulatorGroupRegistry const*
registry,char const*key,NeslSimulatorGroup*group);void(*mErase)(
NeslSimulatorGroupRegistry const*registry,char const*key);void(*mEraseModel)(
NeslSimulatorGroupRegistry const*registry,char const*model);boolean_T(*
mIsEmpty)(NeslSimulatorGroupRegistry const*registry);NeslSimulatorGroup*(*
mLookup)(NeslSimulatorGroupRegistry const*registry,char const*key);
NeslSimulator const*(*mLeaseSimulator)(NeslSimulatorGroupRegistry const*
registry,char const*key,NeslSimulatorCategory cat,size_t idx);NeslRtpManager
const*(*mLeaseRtpManager)(NeslSimulatorGroupRegistry const*registry,char const
*key,size_t idx);SscRTWLogFcnManager const*(*mLeaseRtwLogFcnManager)(
NeslSimulatorGroupRegistry const*registry,char const*key,size_t idx);
NeslSolverHitManager const*(*mLeaseSolverHitManager)(
NeslSimulatorGroupRegistry const*registry,char const*key,size_t idx);boolean_T
(*mHasBeenCloned)(NeslSimulatorGroupRegistry const*registry,char const*key);
void(*mClear)(NeslSimulatorGroupRegistry const*registry);void(*mDestroy)(
NeslSimulatorGroupRegistry*registry);NeslSimulatorGroupRegistryData*mData;};
NeslSimulatorGroupRegistry const*nesl_get_registry(void);void
nesl_destroy_current_registry(void);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_std.h"
#include "pm_std.h"
#include "pm_std.h"
#include "ssc_dae.h"
#include "pm_std.h"
#include "pm_std.h"
#include "ne_std_fwd.h"
#include "ne_std_fwd.h"
#include "ne_std_fwd.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ne_std.h"
#include "pm_log.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct NeSsDataTag NeSsData;typedef union NeSsMethodOutputTag{
PmSparsityPattern mM_P;PmRealVector mM;PmSparsityPattern mMLIN_P;PmRealVector
mMLIN;PmSparsityPattern mDXM_P;PmRealVector mDXM;PmSparsityPattern mDDM_P;
PmRealVector mDDM;PmSparsityPattern mDUM_P;PmRealVector mDUM;PmSparsityPattern
mDPM_P;PmRealVector mDPM;PmSparsityPattern mDTM_P;PmRealVector mDTM;
PmRealVector mF;PmBoolVector mVDF;PmBoolVector mVMF;PmBoolVector mVMM;
PmBoolVector mVPF;PmBoolVector mVSF;PmBoolVector mVNLDXF;PmBoolVector mVNLM;
PmBoolVector mSLF;PmBoolVector mSLF0;PmSparsityPattern mDXF_P;PmRealVector mDXF
;PmSparsityPattern mDXFLIN_P;PmRealVector mDXFLIN;PmSparsityPattern mDPDXF_P;
PmRealVector mDPDXF;PmSparsityPattern mTDXF_P;PmSparsityPattern mDUF_P;
PmRealVector mDUF;PmSparsityPattern mTDUF_P;PmSparsityPattern mDTF_P;
PmRealVector mDTF;PmSparsityPattern mDNF_P;PmRealVector mDNF;PmSparsityPattern
mDDF_P;PmRealVector mDDF;PmRealVector mY;PmSparsityPattern mDXY_P;PmRealVector
mDXY;PmSparsityPattern mMDXY_P;PmSparsityPattern mTDXY_P;PmSparsityPattern
mDUY_P;PmRealVector mDUY;PmSparsityPattern mMDUY_P;PmSparsityPattern mTDUY_P;
PmSparsityPattern mDTY_P;PmRealVector mDTY;PmRealVector mC;PmSparsityPattern
mDXC_P;PmRealVector mDXC;PmSparsityPattern mDDC_P;PmRealVector mDDC;
PmRealVector mCER;PmSparsityPattern mDXCER_P;PmRealVector mDXCER;
PmSparsityPattern mDDCER_P;PmRealVector mDDCER;PmRealVector mIC;PmRealVector
mICR;PmSparsityPattern mDXICR_P;PmRealVector mDXICR;PmSparsityPattern mDDICR_P
;PmRealVector mDDICR;PmSparsityPattern mTDUICR_P;PmIntVector mICR_IM;
PmBoolVector mICR_ID;PmBoolVector mICR_IL;PmSparsityPattern mICRM_P;
PmRealVector mICRM;PmSparsityPattern mDXICRM_P;PmRealVector mDXICRM;
PmSparsityPattern mDDICRM_P;PmRealVector mDDICRM;PmRealVector mFREQS;
PmRealVector mSOLVERHITS;PmRealVector mZC;PmIntVector mMODE;PmIntVector
mUDOT_REQ;PmBoolVector mDXF_V_X;PmBoolVector mDUF_V_X;PmBoolVector mDTF_V_X;
PmBoolVector mDNF_V_X;PmRealVector mSO;PmRealVector mSP;PmBoolVector mLV;
PmBoolVector mSLV;PmBoolVector mNLDV;PmBoolVector mSCLV;PmRealVector mQX;
PmSparsityPattern mQX_P;PmRealVector mQU;PmSparsityPattern mQU_P;PmRealVector
mQT;PmSparsityPattern mQT_P;PmRealVector mQ1;PmSparsityPattern mQ1_P;
PmIntVector mASSERT;PmIntVector mPASSERT;PmIntVector mIASSERT;PmRealVector
mDELAYS;PmRealVector mOBS_EXP;PmRealVector mOBS_ACT;PmBoolVector mOBS_IL;
PmRealVector mVAR_TOL;PmRealVector mEQ_TOL;PmRealVector mIMIN;PmRealVector
mIMAX;PmRealVector mDIMIN;PmRealVector mDIMAX;PmBoolVector mLOCK_R;
PmBoolVector mLOCK_I;PmBoolVector mLOCK2_R;PmBoolVector mLOCK2_I;PmRealVector
mCACHE_R;PmIntVector mCACHE_I;PmRealVector mUPDATE_R;PmIntVector mUPDATE_I;
PmRealVector mUPDATE2_R;PmIntVector mUPDATE2_I;PmRealVector mJACOB;
PmRealVector mSTATE;}NeSsMethodOutput;typedef enum NeSsMethodIdTag{
NE_SS_INVALID_METHOD_ID= -1,NE_SS_METHOD_M_P,NE_SS_METHOD_M,
NE_SS_METHOD_MLIN_P,NE_SS_METHOD_MLIN,NE_SS_METHOD_DXM_P,NE_SS_METHOD_DXM,
NE_SS_METHOD_DDM_P,NE_SS_METHOD_DDM,NE_SS_METHOD_DUM_P,NE_SS_METHOD_DUM,
NE_SS_METHOD_DPM_P,NE_SS_METHOD_DPM,NE_SS_METHOD_DTM_P,NE_SS_METHOD_DTM,
NE_SS_METHOD_F,NE_SS_METHOD_VDF,NE_SS_METHOD_VMF,NE_SS_METHOD_VMM,
NE_SS_METHOD_VPF,NE_SS_METHOD_VSF,NE_SS_METHOD_VNLDXF,NE_SS_METHOD_VNLM,
NE_SS_METHOD_SLF,NE_SS_METHOD_SLF0,NE_SS_METHOD_DXF_P,NE_SS_METHOD_DXF,
NE_SS_METHOD_DXFLIN_P,NE_SS_METHOD_DXFLIN,NE_SS_METHOD_DPDXF_P,
NE_SS_METHOD_DPDXF,NE_SS_METHOD_TDXF_P,NE_SS_METHOD_DUF_P,NE_SS_METHOD_DUF,
NE_SS_METHOD_TDUF_P,NE_SS_METHOD_DTF_P,NE_SS_METHOD_DTF,NE_SS_METHOD_DNF_P,
NE_SS_METHOD_DNF,NE_SS_METHOD_DDF_P,NE_SS_METHOD_DDF,NE_SS_METHOD_Y,
NE_SS_METHOD_DXY_P,NE_SS_METHOD_DXY,NE_SS_METHOD_MDXY_P,NE_SS_METHOD_TDXY_P,
NE_SS_METHOD_DUY_P,NE_SS_METHOD_DUY,NE_SS_METHOD_MDUY_P,NE_SS_METHOD_TDUY_P,
NE_SS_METHOD_DTY_P,NE_SS_METHOD_DTY,NE_SS_METHOD_C,NE_SS_METHOD_DXC_P,
NE_SS_METHOD_DXC,NE_SS_METHOD_DDC_P,NE_SS_METHOD_DDC,NE_SS_METHOD_CER,
NE_SS_METHOD_DXCER_P,NE_SS_METHOD_DXCER,NE_SS_METHOD_DDCER_P,
NE_SS_METHOD_DDCER,NE_SS_METHOD_IC,NE_SS_METHOD_ICR,NE_SS_METHOD_DXICR_P,
NE_SS_METHOD_DXICR,NE_SS_METHOD_DDICR_P,NE_SS_METHOD_DDICR,
NE_SS_METHOD_TDUICR_P,NE_SS_METHOD_ICR_IM,NE_SS_METHOD_ICR_ID,
NE_SS_METHOD_ICR_IL,NE_SS_METHOD_ICRM_P,NE_SS_METHOD_ICRM,
NE_SS_METHOD_DXICRM_P,NE_SS_METHOD_DXICRM,NE_SS_METHOD_DDICRM_P,
NE_SS_METHOD_DDICRM,NE_SS_METHOD_FREQS,NE_SS_METHOD_SOLVERHITS,NE_SS_METHOD_ZC
,NE_SS_METHOD_MODE,NE_SS_METHOD_UDOT_REQ,NE_SS_METHOD_DXF_V_X,
NE_SS_METHOD_DUF_V_X,NE_SS_METHOD_DTF_V_X,NE_SS_METHOD_DNF_V_X,NE_SS_METHOD_SO
,NE_SS_METHOD_SP,NE_SS_METHOD_LV,NE_SS_METHOD_SLV,NE_SS_METHOD_NLDV,
NE_SS_METHOD_SCLV,NE_SS_METHOD_QX,NE_SS_METHOD_QX_P,NE_SS_METHOD_QU,
NE_SS_METHOD_QU_P,NE_SS_METHOD_QT,NE_SS_METHOD_QT_P,NE_SS_METHOD_Q1,
NE_SS_METHOD_Q1_P,NE_SS_METHOD_ASSERT,NE_SS_METHOD_PASSERT,
NE_SS_METHOD_IASSERT,NE_SS_METHOD_DELAYS,NE_SS_METHOD_OBS_EXP,
NE_SS_METHOD_OBS_ACT,NE_SS_METHOD_OBS_IL,NE_SS_METHOD_VAR_TOL,
NE_SS_METHOD_EQ_TOL,NE_SS_METHOD_IMIN,NE_SS_METHOD_IMAX,NE_SS_METHOD_DIMIN,
NE_SS_METHOD_DIMAX,NE_SS_METHOD_LOCK_R,NE_SS_METHOD_LOCK_I,
NE_SS_METHOD_LOCK2_R,NE_SS_METHOD_LOCK2_I,NE_SS_METHOD_CACHE_R,
NE_SS_METHOD_CACHE_I,NE_SS_METHOD_UPDATE_R,NE_SS_METHOD_UPDATE_I,
NE_SS_METHOD_UPDATE2_R,NE_SS_METHOD_UPDATE2_I,NE_SS_METHOD_JACOB,
NE_SS_METHOD_STATE,NE_SS_NUM_METHODS}NeSsMethodId;typedef enum NeSsSolveIdTag{
NE_SS_SOLVE_INVALID= -1,NE_SS_SOLVE_ICS,NE_SS_SOLVE_INIT,NE_SS_SOLVE_RESET,
NE_SS_SOLVE_NUM}NeSsSolveId;typedef int32_T(*NeSsMethod)(NeSolverSystem const*
,NeSystemInput const*,NeSsMethodOutput*);typedef NeSsMethodOutput*(*
NeSsMakeOutputFcn)(NeSolverSystem const*,PmAllocator*);typedef void(*
NeSsFreeOutputFcn)(NeSsMethodOutput*,PmAllocator*);typedef NeSsMethodOutput*(*
NeSsComputeOutputFcn)(NeSolverSystem const*,NeSystemInput const*,PmAllocator*,
NeSsMethodId);typedef int32_T(*NeSsSolve)(NeSolverSystem const*,NeSystemInput
const*);typedef NeSolverSystem const*(*NeSsBaseSystemFcn)(NeSolverSystem const
*,boolean_T);typedef void(*NeSsFillBaseInputFcn)(NeSolverSystem const*ssys,
NeSystemInput const*baseInput,NeSystemInput const*ssInput,boolean_T paramDeriv
);typedef void(*NeSsGetRealParams)(NeSolverSystem const*sys,NeSystemInput const
*input,PmRealVector const*pr);typedef void(*NeSsManagementFcn)(NeSolverSystem*
,PmAllocator*);typedef void(*NeSsSetupLoggerFcn)(NeSolverSystem const*,
NeLoggerBuilder*);typedef int32_T(*NeSsLogFcn)(NeSolverSystem const*,
NeSystemInput const*,PmRealVector*);typedef void(*NeSsSetParameters)(
NeSolverSystem const*,NeParameterBundle const*);typedef NeParameterBundle*(*
NeSsGetParameters)(NeSolverSystem const*);typedef void(*NeSsReportIc)(
NeSolverSystem const*,NeSystemInput const*,size_t,boolean_T);typedef void(*
NeSsReportMode)(NeSolverSystem const*,NeSystemInput const*,boolean_T,boolean_T
,int16_T);typedef void(*NeSsPushInfo)(NeSolverSystem const*,size_t);struct
NeSolverSystemTag{size_t mRefCount;size_t mNumStates;size_t mNumEquations;
size_t mNumDiffStates;size_t mNumInputs;size_t mNumOutputs;size_t
mNumDiscStates;size_t mNumModes;size_t mNumMajorModes;size_t mNumRealCache;
size_t mNumIntCache;size_t mNumZcs;size_t mNumAsserts;size_t mNumParamAsserts;
size_t mNumInitialAsserts;size_t mNumRanges;size_t mNumEquationRanges;size_t
mNumCERRanges;size_t mNumICRRanges;size_t mNumAssertRanges;size_t
mNumParamAssertRanges;size_t mNumInitialAssertRanges;size_t mNumSamples;size_t
mNumCEResiduals;size_t mNumICResiduals;size_t mNumFreqs;size_t mNumSolverHits;
size_t mNumDelays;size_t mNumMNzMax;size_t mNumMlinNzMax;size_t mNumDxfNzMax;
size_t mNumDxflinNzMax;size_t mNumTDxfNzMax;size_t mNumDufNzMax;size_t
mNumTDufNzMax;size_t mNumDtfNzMax;size_t mNumDnfNzMax;size_t mNumDdfNzMax;
size_t mNumDpdxfNzMax;size_t mNumDnfCol;size_t mNumDxyNzMax;size_t
mNumMDxyNzMax;size_t mNumTDxyNzMax;size_t mNumDuyNzMax;size_t mNumMDuyNzMax;
size_t mNumTDuyNzMax;size_t mNumDtyNzMax;size_t mNumDxcNzMax;size_t
mNumDdcNzMax;size_t mNumDxcerNzMax;size_t mNumDdcerNzMax;size_t mNumDxicrNzMax
;size_t mNumDdicrNzMax;size_t mNumIcrmNzMax;size_t mNumDxicrmNzMax;size_t
mNumDdicrmNzMax;size_t mNumTDuicrNzMax;size_t mNumDxmNzMax;size_t mNumDumNzMax
;size_t mNumDpmNzMax;size_t mNumDtmNzMax;size_t mNumDdmNzMax;size_t mNumQxNzMax
;size_t mNumQuNzMax;size_t mNumQtNzMax;size_t mNumQ1NzMax;size_t
mNumObservables;size_t mNumObservableElements;size_t mNumSwitchingCoeffs;
size_t mNumJacobianElems;size_t mNumSwitchingEquations;size_t
mNumSwitchingStates;boolean_T mIsYLinear;boolean_T mIsYPwLinear;boolean_T
mIsMConstant;boolean_T mIsMRuntimeScaled;boolean_T mIsMPwConstant;boolean_T
mIsCondSwitchedLinear;boolean_T mHasConstraints;boolean_T mVarConstraints;
boolean_T mHasConstraintEquations;boolean_T mNoReset;boolean_T
mAllParamsCompileTime;boolean_T mIsScalableBuild;NeVariableData*mVariableData;
NeObservableData*mObservableData;NeVariableData*mDiscreteData;NeZCData*mZCData
;NeModeData*mMajorModeData;NeEquationData*mEquationData;NeICRData*mICRData;
NeSwitchingCoeffsData*mSwitchingCoeffsData;NeJacobianElemsData*
mJacobianElemsData;NeSwitchingStatesData*mSwitchingStatesData;NeAssertData*
mAssertData;NeAssertData*mParamAssertData;NeAssertData*mInitialAssertData;
NeRange*mRanges;NeRange*mEquationRanges;NeRange*mICRRanges;NeRange*
mAssertRanges;NeRange*mParamAssertRanges;NeRange*mInitialAssertRanges;
NeCERData*mCERData;NeRange*mCERRanges;size_t*mSwitchingEquationsData;
NeParameterInfo mParameterInfo;size_t mNumIo[NUM_IO_TYPES];SscIoInfo const*mIo
[NUM_IO_TYPES];NeChecksum*mChecksum;NeSsMethod mMethods[NE_SS_NUM_METHODS];
NeSsMakeOutputFcn mMakeOutput[NE_SS_NUM_METHODS];NeSsFreeOutputFcn mFreeOutput
[NE_SS_NUM_METHODS];NeSsComputeOutputFcn mComputeOutput;NeSsSolve mSolves[
NE_SS_SOLVE_NUM];NeSsSetParameters mSetParameters;NeSsGetParameters
mGetParameters;void(*mComputeScales)(NeSolverSystem const*);NeSsManagementFcn
mDestroyFcn;NeSolverSystem*(*mCloneFcn)(NeSolverSystem const*);PmfMessageId(*
mInitializeFcn)(NeSolverSystem const*,NeSimulationParameters,
NeuDiagnosticManager*);NeSsBaseSystemFcn mBaseSystemFcn;NeSsFillBaseInputFcn
mFillBaseInputFcn;NeSsGetRealParams mGetRealParamsFcn;NeSsSetupLoggerFcn
mSetupLoggerFcn;NeSsLogFcn mLogFcn;void(*mGenerateFcn)(NeSolverSystem const*,
NeCgParams const*,NeCgResults*);NeCustomData*(*mGetCustomDataFcn)(
NeSolverSystem const*);int32_T(*mSetCustomDataFcn)(NeCustomData const*,
NeSolverSystem const*);NeSsData*mSubclassData;NeSsReportIc mReportIc;
NeSsReportMode mReportMode;NeSsPushInfo mPushInfo;};PMF_DEPLOY_STATIC int32_T
ne_ss_call_method(const NeSolverSystem*solSys,NeSsMethodId id,const
NeSystemInput*input,NeSsMethodOutput*output){(void)0;;return solSys->mMethods[
id](solSys,input,output);}PMF_DEPLOY_STATIC NeSsMethodOutput*ne_ss_make_output
(NeSolverSystem const*solSys,NeSsMethodId id,PmAllocator*allocator){return
solSys->mMakeOutput[id](solSys,allocator);}PMF_DEPLOY_STATIC void
ne_ss_free_output(NeSolverSystem const*solSys,NeSsMethodOutput*output,
NeSsMethodId id,PmAllocator*allocator){solSys->mFreeOutput[id](output,
allocator);}PMF_DEPLOY_STATIC NeSsMethodOutput*ne_ss_compute_output(
NeSolverSystem const*solSys,NeSystemInput const*input,PmAllocator*allocator,
NeSsMethodId id){return solSys->mComputeOutput(solSys,input,allocator,id);}
PMF_DEPLOY_STATIC int32_T ne_ss_solve(NeSolverSystem const*solSys,NeSsSolveId
id,NeSystemInput const*input){(void)0;;return solSys->mSolves[id](solSys,input
);}PMF_DEPLOY_STATIC NeSystemInputSizes ne_ss_get_system_input_sizes(
NeSolverSystem const*solSys){NeSystemInputSizes sizes;sizes.mSizes[
NE_SYSTEM_INPUT_ID_Q]=solSys->mNumMajorModes;sizes.mSizes[NE_SYSTEM_INPUT_ID_M
]=solSys->mNumModes;sizes.mSizes[NE_SYSTEM_INPUT_ID_T]=1;sizes.mSizes[
NE_SYSTEM_INPUT_ID_U]=solSys->mNumInputs;sizes.mSizes[NE_SYSTEM_INPUT_ID_V]=
solSys->mNumInputs;sizes.mSizes[NE_SYSTEM_INPUT_ID_X]=solSys->mNumStates;sizes
.mSizes[NE_SYSTEM_INPUT_ID_D]=solSys->mNumDiscStates;sizes.mSizes[
NE_SYSTEM_INPUT_ID_E]=solSys->mNumSamples;sizes.mSizes[NE_SYSTEM_INPUT_ID_CR]=
solSys->mNumRealCache;sizes.mSizes[NE_SYSTEM_INPUT_ID_CI]=solSys->mNumIntCache
;sizes.mSizes[NE_SYSTEM_INPUT_ID_A]=solSys->mNumSwitchingCoeffs;sizes.mSizes[
NE_SYSTEM_INPUT_ID_J]=solSys->mNumJacobianElems;return sizes;}
PMF_DEPLOY_STATIC void ne_ss_get_reference(NeSolverSystem*solSys){++(solSys->
mRefCount);}PMF_DEPLOY_STATIC void ne_ss_release_reference(NeSolverSystem*
solSys,PmAllocator*allocator){(void)0;;if(--(solSys->mRefCount)==0){solSys->
mDestroyFcn(solSys,allocator);}}PMF_DEPLOY_STATIC NeSolverSystem const*
ne_ss_get_base_system(NeSolverSystem const*solSys,boolean_T paramDeriv){return
solSys->mBaseSystemFcn(solSys,paramDeriv);}PMF_DEPLOY_STATIC void
ne_ss_fill_base_input(NeSolverSystem const*solSys,NeSystemInput const*
baseSysInput,NeSystemInput const*solSysInput,boolean_T paramDeriv){solSys->
mFillBaseInputFcn(solSys,baseSysInput,solSysInput,paramDeriv);}
PMF_DEPLOY_STATIC void ne_ss_get_real_parameters(NeSolverSystem const*sys,
NeSystemInput const*input,PmRealVector const*pr){sys->mGetRealParamsFcn(sys,
input,pr);}PMF_DEPLOY_STATIC void ne_ss_report_ic(NeSolverSystem const*sys,
NeSystemInput const*input,size_t pointer,boolean_T enablePrediction){sys->
mReportIc(sys,input,pointer,enablePrediction);}PMF_DEPLOY_STATIC void
ne_ss_report_mode(NeSolverSystem const*sys,NeSystemInput const*input,boolean_T
consistent,boolean_T enablePrediction,int16_T itersUsed){sys->mReportMode(sys,
input,consistent,enablePrediction,itersUsed);}PMF_DEPLOY_STATIC void
ne_ss_push_info(NeSolverSystem const*sys,size_t pointer){sys->mPushInfo(sys,
pointer);}struct StateTracerTag{void*mPrivateData;void(*mLogSolveValues)(
StateTracer*tracer,PmfMessageId solveId,NeSystemInput*in,NeSolverSystem*ss);
void(*mLogSolveContStates)(StateTracer*tracer,PmfMessageId solveId,
PmRealVector*x);void(*mLogSolveInfo)(StateTracer*tracer,PmfMessageId solveId,
PmfMessageId label);void(*mLogSolveInfoR)(StateTracer*tracer,PmfMessageId
solveId,PmfMessageId label,real_T data,void*ss);void(*mLogSolveInfoRv)(
StateTracer*tracer,PmfMessageId solveId,PmfMessageId label,PmRealVector const*
data);void(*mLogSolveInfoPr)(StateTracer*tracer,PmfMessageId solveId,
PmfMessageId label,PmSparsityPattern const*pattern,PmRealVector const*data);};
struct LtiIcDataTag{PmSparsityPattern mStatesPattern;PmRealVector mStatesPr;
PmSparsityPattern mInputsPattern;PmRealVector mInputsPr;PmRealVector mConsts;}
;typedef struct LtiIcDataTag LtiIcData;struct LtiDcDataTag{PmSparsityPattern
mAPattern;PmRealVector mAPr;PmSparsityPattern mBPattern;PmRealVector mBPr;
PmRealVector mFa;};typedef struct LtiDcDataTag LtiDcData;struct LtiIcParamsTag
{LtiIcData mFirstSolve,mSecondSolve;LtiDcData mDcSolve;PmRealVector mGuess;
real_T mResTol;boolean_T mDoDC;};typedef struct LtiIcParamsTag LtiIcParams;
typedef void(*LtiDiagnosisMethod)(void*,PmCharVector);typedef struct
LtiSupportMethodsTag{void*mLtiDiagnosisData;LtiDiagnosisMethod
mIcDiagnosisMethod;LtiDiagnosisMethod mDcDiagnosisMethod;}LtiSupportMethods;
boolean_T ic_solve_impl(PmRealVector*x,PmRealVector const*u,LtiIcParams const*
ltiIcParams,LtiSupportMethods const*methods,NeuDiagnosticManager*mgr,
StateTracer*st);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_std.h"
#include "ne_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
struct LtiRtwLogDataTag{PmSparsityPattern mCPattern;PmRealVector mCPr;
PmSparsityPattern mDPattern;PmRealVector mDPr;PmRealVector mYa;};typedef struct
LtiRtwLogDataTag LtiRtwLogData;struct LtiRtwLogParamsTag{LtiRtwLogData mLogData
;};typedef struct LtiRtwLogParamsTag LtiRtwLogParams;void rtw_log_obs_solve(
LtiRtwLogParams const*ltiLogParams,NeDynamicSystemInput const*input,
PmRealVector*output,NeuDiagnosticManager*mgr);SscRTWLogFcnManager*
ssc_lti_create_rtw_log_fcn_manager(LtiRtwLogParams const*logParams,real_T
startTime,unsigned int numInputs,unsigned int numStates,unsigned int
inputPortWidth,unsigned int bufferWidth,NeuDiagnosticManager*diagMgr);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct PartitioningSelectedSystemDataTag PartitioningSelectedSystemData
;struct PartitioningSelectedSystemDataTag{NeVariableData*mVariableData;
NeVariableData*mDiscreteData;NeModeData*mMajorModeData;};
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_std.h"
#include "pm_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct _McNDTree{int32_T st,sz,id;struct _McNDTree*lt,*rt;}McNDTree;
typedef struct _McNDPermData{McNDTree*mNd;PmIntVector*mP;PmIntVector*mQ;}
McNDPermData;typedef struct _McNDPermDataFlat{size_t m,n;int32_T*st,*sz,*lt,*
rt;int32_T*p,*q;}McNDPermDataFlat;PmIntVector*mc_basker_column_permute(
McNDTree const*bt,PmSparsityPattern const*pat,PmAllocator*alloc);void
mc_basker_tree_free(McNDTree*nd);McNDTree*mc_basker_tree_copy(McNDTree*nd);
void mc_basker_tree_shift(McNDTree*nd,int32_T st);int32_T mc_basker_tree_level
(McNDTree*bt);void mc_free_perm_data(McNDPermData*pd);McNDPermDataFlat*
mc_perm_data_to_flat(McNDPermData const*pd);McNDPermData*
mc_perm_data_from_flat(McNDPermDataFlat const*pdf);void mc_free_perm_data_flat
(McNDPermDataFlat*pdf);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_std.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ne_initer_fwd.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef enum{INVALID_CARDINALITY= -1,PARTITIONING_FINITE,
PARTITIONING_COUNTABLE,PARTITIONING_UNCOUNTABLE,PARTITIONING_NONLINEAR,
NUM_CARDINALITY}ModeCardinality;typedef struct GlobalMethodTableTag
GlobalMethodTable;typedef union GmtMethodOutputTag{PmIntVector mMODE;
PmRealVector mY;PmRealVector mOBS;PmIntVector mASSERT;PmIntVector mIASSERT;
PmRealVector mINIT_R;PmIntVector mINIT_I;PmRealVector mCACHE_R;PmIntVector
mCACHE_I;PmRealVector mUPDATE_R;PmIntVector mUPDATE_I;PmBoolVector mLOCK_R;
PmBoolVector mLOCK_I;PmRealVector mUPDATE2_R;PmIntVector mUPDATE2_I;
PmBoolVector mLOCK2_R;PmBoolVector mLOCK2_I;PmIntVector mDP_L;PmIntVector mDP_I
;PmIntVector mDP_J;PmRealVector mDP_R;PmRealVector mINIT_DIFF;PmRealVector mLOG
;}GmtMethodOutput;typedef enum GmtMethodIdTag{GMT_INVALID_METHOD_ID= -1,
GMT_METHOD_MODE,GMT_METHOD_Y,GMT_METHOD_OBS,GMT_METHOD_ASSERT,
GMT_METHOD_IASSERT,GMT_METHOD_INIT_R,GMT_METHOD_INIT_I,GMT_METHOD_CACHE_R,
GMT_METHOD_CACHE_I,GMT_METHOD_UPDATE_R,GMT_METHOD_UPDATE_I,GMT_METHOD_LOCK_R,
GMT_METHOD_LOCK_I,GMT_METHOD_UPDATE2_R,GMT_METHOD_UPDATE2_I,GMT_METHOD_LOCK2_R
,GMT_METHOD_LOCK2_I,GMT_METHOD_DP_L,GMT_METHOD_DP_I,GMT_METHOD_DP_J,
GMT_METHOD_DP_R,GMT_METHOD_INIT_DIFF,GMT_METHOD_LOG,GMT_NUM_METHODS}
GmtMethodId;typedef int32_T(*GmtMethod)(GlobalMethodTable const*,
NeDynamicSystemInput const*,GmtMethodOutput*);struct GlobalMethodTableTag{
GmtMethod mMethods[GMT_NUM_METHODS];size_t mNumY;size_t mNumObsElts;size_t
mNumAsserts;NeAssertData const*mAssertData;size_t mNumAssertRanges;NeRange
const*mAssertRanges;size_t mNumInitialAsserts;NeAssertData const*
mInitialAssertData;size_t mNumInitialAssertRanges;NeRange const*
mInitialAssertRanges;NeParameterInfo mParameterInfo;PmIntVector*mModeIndices;
PmIntVector*mObsIsLinear;};typedef struct SwitchedLinearClumpTag
SwitchedLinearClump;typedef struct SlcMethodsDataTag SlcMethodData;typedef
struct SlcScalingDataTag SlcScalingData;typedef union SlcMethodOutputTag{
PmSparsityPattern mMCON_P;PmRealVector mMCON;PmSparsityPattern mMPAR_P;
PmRealVector mMPAR;PmSparsityPattern mMNL_P;PmRealVector mMNL;
PmSparsityPattern mJCON_P;PmRealVector mJCON;PmSparsityPattern mJPAR_P;
PmRealVector mJPAR;PmSparsityPattern mJNL_P;PmRealVector mJNL;PmRealVector mFX
;PmRealVector mF;PmRealVector mXNPLUS1;PmIntVector mMODE;PmBoolVector mSLF;}
SlcMethodOutput;typedef enum SlcMethodIdTag{SLC_INVALID_METHOD_ID= -1,
SLC_METHOD_MCON_P,SLC_METHOD_MCON,SLC_METHOD_MPAR_P,SLC_METHOD_MPAR,
SLC_METHOD_MNL_P,SLC_METHOD_MNL,SLC_METHOD_JCON_P,SLC_METHOD_JCON,
SLC_METHOD_JPAR_P,SLC_METHOD_JPAR,SLC_METHOD_JNL_P,SLC_METHOD_JNL,
SLC_METHOD_FX,SLC_METHOD_F,SLC_METHOD_XNPLUS1,SLC_METHOD_MODE,SLC_METHOD_SLF,
SLC_NUM_METHODS}SlcMethodId;typedef int32_T(*SlcMethod)(SwitchedLinearClump
const*,NeDynamicSystemInput const*,SlcMethodOutput*);typedef enum
SlcLinearCacheIdTag{SLC_INVALID_LINEAR_CACHE_ID= -1,SLC_LINEAR_CACHE_M,
SLC_LINEAR_CACHE_J,SLC_NUM_LINEAR_CACHES}SlcLinearCacheId;typedef PmSizeVector
*SizeVectorPtr;struct SlcScaledMethodsCacheTag{PmSparsityPattern*mPattern;};
struct SlcMethodsDataTag{PmSparsityPattern*mPattern;PmRealVector*mPr;};struct
SwitchedLinearClumpTag{SlcMethod mMethods[SLC_NUM_METHODS];SlcMethodData
mLinearCache[SLC_NUM_LINEAR_CACHES];SlcScalingData*mScalingData;size_t mMNnz;
size_t mJNnz;size_t mMCONNnz;size_t mMPARNnz;size_t mMNLNnz;size_t mJCONNnz;
size_t mJPARNnz;size_t mJNLNnz;size_t mNEqs;boolean_T mIsLti;
NeDynamicSystemInputSizes mSizes;SizeVectorPtr mSelectors[
NE_NUM_DYNAMIC_SYSTEM_INPUT_ID];PmIntVector*mStateIndices;PmIntVector*
mStateIndicesOut;PmIntVector*mModeIndices;PmIntVector*mMRefIndices;PmIntVector
*mQRefIndices;boolean_T mIsModeBoolean;ModeCardinality mModeCardinality;
boolean_T mDoRuntimeScaling;};typedef struct DifferentialClumpTag
DifferentialClump;typedef union DcMethodOutputTag{PmSparsityPattern mM_P;
PmRealVector mM;PmRealVector mF;PmSparsityPattern mJ_P;PmRealVector mJ;}
DcMethodOutput;typedef enum DcMethodIdTag{DC_INVALID_METHOD_ID= -1,
DC_METHOD_M_P,DC_METHOD_M,DC_METHOD_F,DC_METHOD_J_P,DC_METHOD_J,DC_NUM_METHODS
}DcMethodId;typedef int32_T(*DcMethod)(DifferentialClump const*,
NeDynamicSystemInput const*,DcMethodOutput*);struct DifferentialClumpTag{
DcMethod mMethods[DC_NUM_METHODS];size_t mMNnz;size_t mJNnz;PmIntVector*
mStateIndices;PmIntVector*mMRefIndices;PmIntVector*mQRefIndices;
ModeCardinality mModeCardinality;};typedef struct PartitionedSystemTag
PartitionedSystem;struct PartitionedSystemTag{NeDynamicSystemInputSizes mSizes
;PmIntVector*mDiffStateIndices;GlobalMethodTable*mGlobalMethodTable;size_t
mNumClumps;SwitchedLinearClump**mClumps;DifferentialClump*mDiffClump;SscIniter
*mIniter;SscIniter*mDaeIniter;McNDPermData*(*mGetNDPermData)(PmSparsityPattern
const*pat,size_t nLev);void(*mUpdateParameters)(PartitionedSystem const*ps,
NeDynamicSystemInput**dsInputs);void(*mDestroy)(PartitionedSystem*ps);};
typedef enum SlcCachedMethodIdTag{SLC_INVALID_SCALED_MATRIX_METHOD_ID= -1,
SLC_SCALED_MATRIX_METHOD_MCON,SLC_SCALED_MATRIX_METHOD_MPAR,
SLC_SCALED_MATRIX_METHOD_MNL,SLC_SCALED_MATRIX_METHOD_JCON,
SLC_SCALED_MATRIX_METHOD_JPAR,SLC_SCALED_MATRIX_METHOD_JNL,
SLC_NUM_SCALED_MATRIX_METHODS}SlcCachedMethodId;typedef enum
SlcSqueezedMethodIdTag{SLC_INVALID_SQUEEZED_METHOD_ID= -1,
SLC_SQUEEZED_METHOD_MCON,SLC_SQUEEZED_METHOD_JCON,SLC_NUM_SQUEEZED_METHODS}
SlcSqueezedMethodId;struct SlcScalingDataTag{SlcMethodData mScaledMethodsData[
SLC_NUM_SCALED_MATRIX_METHODS];SlcMethodData mSqueezedMethodData[
SLC_NUM_SQUEEZED_METHODS];PmBoolVector*mSlfEquations;PmBoolVector*
mCappedEquations;PmRealVector*mScalingFactors;};void
partitioning_slc_perform_compilation_setup(SwitchedLinearClump*clump);void
partitioning_slc_destroy_scaling_data(SlcScalingData*scalingData);void
partitioning_slc_destroy_linear_cache(SlcMethodData*linearCache);void
partitioning_slc_scale_matrix_method(SwitchedLinearClump const*slc,
SlcMethodOutput*output,SlcCachedMethodId id);void
partitioning_slc_scale_vector_method(SwitchedLinearClump const*slc,
SlcMethodOutput*output);void partitioning_partitioned_system_update_parameters
(PartitionedSystem const*ps,NeDynamicSystemInput**dsInputs);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_std.h"
#include "pm_std.h"
#include "mc_std.h"
#include "mc_std_fwd.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ssc_dae.h"
#include "pm_std.h"
#include "pm_std.h"
#include "mc_std_fwd.h"
#include "ne_std_fwd.h"
#include "ne_std_fwd.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ssc_dae.h"
#include "ne_initer_fwd.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct SscIniterDataTag SscIniterData;typedef struct
SscComputeSimDataTag SscComputeSimData;typedef struct SscComputeSimTag
SscComputeSim;struct SscComputeSimTag{SscComputeSimData*mData;void(*
mComputeSim)(SscComputeSim const*cs,NeSystemInput const*simSI,NeRealFunctor
const*obsIniter,NeSystemInput const*initerSI);void(*mDestroy)(SscComputeSim*cs
);};struct SscComputeStateTag{SscComputeSimData*mData;void(*mComputeState)(
SscComputeState const*cs,NeSystemInput const*initerSI,NeSystemInput const*
simSI);void(*mDestroy)(SscComputeState*cs);};struct SscIniterTag{PmfMessageId(
*mSolve)(SscIniter const*initer,SscComputeSim const*cs,NeSystemInput const*
simSI,NeuDiagnosticManager*mgr);void(*mSetParameters)(SscIniter const*initer,
NeParameterBundle const*bundle);void(*mGenerate)(SscIniter const*initer,
NeCgParams const*cgParams,NeCgResults*cgResults);void(*mSetDiagPtr)(SscIniter
const*initer,void*st);NeObservableData const*mObservableData;size_t
mNumObservables;SscIniter*(*mCloneFcn)(SscIniter const*initer);void(*mDestroy)
(SscIniter*initer);size_t mRefCount;SscIniterData*mData;};PMF_DEPLOY_STATIC
void ssc_initer_get_reference(SscIniter*initer){if(initer){++(initer->
mRefCount);}}PMF_DEPLOY_STATIC void ssc_initer_release_reference(SscIniter*
initer){if(initer){(void)0;;if(--(initer->mRefCount)==0){initer->mDestroy(
initer);}}}
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_stiffness_fwd.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct NeStiffnessDataTag NeStiffnessData;struct NeStiffnessTag{
NeStiffnessData*mData;void(*mSetTimes)(NeStiffness*s,PmRealVector const*ts);
PmRealVector*(*mGetTimes)(NeStiffness*s);void(*mStart)(NeStiffness*s);void(*
mSetState)(NeStiffness*s,NeSystemInput*input);size_t(*mGetNumStates)(
NeStiffness*s);PmfMessageId(*mComputeStiffness)(NeStiffness*s,void*stiff,
size_t k,NeuDiagnosticManager*mgr);void(*mDestroy)(NeStiffness*s);};
NeStiffness*stiffness_create(NeDae*dae,SscComputeState*cs,NeSystemInputSizes*
sizes);typedef struct SimulatorTag Simulator;typedef struct SimulatorDataTag
SimulatorData;typedef void(*SimulatorInitializeStartStatus)(void*);typedef void
(*SimulatorInitializeEndStatus)(void*);struct SimulatorTag{size_t mNumInputs;
size_t mNumStates;size_t mNumOutputs;size_t mNumDStateNames;double mStepSize;
NeParameterInfo const*mParameterInfo;SimulatorData*mData;PmSizeVector const*
mMemEstimates;void(*mDStateNames)(Simulator const*simulator,
NeslStateNameVector const*snv);void(*mSetReInit)(Simulator const*solver,
boolean_T reInit);boolean_T(*mGetReInit)(Simulator const*solver);boolean_T(*
mSetParameters)(Simulator const*solver,NeParameterBundle const*bundle);
boolean_T(*mStart)(Simulator const*solver,NeuDiagnosticManager const*mgr);
NeDynamicSystemInput(*mGetDsi)(Simulator const*simulator,PmRealVector const*
inputs,PmRealVector const*states,real_T time);void(*mRtwLogFcn)(Simulator const
*simulator,NeDynamicSystemInput const*input,PmRealVector*output);boolean_T(*
mSolve)(Simulator const*solver,PmRealVector const*inputs,PmRealVector const*
states,PmRealVector const*outputs,real_T time,void*st,NeuDiagnosticManager
const*mgr,boolean_T firstOutput);boolean_T(*mCheck)(Simulator const*solver,
PmRealVector const*inputs,PmRealVector const*states,real_T time,
NeuDiagnosticManager const*mgr);void(*mInitialize)(Simulator const*s,
SimulatorInitializeStartStatus start,SimulatorInitializeEndStatus end,void*rb)
;void(*mPushInfo)(Simulator const*s,IterationsLogCore*il);McNDPermData const*(
*mGetNDPermData)(Simulator const*s);NeStiffness*(*mGetStiffness)(Simulator
const*s);void(*mDestroy)(Simulator*solver);};Simulator*simulator_create(
PartitionedSystem*ps,NeSolverParameters const param,McLinearAlgebraFactory
const*la,NeVariableData const*vardata,NeVariableData const*discdata,NeModeData
const*majmodedata,NeObservableData const*obsdata,size_t const numObservables,
DaemonChoice const dc);NeslRtpManager*rtp_manager_create(Simulator const*
simulator);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
SscRTWLogFcnManager*ssc_partitioning_create_rtw_log_fcn_manager(Simulator const
*simulator,unsigned int inputPortWidth,unsigned int bufferWidth,
NeuDiagnosticManager*diagMgr);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_std.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ne_initer_fwd.h"
#include "pm_std.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ne_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct LocalDaeMethodTableTag LocalDaeMethodTable;typedef struct
LocalDaeMethodCacheTag LocalDaeMethodCache;typedef enum LocalDaeMethodIdTag{
LOCAL_DAE_INVALID_METHOD_ID= -1,LOCAL_DAE_METHOD_MCON_P,LOCAL_DAE_METHOD_MCON,
LOCAL_DAE_METHOD_MPAR_P,LOCAL_DAE_METHOD_MPAR,LOCAL_DAE_METHOD_MNL_P,
LOCAL_DAE_METHOD_MNL,LOCAL_DAE_METHOD_DXFCON_P,LOCAL_DAE_METHOD_DXFCON,
LOCAL_DAE_METHOD_DXFPAR_P,LOCAL_DAE_METHOD_DXFPAR,LOCAL_DAE_METHOD_DXFNL_P,
LOCAL_DAE_METHOD_DXFNL,LOCAL_DAE_METHOD_DXM,LOCAL_DAE_METHOD_DXM_P,
LOCAL_DAE_METHOD_DDM,LOCAL_DAE_METHOD_DDM_P,LOCAL_DAE_METHOD_F,
LOCAL_DAE_METHOD_CER,LOCAL_DAE_METHOD_DXCER_P,LOCAL_DAE_METHOD_DXCER,
LOCAL_DAE_METHOD_MODE,LOCAL_DAE_METHOD_Y,LOCAL_DAE_METHOD_DUF_P,
LOCAL_DAE_METHOD_DUF,LOCAL_DAE_METHOD_DDF_P,LOCAL_DAE_METHOD_DDF,
LOCAL_DAE_METHOD_DTF_P,LOCAL_DAE_METHOD_DTF,LOCAL_DAE_METHOD_DELAY_V,
LOCAL_DAE_METHOD_DELAY_V0,LOCAL_DAE_METHOD_DELAY_TAU,
LOCAL_DAE_METHOD_DELAY_TAUMAX,LOCAL_DAE_METHOD_DXY_P,LOCAL_DAE_METHOD_DXY,
LOCAL_DAE_METHOD_DUY_P,LOCAL_DAE_METHOD_DUY,LOCAL_DAE_METHOD_OBS_ACT,
LOCAL_DAE_METHOD_OBS_EXP,LOCAL_DAE_METHOD_ASSERT,LOCAL_DAE_METHOD_IASSERT,
LOCAL_DAE_METHOD_INIT_R,LOCAL_DAE_METHOD_INIT_I,LOCAL_DAE_METHOD_CACHE_R,
LOCAL_DAE_METHOD_CACHE_I,LOCAL_DAE_METHOD_UPDATE_R,LOCAL_DAE_METHOD_UPDATE_I,
LOCAL_DAE_METHOD_LOCK_R,LOCAL_DAE_METHOD_LOCK_I,LOCAL_DAE_METHOD_UPDATE2_R,
LOCAL_DAE_METHOD_UPDATE2_I,LOCAL_DAE_METHOD_LOCK2_R,LOCAL_DAE_METHOD_LOCK2_I,
LOCAL_DAE_METHOD_IC,LOCAL_DAE_METHOD_ICR_IM,LOCAL_DAE_METHOD_ICR_IL,
LOCAL_DAE_METHOD_DDCER_P,LOCAL_DAE_METHOD_DDCER,LOCAL_DAE_METHOD_ICR,
LOCAL_DAE_METHOD_DXICR_P,LOCAL_DAE_METHOD_DXICR,LOCAL_DAE_METHOD_DDICR_P,
LOCAL_DAE_METHOD_DDICR,LOCAL_DAE_METHOD_ICRM_P,LOCAL_DAE_METHOD_ICRM,
LOCAL_DAE_METHOD_DXICRM_P,LOCAL_DAE_METHOD_DXICRM,LOCAL_DAE_METHOD_DDICRM_P,
LOCAL_DAE_METHOD_DDICRM,LOCAL_DAE_METHOD_EQ_TOL,LOCAL_DAE_METHOD_DP_L,
LOCAL_DAE_METHOD_DP_I,LOCAL_DAE_METHOD_DP_J,LOCAL_DAE_METHOD_DP_R,
LOCAL_DAE_METHOD_IMIN,LOCAL_DAE_METHOD_IMAX,LOCAL_DAE_METHOD_DIMIN,
LOCAL_DAE_METHOD_DIMAX,LOCAL_DAE_METHOD_VDF,LOCAL_DAE_METHOD_VMF,
LOCAL_DAE_METHOD_VMM,LOCAL_DAE_METHOD_SLF,LOCAL_DAE_METHOD_LV,
LOCAL_DAE_METHOD_NLDV,LOCAL_DAE_METHOD_LOG,LOCAL_DAE_METHOD_JACOB,
LOCAL_DAE_METHOD_STATE,LOCAL_DAE_NUM_METHODS}LocalDaeMethodId;typedef union
LocalDaeMethodOutputTag{PmSparsityPattern mMCON_P;PmRealVector mMCON;
PmSparsityPattern mMPAR_P;PmRealVector mMPAR;PmSparsityPattern mMNL_P;
PmRealVector mMNL;PmSparsityPattern mDXFCON_P;PmRealVector mDXFCON;
PmSparsityPattern mDXFPAR_P;PmRealVector mDXFPAR;PmSparsityPattern mDXFNL_P;
PmRealVector mDXFNL;PmRealVector mDXM;PmSparsityPattern mDXM_P;PmRealVector
mDDM;PmSparsityPattern mDDM_P;PmRealVector mF;PmRealVector mCER;
PmSparsityPattern mDXCER_P;PmRealVector mDXCER;PmIntVector mMODE;PmRealVector
mY;PmSparsityPattern mDUF_P;PmRealVector mDUF;PmSparsityPattern mDDF_P;
PmRealVector mDDF;PmSparsityPattern mDTF_P;PmRealVector mDTF;PmRealVector
mDELAY_V;PmRealVector mDELAY_V0;PmRealVector mDELAY_TAU;PmRealVector
mDELAY_TAUMAX;PmSparsityPattern mDXY_P;PmRealVector mDXY;PmSparsityPattern
mDUY_P;PmRealVector mDUY;PmRealVector mOBS_ACT;PmRealVector mOBS_EXP;
PmIntVector mASSERT;PmIntVector mIASSERT;PmRealVector mINIT_R;PmIntVector
mINIT_I;PmRealVector mCACHE_R;PmIntVector mCACHE_I;PmRealVector mUPDATE_R;
PmIntVector mUPDATE_I;PmBoolVector mLOCK_R;PmBoolVector mLOCK_I;PmRealVector
mUPDATE2_R;PmIntVector mUPDATE2_I;PmBoolVector mLOCK2_R;PmBoolVector mLOCK2_I;
PmRealVector mIC;PmIntVector mICR_IM;PmBoolVector mICR_IL;PmSparsityPattern
mDDCER_P;PmRealVector mDDCER;PmRealVector mICR;PmSparsityPattern mDXICR_P;
PmRealVector mDXICR;PmSparsityPattern mDDICR_P;PmRealVector mDDICR;
PmSparsityPattern mICRM_P;PmRealVector mICRM;PmSparsityPattern mDXICRM_P;
PmRealVector mDXICRM;PmSparsityPattern mDDICRM_P;PmRealVector mDDICRM;
PmRealVector mEQ_TOL;PmIntVector mDP_L;PmIntVector mDP_I;PmIntVector mDP_J;
PmRealVector mDP_R;PmRealVector mIMIN;PmRealVector mIMAX;PmRealVector mDIMIN;
PmRealVector mDIMAX;PmBoolVector mVDF;PmBoolVector mVMF;PmBoolVector mVMM;
PmBoolVector mSLF;PmBoolVector mLV;PmBoolVector mNLDV;PmRealVector mLOG;
PmRealVector mJACOB;PmRealVector mSTATE;}LocalDaeMethodOutput;typedef int32_T(
*LocalDaeMethod)(LocalDaeMethodTable const*,NeDynamicSystemInput const*,
LocalDaeMethodOutput*);typedef enum LocalDaeCachedMethodIdTag{
LOCAL_DAE_INVALID_CACHED_METHOD_ID= -1,LOCAL_DAE_CACHED_METHOD_M,
LOCAL_DAE_CACHED_METHOD_DXF,LOCAL_DAE_NUM_CACHED_METHODS}
LocalDaeCachedMethodId;struct LocalDaeMethodCacheTag{PmRealVector*mConPr;
PmRealVector*mScaledConPr;PmSparsityPattern*mConPattern;PmRealVector*mParPr;
PmRealVector*mScaledParPr;PmSparsityPattern*mParPattern;PmSparsityPattern*
mNlPattern;PmRealVector*mScaledConPlusParPr;PmSparsityPattern*
mScaledConPlusParPattern;};struct LocalDaeMethodTableTag{LocalDaeMethod
mMethods[LOCAL_DAE_NUM_METHODS];LocalDaeMethodCache mMethodsCache[
LOCAL_DAE_NUM_CACHED_METHODS];size_t mMCONNnz;size_t mMPARNnz;size_t mMNLNnz;
size_t mDXFCONNnz;size_t mDXFPARNnz;size_t mDXFNLNnz;size_t mDXCERNnz;size_t
mDUFNnz;size_t mDTFNnz;size_t mDXYNnz;size_t mDUYNnz;size_t mDDFNnz;size_t
mDXMNnz;size_t mDDMNnz;size_t mDDCERNnz;size_t mDXICRNnz;size_t mDDICRNnz;
size_t mICRMNnz;size_t mDXICRMNnz;size_t mDDICRMNnz;size_t mNumDxmRows;size_t
mNumDelays;size_t mNumY;size_t mNumEqs;size_t mNumVars;size_t mNumConstraintEqs
;size_t mNumInitialEqs;size_t mNumObsElts;size_t mNumAsserts;NeAssertData const
*mAssertData;size_t mNumAssertRanges;NeRange const*mAssertRanges;size_t
mNumInitialAsserts;NeAssertData const*mInitialAssertData;size_t
mNumInitialAssertRanges;NeRange const*mInitialAssertRanges;NeParameterInfo
mParameterInfo;PmIntVector*mObsIsLinear;PmIntVector*mIsEqCapped;PmIntVector*
mIsEqSlf;PmRealVector*mScalingFactors;PmSparsityPattern*mScalingPattern;
boolean_T mUseFullScaling;PmRealVector*mDXFNLWorkPr;};typedef struct IRDataTag
IRData;typedef struct LocalDaePrivateDataTag LocalDaePrivateData;typedef struct
LocalDaeTag LocalDae;struct LocalDaeTag{NeDynamicSystemInputSizes mSizes;
LocalDaeMethodTable*mMethodTable;IRData*mIRData;NeDynamicSystemInput*
mSiToDsConversionFields;SscIniter*mIniter;SscIniter*mDaeIniter;void(*
mInitialize)(LocalDae const*ld,NeModelParameters const*const mp,
NeSolverParameters const*const sp);int32_T(*mUpdateDelays)(LocalDae const*ld,
NeDynamicSystemInput const*in);void(*mEvaluateDelays)(LocalDae const*ld,
NeDynamicSystemInput const*in);void(*mDestroy)(LocalDae*ld);void(*
mUpdateMethodCache)(LocalDae const*ld,NeDynamicSystemInput const*in);void(*
mComputeScaling)(LocalDae const*ld);void(*mComputeScaledValues)(LocalDae const
*ld);LocalDaePrivateData*mData;};
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct LocalDaeSelectedSystemDataTag LocalDaeSelectedSystemData;struct
LocalDaeSelectedSystemDataTag{NeVariableData*mVariableData;NeVariableData*
mDiscreteData;NeModeData*mMajorModeData;NeICRData*mICRData;NeCERData*mCERData;
size_t mICRSize;size_t mCERSize;size_t mDiffSize;size_t mSwitchingCoeffsSize;
size_t mJacobianElemsSize;size_t mSwitchingEquationsSize;size_t
mSwitchingStatesSize;NeSwitchingCoeffsData const*mSwitchingCoeffsData;
NeJacobianElemsData const*mJacobianElemsData;size_t const*
mSwitchingEquationsData;NeSwitchingStatesData const*mSwitchingStatesData;};
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
void local_dae_create_method_cache(LocalDaeMethodTable*mt);void
local_dae_update_method_cache(LocalDaeMethodTable const*mt,
NeDynamicSystemInput const*input);void local_dae_set_method_cache(LocalDae*
localDae);void local_dae_destroy_method_cache(LocalDaeMethodCache*mc);void
local_dae_compute_scaled_values(LocalDaeMethodTable*mt);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_std.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ne_std.h"
#include "pm_std.h"
#include "ne_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef enum NeuDelayedExpressionEvaluationStatusTag{
NEU_DELAYED_EXPRESSION_EVALUATION_INVALID= -2,
NEU_DELAYED_EXPRESSION_LEFT_EXTRAPOLATION,NEU_DELAYED_EXPRESSION_INTERPOLATION
,NEU_DELAYED_EXPRESSION_RIGHT_EXTRAPOLATION}
NeuDelayedExpressionEvaluationStatus;typedef enum NeuDelayExpressionsStatusTag
{NEU_DELAY_EXPRESSIONS_INVALID_STATUS= -1,NEU_DELAY_EXPRESSIONS_OK,
NEU_DELAY_EXPRESSIONS_ERROR,NEU_DELAY_EXPRESSIONS_INSUFFICIENT_INITIAL_MEMORY,
NEU_DELAY_EXPRESSIONS_INSUFFICIENT_REALLOC_MEMORY,
NEU_DELAY_EXPRESSIONS_INCONSISTENT_MODEL_PARAMETERS,
NEU_DELAY_EXPRESSIONS_INVALID_SIMSTATE_DATA}NeuDelayExpressionsStatus;typedef
struct NeuDelayExpressionsPrivateDataTag NeuDelayExpressionsPrivateData;
typedef struct NeuDelayExpressionsDataTag NeuDelayExpressionsData;struct
NeuDelayExpressionsDataTag{boolean_T(*mIsDataCreatedFcn)(
NeuDelayExpressionsData const*);boolean_T(*mIsDataInitializedFcn)(
NeuDelayExpressionsData const*);int32_T(*mDataCreateFcn)(
NeuDelayExpressionsData*,real_T const*);void(*mInitializeFcn)(
NeuDelayExpressionsData*,NeSimulationParameters);int32_T(*mUpdateFcn)(
NeuDelayExpressionsData*,real_T,real_T const*);void(*mEvaluateFcn)(
NeuDelayExpressionsData const*,size_t,real_T,real_T*,real_T*);void(*
mDestroyFcn)(NeuDelayExpressionsData*,PmAllocator*);NeCustomData*(*
mGetCustomDataFcn)(NeuDelayExpressionsData const*);int32_T(*mSetCustomDataFcn)
(NeuDelayExpressionsData*,NeCustomData const*);NeuDelayExpressionsPrivateData*
mData;};NeuDelayExpressionsData*neu_create_static_delay_expressions_data(
size_t num_delays,real_T start_time,size_t memory_budget,PmAllocator*allocator
);NeuDelayExpressionsData*neu_create_dynamic_delay_expressions_data(size_t
num_delays,size_t memory_budget,size_t block_numel,PmAllocator*allocator);
typedef struct NesDelayExpressionsTag NesDelayExpressions;struct
NesDelayExpressionsTag{real_T mStartTime;PmRealVector*mV0;PmRealVector*mTAU;
PmRealVector*mTAUMAX;PmRealVector*mVDEL;NeuDelayExpressionsData*mData;void(*
mDestroyFcn)(NesDelayExpressions*,PmAllocator*);};NesDelayExpressions*
nes_create_delay_expressions(size_t const numDelays,real_T startTime,
PmAllocator*allocator);void nes_destroy_delay_expressions(NesDelayExpressions*
delayExpr,PmAllocator*allocatorPtr);void nes_initialize_delay_expressions(
NesDelayExpressions*delayExpressions,NeSolverParameters solverParams,
NeSimulationParameters simParams,boolean_T useStaticDataBuffers,PmAllocator*
allocator);int32_T nes_update_delay_expressions(NesDelayExpressions*delay_expr
,real_T t,PmRealVector const*vdel,PmRealVector const*del_tmax);void
nes_evaluate_delay_expressions(NesDelayExpressions const*delay_expr,real_T t,
PmRealVector const*tau,PmRealVector const*v0,PmRealVector const*vout);void
nes_evaluate_delay_expression_derivative(NesDelayExpressions const*delay_expr,
real_T t,PmRealVector const*tauVect,PmRealVector const*vderVect);NeCustomData*
nes_get_delay_expression_custom_data(NesDelayExpressions const*delay_expr);
int32_T nes_set_delay_expression_custom_data(NesDelayExpressions*delay_expr,
NeCustomData const*data);NesDelayExpressions*local_dae_create_delays(LocalDae
const*ld,NeModelParameters const*const mp);void local_dae_initialize_delays(
LocalDae const*ld,NesDelayExpressions*delay,NeSolverParameters const*const sp,
NeSimulationParameters const*const simParams);int32_T local_dae_update_delays(
LocalDae const*ld,NesDelayExpressions*delay,NeDynamicSystemInput const*in);
void local_dae_evaluate_delays(LocalDae const*ld,NesDelayExpressions const*
delay,NeDynamicSystemInput const*in);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_std.h"
#include "pm_std.h"
#include "mc_std_fwd.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ne_std.h"
#include "ne_std.h"
#include "pm_std.h"
#include "ne_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef void(*LocalDaeDiagnosisMethod)(void*,PmCharVector);typedef void(*
LocalDaeEventIterationDiagnosisMethod)(void*,PmRealVector const*,PmIntVector
const*,PmCharVector);typedef struct LocalDaeSupportMethodsTag{void*
mLocalDaeDiagnosisData;LocalDaeDiagnosisMethod mIcDiagnosisMethod;
LocalDaeDiagnosisMethod mAdvSolDiagnosisMethod;void(*mSetSystemInput)(void*,
NeDynamicSystemInput const*dsi);}LocalDaeSupportMethods;typedef struct
LocalDaeSimulatorTag LocalDaeSimulator;typedef struct LocalDaeSimulatorDataTag
LocalDaeSimulatorData;typedef void(*LocalDaeSimulatorInitializeStartStatus)(
void*);typedef void(*LocalDaeSimulatorInitializeEndStatus)(void*);struct
LocalDaeSimulatorTag{size_t mNumInputs;size_t mNumStates;size_t mNumOutputs;
size_t mNumVariables;size_t mNumDStateNames;double mStepSize;NeParameterInfo
const*mParameterInfo;LocalDaeSimulatorData*mData;void(*mDStateNames)(
LocalDaeSimulator const*simulator,NeslStateNameVector const*snv);void(*
mSetReInit)(LocalDaeSimulator const*simulator,boolean_T reInit);boolean_T(*
mGetReInit)(LocalDaeSimulator const*simulator);boolean_T(*mSetParameters)(
LocalDaeSimulator const*simulator,NeParameterBundle const*bundle);boolean_T(*
mStart)(LocalDaeSimulator const*simulator,NeuDiagnosticManager const*mgr);
NeDynamicSystemInput(*mGetDsi)(LocalDaeSimulator const*simulator,PmRealVector
const*inputs,PmRealVector const*input_derivatives,PmRealVector const*states,
real_T time);void(*mRtwLogFcn)(LocalDaeSimulator const*simulator,
NeDynamicSystemInput const*input,PmRealVector*output);boolean_T(*mSolve)(
LocalDaeSimulator const*simulator,PmRealVector const*inputs,PmRealVector const
*input_derivatives,PmRealVector const*states,PmRealVector const*outputs,real_T
time,void*st,NeuDiagnosticManager const*mgr,boolean_T firstOutput,
LocalDaeSupportMethods*supMethods);boolean_T(*mConsistentize)(PmfMessageId*
status,LocalDaeSimulator const*simulator,NeDynamicSystemInput const*dsInput);
boolean_T(*mCheck)(LocalDaeSimulator const*simulator,PmRealVector const*inputs
,PmRealVector const*input_derivatives,PmRealVector const*states,real_T time,
NeuDiagnosticManager const*mgr);void(*mInitialize)(LocalDaeSimulator const*s,
LocalDaeSimulatorInitializeStartStatus start,
LocalDaeSimulatorInitializeEndStatus end,void*rb);void(*mDestroy)(
LocalDaeSimulator*simulator);};LocalDaeSimulator*local_dae_simulator_create(
LocalDae*dae,NeSolverParameters const sp,NeModelParameters const mp,
McLinearAlgebraFactory const*la,NeVariableData const*VarData,NeVariableData
const*DiscData,NeModeData const*majorModeData,NeEquationData const*
EquationData,NeRange const*RangeData,NeICRData const*ICRData,NeCERData const*
CERData,size_t const numICResiduals,size_t const numCEResiduals,size_t const
numDiffStates,size_t numSwitchingCoeffs,NeSwitchingCoeffsData const*
switchingCoeffsData,size_t numJacobianElems,NeJacobianElemsData const*
jacobianElemsData,size_t numSwitchingEquations,size_t const*
switchingEquationsData,size_t numSwitchingStates,NeSwitchingStatesData const*
switchingStatesData);NeslRtpManager*local_dae_rtp_manager_create(
LocalDaeSimulator const*simulator);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
SscRTWLogFcnManager*create_local_dae_ssc_rtw_log_fcn_manager(LocalDaeSimulator
const*simulator,unsigned int inputPortWidth,unsigned int bufferWidth,
NeuDiagnosticManager*diagMgr);void local_dae_compute_scaling_factors(LocalDae
const*ld,boolean_T const useLinearPartOnly);void
local_dae_flag_equations_for_scaling(LocalDae const*ld,PmAllocator*
allocatorPtr);typedef struct NeslInputHelperVectorsTag NeslInputHelperVectors;
struct NeslInputHelperVectorsTag{PmRealVector*mTimeVector;PmRealVector*
mInputValuesVector;PmIntVector*mInputOffsetsVector;void(*mDestroy)(
NeslInputHelperVectors*helper);};typedef struct NeslInputHelperTag
NeslInputHelper;typedef struct NeslInputHelperDataTag NeslInputHelperData;
struct NeslInputHelperTag{NeslInputHelperVectors*(*mCreateVectors)(
NeslInputHelper const*helper,size_t inputPortWidth);void(*mUpdate)(
NeslInputHelper const*helper,NeslInputHelperVectors const*vectors);void(*
mDestroy)(NeslInputHelper*helper);NeSystemInput const*mI;NeslInputHelperData*
mData;};NeslInputHelper*nesl_create_input_helper(NeSystemInputSizes sizes,
boolean_T overlap);struct SscRTWLogFcnManagerObjectTag{NeDae*mDaePtr;
PmAllocator*mAllocatorPtr;boolean_T*mDirectFeedThrough;unsigned int
mNumInputPorts;unsigned int mInputPortWidth;unsigned int mBufferWidth;
NeslInputHelperVectors*mInputHelperVectors;NeslInputHelper*mInputHelper;
NeuDiagnosticManager*mDiagnosticManager;};
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* ___nesl_rtw_h__ */
