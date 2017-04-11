/*
 * Subsystem2_sf_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Subsystem2_sf".
 *
 * Model version              : 1.45
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Mon Apr 10 23:32:39 2017
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

#ifndef RTW_HEADER_Subsystem2_sf_types_h_
#define RTW_HEADER_Subsystem2_sf_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Custom Type definition for MATLAB Function: '<S2>/Inverse Kinematics1' */
#ifndef struct_tag_sy4LJ1pLMocUdPsrBnA99ZG
#define struct_tag_sy4LJ1pLMocUdPsrBnA99ZG

struct tag_sy4LJ1pLMocUdPsrBnA99ZG
{
  real_T q0[6];
  real_T qd[6];
};

#endif                                 /*struct_tag_sy4LJ1pLMocUdPsrBnA99ZG*/

#ifndef typedef_sy4LJ1pLMocUdPsrBnA99ZG_Subsy_T
#define typedef_sy4LJ1pLMocUdPsrBnA99ZG_Subsy_T

typedef struct tag_sy4LJ1pLMocUdPsrBnA99ZG sy4LJ1pLMocUdPsrBnA99ZG_Subsy_T;

#endif                                 /*typedef_sy4LJ1pLMocUdPsrBnA99ZG_Subsy_T*/
#endif                                 /* RTW_HEADER_Subsystem2_sf_types_h_ */
