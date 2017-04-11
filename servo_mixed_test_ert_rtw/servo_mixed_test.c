/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: servo_mixed_test.c
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

#include "servo_mixed_test.h"
#include "servo_mixed_test_private.h"
#include "servo_mixed_test_dt.h"

/* Named constants for Chart: '<S1>/Chart' */
#define CALL_EVENT                     (-1L)
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
void servo_mixed_test_step(void)
{
  {
    NeslSimulationData *simulationData;
    real_T time;
    boolean_T tmp;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_0;
    char *msg;
    real_T x;
    static const real_T d[6] = { -1.5707963267948966, -1.2566370614359172,
      -1.5707963267948966, -1.5707963267948966, -1.5707963267948966,
      -1.5707963267948966 };

    static const real_T e[6] = { -1.5711653465572144, -1.8704065444205633,
      -0.80609374053325378, -1.7069710804624512, -1.5752208647607919,
      -2.96705972839036 };

    int16_T i;

    /* Clock: '<S1>/Clock' */
    rtB.Clock = rtM->Timing.t[0];

    /* Chart: '<S1>/Chart' */
    /* Gateway: Subsystem/Chart */
    rtDW.sfEvent = CALL_EVENT;

    /* During: Subsystem/Chart */
    if (rtDW.is_active_c3_servo_mixed_test == 0U) {
      /* Entry: Subsystem/Chart */
      rtDW.is_active_c3_servo_mixed_test = 1U;

      /* Entry Internal: Subsystem/Chart */
      /* Transition: '<S3>:2' */
      rtDW.is_c3_servo_mixed_test = IN_Iniital;

      /* Entry 'Iniital': '<S3>:1' */
      /* '<S3>:1:1' s = 0; */
      rtB.s = 0.0;

      /* '<S3>:1:1' t1=t; */
      rtDW.t1 = rtB.Clock;

      /* '<S3>:1:1' dt=0; */
      rtB.dt = 0.0;
    } else {
      switch (rtDW.is_c3_servo_mixed_test) {
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
          rtDW.is_c3_servo_mixed_test = IN_Reach;

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
          rtDW.is_c3_servo_mixed_test = IN_End;

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
          rtB.y_simu[i] = d[i];
        }

        /* '<S4>:1:23' if(yd_simu(6)> 0 ) */
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
          rtB.yd_simu[i] = d[i];
        }

        /* '<S4>:1:23' if(yd_simu(6)> 0 ) */
        break;

       case 1:
        /* '<S4>:1:26' case 1 */
        /* '<S4>:1:27' yd=S.qd; */
        /* '<S4>:1:28' yd_simu = (yd-90)/180*pi; */
        for (i = 0; i < 6; i++) {
          rtB.yd_simu[i] = e[i];
        }

        /* '<S4>:1:29' if(yd_simu(6)> 0 ) */
        break;

       case 2:
        /* '<S4>:1:32' case 2 */
        /* '<S4>:1:33' yd = S.q0; */
        /* '<S4>:1:34' yd_simu = (yd-90)/180*pi; */
        for (i = 0; i < 6; i++) {
          rtB.yd_simu[i] = d[i];
        }

        /* '<S4>:1:35' if(yd_simu(6)> 0 ) */
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

    /* Gain: '<S13>/Gain' */
    rtB.Gain = -0.5 * rtB.y_simu[5];

    /* SimscapeInputBlock: '<S24>/INPUT_2_1_1' */
    rtB.INPUT_2_1_1[0] = rtB.y_simu[0];
    rtB.INPUT_2_1_1[1] = 0.0;
    rtB.INPUT_2_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.INPUT_2_1_1_discrete[0] = !(rtB.INPUT_2_1_1[0] ==
        rtDW.INPUT_2_1_1_discrete[1]);
      rtDW.INPUT_2_1_1_discrete[1] = rtB.INPUT_2_1_1[0];
    }

    rtB.INPUT_2_1_1[3] = rtDW.INPUT_2_1_1_discrete[0];

    /* End of SimscapeInputBlock: '<S24>/INPUT_2_1_1' */

    /* SimscapeInputBlock: '<S24>/INPUT_3_1_1' */
    rtB.INPUT_3_1_1[0] = rtB.y_simu[1];
    rtB.INPUT_3_1_1[1] = 0.0;
    rtB.INPUT_3_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.INPUT_3_1_1_discrete[0] = !(rtB.INPUT_3_1_1[0] ==
        rtDW.INPUT_3_1_1_discrete[1]);
      rtDW.INPUT_3_1_1_discrete[1] = rtB.INPUT_3_1_1[0];
    }

    rtB.INPUT_3_1_1[3] = rtDW.INPUT_3_1_1_discrete[0];

    /* End of SimscapeInputBlock: '<S24>/INPUT_3_1_1' */

    /* SimscapeInputBlock: '<S24>/INPUT_4_1_1' */
    rtB.INPUT_4_1_1[0] = rtB.y_simu[2];
    rtB.INPUT_4_1_1[1] = 0.0;
    rtB.INPUT_4_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.INPUT_4_1_1_discrete[0] = !(rtB.INPUT_4_1_1[0] ==
        rtDW.INPUT_4_1_1_discrete[1]);
      rtDW.INPUT_4_1_1_discrete[1] = rtB.INPUT_4_1_1[0];
    }

    rtB.INPUT_4_1_1[3] = rtDW.INPUT_4_1_1_discrete[0];

    /* End of SimscapeInputBlock: '<S24>/INPUT_4_1_1' */

    /* SimscapeInputBlock: '<S24>/INPUT_5_1_1' */
    rtB.INPUT_5_1_1[0] = rtB.y_simu[3];
    rtB.INPUT_5_1_1[1] = 0.0;
    rtB.INPUT_5_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.INPUT_5_1_1_discrete[0] = !(rtB.INPUT_5_1_1[0] ==
        rtDW.INPUT_5_1_1_discrete[1]);
      rtDW.INPUT_5_1_1_discrete[1] = rtB.INPUT_5_1_1[0];
    }

    rtB.INPUT_5_1_1[3] = rtDW.INPUT_5_1_1_discrete[0];

    /* End of SimscapeInputBlock: '<S24>/INPUT_5_1_1' */

    /* SimscapeInputBlock: '<S24>/INPUT_6_1_1' */
    rtB.INPUT_6_1_1[0] = rtB.y_simu[4];
    rtB.INPUT_6_1_1[1] = 0.0;
    rtB.INPUT_6_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.INPUT_6_1_1_discrete[0] = !(rtB.INPUT_6_1_1[0] ==
        rtDW.INPUT_6_1_1_discrete[1]);
      rtDW.INPUT_6_1_1_discrete[1] = rtB.INPUT_6_1_1[0];
    }

    rtB.INPUT_6_1_1[3] = rtDW.INPUT_6_1_1_discrete[0];

    /* End of SimscapeInputBlock: '<S24>/INPUT_6_1_1' */

    /* SimscapeInputBlock: '<S24>/INPUT_1_1_1' */
    rtB.INPUT_1_1_1[0] = rtB.Gain;
    rtB.INPUT_1_1_1[1] = 0.0;
    rtB.INPUT_1_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.INPUT_1_1_1_discrete[0] = !(rtB.INPUT_1_1_1[0] ==
        rtDW.INPUT_1_1_1_discrete[1]);
      rtDW.INPUT_1_1_1_discrete[1] = rtB.INPUT_1_1_1[0];
    }

    rtB.INPUT_1_1_1[3] = rtDW.INPUT_1_1_1_discrete[0];

    /* End of SimscapeInputBlock: '<S24>/INPUT_1_1_1' */

    /* SimscapeInputBlock: '<S24>/INPUT_7_1_1' */
    rtB.INPUT_7_1_1[0] = rtB.y_simu[5];
    rtB.INPUT_7_1_1[1] = 0.0;
    rtB.INPUT_7_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.INPUT_7_1_1_discrete[0] = !(rtB.INPUT_7_1_1[0] ==
        rtDW.INPUT_7_1_1_discrete[1]);
      rtDW.INPUT_7_1_1_discrete[1] = rtB.INPUT_7_1_1[0];
    }

    rtB.INPUT_7_1_1[3] = rtDW.INPUT_7_1_1_discrete[0];

    /* End of SimscapeInputBlock: '<S24>/INPUT_7_1_1' */

    /* SimscapeExecutionBlock: '<S24>/STATE_1' */
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
    rtB.iv0[0] = 0;
    rtB.dv0[0] = rtB.INPUT_2_1_1[0];
    rtB.dv0[1] = rtB.INPUT_2_1_1[1];
    rtB.dv0[2] = rtB.INPUT_2_1_1[2];
    rtB.dv0[3] = rtB.INPUT_2_1_1[3];
    rtB.iv0[1] = 4;
    rtB.dv0[4] = rtB.INPUT_3_1_1[0];
    rtB.dv0[5] = rtB.INPUT_3_1_1[1];
    rtB.dv0[6] = rtB.INPUT_3_1_1[2];
    rtB.dv0[7] = rtB.INPUT_3_1_1[3];
    rtB.iv0[2] = 8;
    rtB.dv0[8] = rtB.INPUT_4_1_1[0];
    rtB.dv0[9] = rtB.INPUT_4_1_1[1];
    rtB.dv0[10] = rtB.INPUT_4_1_1[2];
    rtB.dv0[11] = rtB.INPUT_4_1_1[3];
    rtB.iv0[3] = 12;
    rtB.dv0[12] = rtB.INPUT_5_1_1[0];
    rtB.dv0[13] = rtB.INPUT_5_1_1[1];
    rtB.dv0[14] = rtB.INPUT_5_1_1[2];
    rtB.dv0[15] = rtB.INPUT_5_1_1[3];
    rtB.iv0[4] = 16;
    rtB.dv0[16] = rtB.INPUT_6_1_1[0];
    rtB.dv0[17] = rtB.INPUT_6_1_1[1];
    rtB.dv0[18] = rtB.INPUT_6_1_1[2];
    rtB.dv0[19] = rtB.INPUT_6_1_1[3];
    rtB.iv0[5] = 20;
    rtB.dv0[20] = rtB.INPUT_1_1_1[0];
    rtB.dv0[21] = rtB.INPUT_1_1_1[1];
    rtB.dv0[22] = rtB.INPUT_1_1_1[2];
    rtB.dv0[23] = rtB.INPUT_1_1_1[3];
    rtB.iv0[6] = 24;
    rtB.dv0[24] = rtB.INPUT_7_1_1[0];
    rtB.dv0[25] = rtB.INPUT_7_1_1[1];
    rtB.dv0[26] = rtB.INPUT_7_1_1[2];
    rtB.dv0[27] = rtB.INPUT_7_1_1[3];
    rtB.iv0[7] = 28;
    simulationData->mData->mInputValues.mN = 28;
    simulationData->mData->mInputValues.mX = &rtB.dv0[0];
    simulationData->mData->mInputOffsets.mN = 8;
    simulationData->mData->mInputOffsets.mX = (int32_T *)&rtB.iv0[0];
    simulationData->mData->mOutputs.mN = 0;
    simulationData->mData->mOutputs.mX = NULL;
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_0 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (tmp_0 != 0L) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    /* End of SimscapeExecutionBlock: '<S24>/STATE_1' */
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

    /* Update for SimscapeExecutionBlock: '<S24>/STATE_1' */
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
    rtB.dv1[0] = rtB.INPUT_2_1_1[0];
    rtB.dv1[1] = rtB.INPUT_2_1_1[1];
    rtB.dv1[2] = rtB.INPUT_2_1_1[2];
    rtB.dv1[3] = rtB.INPUT_2_1_1[3];
    tmp_0[1] = 4;
    rtB.dv1[4] = rtB.INPUT_3_1_1[0];
    rtB.dv1[5] = rtB.INPUT_3_1_1[1];
    rtB.dv1[6] = rtB.INPUT_3_1_1[2];
    rtB.dv1[7] = rtB.INPUT_3_1_1[3];
    tmp_0[2] = 8;
    rtB.dv1[8] = rtB.INPUT_4_1_1[0];
    rtB.dv1[9] = rtB.INPUT_4_1_1[1];
    rtB.dv1[10] = rtB.INPUT_4_1_1[2];
    rtB.dv1[11] = rtB.INPUT_4_1_1[3];
    tmp_0[3] = 12;
    rtB.dv1[12] = rtB.INPUT_5_1_1[0];
    rtB.dv1[13] = rtB.INPUT_5_1_1[1];
    rtB.dv1[14] = rtB.INPUT_5_1_1[2];
    rtB.dv1[15] = rtB.INPUT_5_1_1[3];
    tmp_0[4] = 16;
    rtB.dv1[16] = rtB.INPUT_6_1_1[0];
    rtB.dv1[17] = rtB.INPUT_6_1_1[1];
    rtB.dv1[18] = rtB.INPUT_6_1_1[2];
    rtB.dv1[19] = rtB.INPUT_6_1_1[3];
    tmp_0[5] = 20;
    rtB.dv1[20] = rtB.INPUT_1_1_1[0];
    rtB.dv1[21] = rtB.INPUT_1_1_1[1];
    rtB.dv1[22] = rtB.INPUT_1_1_1[2];
    rtB.dv1[23] = rtB.INPUT_1_1_1[3];
    tmp_0[6] = 24;
    rtB.dv1[24] = rtB.INPUT_7_1_1[0];
    rtB.dv1[25] = rtB.INPUT_7_1_1[1];
    rtB.dv1[26] = rtB.INPUT_7_1_1[2];
    rtB.dv1[27] = rtB.INPUT_7_1_1[3];
    tmp_0[7] = 28;
    simulationData->mData->mInputValues.mN = 28;
    simulationData->mData->mInputValues.mX = &rtB.dv1[0];
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

    /* End of Update for SimscapeExecutionBlock: '<S24>/STATE_1' */
  }

  /* External mode */
  rtExtModeUploadCheckTrigger(2);

  {                                    /* Sample time: [0.0s, 0.0s] */
    rtExtModeUpload(0, rtM->Timing.t[0]);
  }

  {                                    /* Sample time: [0.3s, 0.0s] */
    rtExtModeUpload(1, ((rtM->Timing.clockTick1) * 0.3));
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
     * been executed. The resolution of this integer timer is 0.3, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    rtM->Timing.clockTick1++;
  }
}

/* Model initialize function */
void servo_mixed_test_initialize(void)
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
  rtmSetTFinal(rtM, 15.0);
  rtM->Timing.stepSize0 = 0.3;

  /* External mode info */
  rtM->Sizes.checksums[0] = (1939681107U);
  rtM->Sizes.checksums[1] = (596628806U);
  rtM->Sizes.checksums[2] = (621953778U);
  rtM->Sizes.checksums[3] = (4228424509U);

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

    /* Start for SimscapeExecutionBlock: '<S24>/STATE_1' */
    tmp = nesl_lease_simulator(
      "servo_mixed_test/Subsystem1/Simulation/Solver Configuration_1", 0L, 0L);
    rtDW.STATE_1_Simulator = (void *)tmp;
    modelParameters_mVariableStepSo = pointer_is_null(rtDW.STATE_1_Simulator);
    if (modelParameters_mVariableStepSo) {
      servo_mixed_test_e8940bbe_1_gateway();
      tmp = nesl_lease_simulator(
        "servo_mixed_test/Subsystem1/Simulation/Solver Configuration_1", 0L, 0L);
      rtDW.STATE_1_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    rtDW.STATE_1_SimulationData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.STATE_1_DiagnosticManager = (void *)diagnosticManager;
    rtB.modelParameters_mSolverToleranc = 0.001;
    modelParameters_mFixedStepSize = 0.3;
    modelParameters_mVariableStepSo = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    rtB.expl_temp.mVariableStepSolver = modelParameters_mVariableStepSo;
    rtB.expl_temp.mUseSimState = false;
    rtB.expl_temp.mStartTime = 0.0;
    rtB.expl_temp.mSolverType = NE_SOLVER_TYPE_DAE;
    rtB.expl_temp.mSolverTolerance = rtB.modelParameters_mSolverToleranc;
    rtB.expl_temp.mLoggingMode = SSC_LOGGING_NONE;
    rtB.expl_temp.mLoadInitialState = false;
    rtB.expl_temp.mLinTrimCompile = false;
    rtB.expl_temp.mFixedStepSize = modelParameters_mFixedStepSize;
    tmp_0 = nesl_initialize_simulator((NeslSimulator *)rtDW.STATE_1_Simulator,
      rtB.expl_temp, diagnosticManager);
    if (tmp_0 != 0L) {
      modelParameters_mVariableStepSo = error_buffer_is_empty(rtmGetErrorStatus
        (rtM));
      if (modelParameters_mVariableStepSo) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    rtB.expl_temp_m.mRealParameters.mN = 0;
    rtB.expl_temp_m.mRealParameters.mX = NULL;
    rtB.expl_temp_m.mLogicalParameters.mN = 0;
    rtB.expl_temp_m.mLogicalParameters.mX = NULL;
    rtB.expl_temp_m.mIntegerParameters.mN = 0;
    rtB.expl_temp_m.mIntegerParameters.mX = NULL;
    rtB.expl_temp_m.mIndexParameters.mN = 0;
    rtB.expl_temp_m.mIndexParameters.mX = NULL;
    nesl_simulator_set_rtps((NeslSimulator *)rtDW.STATE_1_Simulator,
      rtB.expl_temp_m);
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

    /* End of Start for SimscapeExecutionBlock: '<S24>/STATE_1' */

    /* SystemInitialize for Chart: '<S1>/Chart' */
    rtDW.sfEvent = CALL_EVENT;
  }
}

/* Model terminate function */
void servo_mixed_test_terminate(void)
{
  /* Terminate for SimscapeExecutionBlock: '<S24>/STATE_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    rtDW.STATE_1_DiagnosticManager);
  nesl_destroy_simulation_data((NeslSimulationData *)rtDW.STATE_1_SimulationData);
  nesl_erase_simulator("servo_mixed_test/Subsystem1/Simulation/Solver Configuration_1");
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
