/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Servo.h
 *
 * Code generated for Simulink model 'Servo'.
 *
 * Model version                  : 1.31
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Apr 10 12:38:22 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Servo_h_
#define RTW_HEADER_Servo_h_
#include <stddef.h>
#ifndef Servo_COMMON_INCLUDES_
# define Servo_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "arduino_servowrite_lct.h"
#endif                                 /* Servo_COMMON_INCLUDES_ */

#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#define Servo_M                        (rtM)

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
  real_T In2;                          /* '<Root>/In2' */
  real_T In3;                          /* '<Root>/In3' */
  real_T In4;                          /* '<Root>/In4' */
  real_T In5;                          /* '<Root>/In5' */
  real_T In6;                          /* '<Root>/In6' */
} ExtU;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T *errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU rtU;

/* Model entry point functions */
extern void Servo_initialize(void);
extern void Servo_step(void);
extern void Servo_terminate(void);

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
 * hilite_system('servo_mixed/Servo Motor')    - opens subsystem servo_mixed/Servo Motor
 * hilite_system('servo_mixed/Servo Motor/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'servo_mixed'
 * '<S1>'   : 'servo_mixed/Servo Motor'
 * '<S2>'   : 'servo_mixed/Servo Motor/Standard Servo Write'
 * '<S3>'   : 'servo_mixed/Servo Motor/Standard Servo Write1'
 * '<S4>'   : 'servo_mixed/Servo Motor/Standard Servo Write2'
 * '<S5>'   : 'servo_mixed/Servo Motor/Standard Servo Write3'
 * '<S6>'   : 'servo_mixed/Servo Motor/Standard Servo Write4'
 * '<S7>'   : 'servo_mixed/Servo Motor/Standard Servo Write5'
 */
#endif                                 /* RTW_HEADER_Servo_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
