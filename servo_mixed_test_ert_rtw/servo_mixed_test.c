/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: servo_mixed_test.c
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

#include "servo_mixed_test.h"
#include "servo_mixed_test_private.h"
#include "servo_mixed_test_dt.h"
#undef S_FUNCTION_NAME
#if !defined(RTW_GENERATED_SFCN_TUNABLE_PRMS_Subsystem2_sf)
#define RTW_GENERATED_SFCN_TUNABLE_PRMS_Subsystem2_sf
#endif

#include "Subsystem2_sf.h"

/* Block states (auto storage) */
DW rtDW;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void servo_mixed_test_step(void)
{
  /* RTW Generated Level2 S-Function Block: '<S1>/Subsystem2_sfcn' (Subsystem2_sf) */
  {
    SimStruct *rts = rtM->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }

  /* RTW Generated Level2 S-Function Block: '<S1>/Subsystem2_sfcn' (Subsystem2_sf) */
  {
    SimStruct *rts = rtM->childSfunctions[0];
    sfcnUpdate(rts, 0);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* External mode */
  rtExtModeUploadCheckTrigger(2);

  {                                    /* Sample time: [0.0s, 0.0s] */
    rtExtModeUpload(0, rtM->Timing.t[0]);
  }

  {                                    /* Sample time: [0.3s, 0.0s] */
    rtExtModeUpload(1, rtM->Timing.t[1]);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0s, 0.0s] */
    if ((rtmGetTFinal(rtM)!=-1) &&
        !((rtmGetTFinal(rtM)-rtM->Timing.t[0]) > rtM->Timing.t[0] * (DBL_EPSILON)))
    {
      rtmSetErrorStatus(rtM, "Simulation finished");
    }

    if (rtmGetStopRequested(rtM)) {
      rtmSetErrorStatus(rtM, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  rtM->Timing.t[0] =
    (++rtM->Timing.clockTick0) * rtM->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.3s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     */
    rtM->Timing.t[1] =
      (++rtM->Timing.clockTick1) * rtM->Timing.stepSize1;
  }
}

/* Model initialize function */
void servo_mixed_test_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&rtM->solverInfo, &rtM->Timing.simTimeStep);
    rtsiSetTPtr(&rtM->solverInfo, &rtmGetTPtr(rtM));
    rtsiSetStepSizePtr(&rtM->solverInfo, &rtM->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&rtM->solverInfo, (&rtmGetErrorStatus(rtM)));
    rtsiSetRTModelPtr(&rtM->solverInfo, rtM);
  }

  rtsiSetSimTimeStep(&rtM->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&rtM->solverInfo,"FixedStepDiscrete");
  rtM->solverInfoPtr = (&rtM->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = rtM->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    rtM->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    rtM->Timing.sampleTimes = (&rtM->Timing.sampleTimesArray[0]);
    rtM->Timing.offsetTimes = (&rtM->Timing.offsetTimesArray[0]);

    /* task periods */
    rtM->Timing.sampleTimes[0] = (0.0);
    rtM->Timing.sampleTimes[1] = (0.3);

    /* task offsets */
    rtM->Timing.offsetTimes[0] = (0.0);
    rtM->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(rtM, &rtM->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = rtM->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    rtM->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(rtM, 15.0);
  rtM->Timing.stepSize0 = 0.3;
  rtM->Timing.stepSize1 = 0.3;

  /* External mode info */
  rtM->Sizes.checksums[0] = (4097969024U);
  rtM->Sizes.checksums[1] = (2526394369U);
  rtM->Sizes.checksums[2] = (1173868115U);
  rtM->Sizes.checksums[3] = (1591830248U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    rtM->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(rtM->extModeInfo, &rtM->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(rtM->extModeInfo, rtM->Sizes.checksums);
    rteiSetTPtr(rtM->extModeInfo, rtmGetTPtr(rtM));
  }

  rtM->solverInfoPtr = (&rtM->solverInfo);
  rtM->Timing.stepSize = (0.3);
  rtsiSetFixedStepSize(&rtM->solverInfo, 0.3);
  rtsiSetSolverMode(&rtM->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    rtM->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;
  }

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &rtM->NonInlinedSFcns.sfcnInfo;
    rtM->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(rtM)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &rtM->Sizes.numSampTimes);
    rtM->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(rtM)[0]);
    rtM->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr(rtM)[1]);
    rtssSetTPtrPtr(sfcnInfo,rtM->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(rtM));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(rtM));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(rtM));
    rtssSetStepSizePtr(sfcnInfo, &rtM->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(rtM));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo, &rtM->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &rtM->zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &rtM->blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &rtM->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &rtM->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &rtM->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &rtM->solverInfoPtr);
  }

  rtM->Sizes.numSFcns = (1);

  /* register each child */
  {
    (void) memset((void *)&rtM->NonInlinedSFcns.childSFunctions[0], 0,
                  1*sizeof(SimStruct));
    rtM->childSfunctions = (&rtM->NonInlinedSFcns.childSFunctionPtrs[0]);
    rtM->childSfunctions[0] = (&rtM->NonInlinedSFcns.childSFunctions[0]);

    /* RTW Generated Level2 S-Function Block: servo_mixed_test/<S1>/Subsystem2_sfcn (Subsystem2_sf) */
    {
      SimStruct *rts = rtM->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = rtM->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = rtM->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = rtM->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*2);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*2);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &rtM->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, rtM->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &rtM->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &rtM->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &rtM->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &rtM->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts, &rtM->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* path info */
      ssSetModelName(rts, "Subsystem2_sfcn");
      ssSetPath(rts, "servo_mixed_test/Subsystem1/Subsystem2_sfcn");
      ssSetRTModel(rts,rtM);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* work vectors */
      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &rtM->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &rtM->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 24);

        /* DWORK0 */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWorkUsedAsDState(rts, 0, 1);
        ssSetDWork(rts, 0, &rtDW.Subsystem2_sfcn_DWORK0[0]);

        /* DWORK1 */
        ssSetDWorkWidth(rts, 1, 2);
        ssSetDWorkDataType(rts, 1,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWorkUsedAsDState(rts, 1, 1);
        ssSetDWork(rts, 1, &rtDW.Subsystem2_sfcn_DWORK1[0]);

        /* DWORK2 */
        ssSetDWorkWidth(rts, 2, 2);
        ssSetDWorkDataType(rts, 2,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWorkUsedAsDState(rts, 2, 1);
        ssSetDWork(rts, 2, &rtDW.Subsystem2_sfcn_DWORK2[0]);

        /* DWORK3 */
        ssSetDWorkWidth(rts, 3, 2);
        ssSetDWorkDataType(rts, 3,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 3, 0);
        ssSetDWorkUsedAsDState(rts, 3, 1);
        ssSetDWork(rts, 3, &rtDW.Subsystem2_sfcn_DWORK3[0]);

        /* DWORK4 */
        ssSetDWorkWidth(rts, 4, 2);
        ssSetDWorkDataType(rts, 4,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 4, 0);
        ssSetDWorkUsedAsDState(rts, 4, 1);
        ssSetDWork(rts, 4, &rtDW.Subsystem2_sfcn_DWORK4[0]);

        /* DWORK5 */
        ssSetDWorkWidth(rts, 5, 2);
        ssSetDWorkDataType(rts, 5,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 5, 0);
        ssSetDWorkUsedAsDState(rts, 5, 1);
        ssSetDWork(rts, 5, &rtDW.Subsystem2_sfcn_DWORK5[0]);

        /* DWORK6 */
        ssSetDWorkWidth(rts, 6, 2);
        ssSetDWorkDataType(rts, 6,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 6, 0);
        ssSetDWorkUsedAsDState(rts, 6, 1);
        ssSetDWork(rts, 6, &rtDW.Subsystem2_sfcn_DWORK6[0]);

        /* DWORK7 */
        ssSetDWorkWidth(rts, 7, 1);
        ssSetDWorkDataType(rts, 7,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 7, 0);
        ssSetDWork(rts, 7, &rtDW.Subsystem2_sfcn_DWORK7);

        /* DWORK8 */
        ssSetDWorkWidth(rts, 8, 1);
        ssSetDWorkDataType(rts, 8,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 8, 0);
        ssSetDWork(rts, 8, &rtDW.Subsystem2_sfcn_DWORK8);

        /* DWORK9 */
        ssSetDWorkWidth(rts, 9, 1);
        ssSetDWorkDataType(rts, 9,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 9, 0);
        ssSetDWork(rts, 9, &rtDW.Subsystem2_sfcn_DWORK9);

        /* DWORK10 */
        ssSetDWorkWidth(rts, 10, 1);
        ssSetDWorkDataType(rts, 10,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 10, 0);
        ssSetDWork(rts, 10, &rtDW.Subsystem2_sfcn_DWORK10);

        /* DWORK11 */
        ssSetDWorkWidth(rts, 11, 1);
        ssSetDWorkDataType(rts, 11,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 11, 0);
        ssSetDWork(rts, 11, &rtDW.Subsystem2_sfcn_DWORK11);

        /* DWORK12 */
        ssSetDWorkWidth(rts, 12, 1);
        ssSetDWorkDataType(rts, 12,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 12, 0);
        ssSetDWork(rts, 12, &rtDW.Subsystem2_sfcn_DWORK12);

        /* DWORK13 */
        ssSetDWorkWidth(rts, 13, 1);
        ssSetDWorkDataType(rts, 13,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 13, 0);
        ssSetDWork(rts, 13, &rtDW.Subsystem2_sfcn_DWORK13);

        /* DWORK14 */
        ssSetDWorkWidth(rts, 14, 1);
        ssSetDWorkDataType(rts, 14,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 14, 0);
        ssSetDWork(rts, 14, &rtDW.Subsystem2_sfcn_DWORK14);

        /* DWORK15 */
        ssSetDWorkWidth(rts, 15, 1);
        ssSetDWorkDataType(rts, 15,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 15, 0);
        ssSetDWork(rts, 15, &rtDW.Subsystem2_sfcn_DWORK15);

        /* DWORK16 */
        ssSetDWorkWidth(rts, 16, 1);
        ssSetDWorkDataType(rts, 16,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 16, 0);
        ssSetDWork(rts, 16, &rtDW.Subsystem2_sfcn_DWORK16);

        /* DWORK17 */
        ssSetDWorkWidth(rts, 17, 1);
        ssSetDWorkDataType(rts, 17,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 17, 0);
        ssSetDWork(rts, 17, &rtDW.Subsystem2_sfcn_DWORK17);

        /* DWORK18 */
        ssSetDWorkWidth(rts, 18, 1);
        ssSetDWorkDataType(rts, 18,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 18, 0);
        ssSetDWork(rts, 18, &rtDW.Subsystem2_sfcn_DWORK18);

        /* DWORK19 */
        ssSetDWorkWidth(rts, 19, 1);
        ssSetDWorkDataType(rts, 19,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 19, 0);
        ssSetDWork(rts, 19, &rtDW.Subsystem2_sfcn_DWORK19);

        /* DWORK20 */
        ssSetDWorkWidth(rts, 20, 1);
        ssSetDWorkDataType(rts, 20,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 20, 0);
        ssSetDWork(rts, 20, &rtDW.Subsystem2_sfcn_DWORK20);

        /* DWORK21 */
        ssSetDWorkWidth(rts, 21, 1);
        ssSetDWorkDataType(rts, 21,SS_UINT8);
        ssSetDWorkComplexSignal(rts, 21, 0);
        ssSetDWork(rts, 21, &rtDW.Subsystem2_sfcn_DWORK21);

        /* DWORK22 */
        ssSetDWorkWidth(rts, 22, 1);
        ssSetDWorkDataType(rts, 22,SS_BOOLEAN);
        ssSetDWorkComplexSignal(rts, 22, 0);
        ssSetDWork(rts, 22, &rtDW.Subsystem2_sfcn_DWORK22);

        /* DWORK23 */
        ssSetDWorkWidth(rts, 23, 1);
        ssSetDWorkDataType(rts, 23,SS_BOOLEAN);
        ssSetDWorkComplexSignal(rts, 23, 0);
        ssSetDWork(rts, 23, &rtDW.Subsystem2_sfcn_DWORK23);
      }

      /* registration */
      Subsystem2_sf(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      ssSetSampleTime(rts, 1, 0.3);
      ssSetOffsetTime(rts, 1, 0.0);
      sfcnTsMap[0] = 0;
      sfcnTsMap[1] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */

      /* Instance data for generated S-Function: Subsystem2 */
#include "Subsystem2_sfcn_rtw/Subsystem2_sid.h"

    }
  }

  /* RTW Generated Level2 S-Function Block: '<S1>/Subsystem2_sfcn' (Subsystem2_sf) */
  {
    SimStruct *rts = rtM->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* RTW Generated Level2 S-Function Block: '<S1>/Subsystem2_sfcn' (Subsystem2_sf) */
  {
    SimStruct *rts = rtM->childSfunctions[0];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Model terminate function */
void servo_mixed_test_terminate(void)
{
  /* RTW Generated Level2 S-Function Block: '<S1>/Subsystem2_sfcn' (Subsystem2_sf) */
  {
    SimStruct *rts = rtM->childSfunctions[0];
    sfcnTerminate(rts);
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
