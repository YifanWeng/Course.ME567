/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: serial_pc_data.c
 *
 * Code generated for Simulink model 'serial_pc'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Apr 10 22:30:49 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "serial_pc.h"
#include "serial_pc_private.h"

/* Block parameters (auto storage) */
P_serial_pc_T serial_pc_P = {
  11U,                                 /* Mask Parameter: ServoWrite_pinNumber
                                        * Referenced by: '<S5>/Servo Write'
                                        */
  45.0,                                /* Expression: 45
                                        * Referenced by: '<S4>/Constant'
                                        */
  -0.5,                                /* Expression: -1/2
                                        * Referenced by: '<S13>/Gain'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S13>/Gain1'
                                        */
  90U,                                 /* Computed Parameter: Constant_Value_h
                                        * Referenced by: '<S5>/Constant'
                                        */
  0U                                   /* Computed Parameter: ServoWrite_p1
                                        * Referenced by: '<S5>/Servo Write'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
