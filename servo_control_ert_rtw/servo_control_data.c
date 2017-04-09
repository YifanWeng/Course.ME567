/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: servo_control_data.c
 *
 * Code generated for Simulink model 'servo_control'.
 *
 * Model version                  : 1.17
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sat Apr  8 23:19:00 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "servo_control.h"
#include "servo_control_private.h"

/* Block parameters (auto storage) */
P_servo_control_T servo_control_P = {
  3U,                                  /* Mask Parameter: ServoWrite_pinNumber
                                        * Referenced by: '<S4>/Servo Write'
                                        */
  5U,                                  /* Mask Parameter: ServoWrite_pinNumber_k
                                        * Referenced by: '<S5>/Servo Write'
                                        */
  6U,                                  /* Mask Parameter: ServoWrite_pinNumber_l
                                        * Referenced by: '<S6>/Servo Write'
                                        */
  9U,                                  /* Mask Parameter: ServoWrite_pinNumber_h
                                        * Referenced by: '<S7>/Servo Write'
                                        */
  10U,                                 /* Mask Parameter: ServoWrite_pinNumber_ks
                                        * Referenced by: '<S8>/Servo Write'
                                        */
  11U,                                 /* Mask Parameter: ServoWrite_pinNumber_ha
                                        * Referenced by: '<S9>/Servo Write'
                                        */
  0U,                                  /* Computed Parameter: ServoWrite_p1
                                        * Referenced by: '<S4>/Servo Write'
                                        */
  1U,                                  /* Computed Parameter: ServoWrite_p1_g
                                        * Referenced by: '<S5>/Servo Write'
                                        */
  2U,                                  /* Computed Parameter: ServoWrite_p1_a
                                        * Referenced by: '<S6>/Servo Write'
                                        */
  3U,                                  /* Computed Parameter: ServoWrite_p1_a2
                                        * Referenced by: '<S7>/Servo Write'
                                        */
  4U,                                  /* Computed Parameter: ServoWrite_p1_m
                                        * Referenced by: '<S8>/Servo Write'
                                        */
  5U                                   /* Computed Parameter: ServoWrite_p1_k
                                        * Referenced by: '<S9>/Servo Write'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
