/*
 * serial_pc_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "serial_pc".
 *
 * Model version              : 1.5
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Mon Apr 10 22:30:49 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
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
  { (char_T *)(&serial_pc_B.y[0]), 0, 0, 12 },

  { (char_T *)(&serial_pc_B.Clock), 0, 0, 34 }
  ,

  { (char_T *)(&serial_pc_DW.INPUT_2_1_1_discrete[0]), 0, 0, 17 },

  { (char_T *)(&serial_pc_DW.Scope_PWORK.LoggedData), 11, 0, 11 },

  { (char_T *)(&serial_pc_DW.sfEvent), 6, 0, 1 },

  { (char_T *)(&serial_pc_DW.servo_SubsysRanBC), 2, 0, 1 },

  { (char_T *)(&serial_pc_DW.is_active_c3_serial_pc), 3, 0, 2 },

  { (char_T *)(&serial_pc_DW.SINK_1_CallSimulatorOutput), 8, 0, 2 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  8U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&serial_pc_P.ServoWrite_pinNumber), 7, 0, 1 },

  { (char_T *)(&serial_pc_P.Constant_Value), 0, 0, 3 },

  { (char_T *)(&serial_pc_P.Constant_Value_h), 3, 0, 2 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  3U,
  rtPTransitions
};

/* [EOF] serial_pc_dt.h */
