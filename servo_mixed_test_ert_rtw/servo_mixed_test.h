/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: servo_mixed_test.h
 *
 * Code generated for Simulink model 'servo_mixed_test'.
 *
 * Model version                  : 1.46
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Apr 11 02:57:35 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_servo_mixed_test_h_
#define RTW_HEADER_servo_mixed_test_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef servo_mixed_test_COMMON_INCLUDES_
# define servo_mixed_test_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "servo_mixed_test_e8940bbe_1_gateway.h"
#endif                                 /* servo_mixed_test_COMMON_INCLUDES_ */

#include "servo_mixed_test_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
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

#define servo_mixed_test_M             (rtM)

/* Block signals (auto storage) */
typedef struct {
  real_T dv0[28];
  real_T dv1[28];
  real_T yd_simu[6];
  NeModelParameters expl_temp;
  real_T INPUT_3_1_1[4];               /* '<S24>/INPUT_3_1_1' */
  real_T INPUT_4_1_1[4];               /* '<S24>/INPUT_4_1_1' */
  real_T INPUT_5_1_1[4];               /* '<S24>/INPUT_5_1_1' */
  real_T INPUT_6_1_1[4];               /* '<S24>/INPUT_6_1_1' */
  real_T INPUT_1_1_1[4];               /* '<S24>/INPUT_1_1_1' */
  real_T INPUT_7_1_1[4];               /* '<S24>/INPUT_7_1_1' */
  real_T y_simu[6];                    /* '<S1>/Inverse Kinematics1' */
  int_T iv0[8];
  NeParameterBundle expl_temp_m;
  real_T Clock;                        /* '<S1>/Clock' */
  real_T Gain;                         /* '<S13>/Gain' */
  real_T INPUT_2_1_1[4];               /* '<S24>/INPUT_2_1_1' */
  real_T s;                            /* '<S1>/Chart' */
  real_T dt;                           /* '<S1>/Chart' */
  real_T s_old;                        /* '<S1>/Chart' */
  real_T modelParameters_mSolverToleranc;
} B;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T INPUT_2_1_1_discrete[2];      /* '<S24>/INPUT_2_1_1' */
  real_T INPUT_3_1_1_discrete[2];      /* '<S24>/INPUT_3_1_1' */
  real_T INPUT_4_1_1_discrete[2];      /* '<S24>/INPUT_4_1_1' */
  real_T INPUT_5_1_1_discrete[2];      /* '<S24>/INPUT_5_1_1' */
  real_T INPUT_6_1_1_discrete[2];      /* '<S24>/INPUT_6_1_1' */
  real_T INPUT_1_1_1_discrete[2];      /* '<S24>/INPUT_1_1_1' */
  real_T INPUT_7_1_1_discrete[2];      /* '<S24>/INPUT_7_1_1' */
  real_T t2;                           /* '<S1>/Chart' */
  real_T t1;                           /* '<S1>/Chart' */
  real_T t3;                           /* '<S1>/Chart' */
  void* SINK_1_Simulator;              /* '<S24>/SINK_1' */
  void* SINK_1_SimulationData;         /* '<S24>/SINK_1' */
  void* SINK_1_DiagnosticManager;      /* '<S24>/SINK_1' */
  void* SINK_1_Logger;                 /* '<S24>/SINK_1' */
  void* SINK_1_SampleTimeIdx;          /* '<S24>/SINK_1' */
  void* STATE_1_Simulator;             /* '<S24>/STATE_1' */
  void* STATE_1_SimulationData;        /* '<S24>/STATE_1' */
  void* STATE_1_DiagnosticManager;     /* '<S24>/STATE_1' */
  void* STATE_1_Logger;                /* '<S24>/STATE_1' */
  void* STATE_1_SampleTimeIdx;         /* '<S24>/STATE_1' */
  int32_T sfEvent;                     /* '<S1>/Chart' */
  uint8_T is_active_c3_servo_mixed_test;/* '<S1>/Chart' */
  uint8_T is_c3_servo_mixed_test;      /* '<S1>/Chart' */
  boolean_T SINK_1_CallSimulatorOutput;/* '<S24>/SINK_1' */
  boolean_T STATE_1_CallSimulatorOutput;/* '<S24>/STATE_1' */
} DW;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
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
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block signals (auto storage) */
extern B rtB;

/* Block states (auto storage) */
extern DW rtDW;

/* Model entry point functions */
extern void servo_mixed_test_initialize(void);
extern void servo_mixed_test_step(void);
extern void servo_mixed_test_terminate(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S13>/Gain1' : Eliminated nontunable gain of 1
 */

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
 * '<Root>' : 'servo_mixed_test'
 * '<S1>'   : 'servo_mixed_test/Subsystem'
 * '<S2>'   : 'servo_mixed_test/Subsystem1'
 * '<S3>'   : 'servo_mixed_test/Subsystem/Chart'
 * '<S4>'   : 'servo_mixed_test/Subsystem/Inverse Kinematics1'
 * '<S5>'   : 'servo_mixed_test/Subsystem1/Simulation'
 * '<S6>'   : 'servo_mixed_test/Subsystem1/Simulation/Grabber'
 * '<S7>'   : 'servo_mixed_test/Subsystem1/Simulation/Rotatation Joint 1'
 * '<S8>'   : 'servo_mixed_test/Subsystem1/Simulation/Rotatation Joint 2'
 * '<S9>'   : 'servo_mixed_test/Subsystem1/Simulation/Rotatation Joint 3'
 * '<S10>'  : 'servo_mixed_test/Subsystem1/Simulation/Rotatation Joint 4'
 * '<S11>'  : 'servo_mixed_test/Subsystem1/Simulation/Rotatation Joint 5'
 * '<S12>'  : 'servo_mixed_test/Subsystem1/Simulation/Solver Configuration'
 * '<S13>'  : 'servo_mixed_test/Subsystem1/Simulation/Unit Converter'
 * '<S14>'  : 'servo_mixed_test/Subsystem1/Simulation/link1_1'
 * '<S15>'  : 'servo_mixed_test/Subsystem1/Simulation/link1_2'
 * '<S16>'  : 'servo_mixed_test/Subsystem1/Simulation/link2'
 * '<S17>'  : 'servo_mixed_test/Subsystem1/Simulation/link3'
 * '<S18>'  : 'servo_mixed_test/Subsystem1/Simulation/link4'
 * '<S19>'  : 'servo_mixed_test/Subsystem1/Simulation/link5_2'
 * '<S20>'  : 'servo_mixed_test/Subsystem1/Simulation/Grabber/grab_elem1'
 * '<S21>'  : 'servo_mixed_test/Subsystem1/Simulation/Grabber/grab_elem2'
 * '<S22>'  : 'servo_mixed_test/Subsystem1/Simulation/Grabber/grab_elem3'
 * '<S23>'  : 'servo_mixed_test/Subsystem1/Simulation/Grabber/grab_elem4'
 * '<S24>'  : 'servo_mixed_test/Subsystem1/Simulation/Solver Configuration/EVAL_KEY'
 * '<S25>'  : 'servo_mixed_test/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter'
 * '<S26>'  : 'servo_mixed_test/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter1'
 * '<S27>'  : 'servo_mixed_test/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter2'
 * '<S28>'  : 'servo_mixed_test/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter3'
 * '<S29>'  : 'servo_mixed_test/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter4'
 * '<S30>'  : 'servo_mixed_test/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter5'
 * '<S31>'  : 'servo_mixed_test/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter6'
 * '<S32>'  : 'servo_mixed_test/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter/EVAL_KEY'
 * '<S33>'  : 'servo_mixed_test/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter1/EVAL_KEY'
 * '<S34>'  : 'servo_mixed_test/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter2/EVAL_KEY'
 * '<S35>'  : 'servo_mixed_test/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter3/EVAL_KEY'
 * '<S36>'  : 'servo_mixed_test/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter4/EVAL_KEY'
 * '<S37>'  : 'servo_mixed_test/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter5/EVAL_KEY'
 * '<S38>'  : 'servo_mixed_test/Subsystem1/Simulation/Unit Converter/Simulink-PS Converter6/EVAL_KEY'
 */
#endif                                 /* RTW_HEADER_servo_mixed_test_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
