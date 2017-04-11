/*
 * Subsystem1_sf.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Subsystem1_sf".
 *
 * Model version              : 1.44
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Mon Apr 10 23:29:34 2017
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

#ifndef RTW_HEADER_Subsystem1_sf_h_
#define RTW_HEADER_Subsystem1_sf_h_
#include <string.h>
#include <stddef.h>
#ifndef Subsystem1_sf_COMMON_INCLUDES_
# define Subsystem1_sf_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME                Subsystem1_sf
#define S_FUNCTION_LEVEL               2
#define RTW_GENERATED_S_FUNCTION
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "nesl_rtw.h"
#include "Subsystem1_3121ebb6_1_gateway.h"
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
#endif                                 /* Subsystem1_sf_COMMON_INCLUDES_ */

#include "Subsystem1_sf_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* Block signals (auto storage) */
typedef struct {
  real_T Gain;                         /* '<S10>/Gain' */
  real_T INPUT_2_1_1[4];               /* '<S21>/INPUT_2_1_1' */
  real_T INPUT_3_1_1[4];               /* '<S21>/INPUT_3_1_1' */
  real_T INPUT_4_1_1[4];               /* '<S21>/INPUT_4_1_1' */
  real_T INPUT_5_1_1[4];               /* '<S21>/INPUT_5_1_1' */
  real_T INPUT_6_1_1[4];               /* '<S21>/INPUT_6_1_1' */
  real_T INPUT_1_1_1[4];               /* '<S21>/INPUT_1_1_1' */
  real_T INPUT_7_1_1[4];               /* '<S21>/INPUT_7_1_1' */
} B_Subsystem1_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T *y_simu[6];                   /* '<Root>/In1' */
} ExternalUPtrs_Subsystem1_T;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S10>/Gain1' : Eliminated nontunable gain of 1
 */

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
 * hilite_system('servo_mixed/Subsystem1')    - opens subsystem servo_mixed/Subsystem1
 * hilite_system('servo_mixed/Subsystem1/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'servo_mixed'
 * '<S1>'   : 'servo_mixed/Subsystem1'
 * '<S2>'   : 'servo_mixed/Subsystem1/Simulation'
 * '<S3>'   : 'servo_mixed/Subsystem1/Simulation/Grabber'
 * '<S4>'   : 'servo_mixed/Subsystem1/Simulation/Rotatation Joint 1'
 * '<S5>'   : 'servo_mixed/Subsystem1/Simulation/Rotatation Joint 2'
 * '<S6>'   : 'servo_mixed/Subsystem1/Simulation/Rotatation Joint 3'
 * '<S7>'   : 'servo_mixed/Subsystem1/Simulation/Rotatation Joint 4'
 * '<S8>'   : 'servo_mixed/Subsystem1/Simulation/Rotatation Joint 5'
 * '<S9>'   : 'servo_mixed/Subsystem1/Simulation/Solver Configuration'
 * '<S10>'  : 'servo_mixed/Subsystem1/Simulation/Unit Converter'
 * '<S11>'  : 'servo_mixed/Subsystem1/Simulation/link1_1'
 * '<S12>'  : 'servo_mixed/Subsystem1/Simulation/link1_2'
 * '<S13>'  : 'servo_mixed/Subsystem1/Simulation/link2'
 * '<S14>'  : 'servo_mixed/Subsystem1/Simulation/link3'
 * '<S15>'  : 'servo_mixed/Subsystem1/Simulation/link4'
 * '<S16>'  : 'servo_mixed/Subsystem1/Simulation/link5_2'
 * '<S17>'  : 'servo_mixed/Subsystem1/Simulation/Grabber/grab_elem1'
 * '<S18>'  : 'servo_mixed/Subsystem1/Simulation/Grabber/grab_elem2'
 * '<S19>'  : 'servo_mixed/Subsystem1/Simulation/Grabber/grab_elem3'
 * '<S20>'  : 'servo_mixed/Subsystem1/Simulation/Grabber/grab_elem4'
 * '<S21>'  : 'servo_mixed/Subsystem1/Simulation/Solver Configuration/EVAL_KEY'
 * '<S22>'  : 'servo_mixed/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter'
 * '<S23>'  : 'servo_mixed/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter1'
 * '<S24>'  : 'servo_mixed/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter2'
 * '<S25>'  : 'servo_mixed/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter3'
 * '<S26>'  : 'servo_mixed/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter4'
 * '<S27>'  : 'servo_mixed/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter5'
 * '<S28>'  : 'servo_mixed/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter6'
 * '<S29>'  : 'servo_mixed/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter/EVAL_KEY'
 * '<S30>'  : 'servo_mixed/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter1/EVAL_KEY'
 * '<S31>'  : 'servo_mixed/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter2/EVAL_KEY'
 * '<S32>'  : 'servo_mixed/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter3/EVAL_KEY'
 * '<S33>'  : 'servo_mixed/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter4/EVAL_KEY'
 * '<S34>'  : 'servo_mixed/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter5/EVAL_KEY'
 * '<S35>'  : 'servo_mixed/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter6/EVAL_KEY'
 */
#endif                                 /* RTW_HEADER_Subsystem1_sf_h_ */
