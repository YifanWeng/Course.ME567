/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: servo_mixed_private.h
 *
 * Code generated for Simulink model 'servo_mixed'.
 *
 * Model version                  : 1.44
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Apr 10 23:29:59 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_servo_mixed_private_h_
#define RTW_HEADER_servo_mixed_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#if !defined(RTW_GNERATED_SFCN_NOT_PRIVATE_Subsystem1_sf)
#define RTW_GNERATED_SFCN_NOT_PRIVATE_Subsystem1_sf
#endif

#if !defined(MATLAB_MEX_FILE)
#undef S_FUNCTION_NAME
#include "Subsystem1_sfcn_rtw/Subsystem1_sf.h"
#include "Subsystem1_sfcn_rtw/Subsystem1_sf_private.h"
#endif

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

extern void Subsystem1_sf(SimStruct *rts);

#endif                                 /* RTW_HEADER_servo_mixed_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
