/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: servo_mixed.h
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

#ifndef RTW_HEADER_servo_mixed_h_
#define RTW_HEADER_servo_mixed_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include <float.h>
#ifndef servo_mixed_COMMON_INCLUDES_
# define servo_mixed_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "arduino_servowrite_lct.h"
#endif                                 /* servo_mixed_COMMON_INCLUDES_ */

#include "servo_mixed_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_sfcn_helper.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->blkStateChange = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#define servo_mixed_M                  (rtM)

/* Block signals (auto storage) */
typedef struct {
  real_T y_simu[6];                    /* '<S1>/Inverse Kinematics1' */
  real_T yd_simu[6];
  real_T Clock;                        /* '<S1>/Clock' */
  real_T s;                            /* '<S1>/Chart' */
  real_T dt;                           /* '<S1>/Chart' */
  real_T s_old;                        /* '<S1>/Chart' */
} B;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Subsystem1_sfcn_DWORK0[2];    /* '<S2>/Subsystem1_sfcn' */
  real_T Subsystem1_sfcn_DWORK1[2];    /* '<S2>/Subsystem1_sfcn' */
  real_T Subsystem1_sfcn_DWORK2[2];    /* '<S2>/Subsystem1_sfcn' */
  real_T Subsystem1_sfcn_DWORK3[2];    /* '<S2>/Subsystem1_sfcn' */
  real_T Subsystem1_sfcn_DWORK4[2];    /* '<S2>/Subsystem1_sfcn' */
  real_T Subsystem1_sfcn_DWORK5[2];    /* '<S2>/Subsystem1_sfcn' */
  real_T Subsystem1_sfcn_DWORK6[2];    /* '<S2>/Subsystem1_sfcn' */
  real_T t2;                           /* '<S1>/Chart' */
  real_T t1;                           /* '<S1>/Chart' */
  real_T t3;                           /* '<S1>/Chart' */
  void* Subsystem1_sfcn_DWORK7;        /* '<S2>/Subsystem1_sfcn' */
  void* Subsystem1_sfcn_DWORK8;        /* '<S2>/Subsystem1_sfcn' */
  void* Subsystem1_sfcn_DWORK9;        /* '<S2>/Subsystem1_sfcn' */
  void* Subsystem1_sfcn_DWORK10;       /* '<S2>/Subsystem1_sfcn' */
  void* Subsystem1_sfcn_DWORK11;       /* '<S2>/Subsystem1_sfcn' */
  void* Subsystem1_sfcn_DWORK12;       /* '<S2>/Subsystem1_sfcn' */
  void* Subsystem1_sfcn_DWORK13;       /* '<S2>/Subsystem1_sfcn' */
  void* Subsystem1_sfcn_DWORK14;       /* '<S2>/Subsystem1_sfcn' */
  void* Subsystem1_sfcn_DWORK15;       /* '<S2>/Subsystem1_sfcn' */
  void* Subsystem1_sfcn_DWORK16;       /* '<S2>/Subsystem1_sfcn' */
  uint8_T is_active_c3_servo_mixed;    /* '<S1>/Chart' */
  uint8_T is_c3_servo_mixed;           /* '<S1>/Chart' */
  boolean_T Subsystem1_sfcn_DWORK17;   /* '<S2>/Subsystem1_sfcn' */
  boolean_T Subsystem1_sfcn_DWORK18;   /* '<S2>/Subsystem1_sfcn' */
} DW;

/* Real-time Model Data Structure */
struct tag_RTM {
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[1];
    SimStruct *childSFunctionPtrs[1];
    struct _ssBlkInfo2 blkInfo2[1];
    struct _ssSFcnModelMethods2 methods2[1];
    struct _ssSFcnModelMethods3 methods3[1];
    struct _ssSFcnModelMethods4 methods4[1];
    struct _ssStatesInfo2 statesInfo2[1];
    ssPeriodicStatesInfo periodicStatesInfo[1];
    struct {
      time_T sfcnPeriod[2];
      time_T sfcnOffset[2];
      int_T sfcnTsMap[2];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[6];
      struct _ssDWorkRecord dWork[19];
      struct _ssDWorkAuxRecord dWorkAux[19];
    } Sfcn0;
  } NonInlinedSFcns;

  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T blkStateChange;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block signals (auto storage) */
extern B rtB;

/* Block states (auto storage) */
extern DW rtDW;

/* Model entry point functions */
extern void servo_mixed_initialize(void);
extern void servo_mixed_step(void);
extern void servo_mixed_terminate(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'servo_mixed'
 * '<S1>'   : 'servo_mixed/Subsystem'
 * '<S2>'   : 'servo_mixed/Subsystem2'
 * '<S3>'   : 'servo_mixed/Subsystem/Chart'
 * '<S4>'   : 'servo_mixed/Subsystem/Inverse Kinematics1'
 * '<S5>'   : 'servo_mixed/Subsystem/Servo Motor'
 * '<S6>'   : 'servo_mixed/Subsystem/Servo Motor/Standard Servo Write'
 * '<S7>'   : 'servo_mixed/Subsystem/Servo Motor/Standard Servo Write1'
 * '<S8>'   : 'servo_mixed/Subsystem/Servo Motor/Standard Servo Write2'
 * '<S9>'   : 'servo_mixed/Subsystem/Servo Motor/Standard Servo Write3'
 * '<S10>'  : 'servo_mixed/Subsystem/Servo Motor/Standard Servo Write4'
 * '<S11>'  : 'servo_mixed/Subsystem/Servo Motor/Standard Servo Write5'
 * '<S12>'  : 'servo_mixed/Subsystem2/__InputSSForSFun__'
 */
#endif                                 /* RTW_HEADER_servo_mixed_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
