/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: serial_demo.h
 *
 * Code generated for Simulink model 'serial_demo'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Apr 10 23:23:19 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_serial_demo_h_
#define RTW_HEADER_serial_demo_h_
#include <stddef.h>
#include <string.h>
#ifndef serial_demo_COMMON_INCLUDES_
# define serial_demo_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_digitalio.h"
#include "arduino_serialread_lct.h"
#include "arduino_servoread_lct.h"
#include "arduino_servowrite_lct.h"
#endif                                 /* serial_demo_COMMON_INCLUDES_ */

#include "serial_demo_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  void *DigitalOutput_PWORK;           /* '<S1>/Digital Output' */
  codertarget_arduinobase_block_T obj; /* '<S1>/Digital Output' */
} DW_serial_demo_T;

/* Parameters (auto storage) */
struct P_serial_demo_T_ {
  uint32_T ServoWrite_pinNumber;       /* Mask Parameter: ServoWrite_pinNumber
                                        * Referenced by: '<S3>/Servo Write'
                                        */
  uint32_T ServoWrite_pinNumber_a;     /* Mask Parameter: ServoWrite_pinNumber_a
                                        * Referenced by: '<S4>/Servo Write'
                                        */
  uint32_T ServoWrite_pinNumber_h;     /* Mask Parameter: ServoWrite_pinNumber_h
                                        * Referenced by: '<S5>/Servo Write'
                                        */
  uint32_T ServoWrite_pinNumber_j;     /* Mask Parameter: ServoWrite_pinNumber_j
                                        * Referenced by: '<S6>/Servo Write'
                                        */
  uint32_T ServoWrite_pinNumber_d;     /* Mask Parameter: ServoWrite_pinNumber_d
                                        * Referenced by: '<S7>/Servo Write'
                                        */
  uint32_T ServoWrite_pinNumber_m;     /* Mask Parameter: ServoWrite_pinNumber_m
                                        * Referenced by: '<S8>/Servo Write'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  uint32_T SerialReceive_p1;           /* Computed Parameter: SerialReceive_p1
                                        * Referenced by: '<Root>/Serial Receive'
                                        */
  uint32_T StandardServoRead_p2;       /* Computed Parameter: StandardServoRead_p2
                                        * Referenced by: '<S2>/Standard Servo Read'
                                        */
  uint32_T StandardServoRead1_p2;      /* Computed Parameter: StandardServoRead1_p2
                                        * Referenced by: '<S2>/Standard Servo Read1'
                                        */
  uint32_T StandardServoRead2_p2;      /* Computed Parameter: StandardServoRead2_p2
                                        * Referenced by: '<S2>/Standard Servo Read2'
                                        */
  uint32_T StandardServoRead3_p2;      /* Computed Parameter: StandardServoRead3_p2
                                        * Referenced by: '<S2>/Standard Servo Read3'
                                        */
  uint32_T StandardServoRead4_p2;      /* Computed Parameter: StandardServoRead4_p2
                                        * Referenced by: '<S2>/Standard Servo Read4'
                                        */
  uint32_T StandardServoRead5_p2;      /* Computed Parameter: StandardServoRead5_p2
                                        * Referenced by: '<S2>/Standard Servo Read5'
                                        */
  uint8_T StandardServoRead_p1;        /* Computed Parameter: StandardServoRead_p1
                                        * Referenced by: '<S2>/Standard Servo Read'
                                        */
  uint8_T StandardServoRead1_p1;       /* Computed Parameter: StandardServoRead1_p1
                                        * Referenced by: '<S2>/Standard Servo Read1'
                                        */
  uint8_T StandardServoRead2_p1;       /* Computed Parameter: StandardServoRead2_p1
                                        * Referenced by: '<S2>/Standard Servo Read2'
                                        */
  uint8_T StandardServoRead3_p1;       /* Computed Parameter: StandardServoRead3_p1
                                        * Referenced by: '<S2>/Standard Servo Read3'
                                        */
  uint8_T StandardServoRead4_p1;       /* Computed Parameter: StandardServoRead4_p1
                                        * Referenced by: '<S2>/Standard Servo Read4'
                                        */
  uint8_T StandardServoRead5_p1;       /* Computed Parameter: StandardServoRead5_p1
                                        * Referenced by: '<S2>/Standard Servo Read5'
                                        */
  uint8_T ServoWrite_p1;               /* Computed Parameter: ServoWrite_p1
                                        * Referenced by: '<S3>/Servo Write'
                                        */
  uint8_T ServoWrite_p1_e;             /* Computed Parameter: ServoWrite_p1_e
                                        * Referenced by: '<S4>/Servo Write'
                                        */
  uint8_T ServoWrite_p1_eh;            /* Computed Parameter: ServoWrite_p1_eh
                                        * Referenced by: '<S5>/Servo Write'
                                        */
  uint8_T ServoWrite_p1_j;             /* Computed Parameter: ServoWrite_p1_j
                                        * Referenced by: '<S6>/Servo Write'
                                        */
  uint8_T ServoWrite_p1_l;             /* Computed Parameter: ServoWrite_p1_l
                                        * Referenced by: '<S7>/Servo Write'
                                        */
  uint8_T ServoWrite_p1_c;             /* Computed Parameter: ServoWrite_p1_c
                                        * Referenced by: '<S8>/Servo Write'
                                        */
  boolean_T SerialReceive_p2;          /* Computed Parameter: SerialReceive_p2
                                        * Referenced by: '<Root>/Serial Receive'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_serial_demo_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_serial_demo_T serial_demo_P;

/* Block states (auto storage) */
extern DW_serial_demo_T serial_demo_DW;

/* Model entry point functions */
extern void serial_demo_initialize(void);
extern void serial_demo_step(void);
extern void serial_demo_terminate(void);

/* Real-time Model object */
extern RT_MODEL_serial_demo_T *const serial_demo_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S3>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S6>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S7>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S8>/Data Type Conversion' : Eliminate redundant data type conversion
 */

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
 * '<Root>' : 'serial_demo'
 * '<S1>'   : 'serial_demo/Digital Output'
 * '<S2>'   : 'serial_demo/Servo Motor'
 * '<S3>'   : 'serial_demo/Servo Motor/Standard Servo Write'
 * '<S4>'   : 'serial_demo/Servo Motor/Standard Servo Write1'
 * '<S5>'   : 'serial_demo/Servo Motor/Standard Servo Write2'
 * '<S6>'   : 'serial_demo/Servo Motor/Standard Servo Write3'
 * '<S7>'   : 'serial_demo/Servo Motor/Standard Servo Write4'
 * '<S8>'   : 'serial_demo/Servo Motor/Standard Servo Write5'
 */
#endif                                 /* RTW_HEADER_serial_demo_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
