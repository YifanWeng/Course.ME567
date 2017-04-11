/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: servo_control.h
 *
 * Code generated for Simulink model 'servo_control'.
 *
 * Model version                  : 1.20
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Apr 10 16:43:03 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_servo_control_h_
#define RTW_HEADER_servo_control_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef servo_control_COMMON_INCLUDES_
# define servo_control_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "arduino_servowrite_lct.h"
#endif                                 /* servo_control_COMMON_INCLUDES_ */

#include "servo_control_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T Clock;                        /* '<Root>/Clock' */
  real_T s;                            /* '<Root>/Chart' */
} B_servo_control_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T t2;                           /* '<Root>/Chart' */
  real_T t1;                           /* '<Root>/Chart' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */

  uint8_T is_active_c3_servo_control;  /* '<Root>/Chart' */
  uint8_T is_c3_servo_control;         /* '<Root>/Chart' */
} DW_servo_control_T;

/* Parameters (auto storage) */
struct P_servo_control_T_ {
  uint32_T ServoWrite_pinNumber;       /* Mask Parameter: ServoWrite_pinNumber
                                        * Referenced by: '<S4>/Servo Write'
                                        */
  uint32_T ServoWrite_pinNumber_k;     /* Mask Parameter: ServoWrite_pinNumber_k
                                        * Referenced by: '<S5>/Servo Write'
                                        */
  uint32_T ServoWrite_pinNumber_l;     /* Mask Parameter: ServoWrite_pinNumber_l
                                        * Referenced by: '<S6>/Servo Write'
                                        */
  uint32_T ServoWrite_pinNumber_h;     /* Mask Parameter: ServoWrite_pinNumber_h
                                        * Referenced by: '<S7>/Servo Write'
                                        */
  uint32_T ServoWrite_pinNumber_ks;    /* Mask Parameter: ServoWrite_pinNumber_ks
                                        * Referenced by: '<S8>/Servo Write'
                                        */
  uint32_T ServoWrite_pinNumber_ha;    /* Mask Parameter: ServoWrite_pinNumber_ha
                                        * Referenced by: '<S9>/Servo Write'
                                        */
  uint8_T ServoWrite_p1;               /* Computed Parameter: ServoWrite_p1
                                        * Referenced by: '<S4>/Servo Write'
                                        */
  uint8_T ServoWrite_p1_g;             /* Computed Parameter: ServoWrite_p1_g
                                        * Referenced by: '<S5>/Servo Write'
                                        */
  uint8_T ServoWrite_p1_a;             /* Computed Parameter: ServoWrite_p1_a
                                        * Referenced by: '<S6>/Servo Write'
                                        */
  uint8_T ServoWrite_p1_a2;            /* Computed Parameter: ServoWrite_p1_a2
                                        * Referenced by: '<S7>/Servo Write'
                                        */
  uint8_T ServoWrite_p1_m;             /* Computed Parameter: ServoWrite_p1_m
                                        * Referenced by: '<S8>/Servo Write'
                                        */
  uint8_T ServoWrite_p1_k;             /* Computed Parameter: ServoWrite_p1_k
                                        * Referenced by: '<S9>/Servo Write'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_servo_control_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_servo_control_T servo_control_P;

/* Block signals (auto storage) */
extern B_servo_control_T servo_control_B;

/* Block states (auto storage) */
extern DW_servo_control_T servo_control_DW;

/* Model entry point functions */
extern void servo_control_initialize(void);
extern void servo_control_step(void);
extern void servo_control_terminate(void);

/* Real-time Model object */
extern RT_MODEL_servo_control_T *const servo_control_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'servo_control'
 * '<S1>'   : 'servo_control/Chart'
 * '<S2>'   : 'servo_control/Inverse Kinematics'
 * '<S3>'   : 'servo_control/Servo Motor'
 * '<S4>'   : 'servo_control/Servo Motor/Standard Servo Write'
 * '<S5>'   : 'servo_control/Servo Motor/Standard Servo Write1'
 * '<S6>'   : 'servo_control/Servo Motor/Standard Servo Write2'
 * '<S7>'   : 'servo_control/Servo Motor/Standard Servo Write3'
 * '<S8>'   : 'servo_control/Servo Motor/Standard Servo Write4'
 * '<S9>'   : 'servo_control/Servo Motor/Standard Servo Write5'
 */
#endif                                 /* RTW_HEADER_servo_control_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
