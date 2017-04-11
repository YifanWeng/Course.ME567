/*
 * Subsystem1_sf.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Subsystem1_sf".
 *
 * Model version              : 1.44
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Mon Apr 10 23:29:34 2017
 *
 * Target selection: rtwsfcn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Atmel->AVR
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include <math.h>
#include "Subsystem1_sf.h"
#include "Subsystem1_sf_private.h"
#include "simstruc.h"
#include "fixedpoint.h"
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

extern void *Subsystem1_malloc(SimStruct *S);

#endif

#ifndef __RTW_UTFREE__
#if defined (MATLAB_MEX_FILE)

extern void * utMalloc(size_t);
extern void utFree(void *);

#endif
#endif                                 /* #ifndef __RTW_UTFREE__ */

#if defined(MATLAB_MEX_FILE)
#include "rt_nonfinite.c"
#endif

static const char_T *RT_MEMORY_ALLOCATION_ERROR =
  "memory allocation error in generated S-Function";

/* Start for root system: '<Root>' */
#define MDL_START

static void mdlStart(SimStruct *S)
{
  /* instance underlying S-Function data */
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)
#  if defined(MATLAB_MEX_FILE)

  /* non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* Check for invalid switching between solver types */
  if (ssIsVariableStepSolver(S)) {
    ssSetErrorStatus(S, "This Simulink Coder generated "
                     "S-Function cannot be used in a simulation with "
                     "a solver type of variable-step "
                     "because this S-Function was created from a model with "
                     "solver type of fixed-step and it has continuous time blocks. "
                     "See the Solver page of the simulation parameters dialog.");
    return;
  }

  if (ssGetSolverMode(S) == SOLVER_MODE_MULTITASKING) {
    ssSetErrorStatus(S, "This Simulink Coder generated "
                     "S-Function cannot be used in a simulation with "
                     "solver mode set to auto or multitasking "
                     "because this S-Function was created from a model with "
                     "solver mode set to singletasking. "
                     "See the Solver page of the simulation parameters dialog.");
    return;
  }

#  endif

  Subsystem1_malloc(S);
  if (ssGetErrorStatus(S) != (NULL) ) {
    return;
  }

#endif

  {
    static NeslSimulator *tmp;
    NeuDiagnosticManager *diagnosticManager;
    real_T modelParameters_mSolverToleranc;
    real_T modelParameters_mFixedStepSize;
    boolean_T modelParameters_mVariableStepSo;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_0;
    char *msg;
    NeslSimulationData *simulationData;
    real_T time;
    static NeModelParameters expl_temp;
    static NeParameterBundle expl_temp_0;

    /* Start for SimscapeExecutionBlock: '<S21>/STATE_1' */
    tmp = nesl_lease_simulator(
      "Subsystem1/Subsystem1/Simulation/Solver Configuration_1", 0, 0);
    ((pointer_T *)ssGetDWork(S, 12))[0] = (void *)tmp;
    modelParameters_mVariableStepSo = pointer_is_null(((pointer_T *)ssGetDWork(S,
      12))[0]);
    if (modelParameters_mVariableStepSo) {
      Subsystem1_3121ebb6_1_gateway();
      tmp = nesl_lease_simulator(
        "Subsystem1/Subsystem1/Simulation/Solver Configuration_1", 0, 0);
      ((pointer_T *)ssGetDWork(S, 12))[0] = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    ((pointer_T *)ssGetDWork(S, 13))[0] = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    ((pointer_T *)ssGetDWork(S, 14))[0] = (void *)diagnosticManager;
    modelParameters_mSolverToleranc = 0.001;
    modelParameters_mFixedStepSize = 0.3;
    modelParameters_mVariableStepSo = false;
    diagnosticManager = (NeuDiagnosticManager *)((pointer_T *)ssGetDWork(S, 14))
      [0];
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    expl_temp.mVariableStepSolver = modelParameters_mVariableStepSo;
    expl_temp.mUseSimState = false;
    expl_temp.mStartTime = 0.0;
    expl_temp.mSolverType = NE_SOLVER_TYPE_DAE;
    expl_temp.mSolverTolerance = modelParameters_mSolverToleranc;
    expl_temp.mLoggingMode = SSC_LOGGING_NONE;
    expl_temp.mLoadInitialState = false;
    expl_temp.mLinTrimCompile = false;
    expl_temp.mFixedStepSize = modelParameters_mFixedStepSize;
    tmp_0 = nesl_initialize_simulator((NeslSimulator *)((pointer_T *)ssGetDWork
      (S, 12))[0], expl_temp, diagnosticManager);
    if (tmp_0 != 0) {
      modelParameters_mVariableStepSo = error_buffer_is_empty(ssGetErrorStatus(S));
      if (modelParameters_mVariableStepSo) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        ssSetErrorStatus(S, msg);
      }
    }

    expl_temp_0.mRealParameters.mN = 0;
    expl_temp_0.mRealParameters.mX = NULL;
    expl_temp_0.mLogicalParameters.mN = 0;
    expl_temp_0.mLogicalParameters.mX = NULL;
    expl_temp_0.mIntegerParameters.mN = 0;
    expl_temp_0.mIntegerParameters.mX = NULL;
    expl_temp_0.mIndexParameters.mN = 0;
    expl_temp_0.mIndexParameters.mX = NULL;
    nesl_simulator_set_rtps((NeslSimulator *)((pointer_T *)ssGetDWork(S, 12))[0],
      expl_temp_0);
    simulationData = (NeslSimulationData *)((pointer_T *)ssGetDWork(S, 13))[0];
    time = ssGetT(S);
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = NULL;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = NULL;
    modelParameters_mVariableStepSo = false;
    simulationData->mData->mFoundZcEvents = modelParameters_mVariableStepSo;
    simulationData->mData->mIsMajorTimeStep = ssIsMajorTimeStep(S);
    modelParameters_mVariableStepSo = (ssGetMdlInfoPtr(S)
      ->mdlFlags.solverAssertCheck == 1U);
    simulationData->mData->mIsSolverAssertCheck =
      modelParameters_mVariableStepSo;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)((pointer_T *)ssGetDWork(S, 14))
      [0];
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_0 = ne_simulator_method((NeslSimulator *)((pointer_T *)ssGetDWork(S, 12))
      [0], NESL_SIM_INITIALIZEONCE, simulationData, diagnosticManager);
    if (tmp_0 != 0) {
      modelParameters_mVariableStepSo = error_buffer_is_empty(ssGetErrorStatus(S));
      if (modelParameters_mVariableStepSo) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        ssSetErrorStatus(S, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S21>/STATE_1' */
  }
}

/* Outputs for root system: '<Root>' */
static void mdlOutputs(SimStruct *S, int_T tid)
{
  NeslSimulationData *simulationData;
  real_T time;
  boolean_T tmp;
  static real_T tmp_0[28];
  static int_T tmp_1[8];
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_2;
  char *msg;
  B_Subsystem1_T *_rtB;
  _rtB = ((B_Subsystem1_T *) ssGetLocalBlockIO(S));
  if (ssIsSampleHit(S, 1, 0)) {
    /* Gain: '<S10>/Gain' incorporates:
     *  Inport: '<Root>/In1'
     */
    _rtB->Gain = -0.5 * *((const real_T **)ssGetInputPortSignalPtrs(S, 0))[5];
  }

  /* SimscapeInputBlock: '<S21>/INPUT_2_1_1' incorporates:
   *  Inport: '<Root>/In1'
   */
  _rtB->INPUT_2_1_1[0] = *((const real_T **)ssGetInputPortSignalPtrs(S, 0))[0];
  _rtB->INPUT_2_1_1[1] = 0.0;
  _rtB->INPUT_2_1_1[2] = 0.0;
  if (ssIsMajorTimeStep(S)) {
    ((real_T *)ssGetDWork(S, 0))[0] = (real_T)!(_rtB->INPUT_2_1_1[0] == ((real_T
      *)ssGetDWork(S, 0))[1]);
    ((real_T *)ssGetDWork(S, 0))[1] = _rtB->INPUT_2_1_1[0];
  }

  _rtB->INPUT_2_1_1[3] = ((real_T *)ssGetDWork(S, 0))[0];

  /* End of SimscapeInputBlock: '<S21>/INPUT_2_1_1' */

  /* SimscapeInputBlock: '<S21>/INPUT_3_1_1' incorporates:
   *  Inport: '<Root>/In1'
   */
  _rtB->INPUT_3_1_1[0] = *((const real_T **)ssGetInputPortSignalPtrs(S, 0))[1];
  _rtB->INPUT_3_1_1[1] = 0.0;
  _rtB->INPUT_3_1_1[2] = 0.0;
  if (ssIsMajorTimeStep(S)) {
    ((real_T *)ssGetDWork(S, 1))[0] = (real_T)!(_rtB->INPUT_3_1_1[0] == ((real_T
      *)ssGetDWork(S, 1))[1]);
    ((real_T *)ssGetDWork(S, 1))[1] = _rtB->INPUT_3_1_1[0];
  }

  _rtB->INPUT_3_1_1[3] = ((real_T *)ssGetDWork(S, 1))[0];

  /* End of SimscapeInputBlock: '<S21>/INPUT_3_1_1' */

  /* SimscapeInputBlock: '<S21>/INPUT_4_1_1' incorporates:
   *  Inport: '<Root>/In1'
   */
  _rtB->INPUT_4_1_1[0] = *((const real_T **)ssGetInputPortSignalPtrs(S, 0))[2];
  _rtB->INPUT_4_1_1[1] = 0.0;
  _rtB->INPUT_4_1_1[2] = 0.0;
  if (ssIsMajorTimeStep(S)) {
    ((real_T *)ssGetDWork(S, 2))[0] = (real_T)!(_rtB->INPUT_4_1_1[0] == ((real_T
      *)ssGetDWork(S, 2))[1]);
    ((real_T *)ssGetDWork(S, 2))[1] = _rtB->INPUT_4_1_1[0];
  }

  _rtB->INPUT_4_1_1[3] = ((real_T *)ssGetDWork(S, 2))[0];

  /* End of SimscapeInputBlock: '<S21>/INPUT_4_1_1' */

  /* SimscapeInputBlock: '<S21>/INPUT_5_1_1' incorporates:
   *  Inport: '<Root>/In1'
   */
  _rtB->INPUT_5_1_1[0] = *((const real_T **)ssGetInputPortSignalPtrs(S, 0))[3];
  _rtB->INPUT_5_1_1[1] = 0.0;
  _rtB->INPUT_5_1_1[2] = 0.0;
  if (ssIsMajorTimeStep(S)) {
    ((real_T *)ssGetDWork(S, 3))[0] = (real_T)!(_rtB->INPUT_5_1_1[0] == ((real_T
      *)ssGetDWork(S, 3))[1]);
    ((real_T *)ssGetDWork(S, 3))[1] = _rtB->INPUT_5_1_1[0];
  }

  _rtB->INPUT_5_1_1[3] = ((real_T *)ssGetDWork(S, 3))[0];

  /* End of SimscapeInputBlock: '<S21>/INPUT_5_1_1' */

  /* SimscapeInputBlock: '<S21>/INPUT_6_1_1' incorporates:
   *  Inport: '<Root>/In1'
   */
  _rtB->INPUT_6_1_1[0] = *((const real_T **)ssGetInputPortSignalPtrs(S, 0))[4];
  _rtB->INPUT_6_1_1[1] = 0.0;
  _rtB->INPUT_6_1_1[2] = 0.0;
  if (ssIsMajorTimeStep(S)) {
    ((real_T *)ssGetDWork(S, 4))[0] = (real_T)!(_rtB->INPUT_6_1_1[0] == ((real_T
      *)ssGetDWork(S, 4))[1]);
    ((real_T *)ssGetDWork(S, 4))[1] = _rtB->INPUT_6_1_1[0];
  }

  _rtB->INPUT_6_1_1[3] = ((real_T *)ssGetDWork(S, 4))[0];

  /* End of SimscapeInputBlock: '<S21>/INPUT_6_1_1' */

  /* SimscapeInputBlock: '<S21>/INPUT_1_1_1' */
  _rtB->INPUT_1_1_1[0] = _rtB->Gain;
  _rtB->INPUT_1_1_1[1] = 0.0;
  _rtB->INPUT_1_1_1[2] = 0.0;
  if (ssIsMajorTimeStep(S)) {
    ((real_T *)ssGetDWork(S, 5))[0] = (real_T)!(_rtB->INPUT_1_1_1[0] == ((real_T
      *)ssGetDWork(S, 5))[1]);
    ((real_T *)ssGetDWork(S, 5))[1] = _rtB->INPUT_1_1_1[0];
  }

  _rtB->INPUT_1_1_1[3] = ((real_T *)ssGetDWork(S, 5))[0];

  /* End of SimscapeInputBlock: '<S21>/INPUT_1_1_1' */

  /* SimscapeInputBlock: '<S21>/INPUT_7_1_1' incorporates:
   *  Inport: '<Root>/In1'
   */
  _rtB->INPUT_7_1_1[0] = *((const real_T **)ssGetInputPortSignalPtrs(S, 0))[5];
  _rtB->INPUT_7_1_1[1] = 0.0;
  _rtB->INPUT_7_1_1[2] = 0.0;
  if (ssIsMajorTimeStep(S)) {
    ((real_T *)ssGetDWork(S, 6))[0] = (real_T)!(_rtB->INPUT_7_1_1[0] == ((real_T
      *)ssGetDWork(S, 6))[1]);
    ((real_T *)ssGetDWork(S, 6))[1] = _rtB->INPUT_7_1_1[0];
  }

  _rtB->INPUT_7_1_1[3] = ((real_T *)ssGetDWork(S, 6))[0];

  /* End of SimscapeInputBlock: '<S21>/INPUT_7_1_1' */
  if (1) {
    /* SimscapeExecutionBlock: '<S21>/STATE_1' */
    simulationData = (NeslSimulationData *)((pointer_T *)ssGetDWork(S, 13))[0];
    time = ssGetT(S);
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = NULL;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = NULL;
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mIsMajorTimeStep = ssIsMajorTimeStep(S);
    tmp = (ssGetMdlInfoPtr(S)->mdlFlags.solverAssertCheck == 1U);
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_1[0] = 0;
    tmp_0[0] = _rtB->INPUT_2_1_1[0];
    tmp_0[1] = _rtB->INPUT_2_1_1[1];
    tmp_0[2] = _rtB->INPUT_2_1_1[2];
    tmp_0[3] = _rtB->INPUT_2_1_1[3];
    tmp_1[1] = 4;
    tmp_0[4] = _rtB->INPUT_3_1_1[0];
    tmp_0[5] = _rtB->INPUT_3_1_1[1];
    tmp_0[6] = _rtB->INPUT_3_1_1[2];
    tmp_0[7] = _rtB->INPUT_3_1_1[3];
    tmp_1[2] = 8;
    tmp_0[8] = _rtB->INPUT_4_1_1[0];
    tmp_0[9] = _rtB->INPUT_4_1_1[1];
    tmp_0[10] = _rtB->INPUT_4_1_1[2];
    tmp_0[11] = _rtB->INPUT_4_1_1[3];
    tmp_1[3] = 12;
    tmp_0[12] = _rtB->INPUT_5_1_1[0];
    tmp_0[13] = _rtB->INPUT_5_1_1[1];
    tmp_0[14] = _rtB->INPUT_5_1_1[2];
    tmp_0[15] = _rtB->INPUT_5_1_1[3];
    tmp_1[4] = 16;
    tmp_0[16] = _rtB->INPUT_6_1_1[0];
    tmp_0[17] = _rtB->INPUT_6_1_1[1];
    tmp_0[18] = _rtB->INPUT_6_1_1[2];
    tmp_0[19] = _rtB->INPUT_6_1_1[3];
    tmp_1[5] = 20;
    tmp_0[20] = _rtB->INPUT_1_1_1[0];
    tmp_0[21] = _rtB->INPUT_1_1_1[1];
    tmp_0[22] = _rtB->INPUT_1_1_1[2];
    tmp_0[23] = _rtB->INPUT_1_1_1[3];
    tmp_1[6] = 24;
    tmp_0[24] = _rtB->INPUT_7_1_1[0];
    tmp_0[25] = _rtB->INPUT_7_1_1[1];
    tmp_0[26] = _rtB->INPUT_7_1_1[2];
    tmp_0[27] = _rtB->INPUT_7_1_1[3];
    tmp_1[7] = 28;
    simulationData->mData->mInputValues.mN = 28;
    simulationData->mData->mInputValues.mX = &tmp_0[0];
    simulationData->mData->mInputOffsets.mN = 8;
    simulationData->mData->mInputOffsets.mX = &tmp_1[0];
    simulationData->mData->mOutputs.mN = 0;
    simulationData->mData->mOutputs.mX = NULL;
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    diagnosticManager = (NeuDiagnosticManager *)((pointer_T *)ssGetDWork(S, 14))
      [0];
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)((pointer_T *)ssGetDWork(S, 12))
      [0], NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(ssGetErrorStatus(S));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        ssSetErrorStatus(S, msg);
      }
    }

    if (ssIsMajorTimeStep(S)) {
      ssSetSolverNeedsReset(S);
    }

    /* End of SimscapeExecutionBlock: '<S21>/STATE_1' */
  }

  UNUSED_PARAMETER(tid);
}

/* Update for root system: '<Root>' */
#define MDL_UPDATE

static void mdlUpdate(SimStruct *S, int_T tid)
{
  NeslSimulationData *simulationData;
  real_T time;
  boolean_T tmp;
  static real_T tmp_0[28];
  static int_T tmp_1[8];
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_2;
  char *msg;
  B_Subsystem1_T *_rtB;
  _rtB = ((B_Subsystem1_T *) ssGetLocalBlockIO(S));
  if (1) {
    /* Update for SimscapeExecutionBlock: '<S21>/STATE_1' */
    simulationData = (NeslSimulationData *)((pointer_T *)ssGetDWork(S, 13))[0];
    time = ssGetT(S);
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = NULL;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = NULL;
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mIsMajorTimeStep = ssIsMajorTimeStep(S);
    tmp = (ssGetMdlInfoPtr(S)->mdlFlags.solverAssertCheck == 1U);
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_1[0] = 0;
    tmp_0[0] = _rtB->INPUT_2_1_1[0];
    tmp_0[1] = _rtB->INPUT_2_1_1[1];
    tmp_0[2] = _rtB->INPUT_2_1_1[2];
    tmp_0[3] = _rtB->INPUT_2_1_1[3];
    tmp_1[1] = 4;
    tmp_0[4] = _rtB->INPUT_3_1_1[0];
    tmp_0[5] = _rtB->INPUT_3_1_1[1];
    tmp_0[6] = _rtB->INPUT_3_1_1[2];
    tmp_0[7] = _rtB->INPUT_3_1_1[3];
    tmp_1[2] = 8;
    tmp_0[8] = _rtB->INPUT_4_1_1[0];
    tmp_0[9] = _rtB->INPUT_4_1_1[1];
    tmp_0[10] = _rtB->INPUT_4_1_1[2];
    tmp_0[11] = _rtB->INPUT_4_1_1[3];
    tmp_1[3] = 12;
    tmp_0[12] = _rtB->INPUT_5_1_1[0];
    tmp_0[13] = _rtB->INPUT_5_1_1[1];
    tmp_0[14] = _rtB->INPUT_5_1_1[2];
    tmp_0[15] = _rtB->INPUT_5_1_1[3];
    tmp_1[4] = 16;
    tmp_0[16] = _rtB->INPUT_6_1_1[0];
    tmp_0[17] = _rtB->INPUT_6_1_1[1];
    tmp_0[18] = _rtB->INPUT_6_1_1[2];
    tmp_0[19] = _rtB->INPUT_6_1_1[3];
    tmp_1[5] = 20;
    tmp_0[20] = _rtB->INPUT_1_1_1[0];
    tmp_0[21] = _rtB->INPUT_1_1_1[1];
    tmp_0[22] = _rtB->INPUT_1_1_1[2];
    tmp_0[23] = _rtB->INPUT_1_1_1[3];
    tmp_1[6] = 24;
    tmp_0[24] = _rtB->INPUT_7_1_1[0];
    tmp_0[25] = _rtB->INPUT_7_1_1[1];
    tmp_0[26] = _rtB->INPUT_7_1_1[2];
    tmp_0[27] = _rtB->INPUT_7_1_1[3];
    tmp_1[7] = 28;
    simulationData->mData->mInputValues.mN = 28;
    simulationData->mData->mInputValues.mX = &tmp_0[0];
    simulationData->mData->mInputOffsets.mN = 8;
    simulationData->mData->mInputOffsets.mX = &tmp_1[0];
    diagnosticManager = (NeuDiagnosticManager *)((pointer_T *)ssGetDWork(S, 14))
      [0];
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)((pointer_T *)ssGetDWork(S, 12))
      [0], NESL_SIM_UPDATE, simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(ssGetErrorStatus(S));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        ssSetErrorStatus(S, msg);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S21>/STATE_1' */
  }

  UNUSED_PARAMETER(tid);
}

/* Termination for root system: '<Root>' */
static void mdlTerminate(SimStruct *S)
{
  /* Terminate for SimscapeExecutionBlock: '<S21>/STATE_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)((pointer_T *)
    ssGetDWork(S, 14))[0]);
  nesl_destroy_simulation_data((NeslSimulationData *)((pointer_T *)ssGetDWork(S,
    13))[0]);
  nesl_erase_simulator("Subsystem1/Subsystem1/Simulation/Solver Configuration_1");

#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

  if (ssGetUserData(S) != (NULL) ) {
    rt_FREE(ssGetLocalBlockIO(S));
  }

  rt_FREE(ssGetUserData(S));

#endif

}

#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)
#  include "Subsystem1_mid.h"
#endif

/* Function to initialize sizes. */
static void mdlInitializeSizes(SimStruct *S)
{
  ssSetNumSampleTimes(S, 2);           /* Number of sample times */
  ssSetNumContStates(S, 0);            /* Number of continuous states */
  ssSetNumNonsampledZCs(S, 0);         /* Number of nonsampled ZCs */

  /* Number of output ports */
  if (!ssSetNumOutputPorts(S, 0))
    return;

  /* Number of input ports */
  if (!ssSetNumInputPorts(S, 1))
    return;

  /* inport number: 0 */
  {
    if (!ssSetInputPortVectorDimension(S, 0, 6))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 0, SS_DOUBLE);
    }

    ssSetInputPortDirectFeedThrough(S, 0, 1);
    ssSetInputPortSampleTime(S, 0, 0.3);
    ssSetInputPortOffsetTime(S, 0, 0.0);
    ssSetInputPortOverWritable(S, 0, 0);
    ssSetInputPortOptimOpts(S, 0, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  ssSetRTWGeneratedSFcn(S, 1);         /* Generated S-function */

  /* DWork */
  if (!ssSetNumDWork(S, 19)) {
    return;
  }

  /* '<S21>/INPUT_2_1_1': discrete */
  ssSetDWorkName(S, 0, "DWORK0");
  ssSetDWorkWidth(S, 0, 2);
  ssSetDWorkUsedAsDState(S, 0, 1);

  /* '<S21>/INPUT_3_1_1': discrete */
  ssSetDWorkName(S, 1, "DWORK1");
  ssSetDWorkWidth(S, 1, 2);
  ssSetDWorkUsedAsDState(S, 1, 1);

  /* '<S21>/INPUT_4_1_1': discrete */
  ssSetDWorkName(S, 2, "DWORK2");
  ssSetDWorkWidth(S, 2, 2);
  ssSetDWorkUsedAsDState(S, 2, 1);

  /* '<S21>/INPUT_5_1_1': discrete */
  ssSetDWorkName(S, 3, "DWORK3");
  ssSetDWorkWidth(S, 3, 2);
  ssSetDWorkUsedAsDState(S, 3, 1);

  /* '<S21>/INPUT_6_1_1': discrete */
  ssSetDWorkName(S, 4, "DWORK4");
  ssSetDWorkWidth(S, 4, 2);
  ssSetDWorkUsedAsDState(S, 4, 1);

  /* '<S21>/INPUT_1_1_1': discrete */
  ssSetDWorkName(S, 5, "DWORK5");
  ssSetDWorkWidth(S, 5, 2);
  ssSetDWorkUsedAsDState(S, 5, 1);

  /* '<S21>/INPUT_7_1_1': discrete */
  ssSetDWorkName(S, 6, "DWORK6");
  ssSetDWorkWidth(S, 6, 2);
  ssSetDWorkUsedAsDState(S, 6, 1);

  /* '<S21>/SINK_1': Simulator */
  ssSetDWorkName(S, 7, "DWORK7");
  ssSetDWorkWidth(S, 7, 1);
  ssSetDWorkDataType(S, 7, SS_POINTER);

  /* '<S21>/SINK_1': SimulationData */
  ssSetDWorkName(S, 8, "DWORK8");
  ssSetDWorkWidth(S, 8, 1);
  ssSetDWorkDataType(S, 8, SS_POINTER);

  /* '<S21>/SINK_1': DiagnosticManager */
  ssSetDWorkName(S, 9, "DWORK9");
  ssSetDWorkWidth(S, 9, 1);
  ssSetDWorkDataType(S, 9, SS_POINTER);

  /* '<S21>/SINK_1': Logger */
  ssSetDWorkName(S, 10, "DWORK10");
  ssSetDWorkWidth(S, 10, 1);
  ssSetDWorkDataType(S, 10, SS_POINTER);

  /* '<S21>/SINK_1': SampleTimeIdx */
  ssSetDWorkName(S, 11, "DWORK11");
  ssSetDWorkWidth(S, 11, 1);
  ssSetDWorkDataType(S, 11, SS_POINTER);

  /* '<S21>/STATE_1': Simulator */
  ssSetDWorkName(S, 12, "DWORK12");
  ssSetDWorkWidth(S, 12, 1);
  ssSetDWorkDataType(S, 12, SS_POINTER);

  /* '<S21>/STATE_1': SimulationData */
  ssSetDWorkName(S, 13, "DWORK13");
  ssSetDWorkWidth(S, 13, 1);
  ssSetDWorkDataType(S, 13, SS_POINTER);

  /* '<S21>/STATE_1': DiagnosticManager */
  ssSetDWorkName(S, 14, "DWORK14");
  ssSetDWorkWidth(S, 14, 1);
  ssSetDWorkDataType(S, 14, SS_POINTER);

  /* '<S21>/STATE_1': Logger */
  ssSetDWorkName(S, 15, "DWORK15");
  ssSetDWorkWidth(S, 15, 1);
  ssSetDWorkDataType(S, 15, SS_POINTER);

  /* '<S21>/STATE_1': SampleTimeIdx */
  ssSetDWorkName(S, 16, "DWORK16");
  ssSetDWorkWidth(S, 16, 1);
  ssSetDWorkDataType(S, 16, SS_POINTER);

  /* '<S21>/SINK_1': CallSimulatorOutput */
  ssSetDWorkName(S, 17, "DWORK17");
  ssSetDWorkWidth(S, 17, 1);
  ssSetDWorkDataType(S, 17, SS_BOOLEAN);

  /* '<S21>/STATE_1': CallSimulatorOutput */
  ssSetDWorkName(S, 18, "DWORK18");
  ssSetDWorkWidth(S, 18, 1);
  ssSetDWorkDataType(S, 18, SS_BOOLEAN);

  /* Tunable Parameters */
  ssSetNumSFcnParams(S, 0);

  /* Number of expected parameters */
#if defined(MATLAB_MEX_FILE)

  if (ssGetNumSFcnParams(S) == ssGetSFcnParamsCount(S)) {

#if defined(MDL_CHECK_PARAMETERS)

    mdlCheckParameters(S);

#endif                                 /* MDL_CHECK_PARAMETERS */

    if (ssGetErrorStatus(S) != (NULL) ) {
      return;
    }
  } else {
    return;                            /* Parameter mismatch will be reported by Simulink */
  }

#endif                                 /* MATLAB_MEX_FILE */

  /* Options */
  ssSetOptions(S, (SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE |
                   SS_OPTION_PORT_SAMPLE_TIMES_ASSIGNED ));

#if SS_SFCN_FOR_SIM

  {
    ssSupportsMultipleExecInstances(S, true);
    ssHasStateInsideForEachSS(S, false);
  }

#endif

}

/* Function to initialize sample times. */
static void mdlInitializeSampleTimes(SimStruct *S)
{
  /* task periods */
  ssSetSampleTime(S, 0, 0.0);
  ssSetSampleTime(S, 1, 0.3);

  /* task offsets */
  ssSetOffsetTime(S, 0, 0.0);
  ssSetOffsetTime(S, 1, 0.0);
}

#if defined(MATLAB_MEX_FILE)
# include "fixedpoint.c"
# include "simulink.c"
#else
# undef S_FUNCTION_NAME
# define S_FUNCTION_NAME               Subsystem1_sf
# include "cg_sfun.h"
#endif                                 /* defined(MATLAB_MEX_FILE) */
