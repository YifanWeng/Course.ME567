/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Inverse.h
 *
 * Code generated for Simulink model 'Inverse'.
 *
 * Model version                  : 1.83
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Apr 11 15:20:49 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Inverse_h_
#define RTW_HEADER_Inverse_h_
#include "rtwtypes.h"
#include <math.h>
#include <stddef.h>
#ifndef Inverse_COMMON_INCLUDES_
# define Inverse_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "arduino_servowrite_lct.h"
#endif                                 /* Inverse_COMMON_INCLUDES_ */

#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#define Inverse_M                      (rtM)

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Custom Type definition for MATLAB Function: '<S1>/Inverse Kinematics1' */
#ifndef struct_tag_sy4LJ1pLMocUdPsrBnA99ZG
#define struct_tag_sy4LJ1pLMocUdPsrBnA99ZG

struct tag_sy4LJ1pLMocUdPsrBnA99ZG
{
  real_T q0[6];
  real_T qd[6];
};

#endif                                 /*struct_tag_sy4LJ1pLMocUdPsrBnA99ZG*/

#ifndef typedef_sy4LJ1pLMocUdPsrBnA99ZG
#define typedef_sy4LJ1pLMocUdPsrBnA99ZG

typedef struct tag_sy4LJ1pLMocUdPsrBnA99ZG sy4LJ1pLMocUdPsrBnA99ZG;

#endif                                 /*typedef_sy4LJ1pLMocUdPsrBnA99ZG*/

/* Block signals and states (auto storage) for system '<Root>' */
typedef struct {
  real_T yd_simu[6];
  real_T y_simu[6];                    /* '<S1>/Inverse Kinematics1' */
  real_T s;                            /* '<S1>/Chart' */
  real_T dt;                           /* '<S1>/Chart' */
  real_T s_old;                        /* '<S1>/Chart' */
  real_T t2;                           /* '<S1>/Chart' */
  real_T t1;                           /* '<S1>/Chart' */
  real_T t3;                           /* '<S1>/Chart' */
  real_T t4;                           /* '<S1>/Chart' */
  uint8_T is_active_c3_Inverse;        /* '<S1>/Chart' */
  uint8_T is_c3_Inverse;               /* '<S1>/Chart' */
} DW;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1[6];                      /* '<Root>/Out1' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block signals and states (auto storage) */
extern DW rtDW;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void Inverse_initialize(void);
extern void Inverse_step(void);
extern void Inverse_terminate(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('servo_mixed/Inverse Kinematics')    - opens subsystem servo_mixed/Inverse Kinematics
 * hilite_system('servo_mixed/Inverse Kinematics/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'servo_mixed'
 * '<S1>'   : 'servo_mixed/Inverse Kinematics'
 * '<S2>'   : 'servo_mixed/Inverse Kinematics/Chart'
 * '<S3>'   : 'servo_mixed/Inverse Kinematics/Inverse Kinematics1'
 * '<S4>'   : 'servo_mixed/Inverse Kinematics/Servo Motor'
 * '<S5>'   : 'servo_mixed/Inverse Kinematics/Servo Motor/Standard Servo Write'
 * '<S6>'   : 'servo_mixed/Inverse Kinematics/Servo Motor/Standard Servo Write1'
 * '<S7>'   : 'servo_mixed/Inverse Kinematics/Servo Motor/Standard Servo Write2'
 * '<S8>'   : 'servo_mixed/Inverse Kinematics/Servo Motor/Standard Servo Write3'
 * '<S9>'   : 'servo_mixed/Inverse Kinematics/Servo Motor/Standard Servo Write4'
 * '<S10>'  : 'servo_mixed/Inverse Kinematics/Servo Motor/Standard Servo Write5'
 */
#endif                                 /* RTW_HEADER_Inverse_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
