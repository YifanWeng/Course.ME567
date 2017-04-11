/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Simulation.c
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

#include "Simulation.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

/* Block signals and states (auto storage) */
DW rtDW;

/* External inputs (root inport signals with auto storage) */
ExtU rtU;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void Simulation_step(void)
{
  {
    NeslSimulationData *simulationData;
    real_T time;
    boolean_T tmp;
    int_T tmp_0[8];
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_1;
    char *msg;

    /* Gain: '<S9>/Gain' incorporates:
     *  Inport: '<Root>/In6'
     */
    rtDW.Gain = -0.5 * rtU.In6;

    /* SimscapeInputBlock: '<S20>/INPUT_2_1_1' incorporates:
     *  Inport: '<Root>/In1'
     */
    rtDW.INPUT_2_1_1[0] = rtU.In1;
    rtDW.INPUT_2_1_1[1] = 0.0;
    rtDW.INPUT_2_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.INPUT_2_1_1_discrete[0] = !(rtDW.INPUT_2_1_1[0] ==
        rtDW.INPUT_2_1_1_discrete[1]);
      rtDW.INPUT_2_1_1_discrete[1] = rtDW.INPUT_2_1_1[0];
    }

    rtDW.INPUT_2_1_1[3] = rtDW.INPUT_2_1_1_discrete[0];

    /* End of SimscapeInputBlock: '<S20>/INPUT_2_1_1' */

    /* SimscapeInputBlock: '<S20>/INPUT_3_1_1' incorporates:
     *  Inport: '<Root>/In2'
     */
    rtDW.INPUT_3_1_1[0] = rtU.In2;
    rtDW.INPUT_3_1_1[1] = 0.0;
    rtDW.INPUT_3_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.INPUT_3_1_1_discrete[0] = !(rtDW.INPUT_3_1_1[0] ==
        rtDW.INPUT_3_1_1_discrete[1]);
      rtDW.INPUT_3_1_1_discrete[1] = rtDW.INPUT_3_1_1[0];
    }

    rtDW.INPUT_3_1_1[3] = rtDW.INPUT_3_1_1_discrete[0];

    /* End of SimscapeInputBlock: '<S20>/INPUT_3_1_1' */

    /* SimscapeInputBlock: '<S20>/INPUT_4_1_1' incorporates:
     *  Inport: '<Root>/In3'
     */
    rtDW.INPUT_4_1_1[0] = rtU.In3;
    rtDW.INPUT_4_1_1[1] = 0.0;
    rtDW.INPUT_4_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.INPUT_4_1_1_discrete[0] = !(rtDW.INPUT_4_1_1[0] ==
        rtDW.INPUT_4_1_1_discrete[1]);
      rtDW.INPUT_4_1_1_discrete[1] = rtDW.INPUT_4_1_1[0];
    }

    rtDW.INPUT_4_1_1[3] = rtDW.INPUT_4_1_1_discrete[0];

    /* End of SimscapeInputBlock: '<S20>/INPUT_4_1_1' */

    /* SimscapeInputBlock: '<S20>/INPUT_5_1_1' incorporates:
     *  Inport: '<Root>/In4'
     */
    rtDW.INPUT_5_1_1[0] = rtU.In4;
    rtDW.INPUT_5_1_1[1] = 0.0;
    rtDW.INPUT_5_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.INPUT_5_1_1_discrete[0] = !(rtDW.INPUT_5_1_1[0] ==
        rtDW.INPUT_5_1_1_discrete[1]);
      rtDW.INPUT_5_1_1_discrete[1] = rtDW.INPUT_5_1_1[0];
    }

    rtDW.INPUT_5_1_1[3] = rtDW.INPUT_5_1_1_discrete[0];

    /* End of SimscapeInputBlock: '<S20>/INPUT_5_1_1' */

    /* SimscapeInputBlock: '<S20>/INPUT_6_1_1' incorporates:
     *  Inport: '<Root>/In5'
     */
    rtDW.INPUT_6_1_1[0] = rtU.In5;
    rtDW.INPUT_6_1_1[1] = 0.0;
    rtDW.INPUT_6_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.INPUT_6_1_1_discrete[0] = !(rtDW.INPUT_6_1_1[0] ==
        rtDW.INPUT_6_1_1_discrete[1]);
      rtDW.INPUT_6_1_1_discrete[1] = rtDW.INPUT_6_1_1[0];
    }

    rtDW.INPUT_6_1_1[3] = rtDW.INPUT_6_1_1_discrete[0];

    /* End of SimscapeInputBlock: '<S20>/INPUT_6_1_1' */

    /* SimscapeInputBlock: '<S20>/INPUT_1_1_1' */
    rtDW.INPUT_1_1_1[0] = rtDW.Gain;
    rtDW.INPUT_1_1_1[1] = 0.0;
    rtDW.INPUT_1_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.INPUT_1_1_1_discrete[0] = !(rtDW.INPUT_1_1_1[0] ==
        rtDW.INPUT_1_1_1_discrete[1]);
      rtDW.INPUT_1_1_1_discrete[1] = rtDW.INPUT_1_1_1[0];
    }

    rtDW.INPUT_1_1_1[3] = rtDW.INPUT_1_1_1_discrete[0];

    /* End of SimscapeInputBlock: '<S20>/INPUT_1_1_1' */

    /* SimscapeInputBlock: '<S20>/INPUT_7_1_1' incorporates:
     *  Inport: '<Root>/In6'
     */
    rtDW.INPUT_7_1_1[0] = rtU.In6;
    rtDW.INPUT_7_1_1[1] = 0.0;
    rtDW.INPUT_7_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.INPUT_7_1_1_discrete[0] = !(rtDW.INPUT_7_1_1[0] ==
        rtDW.INPUT_7_1_1_discrete[1]);
      rtDW.INPUT_7_1_1_discrete[1] = rtDW.INPUT_7_1_1[0];
    }

    rtDW.INPUT_7_1_1[3] = rtDW.INPUT_7_1_1_discrete[0];

    /* End of SimscapeInputBlock: '<S20>/INPUT_7_1_1' */

    /* SimscapeExecutionBlock: '<S20>/STATE_1' */
    simulationData = (NeslSimulationData *)rtDW.STATE_1_SimulationData;
    time = rtM->Timing.t[0];
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
    simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(rtM);
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_0[0] = 0;
    rtDW.dv1[0] = rtDW.INPUT_2_1_1[0];
    rtDW.dv1[1] = rtDW.INPUT_2_1_1[1];
    rtDW.dv1[2] = rtDW.INPUT_2_1_1[2];
    rtDW.dv1[3] = rtDW.INPUT_2_1_1[3];
    tmp_0[1] = 4;
    rtDW.dv1[4] = rtDW.INPUT_3_1_1[0];
    rtDW.dv1[5] = rtDW.INPUT_3_1_1[1];
    rtDW.dv1[6] = rtDW.INPUT_3_1_1[2];
    rtDW.dv1[7] = rtDW.INPUT_3_1_1[3];
    tmp_0[2] = 8;
    rtDW.dv1[8] = rtDW.INPUT_4_1_1[0];
    rtDW.dv1[9] = rtDW.INPUT_4_1_1[1];
    rtDW.dv1[10] = rtDW.INPUT_4_1_1[2];
    rtDW.dv1[11] = rtDW.INPUT_4_1_1[3];
    tmp_0[3] = 12;
    rtDW.dv1[12] = rtDW.INPUT_5_1_1[0];
    rtDW.dv1[13] = rtDW.INPUT_5_1_1[1];
    rtDW.dv1[14] = rtDW.INPUT_5_1_1[2];
    rtDW.dv1[15] = rtDW.INPUT_5_1_1[3];
    tmp_0[4] = 16;
    rtDW.dv1[16] = rtDW.INPUT_6_1_1[0];
    rtDW.dv1[17] = rtDW.INPUT_6_1_1[1];
    rtDW.dv1[18] = rtDW.INPUT_6_1_1[2];
    rtDW.dv1[19] = rtDW.INPUT_6_1_1[3];
    tmp_0[5] = 20;
    rtDW.dv1[20] = rtDW.INPUT_1_1_1[0];
    rtDW.dv1[21] = rtDW.INPUT_1_1_1[1];
    rtDW.dv1[22] = rtDW.INPUT_1_1_1[2];
    rtDW.dv1[23] = rtDW.INPUT_1_1_1[3];
    tmp_0[6] = 24;
    rtDW.dv1[24] = rtDW.INPUT_7_1_1[0];
    rtDW.dv1[25] = rtDW.INPUT_7_1_1[1];
    rtDW.dv1[26] = rtDW.INPUT_7_1_1[2];
    rtDW.dv1[27] = rtDW.INPUT_7_1_1[3];
    tmp_0[7] = 28;
    simulationData->mData->mInputValues.mN = 28;
    simulationData->mData->mInputValues.mX = &rtDW.dv1[0];
    simulationData->mData->mInputOffsets.mN = 8;
    simulationData->mData->mInputOffsets.mX = (int32_T *)&tmp_0[0];
    simulationData->mData->mOutputs.mN = 0;
    simulationData->mData->mOutputs.mX = NULL;
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (tmp_1 != 0L) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    /* End of SimscapeExecutionBlock: '<S20>/STATE_1' */
  }

  {
    NeslSimulationData *simulationData;
    real_T time;
    boolean_T tmp;
    int_T tmp_0[8];
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_1;
    char *msg;

    /* Update for SimscapeExecutionBlock: '<S20>/STATE_1' */
    simulationData = (NeslSimulationData *)rtDW.STATE_1_SimulationData;
    time = rtM->Timing.t[0];
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
    simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(rtM);
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_0[0] = 0;
    rtDW.dv0[0] = rtDW.INPUT_2_1_1[0];
    rtDW.dv0[1] = rtDW.INPUT_2_1_1[1];
    rtDW.dv0[2] = rtDW.INPUT_2_1_1[2];
    rtDW.dv0[3] = rtDW.INPUT_2_1_1[3];
    tmp_0[1] = 4;
    rtDW.dv0[4] = rtDW.INPUT_3_1_1[0];
    rtDW.dv0[5] = rtDW.INPUT_3_1_1[1];
    rtDW.dv0[6] = rtDW.INPUT_3_1_1[2];
    rtDW.dv0[7] = rtDW.INPUT_3_1_1[3];
    tmp_0[2] = 8;
    rtDW.dv0[8] = rtDW.INPUT_4_1_1[0];
    rtDW.dv0[9] = rtDW.INPUT_4_1_1[1];
    rtDW.dv0[10] = rtDW.INPUT_4_1_1[2];
    rtDW.dv0[11] = rtDW.INPUT_4_1_1[3];
    tmp_0[3] = 12;
    rtDW.dv0[12] = rtDW.INPUT_5_1_1[0];
    rtDW.dv0[13] = rtDW.INPUT_5_1_1[1];
    rtDW.dv0[14] = rtDW.INPUT_5_1_1[2];
    rtDW.dv0[15] = rtDW.INPUT_5_1_1[3];
    tmp_0[4] = 16;
    rtDW.dv0[16] = rtDW.INPUT_6_1_1[0];
    rtDW.dv0[17] = rtDW.INPUT_6_1_1[1];
    rtDW.dv0[18] = rtDW.INPUT_6_1_1[2];
    rtDW.dv0[19] = rtDW.INPUT_6_1_1[3];
    tmp_0[5] = 20;
    rtDW.dv0[20] = rtDW.INPUT_1_1_1[0];
    rtDW.dv0[21] = rtDW.INPUT_1_1_1[1];
    rtDW.dv0[22] = rtDW.INPUT_1_1_1[2];
    rtDW.dv0[23] = rtDW.INPUT_1_1_1[3];
    tmp_0[6] = 24;
    rtDW.dv0[24] = rtDW.INPUT_7_1_1[0];
    rtDW.dv0[25] = rtDW.INPUT_7_1_1[1];
    rtDW.dv0[26] = rtDW.INPUT_7_1_1[2];
    rtDW.dv0[27] = rtDW.INPUT_7_1_1[3];
    tmp_0[7] = 28;
    simulationData->mData->mInputValues.mN = 28;
    simulationData->mData->mInputValues.mX = &rtDW.dv0[0];
    simulationData->mData->mInputOffsets.mN = 8;
    simulationData->mData->mInputOffsets.mX = (int32_T *)&tmp_0[0];
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
      NESL_SIM_UPDATE, simulationData, diagnosticManager);
    if (tmp_1 != 0L) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S20>/STATE_1' */
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
     * been executed. The resolution of this integer timer is 0.3, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    rtM->Timing.clockTick1++;
  }
}

/* Model initialize function */
void Simulation_initialize(void)
{
  /* Registration code */
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
  rtmSetTPtr(rtM, &rtM->Timing.tArray[0]);
  rtM->Timing.stepSize0 = 0.3;

  {
    NeslSimulator *tmp;
    NeuDiagnosticManager *diagnosticManager;
    real_T modelParameters_mFixedStepSize;
    boolean_T modelParameters_mVariableStepSo;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_0;
    char *msg;
    NeslSimulationData *simulationData;
    real_T time;

    /* Start for SimscapeExecutionBlock: '<S20>/STATE_1' */
    tmp = nesl_lease_simulator("Simulation/Simulation/Solver Configuration_1",
      0L, 0L);
    rtDW.STATE_1_Simulator = (void *)tmp;
    modelParameters_mVariableStepSo = pointer_is_null(rtDW.STATE_1_Simulator);
    if (modelParameters_mVariableStepSo) {
      Simulation_f1e64dd8_1_gateway();
      tmp = nesl_lease_simulator("Simulation/Simulation/Solver Configuration_1",
        0L, 0L);
      rtDW.STATE_1_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    rtDW.STATE_1_SimulationData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.STATE_1_DiagnosticManager = (void *)diagnosticManager;
    rtDW.modelParameters_mSolverToleranc = 0.001;
    modelParameters_mFixedStepSize = 0.3;
    modelParameters_mVariableStepSo = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    rtDW.expl_temp.mVariableStepSolver = modelParameters_mVariableStepSo;
    rtDW.expl_temp.mUseSimState = false;
    rtDW.expl_temp.mStartTime = 0.0;
    rtDW.expl_temp.mSolverType = NE_SOLVER_TYPE_DAE;
    rtDW.expl_temp.mSolverTolerance = rtDW.modelParameters_mSolverToleranc;
    rtDW.expl_temp.mLoggingMode = SSC_LOGGING_NONE;
    rtDW.expl_temp.mLoadInitialState = false;
    rtDW.expl_temp.mLinTrimCompile = false;
    rtDW.expl_temp.mFixedStepSize = modelParameters_mFixedStepSize;
    tmp_0 = nesl_initialize_simulator((NeslSimulator *)rtDW.STATE_1_Simulator,
      rtDW.expl_temp, diagnosticManager);
    if (tmp_0 != 0L) {
      modelParameters_mVariableStepSo = error_buffer_is_empty(rtmGetErrorStatus
        (rtM));
      if (modelParameters_mVariableStepSo) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    rtDW.expl_temp_m.mRealParameters.mN = 0;
    rtDW.expl_temp_m.mRealParameters.mX = NULL;
    rtDW.expl_temp_m.mLogicalParameters.mN = 0;
    rtDW.expl_temp_m.mLogicalParameters.mX = NULL;
    rtDW.expl_temp_m.mIntegerParameters.mN = 0;
    rtDW.expl_temp_m.mIntegerParameters.mX = NULL;
    rtDW.expl_temp_m.mIndexParameters.mN = 0;
    rtDW.expl_temp_m.mIndexParameters.mX = NULL;
    nesl_simulator_set_rtps((NeslSimulator *)rtDW.STATE_1_Simulator,
      rtDW.expl_temp_m);
    simulationData = (NeslSimulationData *)rtDW.STATE_1_SimulationData;
    time = rtM->Timing.t[0];
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
    simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(rtM);
    modelParameters_mVariableStepSo = false;
    simulationData->mData->mIsSolverAssertCheck =
      modelParameters_mVariableStepSo;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_0 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
      NESL_SIM_INITIALIZEONCE, simulationData, diagnosticManager);
    if (tmp_0 != 0L) {
      modelParameters_mVariableStepSo = error_buffer_is_empty(rtmGetErrorStatus
        (rtM));
      if (modelParameters_mVariableStepSo) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S20>/STATE_1' */
  }
}

/* Model terminate function */
void Simulation_terminate(void)
{
  /* Terminate for SimscapeExecutionBlock: '<S20>/STATE_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    rtDW.STATE_1_DiagnosticManager);
  nesl_destroy_simulation_data((NeslSimulationData *)rtDW.STATE_1_SimulationData);
  nesl_erase_simulator("Simulation/Simulation/Solver Configuration_1");
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
