#include "multibody_model_macros.h"
/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'machine_y/Solver Configuration2'.
 */

#include "ne_ds.h"
#include "machine_y_430a60f0_1_ds_sys_struct.h"
#include "machine_y_430a60f0_1_ds_log.h"
#include "machine_y_430a60f0_1_ds.h"
#include "machine_y_430a60f0_1_ds_externals.h"
#include "machine_y_430a60f0_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T machine_y_430a60f0_1_ds_log(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  real_T Ideal_Torque_Source1_R_w;
  real_T Rotational_Damper1_t;
  Ideal_Torque_Source1_R_w = t1->mX.mX[0UL] + t1->mX.mX[3UL];
  out->mLOG.mX[6UL] = t1->mU.mX[0UL];
  out->mLOG.mX[7UL] = -t1->mU.mX[0UL];
  out->mLOG.mX[8UL] = -Ideal_Torque_Source1_R_w;
  Rotational_Damper1_t = t1->mX.mX[3UL] * 0.01;
  out->mLOG.mX[17UL] = -(Rotational_Damper1_t * Rotational_Damper1_t * -100.0);
  out->mLOG.mX[21UL] = -(-t1->mX.mX[5UL] * t1->mX.mX[0UL]);
  out->mLOG.mX[0UL] = t1->mX.mX[1UL];
  out->mLOG.mX[1UL] = t1->mX.mX[0UL];
  out->mLOG.mX[2UL] = t1->mX.mX[0UL];
  out->mLOG.mX[3UL] = t1->mX.mX[1UL];
  out->mLOG.mX[4UL] = t1->mX.mX[1UL];
  out->mLOG.mX[5UL] = Ideal_Torque_Source1_R_w;
  out->mLOG.mX[9UL] = t1->mX.mX[0UL];
  out->mLOG.mX[10UL] = t1->mX.mX[0UL];
  out->mLOG.mX[11UL] = t1->mX.mX[0UL];
  out->mLOG.mX[12UL] = t1->mX.mX[4UL];
  out->mLOG.mX[13UL] = t1->mX.mX[0UL];
  out->mLOG.mX[14UL] = Ideal_Torque_Source1_R_w;
  out->mLOG.mX[15UL] = Rotational_Damper1_t;
  out->mLOG.mX[16UL] = Rotational_Damper1_t * 100.0;
  out->mLOG.mX[18UL] = t1->mX.mX[0UL];
  out->mLOG.mX[19UL] = t1->mX.mX[5UL];
  out->mLOG.mX[20UL] = t1->mX.mX[0UL];
  out->mLOG.mX[22UL] = t1->mX.mX[0UL];
  out->mLOG.mX[23UL] = Ideal_Torque_Source1_R_w;
  out->mLOG.mX[24UL] = t1->mX.mX[2UL] * 1000.0;
  out->mLOG.mX[25UL] = t1->mX.mX[3UL];
  out->mLOG.mX[26UL] = t1->mX.mX[2UL];
  out->mLOG.mX[27UL] = t1->mU.mX[0UL];
  (void)sys;
  (void)out;
  return 0;
}
