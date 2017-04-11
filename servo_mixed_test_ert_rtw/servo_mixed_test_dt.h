/*
 * servo_mixed_test_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "servo_mixed_test".
 *
 * Model version              : 1.46
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Tue Apr 11 02:57:35 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&rtB.INPUT_3_1_1[0]), 0, 0, 30 },

  { (char_T *)(&rtB.Clock), 0, 0, 9 }
  ,

  { (char_T *)(&rtDW.INPUT_2_1_1_discrete[0]), 0, 0, 17 },

  { (char_T *)(&rtDW.SINK_1_Simulator), 11, 0, 10 },

  { (char_T *)(&rtDW.sfEvent), 6, 0, 1 },

  { (char_T *)(&rtDW.is_active_c3_servo_mixed_test), 3, 0, 2 },

  { (char_T *)(&rtDW.SINK_1_CallSimulatorOutput), 8, 0, 2 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  7U,
  rtBTransitions
};

/* [EOF] servo_mixed_test_dt.h */
