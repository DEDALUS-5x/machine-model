#ifndef __mc_std_h__
#define __mc_std_h__
#include "pm_std.h"
#include "pm_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct IterationsLogCoreTag{int32_T mNumIters;boolean_T mConvergence;
boolean_T mPrecisionMet;}IterationsLogCore;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_std.h"
#include "mc_std_fwd.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef enum McLinearAlgebraStatusTag{MC_LA_INVALID= -1,MC_LA_ERROR,MC_LA_OK}
McLinearAlgebraStatus;typedef struct McLinearAlgebraDataTag McLinearAlgebraData
;struct McLinearAlgebraTag{McLinearAlgebraData*mPrivateData;
McLinearAlgebraStatus(*mFactor)(McLinearAlgebra*,real_T const*);
McLinearAlgebraStatus(*mSolve)(McLinearAlgebra*la,real_T const*A,real_T*x,
real_T const*b);real_T(*mCondest)(McLinearAlgebra const*,boolean_T const);
size_t(*mMemusage)(McLinearAlgebra const*);void(*mRestart)(McLinearAlgebra*);
void(*mDestructor)(McLinearAlgebra*);};struct McLinearAlgebraFactoryTag{
McLinearAlgebraStatus(*mCreateLinearAlgebra)(McLinearAlgebraFactory const*,
McLinearAlgebra**,PmSparsityPattern const*);McLinearAlgebraStatus(*
mCreateLinearAlgebraComplete)(McLinearAlgebraFactory const*,McLinearAlgebra**,
PmSparsityPattern const*,size_t nPermCol);};
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __mc_std_h__ */
