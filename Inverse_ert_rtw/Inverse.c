/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Inverse.c
 *
 * Code generated for Simulink model 'Inverse'.
 *
 * Model version                  : 1.83
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Apr 11 15:20:49 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "Inverse.h"

/* Named constants for Chart: '<S1>/Chart' */
#define IN_End                         ((uint8_T)1U)
#define IN_Grabber                     ((uint8_T)2U)
#define IN_Iniital                     ((uint8_T)3U)
#define IN_Reach                       ((uint8_T)4U)

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

/* External outputs (root outports fed by signals with auto storage) */
ExtY rtY;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void Inverse_step(void)
{
  static const int8_T b[6] = { 0, 18, 0, 0, 0, 0 };

  static const real_T d[6] = { -13.923274948138035, -1.9347094491411252,
    45.585563698967313, 7.19559662859441, 0.1109458077929911, -80.0 };

  static const real_T e[6] = { 0.0, 0.31415926535897931, 0.0, 0.0, 0.0, 0.0 };

  static const real_T f[6] = { -0.24300699050545144, -0.033767049956958416,
    0.79561817792458478, 0.125586852814376, 0.0019363696372724781,
    -1.3962634015954636 };

  static const real_T g[6] = { -0.24300699050545144, -0.033767049956958416,
    0.79561817792458478, 0.125586852814376, 0.0019363696372724781, 0.0 };

  real_T rtb_y[6];
  real_T Clock;
  int16_T i;
  uint8_T rtb_y_0;

  /* Clock: '<S1>/Clock' */
  Clock = rtM->Timing.t[0];

  /* Chart: '<S1>/Chart' */
  /* Gateway: Inverse Kinematics/Chart */
  /* During: Inverse Kinematics/Chart */
  if (rtDW.is_active_c3_Inverse == 0U) {
    /* Entry: Inverse Kinematics/Chart */
    rtDW.is_active_c3_Inverse = 1U;

    /* Entry Internal: Inverse Kinematics/Chart */
    /* Transition: '<S2>:2' */
    rtDW.is_c3_Inverse = IN_Iniital;

    /* Entry 'Iniital': '<S2>:1' */
    /* '<S2>:1:1' s = 0; */
    rtDW.s = 0.0;

    /* '<S2>:1:1' t1=t; */
    rtDW.t1 = Clock;

    /* '<S2>:1:1' dt=0; */
    rtDW.dt = 0.0;
  } else {
    switch (rtDW.is_c3_Inverse) {
     case IN_End:
      /* During 'End': '<S2>:6' */
      /* '<S2>:6:2' dt = t-t4; */
      rtDW.dt = Clock - rtDW.t4;
      break;

     case IN_Grabber:
      /* During 'Grabber': '<S2>:21' */
      /* '<S2>:7:1' sf_internal_predicateOutput = ... */
      /* '<S2>:7:1' dt>=5; */
      if (rtDW.dt >= 5.0) {
        /* Transition: '<S2>:7' */
        rtDW.is_c3_Inverse = IN_End;

        /* Entry 'End': '<S2>:6' */
        /* '<S2>:6:1' s=3; */
        rtDW.s = 3.0;

        /* '<S2>:6:1' s_old = 2; */
        rtDW.s_old = 2.0;

        /* '<S2>:6:1' t4=t; */
        rtDW.t4 = Clock;

        /* '<S2>:6:1' dt = 0; */
        rtDW.dt = 0.0;
      } else {
        /* '<S2>:21:2' dt = t-t3; */
        rtDW.dt = Clock - rtDW.t3;
      }
      break;

     case IN_Iniital:
      /* During 'Iniital': '<S2>:1' */
      /* '<S2>:4:1' sf_internal_predicateOutput = ... */
      /* '<S2>:4:1' dt>=6; */
      if (rtDW.dt >= 6.0) {
        /* Transition: '<S2>:4' */
        rtDW.is_c3_Inverse = IN_Reach;

        /* Entry 'Reach': '<S2>:3' */
        /* '<S2>:3:1' s=1; */
        rtDW.s = 1.0;

        /* '<S2>:3:1' s_old = 0; */
        rtDW.s_old = 0.0;

        /* '<S2>:3:1' t2=t; */
        rtDW.t2 = Clock;

        /* '<S2>:3:1' dt = 0; */
        rtDW.dt = 0.0;
      } else {
        /* '<S2>:1:1' dt = t-t1; */
        rtDW.dt = Clock - rtDW.t1;
      }
      break;

     default:
      /* During 'Reach': '<S2>:3' */
      /* '<S2>:22:1' sf_internal_predicateOutput = ... */
      /* '<S2>:22:1' dt>=5; */
      if (rtDW.dt >= 5.0) {
        /* Transition: '<S2>:22' */
        rtDW.is_c3_Inverse = IN_Grabber;

        /* Entry 'Grabber': '<S2>:21' */
        /* '<S2>:21:1' s=2; */
        rtDW.s = 2.0;

        /* '<S2>:21:1' s_old = 1; */
        rtDW.s_old = 1.0;

        /* '<S2>:21:1' t3=t; */
        rtDW.t3 = Clock;

        /* '<S2>:21:1' dt = 0; */
        rtDW.dt = 0.0;
      } else {
        /* '<S2>:3:2' dt = t-t2; */
        rtDW.dt = Clock - rtDW.t2;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/Chart' */

  /* MATLAB Function: '<S1>/Inverse Kinematics1' */
  /* MATLAB Function 'Inverse Kinematics/Inverse Kinematics1': '<S3>:1' */
  /* '<S3>:1:3' alpha = -2; */
  /* '<S3>:1:4' S=coder.load('simu_xd'); */
  /* '<S3>:1:5' if(state == 0) */
  if (rtDW.s == 0.0) {
    /* '<S3>:1:6' [yd,y_simu] = y_target(state); */
    /* '<S3>:1:18' yd = zeros(6,1); */
    /* '<S3>:1:19' yd_simu = zeros(6,1); */
    for (i = 0; i < 6; i++) {
      rtb_y[i] = 0.0;
      rtDW.y_simu[i] = 0.0;
    }

    /* '<S3>:1:20' S=coder.load('simu_xd'); */
    /* '<S3>:1:21' switch state */
    switch ((int16_T)rtDW.s) {
     case 0:
      /* '<S3>:1:22' case 0 */
      /* '<S3>:1:23' yd = S.q0; */
      /* '<S3>:1:24' yd_simu = (yd)/180*pi; */
      for (i = 0; i < 6; i++) {
        rtb_y[i] = b[i];
        rtDW.y_simu[i] = e[i];
      }

      /* '<S3>:1:25' if(yd_simu(6)> 0 ) */
      /* '<S3>:1:28' yd_simu(2) = 0; */
      rtDW.y_simu[1] = 0.0;
      break;

     case 1:
      /* '<S3>:1:29' case 1 */
      /* '<S3>:1:30' yd=S.qd; */
      /* '<S3>:1:31' yd_simu = (yd)/180*pi; */
      for (i = 0; i < 6; i++) {
        rtb_y[i] = d[i];
        rtDW.y_simu[i] = f[i];
      }

      /* '<S3>:1:32' if(yd_simu(6)> 0 ) */
      break;

     case 2:
      /* '<S3>:1:35' case 2     */
      /* '<S3>:1:36' yd=S.qd; */
      /* '<S3>:1:37' yd(6) = 0; */
      for (i = 0; i < 6; i++) {
        rtb_y[i] = d[i];
        rtDW.y_simu[i] = g[i];
      }

      rtb_y[5] = 0.0;

      /* '<S3>:1:38' yd_simu = (yd)/180*pi; */
      /* '<S3>:1:39' if(yd_simu(6)> 0 ) */
      /* '<S3>:1:42' yd_simu(6) = 0; */
      rtDW.y_simu[5] = 0.0;
      break;

     case 3:
      /* '<S3>:1:43' case 3 */
      /* '<S3>:1:44' yd = S.q0; */
      /* '<S3>:1:45' yd_simu = (yd)/180*pi; */
      for (i = 0; i < 6; i++) {
        rtb_y[i] = b[i];
        rtDW.y_simu[i] = e[i];
      }

      /* '<S3>:1:46' if(yd_simu(6)> 0 ) */
      /* '<S3>:1:49' yd_simu(2) = 0; */
      rtDW.y_simu[1] = 0.0;
      break;
    }

    /* '<S3>:1:51' yd_simu(2) = -yd_simu(2); */
    rtDW.y_simu[1] = -rtDW.y_simu[1];

    /*  the dirction of servo moter is different with the simulation model */
    /* '<S3>:1:7' y = yd+90; */
    for (i = 0; i < 6; i++) {
      rtb_y[i] += 90.0;
    }
  } else {
    /* '<S3>:1:8' else */
    /* '<S3>:1:9' [yd,yd_simu] = y_target(state); */
    /* '<S3>:1:18' yd = zeros(6,1); */
    /* '<S3>:1:19' yd_simu = zeros(6,1); */
    for (i = 0; i < 6; i++) {
      rtb_y[i] = 0.0;
      rtDW.yd_simu[i] = 0.0;
    }

    /* '<S3>:1:20' S=coder.load('simu_xd'); */
    /* '<S3>:1:21' switch state */
    switch ((int16_T)rtDW.s) {
     case 0:
      /* '<S3>:1:22' case 0 */
      /* '<S3>:1:23' yd = S.q0; */
      /* '<S3>:1:24' yd_simu = (yd)/180*pi; */
      for (i = 0; i < 6; i++) {
        rtb_y[i] = b[i];
        rtDW.yd_simu[i] = e[i];
      }

      /* '<S3>:1:25' if(yd_simu(6)> 0 ) */
      /* '<S3>:1:28' yd_simu(2) = 0; */
      rtDW.yd_simu[1] = 0.0;
      break;

     case 1:
      /* '<S3>:1:29' case 1 */
      /* '<S3>:1:30' yd=S.qd; */
      /* '<S3>:1:31' yd_simu = (yd)/180*pi; */
      for (i = 0; i < 6; i++) {
        rtb_y[i] = d[i];
        rtDW.yd_simu[i] = f[i];
      }

      /* '<S3>:1:32' if(yd_simu(6)> 0 ) */
      break;

     case 2:
      /* '<S3>:1:35' case 2     */
      /* '<S3>:1:36' yd=S.qd; */
      /* '<S3>:1:37' yd(6) = 0; */
      for (i = 0; i < 6; i++) {
        rtb_y[i] = d[i];
        rtDW.yd_simu[i] = g[i];
      }

      rtb_y[5] = 0.0;

      /* '<S3>:1:38' yd_simu = (yd)/180*pi; */
      /* '<S3>:1:39' if(yd_simu(6)> 0 ) */
      /* '<S3>:1:42' yd_simu(6) = 0; */
      rtDW.yd_simu[5] = 0.0;
      break;

     case 3:
      /* '<S3>:1:43' case 3 */
      /* '<S3>:1:44' yd = S.q0; */
      /* '<S3>:1:45' yd_simu = (yd)/180*pi; */
      for (i = 0; i < 6; i++) {
        rtb_y[i] = b[i];
        rtDW.yd_simu[i] = e[i];
      }

      /* '<S3>:1:46' if(yd_simu(6)> 0 ) */
      /* '<S3>:1:49' yd_simu(2) = 0; */
      rtDW.yd_simu[1] = 0.0;
      break;
    }

    /* '<S3>:1:51' yd_simu(2) = -yd_simu(2); */
    rtDW.yd_simu[1] = -rtDW.yd_simu[1];

    /*  the dirction of servo moter is different with the simulation model */
    /* '<S3>:1:10' [yd_old,y_old_simu] = y_target(state_old); */
    /* '<S3>:1:18' yd = zeros(6,1); */
    /* '<S3>:1:19' yd_simu = zeros(6,1); */
    for (i = 0; i < 6; i++) {
      rtDW.y_simu[i] = 0.0;
    }

    /* '<S3>:1:20' S=coder.load('simu_xd'); */
    /* '<S3>:1:21' switch state */
    switch ((int16_T)rtDW.s_old) {
     case 0:
      /* '<S3>:1:22' case 0 */
      /* '<S3>:1:23' yd = S.q0; */
      /* '<S3>:1:24' yd_simu = (yd)/180*pi; */
      for (i = 0; i < 6; i++) {
        rtDW.y_simu[i] = e[i];
      }

      /* '<S3>:1:25' if(yd_simu(6)> 0 ) */
      /* '<S3>:1:28' yd_simu(2) = 0; */
      rtDW.y_simu[1] = 0.0;
      break;

     case 1:
      /* '<S3>:1:29' case 1 */
      /* '<S3>:1:30' yd=S.qd; */
      /* '<S3>:1:31' yd_simu = (yd)/180*pi; */
      for (i = 0; i < 6; i++) {
        rtDW.y_simu[i] = f[i];
      }

      /* '<S3>:1:32' if(yd_simu(6)> 0 ) */
      break;

     case 2:
      /* '<S3>:1:35' case 2     */
      /* '<S3>:1:36' yd=S.qd; */
      /* '<S3>:1:37' yd(6) = 0; */
      /* '<S3>:1:38' yd_simu = (yd)/180*pi; */
      for (i = 0; i < 6; i++) {
        rtDW.y_simu[i] = g[i];
      }

      /* '<S3>:1:39' if(yd_simu(6)> 0 ) */
      /* '<S3>:1:42' yd_simu(6) = 0; */
      rtDW.y_simu[5] = 0.0;
      break;

     case 3:
      /* '<S3>:1:43' case 3 */
      /* '<S3>:1:44' yd = S.q0; */
      /* '<S3>:1:45' yd_simu = (yd)/180*pi; */
      for (i = 0; i < 6; i++) {
        rtDW.y_simu[i] = e[i];
      }

      /* '<S3>:1:46' if(yd_simu(6)> 0 ) */
      /* '<S3>:1:49' yd_simu(2) = 0; */
      rtDW.y_simu[1] = 0.0;
      break;
    }

    /* '<S3>:1:51' yd_simu(2) = -yd_simu(2); */
    rtDW.y_simu[1] = -rtDW.y_simu[1];

    /*  the dirction of servo moter is different with the simulation model */
    /*          y =  exp(alpha*dt)*(yd_old-yd)+yd; */
    /* '<S3>:1:12' y = yd + 90; */
    /* '<S3>:1:13' y_simu = exp(alpha*dt)^0.5*(y_old_simu-yd_simu)+yd_simu; */
    Clock = sqrt(exp(-2.0 * rtDW.dt));
    for (i = 0; i < 6; i++) {
      rtb_y[i] += 90.0;
      rtDW.y_simu[i] = (rtDW.y_simu[i] - rtDW.yd_simu[i]) * Clock +
        rtDW.yd_simu[i];
    }
  }

  /* End of MATLAB Function: '<S1>/Inverse Kinematics1' */

  /* Outport: '<Root>/Out1' */
  for (i = 0; i < 6; i++) {
    rtY.Out1[i] = rtDW.y_simu[i];
  }

  /* End of Outport: '<Root>/Out1' */

  /* DataTypeConversion: '<S5>/Data Type Conversion' */
  if (rtb_y[0] < 256.0) {
    if (rtb_y[0] >= 0.0) {
      rtb_y_0 = (uint8_T)rtb_y[0];
    } else {
      rtb_y_0 = 0U;
    }
  } else {
    rtb_y_0 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S5>/Data Type Conversion' */

  /* S-Function (arduinoservowrite_sfcn): '<S5>/Servo Write' */
  MW_servoWrite(0U, rtb_y_0);

  /* DataTypeConversion: '<S6>/Data Type Conversion' */
  if (rtb_y[1] < 256.0) {
    if (rtb_y[1] >= 0.0) {
      rtb_y_0 = (uint8_T)rtb_y[1];
    } else {
      rtb_y_0 = 0U;
    }
  } else {
    rtb_y_0 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S6>/Data Type Conversion' */

  /* S-Function (arduinoservowrite_sfcn): '<S6>/Servo Write' */
  MW_servoWrite(1U, rtb_y_0);

  /* DataTypeConversion: '<S7>/Data Type Conversion' */
  if (rtb_y[2] < 256.0) {
    if (rtb_y[2] >= 0.0) {
      rtb_y_0 = (uint8_T)rtb_y[2];
    } else {
      rtb_y_0 = 0U;
    }
  } else {
    rtb_y_0 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S7>/Data Type Conversion' */

  /* S-Function (arduinoservowrite_sfcn): '<S7>/Servo Write' */
  MW_servoWrite(2U, rtb_y_0);

  /* DataTypeConversion: '<S8>/Data Type Conversion' */
  if (rtb_y[3] < 256.0) {
    if (rtb_y[3] >= 0.0) {
      rtb_y_0 = (uint8_T)rtb_y[3];
    } else {
      rtb_y_0 = 0U;
    }
  } else {
    rtb_y_0 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S8>/Data Type Conversion' */

  /* S-Function (arduinoservowrite_sfcn): '<S8>/Servo Write' */
  MW_servoWrite(3U, rtb_y_0);

  /* DataTypeConversion: '<S9>/Data Type Conversion' */
  if (rtb_y[4] < 256.0) {
    if (rtb_y[4] >= 0.0) {
      rtb_y_0 = (uint8_T)rtb_y[4];
    } else {
      rtb_y_0 = 0U;
    }
  } else {
    rtb_y_0 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S9>/Data Type Conversion' */

  /* S-Function (arduinoservowrite_sfcn): '<S9>/Servo Write' */
  MW_servoWrite(4U, rtb_y_0);

  /* DataTypeConversion: '<S10>/Data Type Conversion' */
  if (rtb_y[5] < 256.0) {
    if (rtb_y[5] >= 0.0) {
      rtb_y_0 = (uint8_T)rtb_y[5];
    } else {
      rtb_y_0 = 0U;
    }
  } else {
    rtb_y_0 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S10>/Data Type Conversion' */

  /* S-Function (arduinoservowrite_sfcn): '<S10>/Servo Write' */
  MW_servoWrite(5U, rtb_y_0);

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  rtM->Timing.t[0] =
    (++rtM->Timing.clockTick0) * rtM->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.8s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.8, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    rtM->Timing.clockTick1++;
  }
}

/* Model initialize function */
void Inverse_initialize(void)
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
  rtM->Timing.stepSize0 = 0.8;

  /* Start for S-Function (arduinoservowrite_sfcn): '<S5>/Servo Write' */
  MW_servoAttach(0U, 3UL);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S6>/Servo Write' */
  MW_servoAttach(1U, 5UL);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S7>/Servo Write' */
  MW_servoAttach(2U, 6UL);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S8>/Servo Write' */
  MW_servoAttach(3U, 9UL);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S9>/Servo Write' */
  MW_servoAttach(4U, 10UL);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S10>/Servo Write' */
  MW_servoAttach(5U, 11UL);
}

/* Model terminate function */
void Inverse_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
