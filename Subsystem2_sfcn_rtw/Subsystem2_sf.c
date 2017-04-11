/*
 * Subsystem2_sf.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Subsystem2_sf".
 *
 * Model version              : 1.45
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Mon Apr 10 23:32:39 2017
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
#include "Subsystem2_sf.h"
#include "Subsystem2_sf_private.h"
#include "simstruc.h"
#include "fixedpoint.h"

/* Named constants for Chart: '<S2>/Chart' */
#define Subsystem2_IN_End              ((uint8_T)1U)
#define Subsystem2_IN_Iniital          ((uint8_T)2U)
#define Subsystem2_IN_NO_ACTIVE_CHILD  ((uint8_T)0U)
#define Subsystem2_IN_Reach            ((uint8_T)3U)
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

extern void *Subsystem2_malloc(SimStruct *S);

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

/* System initialize for root system: '<Root>' */
#define MDL_INITIALIZE_CONDITIONS

static void mdlInitializeConditions(SimStruct *S)
{
  if (ssIsFirstInitCond(S)) {
    /* SystemInitialize for Chart: '<S2>/Chart' */
    ((uint8_T *)ssGetDWork(S, 20))[0] = 0U;
    ((uint8_T *)ssGetDWork(S, 21))[0] = Subsystem2_IN_NO_ACTIVE_CHILD;
  } else {                             /* SystemReset for Chart: '<S2>/Chart' */
    ((uint8_T *)ssGetDWork(S, 20))[0] = 0U;
    ((uint8_T *)ssGetDWork(S, 21))[0] = Subsystem2_IN_NO_ACTIVE_CHILD;
  }
}

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

  Subsystem2_malloc(S);
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

    /* Start for SimscapeExecutionBlock: '<S32>/STATE_1' */
    tmp = nesl_lease_simulator(
      "Subsystem2/Subsystem2/Subsystem1/Simulation/Solver Configuration_1", 0, 0);
    ((pointer_T *)ssGetDWork(S, 15))[0] = (void *)tmp;
    modelParameters_mVariableStepSo = pointer_is_null(((pointer_T *)ssGetDWork(S,
      15))[0]);
    if (modelParameters_mVariableStepSo) {
      Subsystem2_266638e5_1_gateway();
      tmp = nesl_lease_simulator(
        "Subsystem2/Subsystem2/Subsystem1/Simulation/Solver Configuration_1", 0,
        0);
      ((pointer_T *)ssGetDWork(S, 15))[0] = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    ((pointer_T *)ssGetDWork(S, 16))[0] = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    ((pointer_T *)ssGetDWork(S, 17))[0] = (void *)diagnosticManager;
    modelParameters_mSolverToleranc = 0.001;
    modelParameters_mFixedStepSize = 0.3;
    modelParameters_mVariableStepSo = false;
    diagnosticManager = (NeuDiagnosticManager *)((pointer_T *)ssGetDWork(S, 17))
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
      (S, 15))[0], expl_temp, diagnosticManager);
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
    nesl_simulator_set_rtps((NeslSimulator *)((pointer_T *)ssGetDWork(S, 15))[0],
      expl_temp_0);
    simulationData = (NeslSimulationData *)((pointer_T *)ssGetDWork(S, 16))[0];
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
    diagnosticManager = (NeuDiagnosticManager *)((pointer_T *)ssGetDWork(S, 17))
      [0];
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_0 = ne_simulator_method((NeslSimulator *)((pointer_T *)ssGetDWork(S, 15))
      [0], NESL_SIM_INITIALIZEONCE, simulationData, diagnosticManager);
    if (tmp_0 != 0) {
      modelParameters_mVariableStepSo = error_buffer_is_empty(ssGetErrorStatus(S));
      if (modelParameters_mVariableStepSo) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        ssSetErrorStatus(S, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S32>/STATE_1' */

    /* Start for S-Function (arduinoservowrite_sfcn): '<S7>/Servo Write' */
    MW_servoAttach(0U, 3U);

    /* Start for S-Function (arduinoservowrite_sfcn): '<S8>/Servo Write' */
    MW_servoAttach(0U, 5U);

    /* Start for S-Function (arduinoservowrite_sfcn): '<S9>/Servo Write' */
    MW_servoAttach(0U, 6U);

    /* Start for S-Function (arduinoservowrite_sfcn): '<S10>/Servo Write' */
    MW_servoAttach(0U, 9U);

    /* Start for S-Function (arduinoservowrite_sfcn): '<S11>/Servo Write' */
    MW_servoAttach(0U, 10U);

    /* Start for S-Function (arduinoservowrite_sfcn): '<S12>/Servo Write' */
    MW_servoAttach(0U, 11U);
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
  char *msg;
  static real_T yd_simu[6];
  real_T x;
  static const int8_T b[6] = { 90, 90, 90, 90, 90, 108 };

  static const real_T c[6] = { 89.839198456317035, 120.61446583378049,
    120.17240623281748, 129.75101515750868, 89.571432217444425, 45.0 };

  static const real_T d[6] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.31415926535897931 };

  static const real_T e[6] = { -0.0028065163795572214, 0.53432322753878048,
    0.52660783201192374, 0.69378609550869863, -0.0074799188735659048,
    -0.78539816339744828 };

  static real_T rtb_y[6];
  int32_T i;
  B_Subsystem2_T *_rtB;
  _rtB = ((B_Subsystem2_T *) ssGetLocalBlockIO(S));
  if (1) {
    /* Clock: '<S2>/Clock' */
    _rtB->Clock = ssGetT(S);
  }

  if (ssIsSampleHit(S, 1, 0)) {
    /* Chart: '<S2>/Chart' */
    /* Gateway: Subsystem2/Subsystem/Chart */
    /* During: Subsystem2/Subsystem/Chart */
    if (((uint8_T *)ssGetDWork(S, 20))[0] == 0U) {
      /* Entry: Subsystem2/Subsystem/Chart */
      ((uint8_T *)ssGetDWork(S, 20))[0] = 1U;

      /* Entry Internal: Subsystem2/Subsystem/Chart */
      /* Transition: '<S4>:2' */
      ((uint8_T *)ssGetDWork(S, 21))[0] = Subsystem2_IN_Iniital;

      /* Entry 'Iniital': '<S4>:1' */
      /* '<S4>:1:1' s = 0; */
      _rtB->s = 0.0;

      /* '<S4>:1:1' t1=t; */
      ((real_T *)ssGetDWork(S, 8))[0] = _rtB->Clock;

      /* '<S4>:1:1' dt=0; */
      _rtB->dt = 0.0;
    } else {
      switch (((uint8_T *)ssGetDWork(S, 21))[0]) {
       case Subsystem2_IN_End:
        /* During 'End': '<S4>:6' */
        /* '<S4>:6:2' dt = t-t3; */
        _rtB->dt = _rtB->Clock - ((real_T *)ssGetDWork(S, 9))[0];
        break;

       case Subsystem2_IN_Iniital:
        /* During 'Iniital': '<S4>:1' */
        /* '<S4>:4:1' sf_internal_predicateOutput = ... */
        /* '<S4>:4:1' dt>=2; */
        if (_rtB->dt >= 2.0) {
          /* Transition: '<S4>:4' */
          ((uint8_T *)ssGetDWork(S, 21))[0] = Subsystem2_IN_Reach;

          /* Entry 'Reach': '<S4>:3' */
          /* '<S4>:3:1' s=1; */
          _rtB->s = 1.0;

          /* '<S4>:3:1' s_old = 0; */
          _rtB->s_old = 0.0;

          /* '<S4>:3:1' t2=t; */
          ((real_T *)ssGetDWork(S, 7))[0] = _rtB->Clock;

          /* '<S4>:3:1' dt = 0; */
          _rtB->dt = 0.0;
        } else {
          /* '<S4>:1:1' dt = t-t1; */
          _rtB->dt = _rtB->Clock - ((real_T *)ssGetDWork(S, 8))[0];
        }
        break;

       default:
        /* During 'Reach': '<S4>:3' */
        /* '<S4>:7:1' sf_internal_predicateOutput = ... */
        /* '<S4>:7:1' dt>=5; */
        if (_rtB->dt >= 5.0) {
          /* Transition: '<S4>:7' */
          ((uint8_T *)ssGetDWork(S, 21))[0] = Subsystem2_IN_End;

          /* Entry 'End': '<S4>:6' */
          /* '<S4>:6:1' s=2; */
          _rtB->s = 2.0;

          /* '<S4>:6:1' s_old = 1; */
          _rtB->s_old = 1.0;

          /* '<S4>:6:1' t3=t; */
          ((real_T *)ssGetDWork(S, 9))[0] = _rtB->Clock;

          /* '<S4>:6:1' dt = 0; */
          _rtB->dt = 0.0;
        } else {
          /* '<S4>:3:2' dt = t-t2; */
          _rtB->dt = _rtB->Clock - ((real_T *)ssGetDWork(S, 7))[0];
        }
        break;
      }
    }

    /* End of Chart: '<S2>/Chart' */

    /* MATLAB Function: '<S2>/Inverse Kinematics1' */
    /* MATLAB Function 'Subsystem2/Subsystem/Inverse Kinematics1': '<S5>:1' */
    /* '<S5>:1:3' alpha = -2; */
    /* '<S5>:1:4' S=coder.load('simu_xd'); */
    /* '<S5>:1:5' if(state == 0) */
    if (_rtB->s == 0.0) {
      /* '<S5>:1:6' [y,y_simu] = y_target(state); */
      /* '<S5>:1:16' yd = zeros(6,1); */
      /* '<S5>:1:17' yd_simu = zeros(6,1); */
      for (i = 0; i < 6; i++) {
        rtb_y[i] = 0.0;
        _rtB->y_simu[i] = 0.0;
      }

      /* '<S5>:1:18' S=coder.load('simu_xd'); */
      /* '<S5>:1:19' switch state */
      switch ((int16_T)_rtB->s) {
       case 0:
        /* '<S5>:1:20' case 0 */
        /* '<S5>:1:21' yd = S.q0; */
        /* '<S5>:1:22' yd_simu = (yd-90)/180*pi; */
        for (i = 0; i < 6; i++) {
          rtb_y[i] = b[i];
          _rtB->y_simu[i] = d[i];
        }

        /* '<S5>:1:23' if(yd_simu(6)> 0 ) */
        /* '<S5>:1:24' yd_simu(6) = 0; */
        _rtB->y_simu[5] = 0.0;
        break;

       case 1:
        /* '<S5>:1:26' case 1 */
        /* '<S5>:1:27' yd=S.qd; */
        /* '<S5>:1:28' yd_simu = (yd-90)/180*pi; */
        for (i = 0; i < 6; i++) {
          rtb_y[i] = c[i];
          _rtB->y_simu[i] = e[i];
        }

        /* '<S5>:1:29' if(yd_simu(6)> 0 ) */
        break;

       case 2:
        /* '<S5>:1:32' case 2 */
        /* '<S5>:1:33' yd = S.q0; */
        /* '<S5>:1:34' yd_simu = (yd-90)/180*pi; */
        for (i = 0; i < 6; i++) {
          rtb_y[i] = b[i];
          _rtB->y_simu[i] = d[i];
        }

        /* '<S5>:1:35' if(yd_simu(6)> 0 ) */
        /* '<S5>:1:36' yd_simu(6) = 0; */
        _rtB->y_simu[5] = 0.0;
        break;
      }

      /* '<S5>:1:39' yd_simu(2) = -yd_simu(2); */
      _rtB->y_simu[1] = -_rtB->y_simu[1];

      /*  the dirction of servo moter is different with the simulation model */
    } else {
      /* '<S5>:1:7' else */
      /* '<S5>:1:8' [yd,yd_simu] = y_target(state); */
      /* '<S5>:1:16' yd = zeros(6,1); */
      /* '<S5>:1:17' yd_simu = zeros(6,1); */
      for (i = 0; i < 6; i++) {
        rtb_y[i] = 0.0;
        yd_simu[i] = 0.0;
      }

      /* '<S5>:1:18' S=coder.load('simu_xd'); */
      /* '<S5>:1:19' switch state */
      switch ((int16_T)_rtB->s) {
       case 0:
        /* '<S5>:1:20' case 0 */
        /* '<S5>:1:21' yd = S.q0; */
        /* '<S5>:1:22' yd_simu = (yd-90)/180*pi; */
        for (i = 0; i < 6; i++) {
          rtb_y[i] = b[i];
          yd_simu[i] = d[i];
        }

        /* '<S5>:1:23' if(yd_simu(6)> 0 ) */
        /* '<S5>:1:24' yd_simu(6) = 0; */
        yd_simu[5] = 0.0;
        break;

       case 1:
        /* '<S5>:1:26' case 1 */
        /* '<S5>:1:27' yd=S.qd; */
        /* '<S5>:1:28' yd_simu = (yd-90)/180*pi; */
        for (i = 0; i < 6; i++) {
          rtb_y[i] = c[i];
          yd_simu[i] = e[i];
        }

        /* '<S5>:1:29' if(yd_simu(6)> 0 ) */
        break;

       case 2:
        /* '<S5>:1:32' case 2 */
        /* '<S5>:1:33' yd = S.q0; */
        /* '<S5>:1:34' yd_simu = (yd-90)/180*pi; */
        for (i = 0; i < 6; i++) {
          rtb_y[i] = b[i];
          yd_simu[i] = d[i];
        }

        /* '<S5>:1:35' if(yd_simu(6)> 0 ) */
        /* '<S5>:1:36' yd_simu(6) = 0; */
        yd_simu[5] = 0.0;
        break;
      }

      /* '<S5>:1:39' yd_simu(2) = -yd_simu(2); */
      yd_simu[1] = -yd_simu[1];

      /*  the dirction of servo moter is different with the simulation model */
      /* '<S5>:1:9' [~,y_old_simu] = y_target(state_old); */
      /* '<S5>:1:16' yd = zeros(6,1); */
      /* '<S5>:1:17' yd_simu = zeros(6,1); */
      for (i = 0; i < 6; i++) {
        _rtB->y_simu[i] = 0.0;
      }

      /* '<S5>:1:18' S=coder.load('simu_xd'); */
      /* '<S5>:1:19' switch state */
      switch ((int16_T)_rtB->s_old) {
       case 0:
        /* '<S5>:1:20' case 0 */
        /* '<S5>:1:21' yd = S.q0; */
        /* '<S5>:1:22' yd_simu = (yd-90)/180*pi; */
        for (i = 0; i < 6; i++) {
          _rtB->y_simu[i] = d[i];
        }

        /* '<S5>:1:23' if(yd_simu(6)> 0 ) */
        /* '<S5>:1:24' yd_simu(6) = 0; */
        _rtB->y_simu[5] = 0.0;
        break;

       case 1:
        /* '<S5>:1:26' case 1 */
        /* '<S5>:1:27' yd=S.qd; */
        /* '<S5>:1:28' yd_simu = (yd-90)/180*pi; */
        for (i = 0; i < 6; i++) {
          _rtB->y_simu[i] = e[i];
        }

        /* '<S5>:1:29' if(yd_simu(6)> 0 ) */
        break;

       case 2:
        /* '<S5>:1:32' case 2 */
        /* '<S5>:1:33' yd = S.q0; */
        /* '<S5>:1:34' yd_simu = (yd-90)/180*pi; */
        for (i = 0; i < 6; i++) {
          _rtB->y_simu[i] = d[i];
        }

        /* '<S5>:1:35' if(yd_simu(6)> 0 ) */
        /* '<S5>:1:36' yd_simu(6) = 0; */
        _rtB->y_simu[5] = 0.0;
        break;
      }

      /* '<S5>:1:39' yd_simu(2) = -yd_simu(2); */
      _rtB->y_simu[1] = -_rtB->y_simu[1];

      /*  the dirction of servo moter is different with the simulation model */
      /* '<S5>:1:9' ~ */
      /* '<S5>:1:10' y = yd; */
      /* '<S5>:1:11' y_simu = exp(alpha*dt)*(y_old_simu-yd_simu)+yd_simu; */
      x = exp(-2.0 * _rtB->dt);
      for (i = 0; i < 6; i++) {
        _rtB->y_simu[i] = (_rtB->y_simu[i] - yd_simu[i]) * x + yd_simu[i];
      }
    }

    /* End of MATLAB Function: '<S2>/Inverse Kinematics1' */

    /* Gain: '<S21>/Gain' */
    _rtB->Gain = -0.5 * _rtB->y_simu[5];
  }

  /* SimscapeInputBlock: '<S32>/INPUT_2_1_1' */
  _rtB->INPUT_2_1_1[0] = _rtB->y_simu[0];
  _rtB->INPUT_2_1_1[1] = 0.0;
  _rtB->INPUT_2_1_1[2] = 0.0;
  if (ssIsMajorTimeStep(S)) {
    ((real_T *)ssGetDWork(S, 0))[0] = (real_T)!(_rtB->INPUT_2_1_1[0] == ((real_T
      *)ssGetDWork(S, 0))[1]);
    ((real_T *)ssGetDWork(S, 0))[1] = _rtB->INPUT_2_1_1[0];
  }

  _rtB->INPUT_2_1_1[3] = ((real_T *)ssGetDWork(S, 0))[0];

  /* End of SimscapeInputBlock: '<S32>/INPUT_2_1_1' */

  /* SimscapeInputBlock: '<S32>/INPUT_3_1_1' */
  _rtB->INPUT_3_1_1[0] = _rtB->y_simu[1];
  _rtB->INPUT_3_1_1[1] = 0.0;
  _rtB->INPUT_3_1_1[2] = 0.0;
  if (ssIsMajorTimeStep(S)) {
    ((real_T *)ssGetDWork(S, 1))[0] = (real_T)!(_rtB->INPUT_3_1_1[0] == ((real_T
      *)ssGetDWork(S, 1))[1]);
    ((real_T *)ssGetDWork(S, 1))[1] = _rtB->INPUT_3_1_1[0];
  }

  _rtB->INPUT_3_1_1[3] = ((real_T *)ssGetDWork(S, 1))[0];

  /* End of SimscapeInputBlock: '<S32>/INPUT_3_1_1' */

  /* SimscapeInputBlock: '<S32>/INPUT_4_1_1' */
  _rtB->INPUT_4_1_1[0] = _rtB->y_simu[2];
  _rtB->INPUT_4_1_1[1] = 0.0;
  _rtB->INPUT_4_1_1[2] = 0.0;
  if (ssIsMajorTimeStep(S)) {
    ((real_T *)ssGetDWork(S, 2))[0] = (real_T)!(_rtB->INPUT_4_1_1[0] == ((real_T
      *)ssGetDWork(S, 2))[1]);
    ((real_T *)ssGetDWork(S, 2))[1] = _rtB->INPUT_4_1_1[0];
  }

  _rtB->INPUT_4_1_1[3] = ((real_T *)ssGetDWork(S, 2))[0];

  /* End of SimscapeInputBlock: '<S32>/INPUT_4_1_1' */

  /* SimscapeInputBlock: '<S32>/INPUT_5_1_1' */
  _rtB->INPUT_5_1_1[0] = _rtB->y_simu[3];
  _rtB->INPUT_5_1_1[1] = 0.0;
  _rtB->INPUT_5_1_1[2] = 0.0;
  if (ssIsMajorTimeStep(S)) {
    ((real_T *)ssGetDWork(S, 3))[0] = (real_T)!(_rtB->INPUT_5_1_1[0] == ((real_T
      *)ssGetDWork(S, 3))[1]);
    ((real_T *)ssGetDWork(S, 3))[1] = _rtB->INPUT_5_1_1[0];
  }

  _rtB->INPUT_5_1_1[3] = ((real_T *)ssGetDWork(S, 3))[0];

  /* End of SimscapeInputBlock: '<S32>/INPUT_5_1_1' */

  /* SimscapeInputBlock: '<S32>/INPUT_6_1_1' */
  _rtB->INPUT_6_1_1[0] = _rtB->y_simu[4];
  _rtB->INPUT_6_1_1[1] = 0.0;
  _rtB->INPUT_6_1_1[2] = 0.0;
  if (ssIsMajorTimeStep(S)) {
    ((real_T *)ssGetDWork(S, 4))[0] = (real_T)!(_rtB->INPUT_6_1_1[0] == ((real_T
      *)ssGetDWork(S, 4))[1]);
    ((real_T *)ssGetDWork(S, 4))[1] = _rtB->INPUT_6_1_1[0];
  }

  _rtB->INPUT_6_1_1[3] = ((real_T *)ssGetDWork(S, 4))[0];

  /* End of SimscapeInputBlock: '<S32>/INPUT_6_1_1' */

  /* SimscapeInputBlock: '<S32>/INPUT_1_1_1' */
  _rtB->INPUT_1_1_1[0] = _rtB->Gain;
  _rtB->INPUT_1_1_1[1] = 0.0;
  _rtB->INPUT_1_1_1[2] = 0.0;
  if (ssIsMajorTimeStep(S)) {
    ((real_T *)ssGetDWork(S, 5))[0] = (real_T)!(_rtB->INPUT_1_1_1[0] == ((real_T
      *)ssGetDWork(S, 5))[1]);
    ((real_T *)ssGetDWork(S, 5))[1] = _rtB->INPUT_1_1_1[0];
  }

  _rtB->INPUT_1_1_1[3] = ((real_T *)ssGetDWork(S, 5))[0];

  /* End of SimscapeInputBlock: '<S32>/INPUT_1_1_1' */

  /* SimscapeInputBlock: '<S32>/INPUT_7_1_1' */
  _rtB->INPUT_7_1_1[0] = _rtB->y_simu[5];
  _rtB->INPUT_7_1_1[1] = 0.0;
  _rtB->INPUT_7_1_1[2] = 0.0;
  if (ssIsMajorTimeStep(S)) {
    ((real_T *)ssGetDWork(S, 6))[0] = (real_T)!(_rtB->INPUT_7_1_1[0] == ((real_T
      *)ssGetDWork(S, 6))[1]);
    ((real_T *)ssGetDWork(S, 6))[1] = _rtB->INPUT_7_1_1[0];
  }

  _rtB->INPUT_7_1_1[3] = ((real_T *)ssGetDWork(S, 6))[0];

  /* End of SimscapeInputBlock: '<S32>/INPUT_7_1_1' */
  if (1) {
    /* SimscapeExecutionBlock: '<S32>/STATE_1' */
    simulationData = (NeslSimulationData *)((pointer_T *)ssGetDWork(S, 16))[0];
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
    diagnosticManager = (NeuDiagnosticManager *)((pointer_T *)ssGetDWork(S, 17))
      [0];
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)((pointer_T *)ssGetDWork(S, 15))[0],
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (i != 0) {
      tmp = error_buffer_is_empty(ssGetErrorStatus(S));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        ssSetErrorStatus(S, msg);
      }
    }

    if (ssIsMajorTimeStep(S)) {
      ssSetSolverNeedsReset(S);
    }

    /* End of SimscapeExecutionBlock: '<S32>/STATE_1' */
  }

  if (ssIsSampleHit(S, 1, 0)) {
    /* S-Function (arduinoservowrite_sfcn): '<S7>/Servo Write' incorporates:
     *  DataTypeConversion: '<S7>/Data Type Conversion'
     */
    MW_servoWrite(0U, (uint8_T)rtb_y[0]);

    /* S-Function (arduinoservowrite_sfcn): '<S8>/Servo Write' incorporates:
     *  DataTypeConversion: '<S8>/Data Type Conversion'
     */
    MW_servoWrite(0U, (uint8_T)rtb_y[1]);

    /* S-Function (arduinoservowrite_sfcn): '<S9>/Servo Write' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion'
     */
    MW_servoWrite(0U, (uint8_T)rtb_y[2]);

    /* S-Function (arduinoservowrite_sfcn): '<S10>/Servo Write' incorporates:
     *  DataTypeConversion: '<S10>/Data Type Conversion'
     */
    MW_servoWrite(0U, (uint8_T)rtb_y[3]);

    /* S-Function (arduinoservowrite_sfcn): '<S11>/Servo Write' incorporates:
     *  DataTypeConversion: '<S11>/Data Type Conversion'
     */
    MW_servoWrite(0U, (uint8_T)rtb_y[4]);

    /* S-Function (arduinoservowrite_sfcn): '<S12>/Servo Write' incorporates:
     *  DataTypeConversion: '<S12>/Data Type Conversion'
     */
    MW_servoWrite(0U, (uint8_T)rtb_y[5]);
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
  B_Subsystem2_T *_rtB;
  _rtB = ((B_Subsystem2_T *) ssGetLocalBlockIO(S));
  if (1) {
    /* Update for SimscapeExecutionBlock: '<S32>/STATE_1' */
    simulationData = (NeslSimulationData *)((pointer_T *)ssGetDWork(S, 16))[0];
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
    diagnosticManager = (NeuDiagnosticManager *)((pointer_T *)ssGetDWork(S, 17))
      [0];
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)((pointer_T *)ssGetDWork(S, 15))
      [0], NESL_SIM_UPDATE, simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(ssGetErrorStatus(S));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        ssSetErrorStatus(S, msg);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S32>/STATE_1' */
  }

  UNUSED_PARAMETER(tid);
}

/* Termination for root system: '<Root>' */
static void mdlTerminate(SimStruct *S)
{
  /* Terminate for SimscapeExecutionBlock: '<S32>/STATE_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)((pointer_T *)
    ssGetDWork(S, 17))[0]);
  nesl_destroy_simulation_data((NeslSimulationData *)((pointer_T *)ssGetDWork(S,
    16))[0]);
  nesl_erase_simulator("Subsystem2/Subsystem2/Subsystem1/Simulation/Solver Configuration_1");

#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

  if (ssGetUserData(S) != (NULL) ) {
    rt_FREE(ssGetLocalBlockIO(S));
  }

  rt_FREE(ssGetUserData(S));

#endif

}

#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)
#  include "Subsystem2_mid.h"
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
  if (!ssSetNumInputPorts(S, 0))
    return;
  ssSetRTWGeneratedSFcn(S, 1);         /* Generated S-function */

  /* DWork */
  if (!ssSetNumDWork(S, 24)) {
    return;
  }

  /* '<S32>/INPUT_2_1_1': discrete */
  ssSetDWorkName(S, 0, "DWORK0");
  ssSetDWorkWidth(S, 0, 2);
  ssSetDWorkUsedAsDState(S, 0, 1);

  /* '<S32>/INPUT_3_1_1': discrete */
  ssSetDWorkName(S, 1, "DWORK1");
  ssSetDWorkWidth(S, 1, 2);
  ssSetDWorkUsedAsDState(S, 1, 1);

  /* '<S32>/INPUT_4_1_1': discrete */
  ssSetDWorkName(S, 2, "DWORK2");
  ssSetDWorkWidth(S, 2, 2);
  ssSetDWorkUsedAsDState(S, 2, 1);

  /* '<S32>/INPUT_5_1_1': discrete */
  ssSetDWorkName(S, 3, "DWORK3");
  ssSetDWorkWidth(S, 3, 2);
  ssSetDWorkUsedAsDState(S, 3, 1);

  /* '<S32>/INPUT_6_1_1': discrete */
  ssSetDWorkName(S, 4, "DWORK4");
  ssSetDWorkWidth(S, 4, 2);
  ssSetDWorkUsedAsDState(S, 4, 1);

  /* '<S32>/INPUT_1_1_1': discrete */
  ssSetDWorkName(S, 5, "DWORK5");
  ssSetDWorkWidth(S, 5, 2);
  ssSetDWorkUsedAsDState(S, 5, 1);

  /* '<S32>/INPUT_7_1_1': discrete */
  ssSetDWorkName(S, 6, "DWORK6");
  ssSetDWorkWidth(S, 6, 2);
  ssSetDWorkUsedAsDState(S, 6, 1);

  /* '<S2>/Chart': DWORK3 */
  ssSetDWorkName(S, 7, "DWORK7");
  ssSetDWorkWidth(S, 7, 1);

  /* '<S2>/Chart': DWORK4 */
  ssSetDWorkName(S, 8, "DWORK8");
  ssSetDWorkWidth(S, 8, 1);

  /* '<S2>/Chart': DWORK5 */
  ssSetDWorkName(S, 9, "DWORK9");
  ssSetDWorkWidth(S, 9, 1);

  /* '<S32>/SINK_1': Simulator */
  ssSetDWorkName(S, 10, "DWORK10");
  ssSetDWorkWidth(S, 10, 1);
  ssSetDWorkDataType(S, 10, SS_POINTER);

  /* '<S32>/SINK_1': SimulationData */
  ssSetDWorkName(S, 11, "DWORK11");
  ssSetDWorkWidth(S, 11, 1);
  ssSetDWorkDataType(S, 11, SS_POINTER);

  /* '<S32>/SINK_1': DiagnosticManager */
  ssSetDWorkName(S, 12, "DWORK12");
  ssSetDWorkWidth(S, 12, 1);
  ssSetDWorkDataType(S, 12, SS_POINTER);

  /* '<S32>/SINK_1': Logger */
  ssSetDWorkName(S, 13, "DWORK13");
  ssSetDWorkWidth(S, 13, 1);
  ssSetDWorkDataType(S, 13, SS_POINTER);

  /* '<S32>/SINK_1': SampleTimeIdx */
  ssSetDWorkName(S, 14, "DWORK14");
  ssSetDWorkWidth(S, 14, 1);
  ssSetDWorkDataType(S, 14, SS_POINTER);

  /* '<S32>/STATE_1': Simulator */
  ssSetDWorkName(S, 15, "DWORK15");
  ssSetDWorkWidth(S, 15, 1);
  ssSetDWorkDataType(S, 15, SS_POINTER);

  /* '<S32>/STATE_1': SimulationData */
  ssSetDWorkName(S, 16, "DWORK16");
  ssSetDWorkWidth(S, 16, 1);
  ssSetDWorkDataType(S, 16, SS_POINTER);

  /* '<S32>/STATE_1': DiagnosticManager */
  ssSetDWorkName(S, 17, "DWORK17");
  ssSetDWorkWidth(S, 17, 1);
  ssSetDWorkDataType(S, 17, SS_POINTER);

  /* '<S32>/STATE_1': Logger */
  ssSetDWorkName(S, 18, "DWORK18");
  ssSetDWorkWidth(S, 18, 1);
  ssSetDWorkDataType(S, 18, SS_POINTER);

  /* '<S32>/STATE_1': SampleTimeIdx */
  ssSetDWorkName(S, 19, "DWORK19");
  ssSetDWorkWidth(S, 19, 1);
  ssSetDWorkDataType(S, 19, SS_POINTER);

  /* '<S2>/Chart': DWORK1 */
  ssSetDWorkName(S, 20, "DWORK20");
  ssSetDWorkWidth(S, 20, 1);
  ssSetDWorkDataType(S, 20, SS_UINT8);

  /* '<S2>/Chart': DWORK2 */
  ssSetDWorkName(S, 21, "DWORK21");
  ssSetDWorkWidth(S, 21, 1);
  ssSetDWorkDataType(S, 21, SS_UINT8);

  /* '<S32>/SINK_1': CallSimulatorOutput */
  ssSetDWorkName(S, 22, "DWORK22");
  ssSetDWorkWidth(S, 22, 1);
  ssSetDWorkDataType(S, 22, SS_BOOLEAN);

  /* '<S32>/STATE_1': CallSimulatorOutput */
  ssSetDWorkName(S, 23, "DWORK23");
  ssSetDWorkWidth(S, 23, 1);
  ssSetDWorkDataType(S, 23, SS_BOOLEAN);

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
    ssSupportsMultipleExecInstances(S, false);
    ssRegisterMsgForNotSupportingMultiExecInst(S,
      "<diag_root><diag id=\"Simulink:blocks:UserSFcnBlockDoesNotSupportMultiExecInstances\"><arguments><arg type=\"encoded\">UwB1AGIAcwB5AHMAdABlAG0AMgAvAFMAdQBiAHMAeQBzAHQAZQBtADIALwBTAHUAYgBzAHkAcwB0AGUAbQAvAFMAZQByAHYAbwAgAE0AbwB0AG8AcgAvAFMAdABhAG4AZABhAHIAZAAgAFMAZQByAHYAbwAgAFcAcgBpAHQAZQAvAFMAZQByAHYAbwAgAFcAcgBpAHQAZQAAAA==</arg><arg type=\"encoded\">PABfAF8AaQBpAFMAUwBfAF8APgA8AC8AXwBfAGkAaQBTAFMAXwBfAD4AAAA=</arg><arg type=\"encoded\">PABfAF8AaQB0AGUAcgBCAGwAawBfAF8APgA8AC8AXwBfAGkAdABlAHIAQgBsAGsAXwBfAD4AAAA=</arg></arguments></diag>\n</diag_root>");
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
# define S_FUNCTION_NAME               Subsystem2_sf
# include "cg_sfun.h"
#endif                                 /* defined(MATLAB_MEX_FILE) */
