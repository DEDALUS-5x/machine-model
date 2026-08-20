#include "multibody_model_macros.h"
/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'machine_y/Solver Configuration2'.
 */

#include "ne_ds.h"
#include "machine_y_430a60f0_1_ds_sys_struct.h"
#include "machine_y_430a60f0_1_ds_tdxf_p.h"
#include "machine_y_430a60f0_1_ds.h"
#include "machine_y_430a60f0_1_ds_externals.h"
#include "machine_y_430a60f0_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T machine_y_430a60f0_1_ds_tdxf_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static int32_T _cg_const_2[11] = { 0, 3, 4, 5, 2, 4, 5, 1, 4, 3, 4 };

  static int32_T _cg_const_1[7] = { 0, 2, 2, 4, 7, 9, 11 };

  (void)t1;
  out->mTDXF_P.mNumCol = 6UL;
  out->mTDXF_P.mNumRow = 6UL;
  out->mTDXF_P.mJc[0] = _cg_const_1[0];
  out->mTDXF_P.mJc[1] = _cg_const_1[1];
  out->mTDXF_P.mJc[2] = _cg_const_1[2];
  out->mTDXF_P.mJc[3] = _cg_const_1[3];
  out->mTDXF_P.mJc[4] = _cg_const_1[4];
  out->mTDXF_P.mJc[5] = _cg_const_1[5];
  out->mTDXF_P.mJc[6] = _cg_const_1[6];
  out->mTDXF_P.mIr[0] = _cg_const_2[0];
  out->mTDXF_P.mIr[1] = _cg_const_2[1];
  out->mTDXF_P.mIr[2] = _cg_const_2[2];
  out->mTDXF_P.mIr[3] = _cg_const_2[3];
  out->mTDXF_P.mIr[4] = _cg_const_2[4];
  out->mTDXF_P.mIr[5] = _cg_const_2[5];
  out->mTDXF_P.mIr[6] = _cg_const_2[6];
  out->mTDXF_P.mIr[7] = _cg_const_2[7];
  out->mTDXF_P.mIr[8] = _cg_const_2[8];
  out->mTDXF_P.mIr[9] = _cg_const_2[9];
  out->mTDXF_P.mIr[10] = _cg_const_2[10];
  (void)sys;
  (void)out;
  return 0;
}
