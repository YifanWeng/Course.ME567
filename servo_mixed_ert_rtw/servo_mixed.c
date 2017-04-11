/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: servo_mixed.c
 *
 * Code generated for Simulink model 'servo_mixed'.
 *
 * Model version                  : 1.44
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Apr 10 23:29:59 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "servo_mixed.h"
#include "servo_mixed_private.h"
#include "servo_mixed_dt.h"
#undef S_FUNCTION_NAME
#if !defined(RTW_GENERATED_SFCN_TUNABLE_PRMS_Subsystem1_sf)
#define RTW_GENERATED_SFCN_TUNABLE_PRMS_Subsystem1_sf
#endif

#include "Subsystem1_sf.h"

/* Named constants for Chart: '<S1>/Chart' */
#define IN_End                         ((uint8_T)1U)
#define IN_Iniital                     ((uint8_T)2U)
#define IN_Reach                       ((uint8_T)3U)

/* Block signals (auto storage) */
B rtB;

/* Block states (auto storage) */
DW rtDW;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void servo_mixed_step(void)
{
  real_T x;
  static const int8_T b[6] = { 90, 90, 90, 90, 90, 108 };

  static const real_T c[6] = { 89.839198456317035, 120.61446583378049,
    120.17240623281748, 129.75101515750868, 89.571432217444425, 45.0 };

  static const real_T d[6] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.31415926535897931 };

  static const real_T e[6] = { -0.0028065163795572214, 0.53432322753878048,
    0.52660783201192374, 0.69378609550869863, -0.0074799188735659048,
    -0.78539816339744828 };

  real_T rtb_y[6];
  int16_T i;

  /* Clock: '<S1>/Clock' */
  rtB.Clock = rtM->Timing.t[0];

  /* Chart: '<S1>/Chart' */
  /* Gateway: Subsystem/Chart */
  /* During: Subsystem/Chart */
  if (rtDW.is_active_c3_servo_mixed == 0U) {
    /* Entry: Subsystem/Chart */
    rtDW.is_active_c3_servo_mixed = 1U;

    /* Entry Internal: Subsystem/Chart */
    /* Transition: '<S3>:2' */
    rtDW.is_c3_servo_mixed = IN_Iniital;

    /* Entry 'Iniital': '<S3>:1' */
    /* '<S3>:1:1' s = 0; */
    rtB.s = 0.0;

    /* '<S3>:1:1' t1=t; */
    rtDW.t1 = rtB.Clock;

    /* '<S3>:1:1' dt=0; */
    rtB.dt = 0.0;
  } else {
    switch (rtDW.is_c3_servo_mixed) {
     case IN_End:
      /* During 'End': '<S3>:6' */
      /* '<S3>:6:2' dt = t-t3; */
      rtB.dt = rtB.Clock - rtDW.t3;
      break;

     case IN_Iniital:
      /* During 'Iniital': '<S3>:1' */
      /* '<S3>:4:1' sf_internal_predicateOutput = ... */
      /* '<S3>:4:1' dt>=2; */
      if (rtB.dt >= 2.0) {
        /* Transition: '<S3>:4' */
        rtDW.is_c3_servo_mixed = IN_Reach;

        /* Entry 'Reach': '<S3>:3' */
        /* '<S3>:3:1' s=1; */
        rtB.s = 1.0;

        /* '<S3>:3:1' s_old = 0; */
        rtB.s_old = 0.0;

        /* '<S3>:3:1' t2=t; */
        rtDW.t2 = rtB.Clock;

        /* '<S3>:3:1' dt = 0; */
        rtB.dt = 0.0;
      } else {
        /* '<S3>:1:1' dt = t-t1; */
        rtB.dt = rtB.Clock - rtDW.t1;
      }
      break;

     default:
      /* During 'Reach': '<S3>:3' */
      /* '<S3>:7:1' sf_internal_predicateOutput = ... */
      /* '<S3>:7:1' dt>=5; */
      if (rtB.dt >= 5.0) {
        /* Transition: '<S3>:7' */
        rtDW.is_c3_servo_mixed = IN_End;

        /* Entry 'End': '<S3>:6' */
        /* '<S3>:6:1' s=2; */
        rtB.s = 2.0;

        /* '<S3>:6:1' s_old = 1; */
        rtB.s_old = 1.0;

        /* '<S3>:6:1' t3=t; */
        rtDW.t3 = rtB.Clock;

        /* '<S3>:6:1' dt = 0; */
        rtB.dt = 0.0;
      } else {
        /* '<S3>:3:2' dt = t-t2; */
        rtB.dt = rtB.Clock - rtDW.t2;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/Chart' */

  /* MATLAB Function: '<S1>/Inverse Kinematics1' */
  /* MATLAB Function 'Subsystem/Inverse Kinematics1': '<S4>:1' */
  /* '<S4>:1:3' alpha = -2; */
  /* '<S4>:1:4' S=coder.load('simu_xd'); */
  /* '<S4>:1:5' if(state == 0) */
  if (rtB.s == 0.0) {
    /* '<S4>:1:6' [y,y_simu] = y_target(state); */
    /* '<S4>:1:16' yd = zeros(6,1); */
    /* '<S4>:1:17' yd_simu = zeros(6,1); */
    for (i = 0; i < 6; i++) {
      rtb_y[i] = 0.0;
      rtB.y_simu[i] = 0.0;
    }

    /* '<S4>:1:18' S=coder.load('simu_xd'); */
    /* '<S4>:1:19' switch state */
    switch ((int16_T)rtB.s) {
     case 0:
      /* '<S4>:1:20' case 0 */
      /* '<S4>:1:21' yd = S.q0; */
      /* '<S4>:1:22' yd_simu = (yd-90)/180*pi; */
      for (i = 0; i < 6; i++) {
        rtb_y[i] = b[i];
        rtB.y_simu[i] = d[i];
      }

      /* '<S4>:1:23' if(yd_simu(6)> 0 ) */
      /* '<S4>:1:24' yd_simu(6) = 0; */
      rtB.y_simu[5] = 0.0;
      break;

     case 1:
      /* '<S4>:1:26' case 1 */
      /* '<S4>:1:27' yd=S.qd; */
      /* '<S4>:1:28' yd_simu = (yd-90)/180*pi; */
      for (i = 0; i < 6; i++) {
        rtb_y[i] = c[i];
        rtB.y_simu[i] = e[i];
      }

      /* '<S4>:1:29' if(yd_simu(6)> 0 ) */
      break;

     case 2:
      /* '<S4>:1:32' case 2 */
      /* '<S4>:1:33' yd = S.q0; */
      /* '<S4>:1:34' yd_simu = (yd-90)/180*pi; */
      for (i = 0; i < 6; i++) {
        rtb_y[i] = b[i];
        rtB.y_simu[i] = d[i];
      }

      /* '<S4>:1:35' if(yd_simu(6)> 0 ) */
      /* '<S4>:1:36' yd_simu(6) = 0; */
      rtB.y_simu[5] = 0.0;
      break;
    }

    /* '<S4>:1:39' yd_simu(2) = -yd_simu(2); */
    rtB.y_simu[1] = -rtB.y_simu[1];

    /*  the dirction of servo moter is different with the simulation model */
  } else {
    /* '<S4>:1:7' else */
    /* '<S4>:1:8' [yd,yd_simu] = y_target(state); */
    /* '<S4>:1:16' yd = zeros(6,1); */
    /* '<S4>:1:17' yd_simu = zeros(6,1); */
    for (i = 0; i < 6; i++) {
      rtb_y[i] = 0.0;
      rtB.yd_simu[i] = 0.0;
    }

    /* '<S4>:1:18' S=coder.load('simu_xd'); */
    /* '<S4>:1:19' switch state */
    switch ((int16_T)rtB.s) {
     case 0:
      /* '<S4>:1:20' case 0 */
      /* '<S4>:1:21' yd = S.q0; */
      /* '<S4>:1:22' yd_simu = (yd-90)/180*pi; */
      for (i = 0; i < 6; i++) {
        rtb_y[i] = b[i];
        rtB.yd_simu[i] = d[i];
      }

      /* '<S4>:1:23' if(yd_simu(6)> 0 ) */
      /* '<S4>:1:24' yd_simu(6) = 0; */
      rtB.yd_simu[5] = 0.0;
      break;

     case 1:
      /* '<S4>:1:26' case 1 */
      /* '<S4>:1:27' yd=S.qd; */
      /* '<S4>:1:28' yd_simu = (yd-90)/180*pi; */
      for (i = 0; i < 6; i++) {
        rtb_y[i] = c[i];
        rtB.yd_simu[i] = e[i];
      }

      /* '<S4>:1:29' if(yd_simu(6)> 0 ) */
      break;

     case 2:
      /* '<S4>:1:32' case 2 */
      /* '<S4>:1:33' yd = S.q0; */
      /* '<S4>:1:34' yd_simu = (yd-90)/180*pi; */
      for (i = 0; i < 6; i++) {
        rtb_y[i] = b[i];
        rtB.yd_simu[i] = d[i];
      }

      /* '<S4>:1:35' if(yd_simu(6)> 0 ) */
      /* '<S4>:1:36' yd_simu(6) = 0; */
      rtB.yd_simu[5] = 0.0;
      break;
    }

    /* '<S4>:1:39' yd_simu(2) = -yd_simu(2); */
    rtB.yd_simu[1] = -rtB.yd_simu[1];

    /*  the dirction of servo moter is different with the simulation model */
    /* '<S4>:1:9' [~,y_old_simu] = y_target(state_old); */
    /* '<S4>:1:16' yd = zeros(6,1); */
    /* '<S4>:1:17' yd_simu = zeros(6,1); */
    for (i = 0; i < 6; i++) {
      rtB.y_simu[i] = 0.0;
    }

    /* '<S4>:1:18' S=coder.load('simu_xd'); */
    /* '<S4>:1:19' switch state */
    switch ((int16_T)rtB.s_old) {
     case 0:
      /* '<S4>:1:20' case 0 */
      /* '<S4>:1:21' yd = S.q0; */
      /* '<S4>:1:22' yd_simu = (yd-90)/180*pi; */
      for (i = 0; i < 6; i++) {
        rtB.y_simu[i] = d[i];
      }

      /* '<S4>:1:23' if(yd_simu(6)> 0 ) */
      /* '<S4>:1:24' yd_simu(6) = 0; */
      rtB.y_simu[5] = 0.0;
      break;

     case 1:
      /* '<S4>:1:26' case 1 */
      /* '<S4>:1:27' yd=S.qd; */
      /* '<S4>:1:28' yd_simu = (yd-90)/180*pi; */
      for (i = 0; i < 6; i++) {
        rtB.y_simu[i] = e[i];
      }

      /* '<S4>:1:29' if(yd_simu(6)> 0 ) */
      break;

     case 2:
      /* '<S4>:1:32' case 2 */
      /* '<S4>:1:33' yd = S.q0; */
      /* '<S4>:1:34' yd_simu = (yd-90)/180*pi; */
      for (i = 0; i < 6; i++) {
        rtB.y_simu[i] = d[i];
      }

      /* '<S4>:1:35' if(yd_simu(6)> 0 ) */
      /* '<S4>:1:36' yd_simu(6) = 0; */
      rtB.y_simu[5] = 0.0;
      break;
    }

    /* '<S4>:1:39' yd_simu(2) = -yd_simu(2); */
    rtB.y_simu[1] = -rtB.y_simu[1];

    /*  the dirction of servo moter is different with the simulation model */
    /* '<S4>:1:9' ~ */
    /* '<S4>:1:10' y = yd; */
    /* '<S4>:1:11' y_simu = exp(alpha*dt)*(y_old_simu-yd_simu)+yd_simu; */
    x = exp(-2.0 * rtB.dt);
    for (i = 0; i < 6; i++) {
      rtB.y_simu[i] = (rtB.y_simu[i] - rtB.yd_simu[i]) * x + rtB.yd_simu[i];
    }
  }

  /* End of MATLAB Function: '<S1>/Inverse Kinematics1' */

  /* RTW Generated Level2 S-Function Block: '<S2>/Subsystem1_sfcn' (Subsystem1_sf) */
  {
    SimStruct *rts = rtM->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }

  /* S-Function (arduinoservowrite_sfcn): '<S6>/Servo Write' incorporates:
   *  DataTypeConversion: '<S6>/Data Type Conversion'
   */
  MW_servoWrite(0U, (uint8_T)rtb_y[0]);

  /* S-Function (arduinoservowrite_sfcn): '<S7>/Servo Write' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion'
   */
  MW_servoWrite(1U, (uint8_T)rtb_y[1]);

  /* S-Function (arduinoservowrite_sfcn): '<S8>/Servo Write' incorporates:
   *  DataTypeConversion: '<S8>/Data Type Conversion'
   */
  MW_servoWrite(2U, (uint8_T)rtb_y[2]);

  /* S-Function (arduinoservowrite_sfcn): '<S9>/Servo Write' incorporates:
   *  DataTypeConversion: '<S9>/Data Type Conversion'
   */
  MW_servoWrite(3U, (uint8_T)rtb_y[3]);

  /* S-Function (arduinoservowrite_sfcn): '<S10>/Servo Write' incorporates:
   *  DataTypeConversion: '<S10>/Data Type Conversion'
   */
  MW_servoWrite(4U, (uint8_T)rtb_y[4]);

  /* S-Function (arduinoservowrite_sfcn): '<S11>/Servo Write' incorporates:
   *  DataTypeConversion: '<S11>/Data Type Conversion'
   */
  MW_servoWrite(5U, (uint8_T)rtb_y[5]);

  /* RTW Generated Level2 S-Function Block: '<S2>/Subsystem1_sfcn' (Subsystem1_sf) */
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
void servo_mixed_initialize(void)
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
  rtM->Sizes.checksums[0] = (4075998688U);
  rtM->Sizes.checksums[1] = (1456408835U);
  rtM->Sizes.checksums[2] = (2290822058U);
  rtM->Sizes.checksums[3] = (4115563885U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    rtM->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
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

    /* RTW Generated Level2 S-Function Block: servo_mixed/<S2>/Subsystem1_sfcn (Subsystem1_sf) */
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

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts, &rtM->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &rtM->NonInlinedSFcns.Sfcn0.UPtrs0;

          {
            int_T i1;
            const real_T *u0 = rtB.y_simu;
            for (i1=0; i1 < 6; i1++) {
              sfcnUPtrs[i1] = &u0[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 6);
        }
      }

      /* path info */
      ssSetModelName(rts, "Subsystem1_sfcn");
      ssSetPath(rts, "servo_mixed/Subsystem2/Subsystem1_sfcn");
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
        _ssSetNumDWork(rts, 19);

        /* DWORK0 */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWorkUsedAsDState(rts, 0, 1);
        ssSetDWork(rts, 0, &rtDW.Subsystem1_sfcn_DWORK0[0]);

        /* DWORK1 */
        ssSetDWorkWidth(rts, 1, 2);
        ssSetDWorkDataType(rts, 1,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWorkUsedAsDState(rts, 1, 1);
        ssSetDWork(rts, 1, &rtDW.Subsystem1_sfcn_DWORK1[0]);

        /* DWORK2 */
        ssSetDWorkWidth(rts, 2, 2);
        ssSetDWorkDataType(rts, 2,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWorkUsedAsDState(rts, 2, 1);
        ssSetDWork(rts, 2, &rtDW.Subsystem1_sfcn_DWORK2[0]);

        /* DWORK3 */
        ssSetDWorkWidth(rts, 3, 2);
        ssSetDWorkDataType(rts, 3,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 3, 0);
        ssSetDWorkUsedAsDState(rts, 3, 1);
        ssSetDWork(rts, 3, &rtDW.Subsystem1_sfcn_DWORK3[0]);

        /* DWORK4 */
        ssSetDWorkWidth(rts, 4, 2);
        ssSetDWorkDataType(rts, 4,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 4, 0);
        ssSetDWorkUsedAsDState(rts, 4, 1);
        ssSetDWork(rts, 4, &rtDW.Subsystem1_sfcn_DWORK4[0]);

        /* DWORK5 */
        ssSetDWorkWidth(rts, 5, 2);
        ssSetDWorkDataType(rts, 5,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 5, 0);
        ssSetDWorkUsedAsDState(rts, 5, 1);
        ssSetDWork(rts, 5, &rtDW.Subsystem1_sfcn_DWORK5[0]);

        /* DWORK6 */
        ssSetDWorkWidth(rts, 6, 2);
        ssSetDWorkDataType(rts, 6,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 6, 0);
        ssSetDWorkUsedAsDState(rts, 6, 1);
        ssSetDWork(rts, 6, &rtDW.Subsystem1_sfcn_DWORK6[0]);

        /* DWORK7 */
        ssSetDWorkWidth(rts, 7, 1);
        ssSetDWorkDataType(rts, 7,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 7, 0);
        ssSetDWork(rts, 7, &rtDW.Subsystem1_sfcn_DWORK7);

        /* DWORK8 */
        ssSetDWorkWidth(rts, 8, 1);
        ssSetDWorkDataType(rts, 8,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 8, 0);
        ssSetDWork(rts, 8, &rtDW.Subsystem1_sfcn_DWORK8);

        /* DWORK9 */
        ssSetDWorkWidth(rts, 9, 1);
        ssSetDWorkDataType(rts, 9,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 9, 0);
        ssSetDWork(rts, 9, &rtDW.Subsystem1_sfcn_DWORK9);

        /* DWORK10 */
        ssSetDWorkWidth(rts, 10, 1);
        ssSetDWorkDataType(rts, 10,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 10, 0);
        ssSetDWork(rts, 10, &rtDW.Subsystem1_sfcn_DWORK10);

        /* DWORK11 */
        ssSetDWorkWidth(rts, 11, 1);
        ssSetDWorkDataType(rts, 11,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 11, 0);
        ssSetDWork(rts, 11, &rtDW.Subsystem1_sfcn_DWORK11);

        /* DWORK12 */
        ssSetDWorkWidth(rts, 12, 1);
        ssSetDWorkDataType(rts, 12,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 12, 0);
        ssSetDWork(rts, 12, &rtDW.Subsystem1_sfcn_DWORK12);

        /* DWORK13 */
        ssSetDWorkWidth(rts, 13, 1);
        ssSetDWorkDataType(rts, 13,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 13, 0);
        ssSetDWork(rts, 13, &rtDW.Subsystem1_sfcn_DWORK13);

        /* DWORK14 */
        ssSetDWorkWidth(rts, 14, 1);
        ssSetDWorkDataType(rts, 14,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 14, 0);
        ssSetDWork(rts, 14, &rtDW.Subsystem1_sfcn_DWORK14);

        /* DWORK15 */
        ssSetDWorkWidth(rts, 15, 1);
        ssSetDWorkDataType(rts, 15,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 15, 0);
        ssSetDWork(rts, 15, &rtDW.Subsystem1_sfcn_DWORK15);

        /* DWORK16 */
        ssSetDWorkWidth(rts, 16, 1);
        ssSetDWorkDataType(rts, 16,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 16, 0);
        ssSetDWork(rts, 16, &rtDW.Subsystem1_sfcn_DWORK16);

        /* DWORK17 */
        ssSetDWorkWidth(rts, 17, 1);
        ssSetDWorkDataType(rts, 17,SS_BOOLEAN);
        ssSetDWorkComplexSignal(rts, 17, 0);
        ssSetDWork(rts, 17, &rtDW.Subsystem1_sfcn_DWORK17);

        /* DWORK18 */
        ssSetDWorkWidth(rts, 18, 1);
        ssSetDWorkDataType(rts, 18,SS_BOOLEAN);
        ssSetDWorkComplexSignal(rts, 18, 0);
        ssSetDWork(rts, 18, &rtDW.Subsystem1_sfcn_DWORK18);
      }

      /* registration */
      Subsystem1_sf(rts);
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
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);

      /* Instance data for generated S-Function: Subsystem1 */
#include "Subsystem1_sfcn_rtw/Subsystem1_sid.h"

    }
  }

  /* RTW Generated Level2 S-Function Block: '<S2>/Subsystem1_sfcn' (Subsystem1_sf) */
  {
    SimStruct *rts = rtM->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (arduinoservowrite_sfcn): '<S6>/Servo Write' */
  MW_servoAttach(0U, 3UL);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S7>/Servo Write' */
  MW_servoAttach(1U, 5UL);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S8>/Servo Write' */
  MW_servoAttach(2U, 6UL);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S9>/Servo Write' */
  MW_servoAttach(3U, 9UL);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S10>/Servo Write' */
  MW_servoAttach(4U, 10UL);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S11>/Servo Write' */
  MW_servoAttach(5U, 11UL);
}

/* Model terminate function */
void servo_mixed_terminate(void)
{
  /* RTW Generated Level2 S-Function Block: '<S2>/Subsystem1_sfcn' (Subsystem1_sf) */
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
