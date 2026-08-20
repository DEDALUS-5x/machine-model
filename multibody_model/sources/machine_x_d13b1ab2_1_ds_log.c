#include "multibody_model_macros.h"
/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'machine_x/Solver Configuration'.
 */

#include "ne_ds.h"
#include "machine_x_d13b1ab2_1_ds_sys_struct.h"
#include "machine_x_d13b1ab2_1_ds_log.h"
#include "machine_x_d13b1ab2_1_ds.h"
#include "machine_x_d13b1ab2_1_ds_externals.h"
#include "machine_x_d13b1ab2_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T machine_x_d13b1ab2_1_ds_log(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  real_T Controlled_Voltage_Source_i;
  real_T DC_Motor_ohmicLosses;
  real_T DC_Motor_t;
  real_T Translational_Damper1_f;
  real_T Translational_Damper_f;
  Controlled_Voltage_Source_i = (t1->mX.mX[1UL] * 7.897268270691758E-12 +
    t1->mX.mX[0UL] * -0.9999999992999999) + t1->mU.mX[0UL] * -9.999999993E-10;
  DC_Motor_ohmicLosses = Controlled_Voltage_Source_i *
    Controlled_Voltage_Source_i * 0.7;
  DC_Motor_t = (t1->mX.mX[1UL] * -5.548641975308643E-7 + t1->mX.mX[2UL] *
                0.0023555555555555556) + t1->mX.mX[3UL] * -7.066666666666666;
  out->mLOG.mX[25UL] = t1->mX.mX[2UL];
  out->mLOG.mX[31UL] = (t1->mX.mX[1UL] * 0.002355555555555555 + t1->mX.mX[2UL] *
                        -20.0) + t1->mX.mX[3UL] * 30000.0;
  Translational_Damper_f = t1->mX.mX[1UL] * 0.0023555555555555556 + t1->mX.mX
    [2UL] * -10.0;
  Translational_Damper1_f = t1->mX.mX[2UL] * 10.0;
  out->mLOG.mX[43UL] = t1->mX.mX[1UL] * 0.00023555555555555556 - t1->mX.mX[2UL];
  out->mLOG.mX[0UL] = Controlled_Voltage_Source_i;
  out->mLOG.mX[1UL] = t1->mU.mX[0UL];
  out->mLOG.mX[2UL] = t1->mU.mX[0UL];
  out->mLOG.mX[3UL] = t1->mU.mX[0UL];
  out->mLOG.mX[4UL] = t1->mX.mX[1UL];
  out->mLOG.mX[5UL] = -Controlled_Voltage_Source_i;
  out->mLOG.mX[6UL] = t1->mU.mX[0UL];
  out->mLOG.mX[7UL] = DC_Motor_t;
  out->mLOG.mX[8UL] = t1->mU.mX[0UL];
  out->mLOG.mX[9UL] = t1->mX.mX[1UL];
  out->mLOG.mX[10UL] = t1->mX.mX[1UL] * 9.549296585513721;
  out->mLOG.mX[11UL] = t1->mX.mX[0UL];
  out->mLOG.mX[12UL] = DC_Motor_ohmicLosses;
  out->mLOG.mX[13UL] = DC_Motor_ohmicLosses;
  out->mLOG.mX[14UL] = t1->mX.mX[1UL] * 0.037037037037037035;
  out->mLOG.mX[15UL] = t1->mX.mX[1UL];
  out->mLOG.mX[16UL] = -DC_Motor_t;
  out->mLOG.mX[17UL] = DC_Motor_t * 27.0;
  out->mLOG.mX[18UL] = t1->mX.mX[4UL];
  out->mLOG.mX[19UL] = t1->mX.mX[1UL];
  out->mLOG.mX[20UL] = t1->mX.mX[1UL];
  out->mLOG.mX[21UL] = t1->mX.mX[4UL];
  out->mLOG.mX[22UL] = t1->mX.mX[1UL];
  out->mLOG.mX[23UL] = t1->mX.mX[5UL];
  out->mLOG.mX[24UL] = t1->mX.mX[2UL];
  out->mLOG.mX[26UL] = t1->mX.mX[5UL];
  out->mLOG.mX[27UL] = t1->mX.mX[5UL] * 1000.0;
  out->mLOG.mX[28UL] = t1->mX.mX[2UL];
  out->mLOG.mX[29UL] = t1->mX.mX[2UL];
  out->mLOG.mX[30UL] = t1->mX.mX[2UL];
  out->mLOG.mX[32UL] = t1->mU.mX[0UL];
  out->mLOG.mX[33UL] = t1->mX.mX[2UL];
  out->mLOG.mX[34UL] = t1->mX.mX[1UL] * 0.00023555555555555556;
  out->mLOG.mX[35UL] = Translational_Damper_f;
  out->mLOG.mX[36UL] = Translational_Damper_f * 0.1;
  out->mLOG.mX[37UL] = t1->mX.mX[2UL];
  out->mLOG.mX[38UL] = Translational_Damper1_f;
  out->mLOG.mX[39UL] = Translational_Damper1_f * 0.1;
  out->mLOG.mX[40UL] = t1->mX.mX[2UL];
  out->mLOG.mX[41UL] = t1->mX.mX[1UL] * 0.00023555555555555556;
  out->mLOG.mX[42UL] = t1->mX.mX[3UL] * 30000.0;
  out->mLOG.mX[44UL] = t1->mX.mX[3UL];
  out->mLOG.mX[45UL] = t1->mX.mX[1UL] * 0.037037037037037035;
  out->mLOG.mX[46UL] = t1->mX.mX[1UL] * 0.00023555555555555556;
  out->mLOG.mX[47UL] = DC_Motor_t * 4245.2830188679245;
  out->mLOG.mX[48UL] = DC_Motor_t * -27.0;
  (void)sys;
  (void)out;
  return 0;
}
