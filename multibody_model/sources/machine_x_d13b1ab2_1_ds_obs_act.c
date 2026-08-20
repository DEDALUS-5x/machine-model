#include "multibody_model_macros.h"
/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'machine_x/Solver Configuration'.
 */

#include "ne_ds.h"
#include "machine_x_d13b1ab2_1_ds_sys_struct.h"
#include "machine_x_d13b1ab2_1_ds_obs_act.h"
#include "machine_x_d13b1ab2_1_ds.h"
#include "machine_x_d13b1ab2_1_ds_externals.h"
#include "machine_x_d13b1ab2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T machine_x_d13b1ab2_1_ds_obs_act(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  real_T Controlled_Voltage_Source_i;
  real_T DC_Motor_t;
  real_T Translational_Damper1_f;
  real_T Translational_Damper_f;
  Controlled_Voltage_Source_i = (t1->mX.mX[1UL] * 7.897268270691758E-12 +
    t1->mX.mX[0UL] * -0.9999999992999999) + t1->mU.mX[0UL] * -9.999999993E-10;
  DC_Motor_t = (t1->mX.mX[1UL] * -5.548641975308643E-7 + t1->mX.mX[2UL] *
                0.0023555555555555556) + t1->mX.mX[3UL] * -7.066666666666666;
  out->mOBS_ACT.mX[41UL] = t1->mX.mX[2UL];
  out->mOBS_ACT.mX[47UL] = (t1->mX.mX[1UL] * 0.002355555555555555 + t1->mX.mX
    [2UL] * -20.0) + t1->mX.mX[3UL] * 30000.0;
  Translational_Damper_f = t1->mX.mX[1UL] * 0.0023555555555555556 + t1->mX.mX
    [2UL] * -10.0;
  Translational_Damper1_f = t1->mX.mX[2UL] * 10.0;
  out->mOBS_ACT.mX[71UL] = t1->mX.mX[1UL] * 0.00023555555555555556 - t1->mX.mX
    [2UL];
  out->mOBS_ACT.mX[0UL] = Controlled_Voltage_Source_i;
  out->mOBS_ACT.mX[1UL] = 0.0;
  out->mOBS_ACT.mX[2UL] = t1->mU.mX[0UL];
  out->mOBS_ACT.mX[3UL] = t1->mU.mX[0UL];
  out->mOBS_ACT.mX[4UL] = t1->mU.mX[0UL];
  out->mOBS_ACT.mX[5UL] = 0.0;
  out->mOBS_ACT.mX[6UL] = 0.0;
  out->mOBS_ACT.mX[7UL] = t1->mX.mX[1UL];
  out->mOBS_ACT.mX[8UL] = 1.0;
  out->mOBS_ACT.mX[9UL] = 0.0;
  out->mOBS_ACT.mX[10UL] = 0.0;
  out->mOBS_ACT.mX[11UL] = 0.0;
  out->mOBS_ACT.mX[12UL] = 1.0;
  out->mOBS_ACT.mX[13UL] = 0.0;
  out->mOBS_ACT.mX[14UL] = 0.0;
  out->mOBS_ACT.mX[15UL] = 0.0;
  out->mOBS_ACT.mX[16UL] = -Controlled_Voltage_Source_i;
  out->mOBS_ACT.mX[17UL] = 0.0;
  out->mOBS_ACT.mX[18UL] = t1->mU.mX[0UL];
  out->mOBS_ACT.mX[19UL] = DC_Motor_t;
  out->mOBS_ACT.mX[20UL] = t1->mU.mX[0UL];
  out->mOBS_ACT.mX[21UL] = 0.0;
  out->mOBS_ACT.mX[22UL] = t1->mX.mX[1UL];
  out->mOBS_ACT.mX[23UL] = t1->mX.mX[1UL] * 9.549296585513721;
  out->mOBS_ACT.mX[24UL] = t1->mX.mX[0UL];
  out->mOBS_ACT.mX[25UL] = 0.0;
  out->mOBS_ACT.mX[26UL] = t1->mX.mX[1UL] * 0.037037037037037035;
  out->mOBS_ACT.mX[27UL] = t1->mX.mX[1UL];
  out->mOBS_ACT.mX[28UL] = -DC_Motor_t;
  out->mOBS_ACT.mX[29UL] = DC_Motor_t * 27.0;
  out->mOBS_ACT.mX[30UL] = t1->mX.mX[4UL];
  out->mOBS_ACT.mX[31UL] = 0.0;
  out->mOBS_ACT.mX[32UL] = t1->mX.mX[1UL];
  out->mOBS_ACT.mX[33UL] = t1->mX.mX[1UL];
  out->mOBS_ACT.mX[34UL] = 0.0;
  out->mOBS_ACT.mX[35UL] = t1->mX.mX[4UL];
  out->mOBS_ACT.mX[36UL] = t1->mX.mX[1UL];
  out->mOBS_ACT.mX[37UL] = 0.0;
  out->mOBS_ACT.mX[38UL] = 0.0;
  out->mOBS_ACT.mX[39UL] = t1->mX.mX[5UL];
  out->mOBS_ACT.mX[40UL] = t1->mX.mX[2UL];
  out->mOBS_ACT.mX[42UL] = t1->mX.mX[5UL];
  out->mOBS_ACT.mX[43UL] = t1->mX.mX[5UL] * 1000.0;
  out->mOBS_ACT.mX[44UL] = t1->mX.mX[2UL];
  out->mOBS_ACT.mX[45UL] = t1->mX.mX[2UL];
  out->mOBS_ACT.mX[46UL] = t1->mX.mX[2UL];
  out->mOBS_ACT.mX[48UL] = 0.0;
  out->mOBS_ACT.mX[49UL] = 0.0;
  out->mOBS_ACT.mX[50UL] = 0.0;
  out->mOBS_ACT.mX[51UL] = 0.0;
  out->mOBS_ACT.mX[52UL] = 0.0;
  out->mOBS_ACT.mX[53UL] = t1->mU.mX[0UL];
  out->mOBS_ACT.mX[54UL] = t1->mX.mX[2UL];
  out->mOBS_ACT.mX[55UL] = 0.0;
  out->mOBS_ACT.mX[56UL] = t1->mX.mX[1UL] * 0.00023555555555555556;
  out->mOBS_ACT.mX[57UL] = 0.0;
  out->mOBS_ACT.mX[58UL] = 300.0;
  out->mOBS_ACT.mX[59UL] = Translational_Damper_f;
  out->mOBS_ACT.mX[60UL] = Translational_Damper_f * 0.1;
  out->mOBS_ACT.mX[61UL] = 0.0;
  out->mOBS_ACT.mX[62UL] = 0.0;
  out->mOBS_ACT.mX[63UL] = t1->mX.mX[2UL];
  out->mOBS_ACT.mX[64UL] = 0.0;
  out->mOBS_ACT.mX[65UL] = 300.0;
  out->mOBS_ACT.mX[66UL] = Translational_Damper1_f;
  out->mOBS_ACT.mX[67UL] = Translational_Damper1_f * 0.1;
  out->mOBS_ACT.mX[68UL] = t1->mX.mX[2UL];
  out->mOBS_ACT.mX[69UL] = t1->mX.mX[1UL] * 0.00023555555555555556;
  out->mOBS_ACT.mX[70UL] = t1->mX.mX[3UL] * 30000.0;
  out->mOBS_ACT.mX[72UL] = t1->mX.mX[3UL];
  out->mOBS_ACT.mX[73UL] = t1->mX.mX[1UL] * 0.037037037037037035;
  out->mOBS_ACT.mX[74UL] = t1->mX.mX[1UL] * 0.00023555555555555556;
  out->mOBS_ACT.mX[75UL] = DC_Motor_t * 4245.2830188679245;
  out->mOBS_ACT.mX[76UL] = DC_Motor_t * -27.0;
  (void)sys;
  (void)out;
  return 0;
}
