#include "multibody_model_macros.h"
/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'machine_y/Solver Configuration1'.
 */

#include "ne_ds.h"
#include "machine_y_ac6adea4_1_ds_sys_struct.h"
#include "machine_y_ac6adea4_1_ds_obs_all.h"
#include "machine_y_ac6adea4_1_ds.h"
#include "machine_y_ac6adea4_1_ds_externals.h"
#include "machine_y_ac6adea4_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T machine_y_ac6adea4_1_ds_obs_all(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t3, NeDsMethodOutput *out)
{
  real_T Ideal_Torque_Source_R_w;
  real_T Rotational_Damper_t;
  out->mOBS_ALL.mX[4UL] = 0.0;
  out->mOBS_ALL.mX[3UL] = t3->mX.mX[0UL];
  Ideal_Torque_Source_R_w = (t3->mX.mX[2UL] * -199.99999999999997 + t3->mU.mX
    [0UL] * 19.999999999999996) + t3->mX.mX[0UL];
  out->mOBS_ALL.mX[14UL] = t3->mU.mX[0UL];
  out->mOBS_ALL.mX[16UL] = -Ideal_Torque_Source_R_w;
  out->mOBS_ALL.mX[19UL] = t3->mU.mX[1UL];
  out->mOBS_ALL.mX[20UL] = -t3->mU.mX[1UL];
  out->mOBS_ALL.mX[21UL] = -t3->mX.mX[0UL];
  out->mOBS_ALL.mX[25UL] = t3->mU.mX[0UL] + t3->mU.mX[1UL];
  Rotational_Damper_t = t3->mX.mX[2UL] * -9.999999999999998 + t3->mU.mX[0UL];
  out->mOBS_ALL.mX[37UL] = t3->mX.mX[2UL] * -199.99999999999997 + t3->mU.mX[0UL]
    * 19.999999999999996;
  out->mOBS_ALL.mX[0UL] = t3->mX.mX[1UL];
  out->mOBS_ALL.mX[1UL] = 0.0;
  out->mOBS_ALL.mX[2UL] = t3->mX.mX[0UL];
  out->mOBS_ALL.mX[5UL] = t3->mX.mX[1UL];
  out->mOBS_ALL.mX[6UL] = t3->mX.mX[1UL];
  out->mOBS_ALL.mX[7UL] = 0.0;
  out->mOBS_ALL.mX[8UL] = 0.0;
  out->mOBS_ALL.mX[9UL] = -t3->mU.mX[0UL];
  out->mOBS_ALL.mX[10UL] = -t3->mU.mX[0UL];
  out->mOBS_ALL.mX[11UL] = -t3->mU.mX[0UL];
  out->mOBS_ALL.mX[12UL] = 0.0;
  out->mOBS_ALL.mX[13UL] = Ideal_Torque_Source_R_w;
  out->mOBS_ALL.mX[15UL] = -t3->mU.mX[0UL];
  out->mOBS_ALL.mX[17UL] = 0.0;
  out->mOBS_ALL.mX[18UL] = t3->mX.mX[0UL];
  out->mOBS_ALL.mX[22UL] = t3->mX.mX[0UL];
  out->mOBS_ALL.mX[23UL] = t3->mX.mX[0UL];
  out->mOBS_ALL.mX[24UL] = t3->mX.mX[0UL];
  out->mOBS_ALL.mX[26UL] = 0.0;
  out->mOBS_ALL.mX[27UL] = 0.0;
  out->mOBS_ALL.mX[28UL] = 0.0;
  out->mOBS_ALL.mX[29UL] = 0.0;
  out->mOBS_ALL.mX[30UL] = t3->mX.mX[0UL];
  out->mOBS_ALL.mX[31UL] = Ideal_Torque_Source_R_w;
  out->mOBS_ALL.mX[32UL] = Rotational_Damper_t;
  out->mOBS_ALL.mX[33UL] = Rotational_Damper_t * 20.0;
  out->mOBS_ALL.mX[34UL] = t3->mX.mX[0UL];
  out->mOBS_ALL.mX[35UL] = Ideal_Torque_Source_R_w;
  out->mOBS_ALL.mX[36UL] = t3->mX.mX[2UL] * 10.0;
  out->mOBS_ALL.mX[38UL] = t3->mX.mX[2UL];
  out->mOBS_ALL.mX[39UL] = t3->mU.mX[0UL];
  out->mOBS_ALL.mX[40UL] = t3->mU.mX[1UL];
  (void)sys;
  (void)out;
  return 0;
}
