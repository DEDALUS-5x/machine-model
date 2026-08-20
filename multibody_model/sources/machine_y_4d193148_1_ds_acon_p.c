#include "multibody_model_macros.h"
/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'machine_y/Solver Configuration'.
 */

#include "ne_ds.h"
#include "machine_y_4d193148_1_ds_sys_struct.h"
#include "machine_y_4d193148_1_ds_acon_p.h"
#include "machine_y_4d193148_1_ds.h"
#include "machine_y_4d193148_1_ds_externals.h"
#include "machine_y_4d193148_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T machine_y_4d193148_1_ds_acon_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_2[13] = { 0, 1, 0, 1, 2, 4, 5, 0, 3, 4, 5, 0, 4 };

  static int32_T _cg_const_1[7] = { 0, 2, 7, 11, 13, 13, 13 };

  (void)t1;
  out->mACON_P.mNumCol = 6UL;
  out->mACON_P.mNumRow = 6UL;
  out->mACON_P.mJc[0] = _cg_const_1[0];
  out->mACON_P.mJc[1] = _cg_const_1[1];
  out->mACON_P.mJc[2] = _cg_const_1[2];
  out->mACON_P.mJc[3] = _cg_const_1[3];
  out->mACON_P.mJc[4] = _cg_const_1[4];
  out->mACON_P.mJc[5] = _cg_const_1[5];
  out->mACON_P.mJc[6] = _cg_const_1[6];
  out->mACON_P.mIr[0] = _cg_const_2[0];
  out->mACON_P.mIr[1] = _cg_const_2[1];
  out->mACON_P.mIr[2] = _cg_const_2[2];
  out->mACON_P.mIr[3] = _cg_const_2[3];
  out->mACON_P.mIr[4] = _cg_const_2[4];
  out->mACON_P.mIr[5] = _cg_const_2[5];
  out->mACON_P.mIr[6] = _cg_const_2[6];
  out->mACON_P.mIr[7] = _cg_const_2[7];
  out->mACON_P.mIr[8] = _cg_const_2[8];
  out->mACON_P.mIr[9] = _cg_const_2[9];
  out->mACON_P.mIr[10] = _cg_const_2[10];
  out->mACON_P.mIr[11] = _cg_const_2[11];
  out->mACON_P.mIr[12] = _cg_const_2[12];
  (void)sys;
  (void)out;
  return 0;
}
