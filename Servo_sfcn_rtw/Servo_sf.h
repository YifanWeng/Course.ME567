/*
 * Servo_sf.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Servo_sf".
 *
 * Model version              : 1.44
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Mon Apr 10 23:25:27 2017
 *
 * Target selection: rtwsfcn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Atmel->AVR
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Servo_sf_h_
#define RTW_HEADER_Servo_sf_h_
#include <string.h>
#include <stddef.h>
#ifndef Servo_sf_COMMON_INCLUDES_
# define Servo_sf_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME                Servo_sf
#define S_FUNCTION_LEVEL               2
#define RTW_GENERATED_S_FUNCTION
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "arduino_servowrite_lct.h"
#if !defined(MATLAB_MEX_FILE)
#include "rt_matrx.h"
#endif

#if !defined(RTW_SFUNCTION_DEFINES)
#define RTW_SFUNCTION_DEFINES

typedef struct {
  void *blockIO;
  void *defaultParam;
  void *nonContDerivSig;
} LocalS;

#define ssSetLocalBlockIO(S, io)       ((LocalS *)ssGetUserData(S))->blockIO = ((void *)(io))
#define ssGetLocalBlockIO(S)           ((LocalS *)ssGetUserData(S))->blockIO
#define ssSetLocalDefaultParam(S, paramVector) ((LocalS *)ssGetUserData(S))->defaultParam = (paramVector)
#define ssGetLocalDefaultParam(S)      ((LocalS *)ssGetUserData(S))->defaultParam
#define ssSetLocalNonContDerivSig(S, pSig) ((LocalS *)ssGetUserData(S))->nonContDerivSig = (pSig)
#define ssGetLocalNonContDerivSig(S)   ((LocalS *)ssGetUserData(S))->nonContDerivSig
#endif
#endif                                 /* Servo_sf_COMMON_INCLUDES_ */

#include "Servo_sf_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T *In1;                         /* '<Root>/In1' */
  real_T *In2;                         /* '<Root>/In2' */
  real_T *In3;                         /* '<Root>/In3' */
  real_T *In4;                         /* '<Root>/In4' */
  real_T *In5;                         /* '<Root>/In5' */
  real_T *In6;                         /* '<Root>/In6' */
} ExternalUPtrs_Servo_T;

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
 * hilite_system('servo_mixed/Subsystem/Servo Motor')    - opens subsystem servo_mixed/Subsystem/Servo Motor
 * hilite_system('servo_mixed/Subsystem/Servo Motor/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'servo_mixed/Subsystem'
 * '<S1>'   : 'servo_mixed/Subsystem/Servo Motor'
 * '<S2>'   : 'servo_mixed/Subsystem/Servo Motor/Standard Servo Write'
 * '<S3>'   : 'servo_mixed/Subsystem/Servo Motor/Standard Servo Write1'
 * '<S4>'   : 'servo_mixed/Subsystem/Servo Motor/Standard Servo Write2'
 * '<S5>'   : 'servo_mixed/Subsystem/Servo Motor/Standard Servo Write3'
 * '<S6>'   : 'servo_mixed/Subsystem/Servo Motor/Standard Servo Write4'
 * '<S7>'   : 'servo_mixed/Subsystem/Servo Motor/Standard Servo Write5'
 */
#endif                                 /* RTW_HEADER_Servo_sf_h_ */
