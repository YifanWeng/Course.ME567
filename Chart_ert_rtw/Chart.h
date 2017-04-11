/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Chart.h
 *
 * Code generated for Simulink model 'Chart'.
 *
 * Model version                  : 1.45
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Apr 11 00:22:33 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Chart_h_
#define RTW_HEADER_Chart_h_
#include <stddef.h>
#ifndef Chart_COMMON_INCLUDES_
# define Chart_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Chart_COMMON_INCLUDES_ */

#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#define Chart_M                        (rtM)

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (auto storage) for system '<Root>' */
typedef struct {
  real_T t2;                           /* '<Root>/Chart' */
  real_T t1;                           /* '<Root>/Chart' */
  real_T t3;                           /* '<Root>/Chart' */
  real_T t4;                           /* '<Root>/Chart' */
  uint8_T is_active_c3_Chart;          /* '<Root>/Chart' */
  uint8_T is_c3_Chart;                 /* '<Root>/Chart' */
} DW;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T t;                            /* '<Root>/t' */
} ExtU;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T s;                            /* '<Root>/s' */
  real_T dt;                           /* '<Root>/dt' */
  real_T s_old;                        /* '<Root>/s_old' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T *errorStatus;
};

/* Block signals and states (auto storage) */
extern DW rtDW;

/* External inputs (root inport signals with auto storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void Chart_initialize(void);
extern void Chart_step(void);
extern void Chart_terminate(void);

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
 * hilite_system('servo_mixed/Subsystem/Chart')    - opens subsystem servo_mixed/Subsystem/Chart
 * hilite_system('servo_mixed/Subsystem/Chart/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'servo_mixed/Subsystem'
 * '<S1>'   : 'servo_mixed/Subsystem/Chart'
 */
#endif                                 /* RTW_HEADER_Chart_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
