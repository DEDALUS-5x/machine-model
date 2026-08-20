#include "multibody_model_macros.h"
/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'machine_z/Solver Configuration1'.
 */

#include "ne_ds.h"
#include "machine_z_a47a947d_1_ds_sys_struct.h"
#include "machine_z_a47a947d_1_ds_obs_act.h"
#include "machine_z_a47a947d_1_ds.h"
#include "machine_z_a47a947d_1_ds_externals.h"
#include "machine_z_a47a947d_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T machine_z_a47a947d_1_ds_obs_act(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t3, NeDsMethodOutput *out)
{
  real_T Ideal_Torque_Source_R_w;
  real_T Rotational_Damper_t;
  out->mOBS_ACT.mX[9UL] = 0.0;
  out->mOBS_ACT.mX[25UL] = 300.0;
  out->mOBS_ACT.mX[2UL] = t3->mU.mX[1UL];
  out->mOBS_ACT.mX[3UL] = -t3->mU.mX[1UL];
  out->mOBS_ACT.mX[4UL] = -(t3->mX.mX[0UL] * 0.0012732395447351628);
  Ideal_Torque_Source_R_w = t3->mX.mX[0UL] + t3->mX.mX[4UL];
  out->mOBS_ACT.mX[14UL] = t3->mU.mX[0UL];
  out->mOBS_ACT.mX[15UL] = -t3->mU.mX[0UL];
  out->mOBS_ACT.mX[16UL] = -Ideal_Torque_Source_R_w;
  out->mOBS_ACT.mX[35UL] = -t3->mX.mX[6UL] + t3->mU.mX[1UL];
  Rotational_Damper_t = t3->mX.mX[4UL] * 0.05;
  out->mOBS_ACT.mX[0UL] = 0.0;
  out->mOBS_ACT.mX[1UL] = t3->mX.mX[0UL] * 0.0012732395447351628;
  out->mOBS_ACT.mX[5UL] = t3->mX.mX[1UL];
  out->mOBS_ACT.mX[6UL] = 0.0;
  out->mOBS_ACT.mX[7UL] = t3->mX.mX[0UL];
  out->mOBS_ACT.mX[8UL] = t3->mX.mX[0UL];
  out->mOBS_ACT.mX[10UL] = t3->mX.mX[1UL];
  out->mOBS_ACT.mX[11UL] = t3->mX.mX[1UL];
  out->mOBS_ACT.mX[12UL] = 0.0;
  out->mOBS_ACT.mX[13UL] = Ideal_Torque_Source_R_w;
  out->mOBS_ACT.mX[17UL] = t3->mX.mX[0UL];
  out->mOBS_ACT.mX[18UL] = t3->mX.mX[0UL];
  out->mOBS_ACT.mX[19UL] = t3->mX.mX[0UL];
  out->mOBS_ACT.mX[20UL] = t3->mX.mX[5UL];
  out->mOBS_ACT.mX[21UL] = 0.0;
  out->mOBS_ACT.mX[22UL] = 0.0;
  out->mOBS_ACT.mX[23UL] = t3->mX.mX[0UL] * 0.0012732395447351628;
  out->mOBS_ACT.mX[24UL] = t3->mX.mX[0UL];
  out->mOBS_ACT.mX[26UL] = 0.0;
  out->mOBS_ACT.mX[27UL] = t3->mX.mX[0UL];
  out->mOBS_ACT.mX[28UL] = 0.0;
  out->mOBS_ACT.mX[29UL] = t3->mX.mX[0UL];
  out->mOBS_ACT.mX[30UL] = t3->mX.mX[6UL];
  out->mOBS_ACT.mX[31UL] = t3->mX.mX[7UL];
  out->mOBS_ACT.mX[32UL] = t3->mX.mX[0UL] * 0.0012732395447351628;
  out->mOBS_ACT.mX[33UL] = t3->mX.mX[0UL] * 0.0012732395447351628;
  out->mOBS_ACT.mX[34UL] = t3->mX.mX[2UL];
  out->mOBS_ACT.mX[36UL] = 0.0;
  out->mOBS_ACT.mX[37UL] = 0.0;
  out->mOBS_ACT.mX[38UL] = 0.0;
  out->mOBS_ACT.mX[39UL] = 0.0;
  out->mOBS_ACT.mX[40UL] = t3->mX.mX[0UL];
  out->mOBS_ACT.mX[41UL] = Ideal_Torque_Source_R_w;
  out->mOBS_ACT.mX[42UL] = Rotational_Damper_t;
  out->mOBS_ACT.mX[43UL] = Rotational_Damper_t * 20.0;
  out->mOBS_ACT.mX[44UL] = t3->mX.mX[0UL];
  out->mOBS_ACT.mX[45UL] = Ideal_Torque_Source_R_w;
  out->mOBS_ACT.mX[46UL] = t3->mX.mX[3UL] * 500.0;
  out->mOBS_ACT.mX[47UL] = t3->mX.mX[4UL];
  out->mOBS_ACT.mX[48UL] = t3->mX.mX[3UL];
  out->mOBS_ACT.mX[49UL] = t3->mU.mX[0UL];
  out->mOBS_ACT.mX[50UL] = t3->mU.mX[1UL];
  (void)sys;
  (void)out;
  return 0;
}
