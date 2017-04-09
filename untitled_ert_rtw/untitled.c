/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sat Apr  8 22:32:11 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"

/* Block signals (auto storage) */
B_untitled_T untitled_B;

/* Continuous states */
X_untitled_T untitled_X;

/* Real-time model */
RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = (ODE3_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 5;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  untitled_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  untitled_step();
  untitled_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  untitled_step();
  untitled_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model step function */
void untitled_step(void)
{
  real_T rtb_Sum9;
  uint8_T rtb_Sum9_0;
  if (rtmIsMajorTimeStep(untitled_M)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&untitled_M->solverInfo,
                          ((untitled_M->Timing.clockTick0+1)*
      untitled_M->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(untitled_M)) {
    untitled_M->Timing.t[0] = rtsiGetT(&untitled_M->solverInfo);
  }

  /* Sum: '<S1>/Sum1' incorporates:
   *  Constant: '<Root>/Constant1'
   *  TransferFcn: '<S1>/Transfer Fcn'
   */
  rtb_Sum9 = untitled_P.TransferFcn_C * untitled_X.TransferFcn_CSTATE +
    untitled_P.Constant1_Value;
  if (rtmIsMajorTimeStep(untitled_M)) {
    /* DataTypeConversion: '<S2>/Data Type Conversion' */
    if (rtb_Sum9 < 256.0) {
      if (rtb_Sum9 >= 0.0) {
        rtb_Sum9_0 = (uint8_T)rtb_Sum9;
      } else {
        rtb_Sum9_0 = 0U;
      }
    } else {
      rtb_Sum9_0 = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S2>/Data Type Conversion' */

    /* S-Function (arduinoservowrite_sfcn): '<S2>/Servo Write' */
    MW_servoWrite(untitled_P.ServoWrite_p1, rtb_Sum9_0);
  }

  /* Sum: '<S1>/Sum3' incorporates:
   *  Constant: '<Root>/Constant1'
   *  TransferFcn: '<S1>/Transfer Fcn1'
   */
  rtb_Sum9 = untitled_P.TransferFcn1_C * untitled_X.TransferFcn1_CSTATE +
    untitled_P.Constant1_Value;
  if (rtmIsMajorTimeStep(untitled_M)) {
    /* DataTypeConversion: '<S3>/Data Type Conversion' */
    if (rtb_Sum9 < 256.0) {
      if (rtb_Sum9 >= 0.0) {
        rtb_Sum9_0 = (uint8_T)rtb_Sum9;
      } else {
        rtb_Sum9_0 = 0U;
      }
    } else {
      rtb_Sum9_0 = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S3>/Data Type Conversion' */

    /* S-Function (arduinoservowrite_sfcn): '<S3>/Servo Write' */
    MW_servoWrite(untitled_P.ServoWrite_p1_b, rtb_Sum9_0);
  }

  /* Sum: '<S1>/Sum5' incorporates:
   *  Constant: '<Root>/Constant1'
   *  TransferFcn: '<S1>/Transfer Fcn2'
   */
  rtb_Sum9 = untitled_P.TransferFcn2_C * untitled_X.TransferFcn2_CSTATE +
    untitled_P.Constant1_Value;
  if (rtmIsMajorTimeStep(untitled_M)) {
    /* DataTypeConversion: '<S4>/Data Type Conversion' */
    if (rtb_Sum9 < 256.0) {
      if (rtb_Sum9 >= 0.0) {
        rtb_Sum9_0 = (uint8_T)rtb_Sum9;
      } else {
        rtb_Sum9_0 = 0U;
      }
    } else {
      rtb_Sum9_0 = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S4>/Data Type Conversion' */

    /* S-Function (arduinoservowrite_sfcn): '<S4>/Servo Write' */
    MW_servoWrite(untitled_P.ServoWrite_p1_h, rtb_Sum9_0);
  }

  /* Sum: '<S1>/Sum7' incorporates:
   *  Constant: '<Root>/Constant1'
   *  TransferFcn: '<S1>/Transfer Fcn3'
   */
  rtb_Sum9 = untitled_P.TransferFcn3_C * untitled_X.TransferFcn3_CSTATE +
    untitled_P.Constant1_Value;
  if (rtmIsMajorTimeStep(untitled_M)) {
    /* DataTypeConversion: '<S5>/Data Type Conversion' */
    if (rtb_Sum9 < 256.0) {
      if (rtb_Sum9 >= 0.0) {
        rtb_Sum9_0 = (uint8_T)rtb_Sum9;
      } else {
        rtb_Sum9_0 = 0U;
      }
    } else {
      rtb_Sum9_0 = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S5>/Data Type Conversion' */

    /* S-Function (arduinoservowrite_sfcn): '<S5>/Servo Write' */
    MW_servoWrite(untitled_P.ServoWrite_p1_hc, rtb_Sum9_0);
  }

  /* Sum: '<S1>/Sum9' incorporates:
   *  Constant: '<Root>/Constant1'
   *  TransferFcn: '<S1>/Transfer Fcn4'
   */
  rtb_Sum9 = untitled_P.TransferFcn4_C * untitled_X.TransferFcn4_CSTATE +
    untitled_P.Constant1_Value;
  if (rtmIsMajorTimeStep(untitled_M)) {
    /* DataTypeConversion: '<S6>/Data Type Conversion' */
    if (rtb_Sum9 < 256.0) {
      if (rtb_Sum9 >= 0.0) {
        rtb_Sum9_0 = (uint8_T)rtb_Sum9;
      } else {
        rtb_Sum9_0 = 0U;
      }
    } else {
      rtb_Sum9_0 = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S6>/Data Type Conversion' */

    /* S-Function (arduinoservowrite_sfcn): '<S6>/Servo Write' */
    MW_servoWrite(untitled_P.ServoWrite_p1_e, rtb_Sum9_0);

    /* DataTypeConversion: '<S7>/Data Type Conversion' incorporates:
     *  Constant: '<Root>/Constant1'
     */
    if (untitled_P.Constant1_Value < 256.0) {
      if (untitled_P.Constant1_Value >= 0.0) {
        rtb_Sum9_0 = (uint8_T)untitled_P.Constant1_Value;
      } else {
        rtb_Sum9_0 = 0U;
      }
    } else {
      rtb_Sum9_0 = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S7>/Data Type Conversion' */

    /* S-Function (arduinoservowrite_sfcn): '<S7>/Servo Write' */
    MW_servoWrite(untitled_P.ServoWrite_p1_eh, rtb_Sum9_0);

    /* Sum: '<S1>/Sum' incorporates:
     *  Constant: '<Root>/Constant'
     *  Constant: '<Root>/Constant1'
     */
    untitled_B.Sum = untitled_P.Constant_Value - untitled_P.Constant1_Value;

    /* Sum: '<S1>/Sum2' incorporates:
     *  Constant: '<Root>/Constant'
     *  Constant: '<Root>/Constant1'
     */
    untitled_B.Sum2 = untitled_P.Constant_Value - untitled_P.Constant1_Value;

    /* Sum: '<S1>/Sum4' incorporates:
     *  Constant: '<Root>/Constant'
     *  Constant: '<Root>/Constant1'
     */
    untitled_B.Sum4 = untitled_P.Constant_Value - untitled_P.Constant1_Value;

    /* Sum: '<S1>/Sum6' incorporates:
     *  Constant: '<Root>/Constant'
     *  Constant: '<Root>/Constant1'
     */
    untitled_B.Sum6 = untitled_P.Constant_Value - untitled_P.Constant1_Value;

    /* Sum: '<S1>/Sum8' incorporates:
     *  Constant: '<Root>/Constant'
     *  Constant: '<Root>/Constant1'
     */
    untitled_B.Sum8 = untitled_P.Constant_Value - untitled_P.Constant1_Value;
  }

  if (rtmIsMajorTimeStep(untitled_M)) {
    rt_ertODEUpdateContinuousStates(&untitled_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     */
    ++untitled_M->Timing.clockTick0;
    untitled_M->Timing.t[0] = rtsiGetSolverStopTime(&untitled_M->solverInfo);

    {
      /* Update absolute timer for sample time: [0.2s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.2, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       */
      untitled_M->Timing.clockTick1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void untitled_derivatives(void)
{
  XDot_untitled_T *_rtXdot;
  _rtXdot = ((XDot_untitled_T *) untitled_M->derivs);

  /* Derivatives for TransferFcn: '<S1>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE = 0.0;
  _rtXdot->TransferFcn_CSTATE += untitled_P.TransferFcn_A *
    untitled_X.TransferFcn_CSTATE;
  _rtXdot->TransferFcn_CSTATE += untitled_B.Sum;

  /* Derivatives for TransferFcn: '<S1>/Transfer Fcn1' */
  _rtXdot->TransferFcn1_CSTATE = 0.0;
  _rtXdot->TransferFcn1_CSTATE += untitled_P.TransferFcn1_A *
    untitled_X.TransferFcn1_CSTATE;
  _rtXdot->TransferFcn1_CSTATE += untitled_B.Sum2;

  /* Derivatives for TransferFcn: '<S1>/Transfer Fcn2' */
  _rtXdot->TransferFcn2_CSTATE = 0.0;
  _rtXdot->TransferFcn2_CSTATE += untitled_P.TransferFcn2_A *
    untitled_X.TransferFcn2_CSTATE;
  _rtXdot->TransferFcn2_CSTATE += untitled_B.Sum4;

  /* Derivatives for TransferFcn: '<S1>/Transfer Fcn3' */
  _rtXdot->TransferFcn3_CSTATE = 0.0;
  _rtXdot->TransferFcn3_CSTATE += untitled_P.TransferFcn3_A *
    untitled_X.TransferFcn3_CSTATE;
  _rtXdot->TransferFcn3_CSTATE += untitled_B.Sum6;

  /* Derivatives for TransferFcn: '<S1>/Transfer Fcn4' */
  _rtXdot->TransferFcn4_CSTATE = 0.0;
  _rtXdot->TransferFcn4_CSTATE += untitled_P.TransferFcn4_A *
    untitled_X.TransferFcn4_CSTATE;
  _rtXdot->TransferFcn4_CSTATE += untitled_B.Sum8;
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)untitled_M, 0,
                sizeof(RT_MODEL_untitled_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&untitled_M->solverInfo,
                          &untitled_M->Timing.simTimeStep);
    rtsiSetTPtr(&untitled_M->solverInfo, &rtmGetTPtr(untitled_M));
    rtsiSetStepSizePtr(&untitled_M->solverInfo, &untitled_M->Timing.stepSize0);
    rtsiSetdXPtr(&untitled_M->solverInfo, &untitled_M->derivs);
    rtsiSetContStatesPtr(&untitled_M->solverInfo, (real_T **)
                         &untitled_M->contStates);
    rtsiSetNumContStatesPtr(&untitled_M->solverInfo,
      &untitled_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&untitled_M->solverInfo,
      &untitled_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&untitled_M->solverInfo,
      &untitled_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&untitled_M->solverInfo,
      &untitled_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&untitled_M->solverInfo, (&rtmGetErrorStatus
      (untitled_M)));
    rtsiSetRTModelPtr(&untitled_M->solverInfo, untitled_M);
  }

  rtsiSetSimTimeStep(&untitled_M->solverInfo, MAJOR_TIME_STEP);
  untitled_M->intgData.y = untitled_M->odeY;
  untitled_M->intgData.f[0] = untitled_M->odeF[0];
  untitled_M->intgData.f[1] = untitled_M->odeF[1];
  untitled_M->intgData.f[2] = untitled_M->odeF[2];
  untitled_M->contStates = ((X_untitled_T *) &untitled_X);
  rtsiSetSolverData(&untitled_M->solverInfo, (void *)&untitled_M->intgData);
  rtsiSetSolverName(&untitled_M->solverInfo,"ode3");
  rtmSetTPtr(untitled_M, &untitled_M->Timing.tArray[0]);
  untitled_M->Timing.stepSize0 = 0.2;

  /* block I/O */
  (void) memset(((void *) &untitled_B), 0,
                sizeof(B_untitled_T));

  /* states (continuous) */
  {
    (void) memset((void *)&untitled_X, 0,
                  sizeof(X_untitled_T));
  }

  /* Start for S-Function (arduinoservowrite_sfcn): '<S2>/Servo Write' */
  MW_servoAttach(untitled_P.ServoWrite_p1, untitled_P.ServoWrite_pinNumber);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S3>/Servo Write' */
  MW_servoAttach(untitled_P.ServoWrite_p1_b, untitled_P.ServoWrite_pinNumber_j);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S4>/Servo Write' */
  MW_servoAttach(untitled_P.ServoWrite_p1_h, untitled_P.ServoWrite_pinNumber_n);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S5>/Servo Write' */
  MW_servoAttach(untitled_P.ServoWrite_p1_hc, untitled_P.ServoWrite_pinNumber_m);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S6>/Servo Write' */
  MW_servoAttach(untitled_P.ServoWrite_p1_e, untitled_P.ServoWrite_pinNumber_a);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S7>/Servo Write' */
  MW_servoAttach(untitled_P.ServoWrite_p1_eh, untitled_P.ServoWrite_pinNumber_h);

  /* InitializeConditions for TransferFcn: '<S1>/Transfer Fcn' */
  untitled_X.TransferFcn_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S1>/Transfer Fcn1' */
  untitled_X.TransferFcn1_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S1>/Transfer Fcn2' */
  untitled_X.TransferFcn2_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S1>/Transfer Fcn3' */
  untitled_X.TransferFcn3_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S1>/Transfer Fcn4' */
  untitled_X.TransferFcn4_CSTATE = 0.0;
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
