/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: servo_control_types.h
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

#ifndef RTW_HEADER_servo_control_types_h_
#define RTW_HEADER_servo_control_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Custom Type definition for MATLAB Function: '<Root>/Inverse Kinematics' */
#ifndef struct_tag_sy4LJ1pLMocUdPsrBnA99ZG
#define struct_tag_sy4LJ1pLMocUdPsrBnA99ZG

struct tag_sy4LJ1pLMocUdPsrBnA99ZG
{
  real_T q0[6];
  real_T qd[6];
};

#endif                                 /*struct_tag_sy4LJ1pLMocUdPsrBnA99ZG*/

#ifndef typedef_sy4LJ1pLMocUdPsrBnA99ZG_servo_T
#define typedef_sy4LJ1pLMocUdPsrBnA99ZG_servo_T

typedef struct tag_sy4LJ1pLMocUdPsrBnA99ZG sy4LJ1pLMocUdPsrBnA99ZG_servo_T;

#endif                                 /*typedef_sy4LJ1pLMocUdPsrBnA99ZG_servo_T*/

/* Parameters (auto storage) */
typedef struct P_servo_control_T_ P_servo_control_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_servo_control_T RT_MODEL_servo_control_T;

#endif                                 /* RTW_HEADER_servo_control_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
