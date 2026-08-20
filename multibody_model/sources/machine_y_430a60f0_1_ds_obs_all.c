#include "multibody_model_macros.h"
/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'machine_y/Solver Configuration2'.
 */

#include "ne_ds.h"
#include "machine_y_430a60f0_1_ds_sys_struct.h"
#include "machine_y_430a60f0_1_ds_obs_all.h"
#include "machine_y_430a60f0_1_ds.h"
#include "machine_y_430a60f0_1_ds_externals.h"
#include "machine_y_430a60f0_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T machine_y_430a60f0_1_ds_obs_all(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  real_T Ideal_Torque_Source1_R_w;
  real_T Rotational_Damper1_t;
  out->mOBS_ALL.mX[4UL] = 0.0;
  Ideal_Torque_Source1_R_w = t1->mX.mX[0UL] + t1->mX.mX[3UL];
  out->mOBS_ALL.mX[9UL] = t1->mU.mX[0UL];
  out->mOBS_ALL.mX[10UL] = -t1->mU.mX[0UL];
  out->mOBS_ALL.mX[11UL] = -Ideal_Torque_Source1_R_w;
  Rotational_Damper1_t = t1->mX.mX[3UL] * 0.01;
  out->mOBS_ALL.mX[0UL] = t1->mX.mX[1UL];
  out->mOBS_ALL.mX[1UL] = 0.0;
  out->mOBS_ALL.mX[2UL] = t1->mX.mX[0UL];
  out->mOBS_ALL.mX[3UL] = t1->mX.mX[0UL];
  out->mOBS_ALL.mX[5UL] = t1->mX.mX[1UL];
  out->mOBS_ALL.mX[6UL] = t1->mX.mX[1UL];
  out->mOBS_ALL.mX[7UL] = 0.0;
  out->mOBS_ALL.mX[8UL] = Ideal_Torque_Source1_R_w;
  out->mOBS_ALL.mX[12UL] = t1->mX.mX[0UL];
  out->mOBS_ALL.mX[13UL] = t1->mX.mX[0UL];
  out->mOBS_ALL.mX[14UL] = t1->mX.mX[0UL];
  out->mOBS_ALL.mX[15UL] = t1->mX.mX[4UL];
  out->mOBS_ALL.mX[16UL] = 0.0;
  out->mOBS_ALL.mX[17UL] = 0.0;
  out->mOBS_ALL.mX[18UL] = 0.0;
  out->mOBS_ALL.mX[19UL] = 0.0;
  out->mOBS_ALL.mX[20UL] = t1->mX.mX[0UL];
  out->mOBS_ALL.mX[21UL] = Ideal_Torque_Source1_R_w;
  out->mOBS_ALL.mX[22UL] = Rotational_Damper1_t;
  out->mOBS_ALL.mX[23UL] = Rotational_Damper1_t * 100.0;
  out->mOBS_ALL.mX[24UL] = 0.0;
  out->mOBS_ALL.mX[25UL] = t1->mX.mX[0UL];
  out->mOBS_ALL.mX[26UL] = t1->mX.mX[5UL];
  out->mOBS_ALL.mX[27UL] = t1->mX.mX[0UL];
  out->mOBS_ALL.mX[28UL] = t1->mX.mX[0UL];
  out->mOBS_ALL.mX[29UL] = Ideal_Torque_Source1_R_w;
  out->mOBS_ALL.mX[30UL] = t1->mX.mX[2UL] * 1000.0;
  out->mOBS_ALL.mX[31UL] = t1->mX.mX[3UL];
  out->mOBS_ALL.mX[32UL] = t1->mX.mX[2UL];
  out->mOBS_ALL.mX[33UL] = t1->mU.mX[0UL];
  (void)sys;
  (void)out;
  return 0;
}
