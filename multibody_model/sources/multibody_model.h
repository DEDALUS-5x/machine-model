#ifndef multibody_model_h_
#define multibody_model_h_
#ifndef multibody_model_COMMON_INCLUDES_
#define multibody_model_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "math.h"
#endif

#include "multibody_model_types.h"
#include "machine_x.h"
#include "machine_y.h"
#include "machine_z.h"
#include "control_x.h"
#include "control_y.h"
#include "model_reference_types.h"
#include <string.h>
#include <stddef.h>
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  ((const char_T **)(&((rtm)->errorStatus)))
#endif

#include "RTWCG_util_functions.h"

typedef struct {
  real_T UnitDelay;
  real_T Model1_o2;
  real_T UnitDelay1;
  real_T UnitDelay2;
  real_T UnitDelay3;
  real_T Model3_o2;
  real_T ZeroOrderHold;
  real_T ZeroOrderHold4;
} B_multibody_model_T;

typedef struct {
  real_T UnitDelay_DSTATE;
  real_T UnitDelay1_DSTATE;
  real_T UnitDelay2_DSTATE;
  real_T UnitDelay3_DSTATE;
  MdlrefDW_machine_x_T Model1_InstanceData;
  MdlrefDW_machine_y_T Model3_InstanceData;
  MdlrefDW_machine_z_T Model4_InstanceData;
  MdlrefDW_control_x_T Model_InstanceData;
  MdlrefDW_control_y_T Model2_InstanceData;
} DW_multibody_model_T;

typedef struct {
  real_T x;
  real_T y;
  real_T z;
  real_T a;
  real_T c;
  real_T vx;
  real_T vy;
} ExtU_multibody_model_T;

typedef struct {
  real_T error;
  real_T position[5];
} ExtY_multibody_model_T;

struct P_multibody_model_T_ {
  real_T UnitDelay_InitialCondition;
  real_T UnitDelay1_InitialCondition;
  real_T UnitDelay2_InitialCondition;
  real_T UnitDelay3_InitialCondition;
};

struct tag_RTM_multibody_model_T {
  const char_T *errorStatus;
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    struct {
      uint32_T TID[2];
    } TaskCounters;
  } Timing;
};

extern P_multibody_model_T multibody_model_P;
extern B_multibody_model_T multibody_model_B;
extern DW_multibody_model_T multibody_model_DW;
extern ExtU_multibody_model_T multibody_model_U;
extern ExtY_multibody_model_T multibody_model_Y;
extern real_T rtP_Da;
extern real_T rtP_Dc;
extern real_T rtP_Dpy;
extern real_T rtP_Dvx;
extern real_T rtP_Dvy;
extern real_T rtP_Dz;
extern real_T rtP_Ia;
extern real_T rtP_Ic;
extern real_T rtP_Ipy;
extern real_T rtP_Ivx;
extern real_T rtP_Ivy;
extern real_T rtP_Iz;
extern real_T rtP_Na;
extern real_T rtP_Npy;
extern real_T rtP_Nvx;
extern real_T rtP_Nvy;
extern real_T rtP_Nz;
extern real_T rtP_Pa;
extern real_T rtP_Ppy;
extern real_T rtP_Pvx;
extern real_T rtP_Pvy;
extern real_T rtP_Pz;
extern real_T Dpx;
extern real_T Ipx;
extern real_T Npx;
extern real_T Ppx;
extern RT_MODEL_multibody_model_T *multibody_model(void);
extern void multibody_model_initialize(void);
extern void multibody_model_step(void);
extern void multibody_model_terminate(void);
extern RT_MODEL_multibody_model_T *const multibody_model_M;
extern void fmu_LogOutput(void);

#endif
