/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: test.c
 *
 * Code generated for Simulink model 'test'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Mar 28 15:34:04 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "test.h"
#include "test_private.h"
#include "test_dt.h"

/* Block states (auto storage) */
DW_test_T test_DW;

/* Real-time model */
RT_MODEL_test_T test_M_;
RT_MODEL_test_T *const test_M = &test_M_;

/* Model step function */
void test_step(void)
{
  real_T HoldSine;
  uint8_T tmp;

  /* Sin: '<Root>/Sine Wave' */
  if (test_DW.systemEnable != 0L) {
    test_DW.lastSin = sin(test_P.SineWave_Freq * test_M->Timing.taskTime0);
    test_DW.lastCos = cos(test_P.SineWave_Freq * test_M->Timing.taskTime0);
    test_DW.systemEnable = 0L;
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion' incorporates:
   *  Sin: '<Root>/Sine Wave'
   */
  HoldSine = ((test_DW.lastSin * test_P.SineWave_PCos + test_DW.lastCos *
               test_P.SineWave_PSin) * test_P.SineWave_HCos + (test_DW.lastCos *
    test_P.SineWave_PCos - test_DW.lastSin * test_P.SineWave_PSin) *
              test_P.SineWave_Hsin) * test_P.SineWave_Amp + test_P.SineWave_Bias;
  if (HoldSine < 256.0) {
    if (HoldSine >= 0.0) {
      tmp = (uint8_T)HoldSine;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S1>/Data Type Conversion' */

  /* S-Function (arduinoservowrite_sfcn): '<S1>/Servo Write' */
  MW_servoWrite(test_P.ServoWrite_p1, tmp);

  /* Update for Sin: '<Root>/Sine Wave' */
  HoldSine = test_DW.lastSin;
  test_DW.lastSin = test_DW.lastSin * test_P.SineWave_HCos + test_DW.lastCos *
    test_P.SineWave_Hsin;
  test_DW.lastCos = test_DW.lastCos * test_P.SineWave_HCos - HoldSine *
    test_P.SineWave_Hsin;

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.3s, 0.0s] */
    rtExtModeUpload(0, test_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.3s, 0.0s] */
    if ((rtmGetTFinal(test_M)!=-1) &&
        !((rtmGetTFinal(test_M)-test_M->Timing.taskTime0) >
          test_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(test_M, "Simulation finished");
    }

    if (rtmGetStopRequested(test_M)) {
      rtmSetErrorStatus(test_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  test_M->Timing.taskTime0 =
    (++test_M->Timing.clockTick0) * test_M->Timing.stepSize0;
}

/* Model initialize function */
void test_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)test_M, 0,
                sizeof(RT_MODEL_test_T));
  rtmSetTFinal(test_M, 9.9);
  test_M->Timing.stepSize0 = 0.3;

  /* External mode info */
  test_M->Sizes.checksums[0] = (3518593179U);
  test_M->Sizes.checksums[1] = (1342418130U);
  test_M->Sizes.checksums[2] = (2425734575U);
  test_M->Sizes.checksums[3] = (4051139059U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    test_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(test_M->extModeInfo,
      &test_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(test_M->extModeInfo, test_M->Sizes.checksums);
    rteiSetTPtr(test_M->extModeInfo, rtmGetTPtr(test_M));
  }

  /* states (dwork) */
  (void) memset((void *)&test_DW, 0,
                sizeof(DW_test_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    test_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Start for S-Function (arduinoservowrite_sfcn): '<S1>/Servo Write' */
  MW_servoAttach(test_P.ServoWrite_p1, test_P.ServoWrite_pinNumber);

  /* Enable for Sin: '<Root>/Sine Wave' */
  test_DW.systemEnable = 1L;
}

/* Model terminate function */
void test_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
