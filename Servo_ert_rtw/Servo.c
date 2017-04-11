/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Servo.c
 *
 * Code generated for Simulink model 'Servo'.
 *
 * Model version                  : 1.31
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Apr 10 12:38:22 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "Servo.h"

/* External inputs (root inport signals with auto storage) */
ExtU rtU;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void Servo_step(void)
{
  uint8_T tmp;

  /* DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/In1'
   */
  if (rtU.In1 < 256.0) {
    if (rtU.In1 >= 0.0) {
      tmp = (uint8_T)rtU.In1;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S2>/Data Type Conversion' */

  /* S-Function (arduinoservowrite_sfcn): '<S2>/Servo Write' */
  MW_servoWrite(0U, tmp);

  /* DataTypeConversion: '<S3>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/In2'
   */
  if (rtU.In2 < 256.0) {
    if (rtU.In2 >= 0.0) {
      tmp = (uint8_T)rtU.In2;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S3>/Data Type Conversion' */

  /* S-Function (arduinoservowrite_sfcn): '<S3>/Servo Write' */
  MW_servoWrite(1U, tmp);

  /* DataTypeConversion: '<S4>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/In3'
   */
  if (rtU.In3 < 256.0) {
    if (rtU.In3 >= 0.0) {
      tmp = (uint8_T)rtU.In3;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S4>/Data Type Conversion' */

  /* S-Function (arduinoservowrite_sfcn): '<S4>/Servo Write' */
  MW_servoWrite(2U, tmp);

  /* DataTypeConversion: '<S5>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/In4'
   */
  if (rtU.In4 < 256.0) {
    if (rtU.In4 >= 0.0) {
      tmp = (uint8_T)rtU.In4;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S5>/Data Type Conversion' */

  /* S-Function (arduinoservowrite_sfcn): '<S5>/Servo Write' */
  MW_servoWrite(3U, tmp);

  /* DataTypeConversion: '<S6>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/In5'
   */
  if (rtU.In5 < 256.0) {
    if (rtU.In5 >= 0.0) {
      tmp = (uint8_T)rtU.In5;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S6>/Data Type Conversion' */

  /* S-Function (arduinoservowrite_sfcn): '<S6>/Servo Write' */
  MW_servoWrite(4U, tmp);

  /* DataTypeConversion: '<S7>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/In6'
   */
  if (rtU.In6 < 256.0) {
    if (rtU.In6 >= 0.0) {
      tmp = (uint8_T)rtU.In6;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S7>/Data Type Conversion' */

  /* S-Function (arduinoservowrite_sfcn): '<S7>/Servo Write' */
  MW_servoWrite(5U, tmp);
}

/* Model initialize function */
void Servo_initialize(void)
{
  /* Start for S-Function (arduinoservowrite_sfcn): '<S2>/Servo Write' */
  MW_servoAttach(0U, 3UL);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S3>/Servo Write' */
  MW_servoAttach(1U, 5UL);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S4>/Servo Write' */
  MW_servoAttach(2U, 6UL);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S5>/Servo Write' */
  MW_servoAttach(3U, 9UL);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S6>/Servo Write' */
  MW_servoAttach(4U, 10UL);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S7>/Servo Write' */
  MW_servoAttach(5U, 11UL);
}

/* Model terminate function */
void Servo_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
