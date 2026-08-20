#include "multibody_model_macros.h"
/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'machine_z/Solver Configuration1'.
 */

#include "ne_ds.h"
#include "machine_z_a47a947d_1_ds_sys_struct.h"
#include "machine_z_a47a947d_1_ds_log.h"
#include "machine_z_a47a947d_1_ds.h"
#include "machine_z_a47a947d_1_ds_externals.h"
#include "machine_z_a47a947d_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T machine_z_a47a947d_1_ds_log(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t3, NeDsMethodOutput *out)
{
  real_T Ideal_Torque_Source_R_w;
  real_T Rotational_Damper_t;
  out->mLOG.mX[1UL] = t3->mU.mX[1UL];
  out->mLOG.mX[2UL] = -t3->mU.mX[1UL];
  out->mLOG.mX[3UL] = -(t3->mX.mX[0UL] * 0.0012732395447351628);
  Ideal_Torque_Source_R_w = t3->mX.mX[0UL] + t3->mX.mX[4UL];
  out->mLOG.mX[10UL] = t3->mU.mX[0UL];
  out->mLOG.mX[11UL] = -t3->mU.mX[0UL];
  out->mLOG.mX[12UL] = -Ideal_Torque_Source_R_w;
  out->mLOG.mX[21UL] = -0.0;
  out->mLOG.mX[27UL] = -t3->mX.mX[6UL] + t3->mU.mX[1UL];
  Rotational_Damper_t = t3->mX.mX[4UL] * 0.05;
  out->mLOG.mX[32UL] = -(Rotational_Damper_t * Rotational_Damper_t * -20.0);
  out->mLOG.mX[0UL] = t3->mX.mX[0UL] * 0.0012732395447351628;
  out->mLOG.mX[4UL] = t3->mX.mX[1UL];
  out->mLOG.mX[5UL] = t3->mX.mX[0UL];
  out->mLOG.mX[6UL] = t3->mX.mX[0UL];
  out->mLOG.mX[7UL] = t3->mX.mX[1UL];
  out->mLOG.mX[8UL] = t3->mX.mX[1UL];
  out->mLOG.mX[9UL] = Ideal_Torque_Source_R_w;
  out->mLOG.mX[13UL] = t3->mX.mX[0UL];
  out->mLOG.mX[14UL] = t3->mX.mX[0UL];
  out->mLOG.mX[15UL] = t3->mX.mX[0UL];
  out->mLOG.mX[16UL] = t3->mX.mX[5UL];
  out->mLOG.mX[17UL] = t3->mX.mX[0UL] * 0.0012732395447351628;
  out->mLOG.mX[18UL] = t3->mX.mX[0UL];
  out->mLOG.mX[19UL] = t3->mX.mX[0UL];
  out->mLOG.mX[20UL] = t3->mX.mX[0UL];
  out->mLOG.mX[22UL] = t3->mX.mX[6UL];
  out->mLOG.mX[23UL] = t3->mX.mX[7UL];
  out->mLOG.mX[24UL] = t3->mX.mX[0UL] * 0.0012732395447351628;
  out->mLOG.mX[25UL] = t3->mX.mX[0UL] * 0.0012732395447351628;
  out->mLOG.mX[26UL] = t3->mX.mX[2UL];
  out->mLOG.mX[28UL] = t3->mX.mX[0UL];
  out->mLOG.mX[29UL] = Ideal_Torque_Source_R_w;
  out->mLOG.mX[30UL] = Rotational_Damper_t;
  out->mLOG.mX[31UL] = Rotational_Damper_t * 20.0;
  out->mLOG.mX[33UL] = t3->mX.mX[0UL];
  out->mLOG.mX[34UL] = Ideal_Torque_Source_R_w;
  out->mLOG.mX[35UL] = t3->mX.mX[3UL] * 500.0;
  out->mLOG.mX[36UL] = t3->mX.mX[4UL];
  out->mLOG.mX[37UL] = t3->mX.mX[3UL];
  out->mLOG.mX[38UL] = t3->mU.mX[0UL];
  out->mLOG.mX[39UL] = t3->mU.mX[1UL];
  (void)sys;
  (void)out;
  return 0;
}
