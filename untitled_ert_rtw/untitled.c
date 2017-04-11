/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Apr 10 17:41:27 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"

/* Block states (auto storage) */
DW_untitled_T untitled_DW;

/* Real-time model */
RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Model step function */
void untitled_step(void)
{
  uint8_T rtb_SerialReceive_o1;
  int16_T rtb_SerialReceive_o2;
  boolean_T exitg1;

  /* S-Function (arduinoserialread_sfcn): '<Root>/Serial Receive' */
  Serial_read(untitled_P.SerialReceive_p1, untitled_P.SerialReceive_p2,
              &rtb_SerialReceive_o1, &rtb_SerialReceive_o2);

  /* Start for MATLABSystem: '<Root>/Serial Transmit' incorporates:
   *  MATLABSystem: '<Root>/Serial Transmit'
   */
  rtb_SerialReceive_o2 = 0;
  exitg1 = false;
  while ((!exitg1) && (rtb_SerialReceive_o2 < 8)) {
    if (untitled_DW.obj.inputVarSize.f1[rtb_SerialReceive_o2] != 1UL) {
      for (rtb_SerialReceive_o2 = 0; rtb_SerialReceive_o2 < 8;
           rtb_SerialReceive_o2++) {
        untitled_DW.obj.inputVarSize.f1[rtb_SerialReceive_o2] = 1UL;
      }

      exitg1 = true;
    } else {
      rtb_SerialReceive_o2++;
    }
  }

  MW_Serial_write(untitled_DW.obj.port, &rtb_SerialReceive_o1, 1.0,
                  untitled_DW.obj.dataSizeInBytes);
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(untitled_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&untitled_DW, 0,
                sizeof(DW_untitled_T));

  {
    cell_wrap_untitled_T varSizes;
    int16_T i;

    /* Start for MATLABSystem: '<Root>/Serial Transmit' */
    untitled_DW.obj.isInitialized = 0L;
    untitled_DW.obj.isInitialized = 1L;
    varSizes.f1[0] = 1UL;
    varSizes.f1[1] = 1UL;
    for (i = 0; i < 6; i++) {
      varSizes.f1[i + 2] = 1UL;
    }

    untitled_DW.obj.inputVarSize = varSizes;
    untitled_DW.obj.port = 0.0;
    untitled_DW.obj.dataSizeInBytes = 1.0;

    /* End of Start for MATLABSystem: '<Root>/Serial Transmit' */
  }
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* Start for MATLABSystem: '<Root>/Serial Transmit' incorporates:
   *  Terminate for MATLABSystem: '<Root>/Serial Transmit'
   */
  if (untitled_DW.obj.isInitialized == 1L) {
    untitled_DW.obj.isInitialized = 2L;
  }

  /* End of Start for MATLABSystem: '<Root>/Serial Transmit' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
