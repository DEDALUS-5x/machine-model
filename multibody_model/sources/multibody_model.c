#include "multibody_model_macros.h"
#include "multibody_model.h"
#include <math.h>
#include "rtwtypes.h"
#include <string.h>
#include "control_x.h"
#include "machine_x.h"
#include "control_y.h"
#include "machine_y.h"
#include "machine_z.h"

rtTimingBridge multibody_model_TimingBrdg;
real_T Dpx = 1.0E-6;
real_T Ipx = 1.0E-6;
real_T Npx = 65.0;
real_T Ppx = 300.0;
B_multibody_model_T multibody_model_B;
DW_multibody_model_T multibody_model_DW;
ExtU_multibody_model_T multibody_model_U;
ExtY_multibody_model_T multibody_model_Y;
static RT_MODEL_multibody_model_T multibody_model_M_;
RT_MODEL_multibody_model_T *const multibody_model_M = &multibody_model_M_;
static void rate_scheduler(void);
static void rate_scheduler(void)
{
  (multibody_model_M->Timing.TaskCounters.TID[1])++;
  if ((multibody_model_M->Timing.TaskCounters.TID[1]) > 9) {
    multibody_model_M->Timing.TaskCounters.TID[1] = 0;
  }
}

void multibody_model_step(void)
{
  real_T rtb_Model1_o1;
  real_T rtb_Model3_o1;
  real_T rtb_Model3_o3;
  real_T rtb_Model3_o4;
  real_T rtb_Model4;
  real_T rtb_Model;
  real_T rtb_Model2_o1;
  real_T rtb_Model2_o2;
  real_T rtb_Model2_o3;
  real_T a;
  real_T b_a;
  real_T c_a;
  boolean_T tmp;
  multibody_model_B.UnitDelay = multibody_model_DW.UnitDelay_DSTATE;
  machine_x(&(multibody_model_DW.Model1_InstanceData.rtm),
            &multibody_model_B.UnitDelay, &rtb_Model1_o1,
            &multibody_model_B.Model1_o2,
            &(multibody_model_DW.Model1_InstanceData.rtb),
            &(multibody_model_DW.Model1_InstanceData.rtdw));
  multibody_model_B.UnitDelay1 = multibody_model_DW.UnitDelay1_DSTATE;
  multibody_model_B.UnitDelay2 = multibody_model_DW.UnitDelay2_DSTATE;
  multibody_model_B.UnitDelay3 = multibody_model_DW.UnitDelay3_DSTATE;
  machine_y(&(multibody_model_DW.Model3_InstanceData.rtm),
            &multibody_model_B.UnitDelay1, &multibody_model_B.UnitDelay2,
            &multibody_model_B.UnitDelay3, &rtb_Model3_o1,
            &multibody_model_B.Model3_o2, &rtb_Model3_o3, &rtb_Model3_o4,
            &(multibody_model_DW.Model3_InstanceData.rtb),
            &(multibody_model_DW.Model3_InstanceData.rtdw));
  machine_z(&(multibody_model_DW.Model4_InstanceData.rtm), &multibody_model_U.z,
            &rtb_Model4, &(multibody_model_DW.Model4_InstanceData.rtb),
            &(multibody_model_DW.Model4_InstanceData.rtdw));
  a = multibody_model_U.x - multibody_model_B.Model1_o2;
  b_a = multibody_model_U.y - multibody_model_B.Model3_o2;
  c_a = multibody_model_U.z - rtb_Model4;
  multibody_model_Y.error = sqrt((a * a + b_a * b_a) + c_a * c_a);
  multibody_model_Y.position[0] = multibody_model_B.Model1_o2;
  multibody_model_Y.position[1] = multibody_model_B.Model3_o2;
  multibody_model_Y.position[2] = rtb_Model4;
  multibody_model_Y.position[3] = rtb_Model3_o3;
  multibody_model_Y.position[4] = rtb_Model3_o4;
  tmp = (multibody_model_M->Timing.TaskCounters.TID[1] == 0);
  if (tmp) {
    multibody_model_B.ZeroOrderHold = multibody_model_B.Model1_o2;
  }

  control_x(&(multibody_model_DW.Model_InstanceData.rtm),
            &multibody_model_B.ZeroOrderHold, &rtb_Model1_o1,
            &multibody_model_U.x, &multibody_model_U.vx, &rtb_Model,
            &(multibody_model_DW.Model_InstanceData.rtb),
            &(multibody_model_DW.Model_InstanceData.rtdw));
  if (tmp) {
    multibody_model_B.ZeroOrderHold4 = multibody_model_B.Model3_o2;
  }

  control_y(&(multibody_model_DW.Model2_InstanceData.rtm),
            &multibody_model_B.ZeroOrderHold4, &rtb_Model3_o1,
            &multibody_model_U.y, &multibody_model_U.vy, &multibody_model_U.a,
            &multibody_model_U.c, &rtb_Model3_o3, &rtb_Model3_o4, &rtb_Model2_o1,
            &rtb_Model2_o2, &rtb_Model2_o3,
            &(multibody_model_DW.Model2_InstanceData.rtb),
            &(multibody_model_DW.Model2_InstanceData.rtdw));
  multibody_model_DW.UnitDelay_DSTATE = rtb_Model;
  multibody_model_DW.UnitDelay1_DSTATE = rtb_Model2_o1;
  multibody_model_DW.UnitDelay2_DSTATE = rtb_Model2_o2;
  multibody_model_DW.UnitDelay3_DSTATE = rtb_Model2_o3;
  fmu_LogOutput();
  multibody_model_M->Timing.clockTick0++;
  if (!multibody_model_M->Timing.clockTick0) {
    multibody_model_M->Timing.clockTickH0++;
  }

  rate_scheduler();
}

void multibody_model_initialize(void)
{
  multibody_model_DW.UnitDelay_DSTATE =
    multibody_model_P.UnitDelay_InitialCondition;
  multibody_model_DW.UnitDelay1_DSTATE =
    multibody_model_P.UnitDelay1_InitialCondition;
  multibody_model_DW.UnitDelay2_DSTATE =
    multibody_model_P.UnitDelay2_InitialCondition;
  multibody_model_DW.UnitDelay3_DSTATE =
    multibody_model_P.UnitDelay3_InitialCondition;
  machine_x_Init(&(multibody_model_DW.Model1_InstanceData.rtm),
                 &(multibody_model_DW.Model1_InstanceData.rtdw));
  machine_y_Init(&(multibody_model_DW.Model3_InstanceData.rtm),
                 &(multibody_model_DW.Model3_InstanceData.rtdw));
  machine_z_Init(&(multibody_model_DW.Model4_InstanceData.rtm),
                 &(multibody_model_DW.Model4_InstanceData.rtdw));
  control_x_Init(&(multibody_model_DW.Model_InstanceData.rtdw));
  control_y_Init(&(multibody_model_DW.Model2_InstanceData.rtdw));
}

void multibody_model_terminate(void)
{
  machine_x_Term(&(multibody_model_DW.Model1_InstanceData.rtdw));
  machine_y_Term(&(multibody_model_DW.Model3_InstanceData.rtdw));
  machine_z_Term(&(multibody_model_DW.Model4_InstanceData.rtdw));
}

RT_MODEL_multibody_model_T *multibody_model(void)
{
  (void) memset((void *)multibody_model_M, 0,
                sizeof(RT_MODEL_multibody_model_T));
  (void) memset(((void *) &multibody_model_B), 0,
                sizeof(B_multibody_model_T));
  (void) memset((void *)&multibody_model_DW, 0,
                sizeof(DW_multibody_model_T));
  (void)memset(&multibody_model_U, 0, sizeof(ExtU_multibody_model_T));
  (void)memset(&multibody_model_Y, 0, sizeof(ExtY_multibody_model_T));

  {
    static uint32_T *clockTickPtrs[2];
    static uint32_T *clockTickHPtrs[2];
    static uint32_T *taskCounterPtrs;
    multibody_model_TimingBrdg.nTasks = 2;
    clockTickPtrs[0] = &(multibody_model_M->Timing.clockTick0);
    clockTickHPtrs[0] = &(multibody_model_M->Timing.clockTickH0);
    clockTickPtrs[1] = (NULL);
    clockTickHPtrs[1] = (NULL);
    multibody_model_TimingBrdg.clockTick = clockTickPtrs;
    multibody_model_TimingBrdg.clockTickH = clockTickHPtrs;
    taskCounterPtrs = &(multibody_model_M->Timing.TaskCounters.TID[0]);
    multibody_model_TimingBrdg.taskCounter = taskCounterPtrs;
  }

  control_x_initialize(rtmGetErrorStatusPointer(multibody_model_M),
                       &multibody_model_TimingBrdg, 0, 1,
                       &(multibody_model_DW.Model_InstanceData.rtm),
                       &(multibody_model_DW.Model_InstanceData.rtb),
                       &(multibody_model_DW.Model_InstanceData.rtdw));
  machine_x_initialize(rtmGetErrorStatusPointer(multibody_model_M),
                       &multibody_model_TimingBrdg, 0,
                       &(multibody_model_DW.Model1_InstanceData.rtm),
                       &(multibody_model_DW.Model1_InstanceData.rtb),
                       &(multibody_model_DW.Model1_InstanceData.rtdw));
  control_y_initialize(rtmGetErrorStatusPointer(multibody_model_M),
                       &multibody_model_TimingBrdg, 0, 1,
                       &(multibody_model_DW.Model2_InstanceData.rtm),
                       &(multibody_model_DW.Model2_InstanceData.rtb),
                       &(multibody_model_DW.Model2_InstanceData.rtdw));
  machine_y_initialize(rtmGetErrorStatusPointer(multibody_model_M),
                       &multibody_model_TimingBrdg, 0,
                       &(multibody_model_DW.Model3_InstanceData.rtm),
                       &(multibody_model_DW.Model3_InstanceData.rtb),
                       &(multibody_model_DW.Model3_InstanceData.rtdw));
  machine_z_initialize(rtmGetErrorStatusPointer(multibody_model_M),
                       &multibody_model_TimingBrdg, 0,
                       &(multibody_model_DW.Model4_InstanceData.rtm),
                       &(multibody_model_DW.Model4_InstanceData.rtb),
                       &(multibody_model_DW.Model4_InstanceData.rtdw));
  return multibody_model_M;
}
