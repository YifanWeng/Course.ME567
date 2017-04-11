/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: servo_mixed_types.h
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

#ifndef RTW_HEADER_servo_mixed_types_h_
#define RTW_HEADER_servo_mixed_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#if !defined(MATLAB_MEX_FILE)
#undef S_FUNCTION_NAME
#include "Subsystem1_sfcn_rtw/Subsystem1_sf.h"
#include "Subsystem1_sfcn_rtw/Subsystem1_sf_private.h"
#endif

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

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

#endif                                 /* RTW_HEADER_servo_mixed_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
