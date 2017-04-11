/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: serial_pc.h
 *
 * Code generated for Simulink model 'serial_pc'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Apr 10 22:30:49 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_serial_pc_h_
#define RTW_HEADER_serial_pc_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef serial_pc_COMMON_INCLUDES_
# define serial_pc_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "arduino_servowrite_lct.h"
#include "nesl_rtw.h"
#include "serial_pc_797a10b2_1_gateway.h"
#endif                                 /* serial_pc_COMMON_INCLUDES_ */

#include "serial_pc_types.h"

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

/* Block signals (auto storage) */
typedef struct {
  real_T dv0[28];
  real_T dv1[28];
  real_T y[6];                         /* '<Root>/Inverse Kinematics1' */
  real_T y_simu[6];                    /* '<Root>/Inverse Kinematics1' */
  real_T yd_simu[6];
  NeModelParameters expl_temp;
  int_T iv0[8];
  NeParameterBundle expl_temp_m;
  real_T Clock;                        /* '<Root>/Clock' */
  real_T Gain;                         /* '<S13>/Gain' */
  real_T Gain1;                        /* '<S13>/Gain1' */
  real_T INPUT_2_1_1[4];               /* '<S24>/INPUT_2_1_1' */
  real_T INPUT_3_1_1[4];               /* '<S24>/INPUT_3_1_1' */
  real_T INPUT_4_1_1[4];               /* '<S24>/INPUT_4_1_1' */
  real_T INPUT_5_1_1[4];               /* '<S24>/INPUT_5_1_1' */
  real_T INPUT_6_1_1[4];               /* '<S24>/INPUT_6_1_1' */
  real_T INPUT_1_1_1[4];               /* '<S24>/INPUT_1_1_1' */
  real_T INPUT_7_1_1[4];               /* '<S24>/INPUT_7_1_1' */
  real_T s;                            /* '<Root>/Chart' */
  real_T dt;                           /* '<Root>/Chart' */
  real_T s_old;                        /* '<Root>/Chart' */
  real_T modelParameters_mSolverToleranc;
} B_serial_pc_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T INPUT_2_1_1_discrete[2];      /* '<S24>/INPUT_2_1_1' */
  real_T INPUT_3_1_1_discrete[2];      /* '<S24>/INPUT_3_1_1' */
  real_T INPUT_4_1_1_discrete[2];      /* '<S24>/INPUT_4_1_1' */
  real_T INPUT_5_1_1_discrete[2];      /* '<S24>/INPUT_5_1_1' */
  real_T INPUT_6_1_1_discrete[2];      /* '<S24>/INPUT_6_1_1' */
  real_T INPUT_1_1_1_discrete[2];      /* '<S24>/INPUT_1_1_1' */
  real_T INPUT_7_1_1_discrete[2];      /* '<S24>/INPUT_7_1_1' */
  real_T t2;                           /* '<Root>/Chart' */
  real_T t1;                           /* '<Root>/Chart' */
  real_T t3;                           /* '<Root>/Chart' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */

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
  int32_T sfEvent;                     /* '<Root>/Chart' */
  int8_T servo_SubsysRanBC;            /* '<S1>/servo' */
  uint8_T is_active_c3_serial_pc;      /* '<Root>/Chart' */
  uint8_T is_c3_serial_pc;             /* '<Root>/Chart' */
  boolean_T SINK_1_CallSimulatorOutput;/* '<S24>/SINK_1' */
  boolean_T STATE_1_CallSimulatorOutput;/* '<S24>/STATE_1' */
} DW_serial_pc_T;

/* Parameters (auto storage) */
struct P_serial_pc_T_ {
  uint32_T ServoWrite_pinNumber;       /* Mask Parameter: ServoWrite_pinNumber
                                        * Referenced by: '<S5>/Servo Write'
                                        */
  real_T Constant_Value;               /* Expression: 45
                                        * Referenced by: '<S4>/Constant'
                                        */
  real_T Gain_Gain;                    /* Expression: -1/2
                                        * Referenced by: '<S13>/Gain'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1
                                        * Referenced by: '<S13>/Gain1'
                                        */
  uint8_T Constant_Value_h;            /* Computed Parameter: Constant_Value_h
                                        * Referenced by: '<S5>/Constant'
                                        */
  uint8_T ServoWrite_p1;               /* Computed Parameter: ServoWrite_p1
                                        * Referenced by: '<S5>/Servo Write'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_serial_pc_T {
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

/* Block parameters (auto storage) */
extern P_serial_pc_T serial_pc_P;

/* Block signals (auto storage) */
extern B_serial_pc_T serial_pc_B;

/* Block states (auto storage) */
extern DW_serial_pc_T serial_pc_DW;

/* Model entry point functions */
extern void serial_pc_initialize(void);
extern void serial_pc_step(void);
extern void serial_pc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_serial_pc_T *const serial_pc_M;

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
 * '<Root>' : 'serial_pc'
 * '<S1>'   : 'serial_pc/Chart'
 * '<S2>'   : 'serial_pc/Inverse Kinematics1'
 * '<S3>'   : 'serial_pc/Simulation'
 * '<S4>'   : 'serial_pc/Chart/servo'
 * '<S5>'   : 'serial_pc/Chart/servo/Continuous Servo Write'
 * '<S6>'   : 'serial_pc/Simulation/Grabber'
 * '<S7>'   : 'serial_pc/Simulation/Rotatation Joint 1'
 * '<S8>'   : 'serial_pc/Simulation/Rotatation Joint 2'
 * '<S9>'   : 'serial_pc/Simulation/Rotatation Joint 3'
 * '<S10>'  : 'serial_pc/Simulation/Rotatation Joint 4'
 * '<S11>'  : 'serial_pc/Simulation/Rotatation Joint 5'
 * '<S12>'  : 'serial_pc/Simulation/Solver Configuration'
 * '<S13>'  : 'serial_pc/Simulation/Unit Converter'
 * '<S14>'  : 'serial_pc/Simulation/link1_1'
 * '<S15>'  : 'serial_pc/Simulation/link1_2'
 * '<S16>'  : 'serial_pc/Simulation/link2'
 * '<S17>'  : 'serial_pc/Simulation/link3'
 * '<S18>'  : 'serial_pc/Simulation/link4'
 * '<S19>'  : 'serial_pc/Simulation/link5_2'
 * '<S20>'  : 'serial_pc/Simulation/Grabber/grab_elem1'
 * '<S21>'  : 'serial_pc/Simulation/Grabber/grab_elem2'
 * '<S22>'  : 'serial_pc/Simulation/Grabber/grab_elem3'
 * '<S23>'  : 'serial_pc/Simulation/Grabber/grab_elem4'
 * '<S24>'  : 'serial_pc/Simulation/Solver Configuration/EVAL_KEY'
 * '<S25>'  : 'serial_pc/Simulation/Unit Converter/Simulink-PS Converter'
 * '<S26>'  : 'serial_pc/Simulation/Unit Converter/Simulink-PS Converter1'
 * '<S27>'  : 'serial_pc/Simulation/Unit Converter/Simulink-PS Converter2'
 * '<S28>'  : 'serial_pc/Simulation/Unit Converter/Simulink-PS Converter3'
 * '<S29>'  : 'serial_pc/Simulation/Unit Converter/Simulink-PS Converter4'
 * '<S30>'  : 'serial_pc/Simulation/Unit Converter/Simulink-PS Converter5'
 * '<S31>'  : 'serial_pc/Simulation/Unit Converter/Simulink-PS Converter6'
 * '<S32>'  : 'serial_pc/Simulation/Unit Converter/Simulink-PS Converter/EVAL_KEY'
 * '<S33>'  : 'serial_pc/Simulation/Unit Converter/Simulink-PS Converter1/EVAL_KEY'
 * '<S34>'  : 'serial_pc/Simulation/Unit Converter/Simulink-PS Converter2/EVAL_KEY'
 * '<S35>'  : 'serial_pc/Simulation/Unit Converter/Simulink-PS Converter3/EVAL_KEY'
 * '<S36>'  : 'serial_pc/Simulation/Unit Converter/Simulink-PS Converter4/EVAL_KEY'
 * '<S37>'  : 'serial_pc/Simulation/Unit Converter/Simulink-PS Converter5/EVAL_KEY'
 * '<S38>'  : 'serial_pc/Simulation/Unit Converter/Simulink-PS Converter6/EVAL_KEY'
 */
#endif                                 /* RTW_HEADER_serial_pc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
