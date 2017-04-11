/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Simulation.h
 *
 * Code generated for Simulink model 'Simulation'.
 *
 * Model version                  : 1.43
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Apr 10 16:46:04 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Simulation_h_
#define RTW_HEADER_Simulation_h_
#include <stddef.h>
#ifndef Simulation_COMMON_INCLUDES_
# define Simulation_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "nesl_rtw.h"
#include "Simulation_f1e64dd8_1_gateway.h"
#endif                                 /* Simulation_COMMON_INCLUDES_ */

#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#define Simulation_M                   (rtM)

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (auto storage) for system '<Root>' */
typedef struct {
  NeModelParameters expl_temp;
  NeParameterBundle expl_temp_m;
  real_T INPUT_2_1_1[4];               /* '<S20>/INPUT_2_1_1' */
  real_T INPUT_3_1_1[4];               /* '<S20>/INPUT_3_1_1' */
  real_T INPUT_4_1_1[4];               /* '<S20>/INPUT_4_1_1' */
  real_T INPUT_5_1_1[4];               /* '<S20>/INPUT_5_1_1' */
  real_T INPUT_6_1_1[4];               /* '<S20>/INPUT_6_1_1' */
  real_T INPUT_1_1_1[4];               /* '<S20>/INPUT_1_1_1' */
  real_T INPUT_7_1_1[4];               /* '<S20>/INPUT_7_1_1' */
  real_T INPUT_2_1_1_discrete[2];      /* '<S20>/INPUT_2_1_1' */
  real_T INPUT_3_1_1_discrete[2];      /* '<S20>/INPUT_3_1_1' */
  real_T INPUT_4_1_1_discrete[2];      /* '<S20>/INPUT_4_1_1' */
  real_T INPUT_5_1_1_discrete[2];      /* '<S20>/INPUT_5_1_1' */
  real_T INPUT_6_1_1_discrete[2];      /* '<S20>/INPUT_6_1_1' */
  real_T INPUT_1_1_1_discrete[2];      /* '<S20>/INPUT_1_1_1' */
  real_T INPUT_7_1_1_discrete[2];      /* '<S20>/INPUT_7_1_1' */
  real_T dv0[28];
  real_T dv1[28];
  real_T Gain;                         /* '<S9>/Gain' */
  real_T modelParameters_mSolverToleranc;
  void* SINK_1_Simulator;              /* '<S20>/SINK_1' */
  void* SINK_1_SimulationData;         /* '<S20>/SINK_1' */
  void* SINK_1_DiagnosticManager;      /* '<S20>/SINK_1' */
  void* SINK_1_Logger;                 /* '<S20>/SINK_1' */
  void* SINK_1_SampleTimeIdx;          /* '<S20>/SINK_1' */
  void* STATE_1_Simulator;             /* '<S20>/STATE_1' */
  void* STATE_1_SimulationData;        /* '<S20>/STATE_1' */
  void* STATE_1_DiagnosticManager;     /* '<S20>/STATE_1' */
  void* STATE_1_Logger;                /* '<S20>/STATE_1' */
  void* STATE_1_SampleTimeIdx;         /* '<S20>/STATE_1' */
  boolean_T SINK_1_CallSimulatorOutput;/* '<S20>/SINK_1' */
  boolean_T STATE_1_CallSimulatorOutput;/* '<S20>/STATE_1' */
} DW;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
  real_T In2;                          /* '<Root>/In2' */
  real_T In3;                          /* '<Root>/In3' */
  real_T In4;                          /* '<Root>/In4' */
  real_T In5;                          /* '<Root>/In5' */
  real_T In6;                          /* '<Root>/In6' */
} ExtU;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block signals and states (auto storage) */
extern DW rtDW;

/* External inputs (root inport signals with auto storage) */
extern ExtU rtU;

/* Model entry point functions */
extern void Simulation_initialize(void);
extern void Simulation_step(void);
extern void Simulation_terminate(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S9>/Gain1' : Eliminated nontunable gain of 1
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('servo_mixed/Simulation')    - opens subsystem servo_mixed/Simulation
 * hilite_system('servo_mixed/Simulation/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'servo_mixed'
 * '<S1>'   : 'servo_mixed/Simulation'
 * '<S2>'   : 'servo_mixed/Simulation/Grabber'
 * '<S3>'   : 'servo_mixed/Simulation/Rotatation Joint 1'
 * '<S4>'   : 'servo_mixed/Simulation/Rotatation Joint 2'
 * '<S5>'   : 'servo_mixed/Simulation/Rotatation Joint 3'
 * '<S6>'   : 'servo_mixed/Simulation/Rotatation Joint 4'
 * '<S7>'   : 'servo_mixed/Simulation/Rotatation Joint 5'
 * '<S8>'   : 'servo_mixed/Simulation/Solver Configuration'
 * '<S9>'   : 'servo_mixed/Simulation/Unit Converter'
 * '<S10>'  : 'servo_mixed/Simulation/link1_1'
 * '<S11>'  : 'servo_mixed/Simulation/link1_2'
 * '<S12>'  : 'servo_mixed/Simulation/link2'
 * '<S13>'  : 'servo_mixed/Simulation/link3'
 * '<S14>'  : 'servo_mixed/Simulation/link4'
 * '<S15>'  : 'servo_mixed/Simulation/link5_2'
 * '<S16>'  : 'servo_mixed/Simulation/Grabber/grab_elem1'
 * '<S17>'  : 'servo_mixed/Simulation/Grabber/grab_elem2'
 * '<S18>'  : 'servo_mixed/Simulation/Grabber/grab_elem3'
 * '<S19>'  : 'servo_mixed/Simulation/Grabber/grab_elem4'
 * '<S20>'  : 'servo_mixed/Simulation/Solver Configuration/EVAL_KEY'
 * '<S21>'  : 'servo_mixed/Simulation/Unit Converter/Simulink-PS Converter'
 * '<S22>'  : 'servo_mixed/Simulation/Unit Converter/Simulink-PS Converter1'
 * '<S23>'  : 'servo_mixed/Simulation/Unit Converter/Simulink-PS Converter2'
 * '<S24>'  : 'servo_mixed/Simulation/Unit Converter/Simulink-PS Converter3'
 * '<S25>'  : 'servo_mixed/Simulation/Unit Converter/Simulink-PS Converter4'
 * '<S26>'  : 'servo_mixed/Simulation/Unit Converter/Simulink-PS Converter5'
 * '<S27>'  : 'servo_mixed/Simulation/Unit Converter/Simulink-PS Converter6'
 * '<S28>'  : 'servo_mixed/Simulation/Unit Converter/Simulink-PS Converter/EVAL_KEY'
 * '<S29>'  : 'servo_mixed/Simulation/Unit Converter/Simulink-PS Converter1/EVAL_KEY'
 * '<S30>'  : 'servo_mixed/Simulation/Unit Converter/Simulink-PS Converter2/EVAL_KEY'
 * '<S31>'  : 'servo_mixed/Simulation/Unit Converter/Simulink-PS Converter3/EVAL_KEY'
 * '<S32>'  : 'servo_mixed/Simulation/Unit Converter/Simulink-PS Converter4/EVAL_KEY'
 * '<S33>'  : 'servo_mixed/Simulation/Unit Converter/Simulink-PS Converter5/EVAL_KEY'
 * '<S34>'  : 'servo_mixed/Simulation/Unit Converter/Simulink-PS Converter6/EVAL_KEY'
 */
#endif                                 /* RTW_HEADER_Simulation_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
