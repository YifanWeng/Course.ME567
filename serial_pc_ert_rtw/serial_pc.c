/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: serial_pc.c
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

#include "serial_pc.h"
#include "serial_pc_private.h"
#include "serial_pc_dt.h"

/* Named constants for Chart: '<Root>/Chart' */
#define serial_pc_CALL_EVENT           (-1L)
#define serial_pc_IN_End               ((uint8_T)1U)
#define serial_pc_IN_Iniital           ((uint8_T)2U)
#define serial_pc_IN_NO_ACTIVE_CHILD   ((uint8_T)0U)
#define serial_pc_IN_Reach             ((uint8_T)3U)

/* Block signals (auto storage) */
B_serial_pc_T serial_pc_B;

/* Block states (auto storage) */
DW_serial_pc_T serial_pc_DW;

/* Real-time model */
RT_MODEL_serial_pc_T serial_pc_M_;
RT_MODEL_serial_pc_T *const serial_pc_M = &serial_pc_M_;

/* Model step function */
void serial_pc_step(void)
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
    static const int8_T b[6] = { 90, 90, 90, 90, 90, 108 };

    static const real_T c[6] = { 89.839198456317035, 120.61446583378049,
      120.17240623281748, 129.75101515750868, 89.571432217444425, 45.0 };

    static const real_T d[6] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.31415926535897931 };

    static const real_T e[6] = { -0.0028065163795572214, 0.53432322753878048,
      0.52660783201192374, 0.69378609550869863, -0.0074799188735659048,
      -0.78539816339744828 };

    int16_T i;
    int8_T tmp_1;

    /* Reset subsysRan breadcrumbs */
    srClearBC(serial_pc_DW.servo_SubsysRanBC);

    /* Clock: '<Root>/Clock' */
    serial_pc_B.Clock = serial_pc_M->Timing.t[0];

    /* Chart: '<Root>/Chart' */
    /* Gateway: Chart */
    serial_pc_DW.sfEvent = serial_pc_CALL_EVENT;

    /* During: Chart */
    if (serial_pc_DW.is_active_c3_serial_pc == 0U) {
      /* Entry: Chart */
      serial_pc_DW.is_active_c3_serial_pc = 1U;

      /* Entry Internal: Chart */
      /* Transition: '<S1>:2' */
      serial_pc_DW.is_c3_serial_pc = serial_pc_IN_Iniital;

      /* Entry 'Iniital': '<S1>:1' */
      /* '<S1>:1:1' s = 0; */
      serial_pc_B.s = 0.0;

      /* Outputs for Function Call SubSystem: '<S1>/servo' */
      /* DataTypeConversion: '<S5>/Data Type Conversion' incorporates:
       *  Constant: '<S4>/Constant'
       */
      /* '<S1>:1:1' servo */
      /* Simulink Function 'servo': '<S1>:21' */
      x = floor(serial_pc_P.Constant_Value);
      if (x < 128.0) {
        if (x >= -128.0) {
          tmp_1 = (int8_T)x;
        } else {
          tmp_1 = MIN_int8_T;
        }
      } else {
        tmp_1 = MAX_int8_T;
      }

      /* End of DataTypeConversion: '<S5>/Data Type Conversion' */

      /* S-Function (arduinoservowrite_sfcn): '<S5>/Servo Write' incorporates:
       *  Constant: '<S5>/Constant'
       *  Sum: '<S5>/Add'
       */
      MW_servoWrite(serial_pc_P.ServoWrite_p1, (uint8_T)((uint16_T)(uint8_T)
        tmp_1 + serial_pc_P.Constant_Value_h));
      serial_pc_DW.servo_SubsysRanBC = 4;

      /* End of Outputs for SubSystem: '<S1>/servo' */
      /* '<S1>:1:1' t1=t; */
      serial_pc_DW.t1 = serial_pc_B.Clock;

      /* '<S1>:1:1' dt=0; */
      serial_pc_B.dt = 0.0;
    } else {
      switch (serial_pc_DW.is_c3_serial_pc) {
       case serial_pc_IN_End:
        /* During 'End': '<S1>:6' */
        /* '<S1>:6:2' dt = t-t3; */
        serial_pc_B.dt = serial_pc_B.Clock - serial_pc_DW.t3;
        break;

       case serial_pc_IN_Iniital:
        /* During 'Iniital': '<S1>:1' */
        /* '<S1>:4:1' sf_internal_predicateOutput = ... */
        /* '<S1>:4:1' dt>=2; */
        if (serial_pc_B.dt >= 2.0) {
          /* Transition: '<S1>:4' */
          serial_pc_DW.is_c3_serial_pc = serial_pc_IN_Reach;

          /* Entry 'Reach': '<S1>:3' */
          /* '<S1>:3:1' s=1; */
          serial_pc_B.s = 1.0;

          /* '<S1>:3:1' s_old = 0; */
          serial_pc_B.s_old = 0.0;

          /* '<S1>:3:1' t2=t; */
          serial_pc_DW.t2 = serial_pc_B.Clock;

          /* '<S1>:3:1' dt = 0; */
          serial_pc_B.dt = 0.0;
        } else {
          /* '<S1>:1:1' dt = t-t1; */
          serial_pc_B.dt = serial_pc_B.Clock - serial_pc_DW.t1;
        }
        break;

       default:
        /* During 'Reach': '<S1>:3' */
        /* '<S1>:7:1' sf_internal_predicateOutput = ... */
        /* '<S1>:7:1' dt>=5; */
        if (serial_pc_B.dt >= 5.0) {
          /* Transition: '<S1>:7' */
          serial_pc_DW.is_c3_serial_pc = serial_pc_IN_End;

          /* Entry 'End': '<S1>:6' */
          /* '<S1>:6:1' s=2; */
          serial_pc_B.s = 2.0;

          /* '<S1>:6:1' s_old = 1; */
          serial_pc_B.s_old = 1.0;

          /* '<S1>:6:1' t3=t; */
          serial_pc_DW.t3 = serial_pc_B.Clock;

          /* '<S1>:6:1' dt = 0; */
          serial_pc_B.dt = 0.0;
        } else {
          /* '<S1>:3:2' dt = t-t2; */
          serial_pc_B.dt = serial_pc_B.Clock - serial_pc_DW.t2;
        }
        break;
      }
    }

    /* End of Chart: '<Root>/Chart' */

    /* MATLAB Function: '<Root>/Inverse Kinematics1' */
    /* MATLAB Function 'Inverse Kinematics1': '<S2>:1' */
    /* '<S2>:1:3' alpha = -2; */
    /* '<S2>:1:4' S=coder.load('simu_xd'); */
    /* '<S2>:1:5' if(state == 0) */
    if (serial_pc_B.s == 0.0) {
      /* '<S2>:1:6' [y,y_simu] = y_target(state); */
      /* '<S2>:1:17' yd = zeros(6,1); */
      /* '<S2>:1:18' yd_simu = zeros(6,1); */
      for (i = 0; i < 6; i++) {
        serial_pc_B.y[i] = 0.0;
        serial_pc_B.y_simu[i] = 0.0;
      }

      /* '<S2>:1:19' S=coder.load('simu_xd'); */
      /* '<S2>:1:20' switch state */
      switch ((int16_T)serial_pc_B.s) {
       case 0:
        /* '<S2>:1:21' case 0 */
        /* '<S2>:1:22' yd = S.q0; */
        /* '<S2>:1:23' yd_simu = (yd-90)/180*pi; */
        for (i = 0; i < 6; i++) {
          serial_pc_B.y[i] = b[i];
          serial_pc_B.y_simu[i] = d[i];
        }

        /* '<S2>:1:24' if(yd_simu(6)> 0 ) */
        /* '<S2>:1:25' yd_simu(6) = 0; */
        serial_pc_B.y_simu[5] = 0.0;
        break;

       case 1:
        /* '<S2>:1:27' case 1 */
        /* '<S2>:1:28' yd=S.qd; */
        /* '<S2>:1:29' yd_simu = (yd-90)/180*pi; */
        for (i = 0; i < 6; i++) {
          serial_pc_B.y[i] = c[i];
          serial_pc_B.y_simu[i] = e[i];
        }

        /* '<S2>:1:30' if(yd_simu(6)> 0 ) */
        break;

       case 2:
        /* '<S2>:1:33' case 2 */
        /* '<S2>:1:34' yd = S.q0; */
        /* '<S2>:1:35' yd_simu = (yd-90)/180*pi; */
        for (i = 0; i < 6; i++) {
          serial_pc_B.y[i] = b[i];
          serial_pc_B.y_simu[i] = d[i];
        }

        /* '<S2>:1:36' if(yd_simu(6)> 0 ) */
        /* '<S2>:1:37' yd_simu(6) = 0; */
        serial_pc_B.y_simu[5] = 0.0;
        break;
      }

      /* '<S2>:1:40' yd_simu(2) = -yd_simu(2); */
      serial_pc_B.y_simu[1] = -serial_pc_B.y_simu[1];

      /*  the dirction of servo moter is different with the simulation model */
    } else {
      /* '<S2>:1:7' else */
      /* '<S2>:1:8' [yd,yd_simu] = y_target(state); */
      /* '<S2>:1:17' yd = zeros(6,1); */
      /* '<S2>:1:18' yd_simu = zeros(6,1); */
      for (i = 0; i < 6; i++) {
        serial_pc_B.y[i] = 0.0;
        serial_pc_B.yd_simu[i] = 0.0;
      }

      /* '<S2>:1:19' S=coder.load('simu_xd'); */
      /* '<S2>:1:20' switch state */
      switch ((int16_T)serial_pc_B.s) {
       case 0:
        /* '<S2>:1:21' case 0 */
        /* '<S2>:1:22' yd = S.q0; */
        /* '<S2>:1:23' yd_simu = (yd-90)/180*pi; */
        for (i = 0; i < 6; i++) {
          serial_pc_B.y[i] = b[i];
          serial_pc_B.yd_simu[i] = d[i];
        }

        /* '<S2>:1:24' if(yd_simu(6)> 0 ) */
        /* '<S2>:1:25' yd_simu(6) = 0; */
        serial_pc_B.yd_simu[5] = 0.0;
        break;

       case 1:
        /* '<S2>:1:27' case 1 */
        /* '<S2>:1:28' yd=S.qd; */
        /* '<S2>:1:29' yd_simu = (yd-90)/180*pi; */
        for (i = 0; i < 6; i++) {
          serial_pc_B.y[i] = c[i];
          serial_pc_B.yd_simu[i] = e[i];
        }

        /* '<S2>:1:30' if(yd_simu(6)> 0 ) */
        break;

       case 2:
        /* '<S2>:1:33' case 2 */
        /* '<S2>:1:34' yd = S.q0; */
        /* '<S2>:1:35' yd_simu = (yd-90)/180*pi; */
        for (i = 0; i < 6; i++) {
          serial_pc_B.y[i] = b[i];
          serial_pc_B.yd_simu[i] = d[i];
        }

        /* '<S2>:1:36' if(yd_simu(6)> 0 ) */
        /* '<S2>:1:37' yd_simu(6) = 0; */
        serial_pc_B.yd_simu[5] = 0.0;
        break;
      }

      /* '<S2>:1:40' yd_simu(2) = -yd_simu(2); */
      serial_pc_B.yd_simu[1] = -serial_pc_B.yd_simu[1];

      /*  the dirction of servo moter is different with the simulation model */
      /* '<S2>:1:9' [~,y_old_simu] = y_target(state_old); */
      /* '<S2>:1:17' yd = zeros(6,1); */
      /* '<S2>:1:18' yd_simu = zeros(6,1); */
      for (i = 0; i < 6; i++) {
        serial_pc_B.y_simu[i] = 0.0;
      }

      /* '<S2>:1:19' S=coder.load('simu_xd'); */
      /* '<S2>:1:20' switch state */
      switch ((int16_T)serial_pc_B.s_old) {
       case 0:
        /* '<S2>:1:21' case 0 */
        /* '<S2>:1:22' yd = S.q0; */
        /* '<S2>:1:23' yd_simu = (yd-90)/180*pi; */
        for (i = 0; i < 6; i++) {
          serial_pc_B.y_simu[i] = d[i];
        }

        /* '<S2>:1:24' if(yd_simu(6)> 0 ) */
        /* '<S2>:1:25' yd_simu(6) = 0; */
        serial_pc_B.y_simu[5] = 0.0;
        break;

       case 1:
        /* '<S2>:1:27' case 1 */
        /* '<S2>:1:28' yd=S.qd; */
        /* '<S2>:1:29' yd_simu = (yd-90)/180*pi; */
        for (i = 0; i < 6; i++) {
          serial_pc_B.y_simu[i] = e[i];
        }

        /* '<S2>:1:30' if(yd_simu(6)> 0 ) */
        break;

       case 2:
        /* '<S2>:1:33' case 2 */
        /* '<S2>:1:34' yd = S.q0; */
        /* '<S2>:1:35' yd_simu = (yd-90)/180*pi; */
        for (i = 0; i < 6; i++) {
          serial_pc_B.y_simu[i] = d[i];
        }

        /* '<S2>:1:36' if(yd_simu(6)> 0 ) */
        /* '<S2>:1:37' yd_simu(6) = 0; */
        serial_pc_B.y_simu[5] = 0.0;
        break;
      }

      /* '<S2>:1:40' yd_simu(2) = -yd_simu(2); */
      serial_pc_B.y_simu[1] = -serial_pc_B.y_simu[1];

      /*  the dirction of servo moter is different with the simulation model */
      /* '<S2>:1:9' ~ */
      /* '<S2>:1:10' y = yd; */
      /* '<S2>:1:11' y_simu = exp(alpha*dt)*(y_old_simu-yd_simu)+yd_simu; */
      x = exp(-2.0 * serial_pc_B.dt);
      for (i = 0; i < 6; i++) {
        serial_pc_B.y_simu[i] = (serial_pc_B.y_simu[i] - serial_pc_B.yd_simu[i])
          * x + serial_pc_B.yd_simu[i];
      }
    }

    /* End of MATLAB Function: '<Root>/Inverse Kinematics1' */
    /* '<S2>:1:13' y = [y]; */

    /* Gain: '<S13>/Gain' */
    serial_pc_B.Gain = serial_pc_P.Gain_Gain * serial_pc_B.y_simu[5];

    /* Gain: '<S13>/Gain1' */
    serial_pc_B.Gain1 = serial_pc_P.Gain1_Gain * serial_pc_B.y_simu[5];

    /* SimscapeInputBlock: '<S24>/INPUT_2_1_1' */
    serial_pc_B.INPUT_2_1_1[0] = serial_pc_B.y_simu[0];
    serial_pc_B.INPUT_2_1_1[1] = 0.0;
    serial_pc_B.INPUT_2_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(serial_pc_M)) {
      serial_pc_DW.INPUT_2_1_1_discrete[0] = !(serial_pc_B.INPUT_2_1_1[0] ==
        serial_pc_DW.INPUT_2_1_1_discrete[1]);
      serial_pc_DW.INPUT_2_1_1_discrete[1] = serial_pc_B.INPUT_2_1_1[0];
    }

    serial_pc_B.INPUT_2_1_1[3] = serial_pc_DW.INPUT_2_1_1_discrete[0];

    /* End of SimscapeInputBlock: '<S24>/INPUT_2_1_1' */

    /* SimscapeInputBlock: '<S24>/INPUT_3_1_1' */
    serial_pc_B.INPUT_3_1_1[0] = serial_pc_B.y_simu[1];
    serial_pc_B.INPUT_3_1_1[1] = 0.0;
    serial_pc_B.INPUT_3_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(serial_pc_M)) {
      serial_pc_DW.INPUT_3_1_1_discrete[0] = !(serial_pc_B.INPUT_3_1_1[0] ==
        serial_pc_DW.INPUT_3_1_1_discrete[1]);
      serial_pc_DW.INPUT_3_1_1_discrete[1] = serial_pc_B.INPUT_3_1_1[0];
    }

    serial_pc_B.INPUT_3_1_1[3] = serial_pc_DW.INPUT_3_1_1_discrete[0];

    /* End of SimscapeInputBlock: '<S24>/INPUT_3_1_1' */

    /* SimscapeInputBlock: '<S24>/INPUT_4_1_1' */
    serial_pc_B.INPUT_4_1_1[0] = serial_pc_B.y_simu[2];
    serial_pc_B.INPUT_4_1_1[1] = 0.0;
    serial_pc_B.INPUT_4_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(serial_pc_M)) {
      serial_pc_DW.INPUT_4_1_1_discrete[0] = !(serial_pc_B.INPUT_4_1_1[0] ==
        serial_pc_DW.INPUT_4_1_1_discrete[1]);
      serial_pc_DW.INPUT_4_1_1_discrete[1] = serial_pc_B.INPUT_4_1_1[0];
    }

    serial_pc_B.INPUT_4_1_1[3] = serial_pc_DW.INPUT_4_1_1_discrete[0];

    /* End of SimscapeInputBlock: '<S24>/INPUT_4_1_1' */

    /* SimscapeInputBlock: '<S24>/INPUT_5_1_1' */
    serial_pc_B.INPUT_5_1_1[0] = serial_pc_B.y_simu[3];
    serial_pc_B.INPUT_5_1_1[1] = 0.0;
    serial_pc_B.INPUT_5_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(serial_pc_M)) {
      serial_pc_DW.INPUT_5_1_1_discrete[0] = !(serial_pc_B.INPUT_5_1_1[0] ==
        serial_pc_DW.INPUT_5_1_1_discrete[1]);
      serial_pc_DW.INPUT_5_1_1_discrete[1] = serial_pc_B.INPUT_5_1_1[0];
    }

    serial_pc_B.INPUT_5_1_1[3] = serial_pc_DW.INPUT_5_1_1_discrete[0];

    /* End of SimscapeInputBlock: '<S24>/INPUT_5_1_1' */

    /* SimscapeInputBlock: '<S24>/INPUT_6_1_1' */
    serial_pc_B.INPUT_6_1_1[0] = serial_pc_B.y_simu[4];
    serial_pc_B.INPUT_6_1_1[1] = 0.0;
    serial_pc_B.INPUT_6_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(serial_pc_M)) {
      serial_pc_DW.INPUT_6_1_1_discrete[0] = !(serial_pc_B.INPUT_6_1_1[0] ==
        serial_pc_DW.INPUT_6_1_1_discrete[1]);
      serial_pc_DW.INPUT_6_1_1_discrete[1] = serial_pc_B.INPUT_6_1_1[0];
    }

    serial_pc_B.INPUT_6_1_1[3] = serial_pc_DW.INPUT_6_1_1_discrete[0];

    /* End of SimscapeInputBlock: '<S24>/INPUT_6_1_1' */

    /* SimscapeInputBlock: '<S24>/INPUT_1_1_1' */
    serial_pc_B.INPUT_1_1_1[0] = serial_pc_B.Gain;
    serial_pc_B.INPUT_1_1_1[1] = 0.0;
    serial_pc_B.INPUT_1_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(serial_pc_M)) {
      serial_pc_DW.INPUT_1_1_1_discrete[0] = !(serial_pc_B.INPUT_1_1_1[0] ==
        serial_pc_DW.INPUT_1_1_1_discrete[1]);
      serial_pc_DW.INPUT_1_1_1_discrete[1] = serial_pc_B.INPUT_1_1_1[0];
    }

    serial_pc_B.INPUT_1_1_1[3] = serial_pc_DW.INPUT_1_1_1_discrete[0];

    /* End of SimscapeInputBlock: '<S24>/INPUT_1_1_1' */

    /* SimscapeInputBlock: '<S24>/INPUT_7_1_1' */
    serial_pc_B.INPUT_7_1_1[0] = serial_pc_B.Gain1;
    serial_pc_B.INPUT_7_1_1[1] = 0.0;
    serial_pc_B.INPUT_7_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(serial_pc_M)) {
      serial_pc_DW.INPUT_7_1_1_discrete[0] = !(serial_pc_B.INPUT_7_1_1[0] ==
        serial_pc_DW.INPUT_7_1_1_discrete[1]);
      serial_pc_DW.INPUT_7_1_1_discrete[1] = serial_pc_B.INPUT_7_1_1[0];
    }

    serial_pc_B.INPUT_7_1_1[3] = serial_pc_DW.INPUT_7_1_1_discrete[0];

    /* End of SimscapeInputBlock: '<S24>/INPUT_7_1_1' */

    /* SimscapeExecutionBlock: '<S24>/STATE_1' */
    simulationData = (NeslSimulationData *)serial_pc_DW.STATE_1_SimulationData;
    time = serial_pc_M->Timing.t[0];
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
    simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(serial_pc_M);
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    serial_pc_B.iv0[0] = 0;
    serial_pc_B.dv0[0] = serial_pc_B.INPUT_2_1_1[0];
    serial_pc_B.dv0[1] = serial_pc_B.INPUT_2_1_1[1];
    serial_pc_B.dv0[2] = serial_pc_B.INPUT_2_1_1[2];
    serial_pc_B.dv0[3] = serial_pc_B.INPUT_2_1_1[3];
    serial_pc_B.iv0[1] = 4;
    serial_pc_B.dv0[4] = serial_pc_B.INPUT_3_1_1[0];
    serial_pc_B.dv0[5] = serial_pc_B.INPUT_3_1_1[1];
    serial_pc_B.dv0[6] = serial_pc_B.INPUT_3_1_1[2];
    serial_pc_B.dv0[7] = serial_pc_B.INPUT_3_1_1[3];
    serial_pc_B.iv0[2] = 8;
    serial_pc_B.dv0[8] = serial_pc_B.INPUT_4_1_1[0];
    serial_pc_B.dv0[9] = serial_pc_B.INPUT_4_1_1[1];
    serial_pc_B.dv0[10] = serial_pc_B.INPUT_4_1_1[2];
    serial_pc_B.dv0[11] = serial_pc_B.INPUT_4_1_1[3];
    serial_pc_B.iv0[3] = 12;
    serial_pc_B.dv0[12] = serial_pc_B.INPUT_5_1_1[0];
    serial_pc_B.dv0[13] = serial_pc_B.INPUT_5_1_1[1];
    serial_pc_B.dv0[14] = serial_pc_B.INPUT_5_1_1[2];
    serial_pc_B.dv0[15] = serial_pc_B.INPUT_5_1_1[3];
    serial_pc_B.iv0[4] = 16;
    serial_pc_B.dv0[16] = serial_pc_B.INPUT_6_1_1[0];
    serial_pc_B.dv0[17] = serial_pc_B.INPUT_6_1_1[1];
    serial_pc_B.dv0[18] = serial_pc_B.INPUT_6_1_1[2];
    serial_pc_B.dv0[19] = serial_pc_B.INPUT_6_1_1[3];
    serial_pc_B.iv0[5] = 20;
    serial_pc_B.dv0[20] = serial_pc_B.INPUT_1_1_1[0];
    serial_pc_B.dv0[21] = serial_pc_B.INPUT_1_1_1[1];
    serial_pc_B.dv0[22] = serial_pc_B.INPUT_1_1_1[2];
    serial_pc_B.dv0[23] = serial_pc_B.INPUT_1_1_1[3];
    serial_pc_B.iv0[6] = 24;
    serial_pc_B.dv0[24] = serial_pc_B.INPUT_7_1_1[0];
    serial_pc_B.dv0[25] = serial_pc_B.INPUT_7_1_1[1];
    serial_pc_B.dv0[26] = serial_pc_B.INPUT_7_1_1[2];
    serial_pc_B.dv0[27] = serial_pc_B.INPUT_7_1_1[3];
    serial_pc_B.iv0[7] = 28;
    simulationData->mData->mInputValues.mN = 28;
    simulationData->mData->mInputValues.mX = &serial_pc_B.dv0[0];
    simulationData->mData->mInputOffsets.mN = 8;
    simulationData->mData->mInputOffsets.mX = (int32_T *)&serial_pc_B.iv0[0];
    simulationData->mData->mOutputs.mN = 0;
    simulationData->mData->mOutputs.mX = NULL;
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    diagnosticManager = (NeuDiagnosticManager *)
      serial_pc_DW.STATE_1_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_0 = ne_simulator_method((NeslSimulator *)serial_pc_DW.STATE_1_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (tmp_0 != 0L) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(serial_pc_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(serial_pc_M, msg);
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
    simulationData = (NeslSimulationData *)serial_pc_DW.STATE_1_SimulationData;
    time = serial_pc_M->Timing.t[0];
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
    simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(serial_pc_M);
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_0[0] = 0;
    serial_pc_B.dv1[0] = serial_pc_B.INPUT_2_1_1[0];
    serial_pc_B.dv1[1] = serial_pc_B.INPUT_2_1_1[1];
    serial_pc_B.dv1[2] = serial_pc_B.INPUT_2_1_1[2];
    serial_pc_B.dv1[3] = serial_pc_B.INPUT_2_1_1[3];
    tmp_0[1] = 4;
    serial_pc_B.dv1[4] = serial_pc_B.INPUT_3_1_1[0];
    serial_pc_B.dv1[5] = serial_pc_B.INPUT_3_1_1[1];
    serial_pc_B.dv1[6] = serial_pc_B.INPUT_3_1_1[2];
    serial_pc_B.dv1[7] = serial_pc_B.INPUT_3_1_1[3];
    tmp_0[2] = 8;
    serial_pc_B.dv1[8] = serial_pc_B.INPUT_4_1_1[0];
    serial_pc_B.dv1[9] = serial_pc_B.INPUT_4_1_1[1];
    serial_pc_B.dv1[10] = serial_pc_B.INPUT_4_1_1[2];
    serial_pc_B.dv1[11] = serial_pc_B.INPUT_4_1_1[3];
    tmp_0[3] = 12;
    serial_pc_B.dv1[12] = serial_pc_B.INPUT_5_1_1[0];
    serial_pc_B.dv1[13] = serial_pc_B.INPUT_5_1_1[1];
    serial_pc_B.dv1[14] = serial_pc_B.INPUT_5_1_1[2];
    serial_pc_B.dv1[15] = serial_pc_B.INPUT_5_1_1[3];
    tmp_0[4] = 16;
    serial_pc_B.dv1[16] = serial_pc_B.INPUT_6_1_1[0];
    serial_pc_B.dv1[17] = serial_pc_B.INPUT_6_1_1[1];
    serial_pc_B.dv1[18] = serial_pc_B.INPUT_6_1_1[2];
    serial_pc_B.dv1[19] = serial_pc_B.INPUT_6_1_1[3];
    tmp_0[5] = 20;
    serial_pc_B.dv1[20] = serial_pc_B.INPUT_1_1_1[0];
    serial_pc_B.dv1[21] = serial_pc_B.INPUT_1_1_1[1];
    serial_pc_B.dv1[22] = serial_pc_B.INPUT_1_1_1[2];
    serial_pc_B.dv1[23] = serial_pc_B.INPUT_1_1_1[3];
    tmp_0[6] = 24;
    serial_pc_B.dv1[24] = serial_pc_B.INPUT_7_1_1[0];
    serial_pc_B.dv1[25] = serial_pc_B.INPUT_7_1_1[1];
    serial_pc_B.dv1[26] = serial_pc_B.INPUT_7_1_1[2];
    serial_pc_B.dv1[27] = serial_pc_B.INPUT_7_1_1[3];
    tmp_0[7] = 28;
    simulationData->mData->mInputValues.mN = 28;
    simulationData->mData->mInputValues.mX = &serial_pc_B.dv1[0];
    simulationData->mData->mInputOffsets.mN = 8;
    simulationData->mData->mInputOffsets.mX = (int32_T *)&tmp_0[0];
    diagnosticManager = (NeuDiagnosticManager *)
      serial_pc_DW.STATE_1_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = ne_simulator_method((NeslSimulator *)serial_pc_DW.STATE_1_Simulator,
      NESL_SIM_UPDATE, simulationData, diagnosticManager);
    if (tmp_1 != 0L) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(serial_pc_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(serial_pc_M, msg);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S24>/STATE_1' */
  }

  /* External mode */
  rtExtModeUploadCheckTrigger(2);

  {                                    /* Sample time: [0.0s, 0.0s] */
    rtExtModeUpload(0, serial_pc_M->Timing.t[0]);
  }

  {                                    /* Sample time: [0.4s, 0.0s] */
    rtExtModeUpload(1, ((serial_pc_M->Timing.clockTick1) * 0.4));
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0s, 0.0s] */
    if ((rtmGetTFinal(serial_pc_M)!=-1) &&
        !((rtmGetTFinal(serial_pc_M)-serial_pc_M->Timing.t[0]) >
          serial_pc_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(serial_pc_M, "Simulation finished");
    }

    if (rtmGetStopRequested(serial_pc_M)) {
      rtmSetErrorStatus(serial_pc_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  serial_pc_M->Timing.t[0] =
    (++serial_pc_M->Timing.clockTick0) * serial_pc_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.4s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.4, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    serial_pc_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void serial_pc_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)serial_pc_M, 0,
                sizeof(RT_MODEL_serial_pc_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&serial_pc_M->solverInfo,
                          &serial_pc_M->Timing.simTimeStep);
    rtsiSetTPtr(&serial_pc_M->solverInfo, &rtmGetTPtr(serial_pc_M));
    rtsiSetStepSizePtr(&serial_pc_M->solverInfo, &serial_pc_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&serial_pc_M->solverInfo, (&rtmGetErrorStatus
      (serial_pc_M)));
    rtsiSetRTModelPtr(&serial_pc_M->solverInfo, serial_pc_M);
  }

  rtsiSetSimTimeStep(&serial_pc_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&serial_pc_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(serial_pc_M, &serial_pc_M->Timing.tArray[0]);
  rtmSetTFinal(serial_pc_M, 20.0);
  serial_pc_M->Timing.stepSize0 = 0.4;

  /* External mode info */
  serial_pc_M->Sizes.checksums[0] = (1159707568U);
  serial_pc_M->Sizes.checksums[1] = (725982840U);
  serial_pc_M->Sizes.checksums[2] = (272941459U);
  serial_pc_M->Sizes.checksums[3] = (1385897731U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[4];
    serial_pc_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)&serial_pc_DW.servo_SubsysRanBC;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(serial_pc_M->extModeInfo,
      &serial_pc_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(serial_pc_M->extModeInfo, serial_pc_M->Sizes.checksums);
    rteiSetTPtr(serial_pc_M->extModeInfo, rtmGetTPtr(serial_pc_M));
  }

  /* block I/O */
  (void) memset(((void *) &serial_pc_B), 0,
                sizeof(B_serial_pc_T));

  /* states (dwork) */
  (void) memset((void *)&serial_pc_DW, 0,
                sizeof(DW_serial_pc_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    serial_pc_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
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

    /* Start for Chart: '<Root>/Chart' incorporates:
     *  Start for SubSystem: '<S1>/servo'
     */
    /* Start for S-Function (arduinoservowrite_sfcn): '<S5>/Servo Write' */
    MW_servoAttach(serial_pc_P.ServoWrite_p1, serial_pc_P.ServoWrite_pinNumber);

    /* Start for SimscapeExecutionBlock: '<S24>/STATE_1' */
    tmp = nesl_lease_simulator("serial_pc/Simulation/Solver Configuration_1", 0L,
      0L);
    serial_pc_DW.STATE_1_Simulator = (void *)tmp;
    modelParameters_mVariableStepSo = pointer_is_null
      (serial_pc_DW.STATE_1_Simulator);
    if (modelParameters_mVariableStepSo) {
      serial_pc_797a10b2_1_gateway();
      tmp = nesl_lease_simulator("serial_pc/Simulation/Solver Configuration_1",
        0L, 0L);
      serial_pc_DW.STATE_1_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    serial_pc_DW.STATE_1_SimulationData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    serial_pc_DW.STATE_1_DiagnosticManager = (void *)diagnosticManager;
    serial_pc_B.modelParameters_mSolverToleranc = 0.001;
    modelParameters_mFixedStepSize = 0.4;
    modelParameters_mVariableStepSo = false;
    diagnosticManager = (NeuDiagnosticManager *)
      serial_pc_DW.STATE_1_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    serial_pc_B.expl_temp.mVariableStepSolver = modelParameters_mVariableStepSo;
    serial_pc_B.expl_temp.mUseSimState = false;
    serial_pc_B.expl_temp.mStartTime = 0.0;
    serial_pc_B.expl_temp.mSolverType = NE_SOLVER_TYPE_DAE;
    serial_pc_B.expl_temp.mSolverTolerance =
      serial_pc_B.modelParameters_mSolverToleranc;
    serial_pc_B.expl_temp.mLoggingMode = SSC_LOGGING_NONE;
    serial_pc_B.expl_temp.mLoadInitialState = false;
    serial_pc_B.expl_temp.mLinTrimCompile = false;
    serial_pc_B.expl_temp.mFixedStepSize = modelParameters_mFixedStepSize;
    tmp_0 = nesl_initialize_simulator((NeslSimulator *)
      serial_pc_DW.STATE_1_Simulator, serial_pc_B.expl_temp, diagnosticManager);
    if (tmp_0 != 0L) {
      modelParameters_mVariableStepSo = error_buffer_is_empty(rtmGetErrorStatus
        (serial_pc_M));
      if (modelParameters_mVariableStepSo) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(serial_pc_M, msg);
      }
    }

    serial_pc_B.expl_temp_m.mRealParameters.mN = 0;
    serial_pc_B.expl_temp_m.mRealParameters.mX = NULL;
    serial_pc_B.expl_temp_m.mLogicalParameters.mN = 0;
    serial_pc_B.expl_temp_m.mLogicalParameters.mX = NULL;
    serial_pc_B.expl_temp_m.mIntegerParameters.mN = 0;
    serial_pc_B.expl_temp_m.mIntegerParameters.mX = NULL;
    serial_pc_B.expl_temp_m.mIndexParameters.mN = 0;
    serial_pc_B.expl_temp_m.mIndexParameters.mX = NULL;
    nesl_simulator_set_rtps((NeslSimulator *)serial_pc_DW.STATE_1_Simulator,
      serial_pc_B.expl_temp_m);
    simulationData = (NeslSimulationData *)serial_pc_DW.STATE_1_SimulationData;
    time = serial_pc_M->Timing.t[0];
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
    simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(serial_pc_M);
    modelParameters_mVariableStepSo = false;
    simulationData->mData->mIsSolverAssertCheck =
      modelParameters_mVariableStepSo;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)
      serial_pc_DW.STATE_1_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_0 = ne_simulator_method((NeslSimulator *)serial_pc_DW.STATE_1_Simulator,
      NESL_SIM_INITIALIZEONCE, simulationData, diagnosticManager);
    if (tmp_0 != 0L) {
      modelParameters_mVariableStepSo = error_buffer_is_empty(rtmGetErrorStatus
        (serial_pc_M));
      if (modelParameters_mVariableStepSo) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(serial_pc_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S24>/STATE_1' */

    /* SystemInitialize for Chart: '<Root>/Chart' */
    serial_pc_DW.sfEvent = serial_pc_CALL_EVENT;
    serial_pc_DW.is_active_c3_serial_pc = 0U;
    serial_pc_DW.is_c3_serial_pc = serial_pc_IN_NO_ACTIVE_CHILD;
  }
}

/* Model terminate function */
void serial_pc_terminate(void)
{
  /* Terminate for SimscapeExecutionBlock: '<S24>/STATE_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    serial_pc_DW.STATE_1_DiagnosticManager);
  nesl_destroy_simulation_data((NeslSimulationData *)
    serial_pc_DW.STATE_1_SimulationData);
  nesl_erase_simulator("serial_pc/Simulation/Solver Configuration_1");
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
