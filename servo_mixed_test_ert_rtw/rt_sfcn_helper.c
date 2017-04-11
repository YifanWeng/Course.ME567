/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rt_sfcn_helper.c
 *
 * Code generated for Simulink model 'servo_mixed_test'.
 *
 * Model version                  : 1.45
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Apr 10 23:33:06 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

/*
 * Abstract:
 *      Helper functions for noninlined S-Functions. Used by noninlined
 *      S-Functions configured for calling function-call subsystems.
 */
#include "rt_sfcn_helper.h"

/* Helper function to make function calls from non-inlined S-functions. */
int_T rt_CallSys(SimStruct *S, int_T element, int_T tid)
{
  (*(S)->callSys.fcns[element])((S)->callSys.args1[element],
    (S)->callSys.args2[element], tid);
  if (ssGetErrorStatus(S) != (NULL)) {
    return 0;
  } else {
    return 1;
  }
}

/* Helper function to make function enables from non-inlined S-functions. */
int_T rt_EnableSys(SimStruct *S, int_T element, int_T tid)
{
  if ((S)->callSys.fcns[ssGetOutputPortWidth(S,0)+element] != (NULL)) {
    (*(S)->callSys.fcns[ssGetOutputPortWidth(S,0)+element])
      ((S)->callSys.args1[element],
       (S)->callSys.args2[element], tid);
    if (ssGetErrorStatus(S) != (NULL)) {
      return 0;
    }
  }

  if ((S)->callSys.fcns[2*ssGetOutputPortWidth(S,0)+element] != (NULL)) {
    (*(S)->callSys.fcns[2*ssGetOutputPortWidth(S,0)+element])
      ((S)->callSys.args1[element],
       (S)->callSys.args2[element], tid);
    if (ssGetErrorStatus(S) != (NULL)) {
      return 0;
    }
  }

  return 1;
}

/* Helper function to make function disables from non-inlined S-functions. */
int_T rt_DisableSys(SimStruct *S, int_T element, int_T tid)
{
  (*(S)->callSys.fcns[3*ssGetOutputPortWidth(S,0)+element])
    ((S)->callSys.args1[element],
     (S)->callSys.args2[element], tid);
  if (ssGetErrorStatus(S) != (NULL)) {
    return 0;
  } else {
    return 1;
  }
}

/* end rt_sfcn_helper.c */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
