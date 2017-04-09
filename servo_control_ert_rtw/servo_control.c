/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: servo_control.c
 *
 * Code generated for Simulink model 'servo_control'.
 *
 * Model version                  : 1.17
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sat Apr  8 23:19:00 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "servo_control.h"
#include "servo_control_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define servo_contro_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define servo_control_IN_End           ((uint8_T)1U)
#define servo_control_IN_Iniital       ((uint8_T)2U)
#define servo_control_IN_Reach         ((uint8_T)3U)

/* Block signals (auto storage) */
B_servo_control_T servo_control_B;

/* Block states (auto storage) */
DW_servo_control_T servo_control_DW;

/* Real-time model */
RT_MODEL_servo_control_T servo_control_M_;
RT_MODEL_servo_control_T *const servo_control_M = &servo_control_M_;

/* Model step function */
void servo_control_step(void)
{
  static const real_T b[6] = { 89.839198456317035, 120.61446583378049,
    120.17240623281748, 129.75101515750868, 89.571432217444425, 45.0 };

  static const real_T c[6] = { 90.0, 99.000000000000014, 90.0, 90.0, 90.0, 108.0
  };

  real_T rtb_y[6];
  real_T Clock;
  int16_T i;

  /* Clock: '<Root>/Clock' */
  Clock = servo_control_M->Timing.t[0];

  /* Chart: '<Root>/Chart' */
  /* Gateway: Chart */
  /* During: Chart */
  if (servo_control_DW.is_active_c3_servo_control == 0U) {
    /* Entry: Chart */
    servo_control_DW.is_active_c3_servo_control = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:2' */
    servo_control_DW.is_c3_servo_control = servo_control_IN_Iniital;

    /* Entry 'Iniital': '<S1>:1' */
    /* '<S1>:1:1' s = 0; */
    servo_control_B.s = 0.0;

    /* '<S1>:1:1' t1=t; */
    servo_control_DW.t1 = Clock;
  } else {
    switch (servo_control_DW.is_c3_servo_control) {
     case servo_control_IN_End:
      /* During 'End': '<S1>:6' */
      break;

     case servo_control_IN_Iniital:
      /* During 'Iniital': '<S1>:1' */
      /* '<S1>:4:1' sf_internal_predicateOutput = ... */
      /* '<S1>:4:1' (t-t1)>=5; */
      if (Clock - servo_control_DW.t1 >= 5.0) {
        /* Transition: '<S1>:4' */
        servo_control_DW.is_c3_servo_control = servo_control_IN_Reach;

        /* Entry 'Reach': '<S1>:3' */
        /* '<S1>:3:1' s=1; */
        servo_control_B.s = 1.0;

        /* '<S1>:3:1' t2=t */
        servo_control_DW.t2 = Clock;
      }
      break;

     default:
      /* During 'Reach': '<S1>:3' */
      /* '<S1>:7:1' sf_internal_predicateOutput = ... */
      /* '<S1>:7:1' (t-t2)>=5; */
      if (Clock - servo_control_DW.t2 >= 5.0) {
        /* Transition: '<S1>:7' */
        servo_control_DW.is_c3_servo_control = servo_control_IN_End;

        /* Entry 'End': '<S1>:6' */
        /* '<S1>:6:1' s=2; */
        servo_control_B.s = 2.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* MATLAB Function: '<Root>/Inverse Kinematics' */
  /* MATLAB Function 'Inverse Kinematics': '<S2>:1' */
  /* '<S2>:1:2' y=zeros(6,1); */
  /* '<S2>:1:3' S=coder.load('simu_xd'); */
  /* '<S2>:1:4' if(state == 1) */
  if (servo_control_B.s == 1.0) {
    /* '<S2>:1:5' y=[S.qd;45]; */
    for (i = 0; i < 6; i++) {
      rtb_y[i] = b[i];
    }
  } else {
    /* '<S2>:1:6' else */
    /* '<S2>:1:7' y=S.q0; */
    for (i = 0; i < 6; i++) {
      rtb_y[i] = c[i];
    }
  }

  /* End of MATLAB Function: '<Root>/Inverse Kinematics' */

  /* S-Function (arduinoservowrite_sfcn): '<S4>/Servo Write' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion'
   */
  MW_servoWrite(servo_control_P.ServoWrite_p1, (uint8_T)rtb_y[0]);

  /* S-Function (arduinoservowrite_sfcn): '<S5>/Servo Write' incorporates:
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   */
  MW_servoWrite(servo_control_P.ServoWrite_p1_g, (uint8_T)rtb_y[1]);

  /* S-Function (arduinoservowrite_sfcn): '<S6>/Servo Write' incorporates:
   *  DataTypeConversion: '<S6>/Data Type Conversion'
   */
  MW_servoWrite(servo_control_P.ServoWrite_p1_a, (uint8_T)rtb_y[2]);

  /* S-Function (arduinoservowrite_sfcn): '<S7>/Servo Write' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion'
   */
  MW_servoWrite(servo_control_P.ServoWrite_p1_a2, (uint8_T)rtb_y[3]);

  /* S-Function (arduinoservowrite_sfcn): '<S8>/Servo Write' incorporates:
   *  DataTypeConversion: '<S8>/Data Type Conversion'
   */
  MW_servoWrite(servo_control_P.ServoWrite_p1_m, (uint8_T)rtb_y[4]);

  /* S-Function (arduinoservowrite_sfcn): '<S9>/Servo Write' incorporates:
   *  DataTypeConversion: '<S9>/Data Type Conversion'
   */
  MW_servoWrite(servo_control_P.ServoWrite_p1_k, (uint8_T)rtb_y[5]);

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  servo_control_M->Timing.t[0] =
    (++servo_control_M->Timing.clockTick0) * servo_control_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.4s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.4, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    servo_control_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void servo_control_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)servo_control_M, 0,
                sizeof(RT_MODEL_servo_control_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&servo_control_M->solverInfo,
                          &servo_control_M->Timing.simTimeStep);
    rtsiSetTPtr(&servo_control_M->solverInfo, &rtmGetTPtr(servo_control_M));
    rtsiSetStepSizePtr(&servo_control_M->solverInfo,
                       &servo_control_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&servo_control_M->solverInfo, (&rtmGetErrorStatus
      (servo_control_M)));
    rtsiSetRTModelPtr(&servo_control_M->solverInfo, servo_control_M);
  }

  rtsiSetSimTimeStep(&servo_control_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&servo_control_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(servo_control_M, &servo_control_M->Timing.tArray[0]);
  servo_control_M->Timing.stepSize0 = 0.4;

  /* block I/O */
  (void) memset(((void *) &servo_control_B), 0,
                sizeof(B_servo_control_T));

  /* states (dwork) */
  (void) memset((void *)&servo_control_DW, 0,
                sizeof(DW_servo_control_T));

  /* Start for S-Function (arduinoservowrite_sfcn): '<S4>/Servo Write' */
  MW_servoAttach(servo_control_P.ServoWrite_p1,
                 servo_control_P.ServoWrite_pinNumber);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S5>/Servo Write' */
  MW_servoAttach(servo_control_P.ServoWrite_p1_g,
                 servo_control_P.ServoWrite_pinNumber_k);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S6>/Servo Write' */
  MW_servoAttach(servo_control_P.ServoWrite_p1_a,
                 servo_control_P.ServoWrite_pinNumber_l);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S7>/Servo Write' */
  MW_servoAttach(servo_control_P.ServoWrite_p1_a2,
                 servo_control_P.ServoWrite_pinNumber_h);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S8>/Servo Write' */
  MW_servoAttach(servo_control_P.ServoWrite_p1_m,
                 servo_control_P.ServoWrite_pinNumber_ks);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S9>/Servo Write' */
  MW_servoAttach(servo_control_P.ServoWrite_p1_k,
                 servo_control_P.ServoWrite_pinNumber_ha);

  /* SystemInitialize for Chart: '<Root>/Chart' */
  servo_control_DW.is_active_c3_servo_control = 0U;
  servo_control_DW.is_c3_servo_control = servo_contro_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void servo_control_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
