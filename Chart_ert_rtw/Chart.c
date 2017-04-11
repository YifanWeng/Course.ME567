/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Chart.c
 *
 * Code generated for Simulink model 'Chart'.
 *
 * Model version                  : 1.45
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Apr 11 00:22:33 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "Chart.h"

/* Named constants for Chart: '<Root>/Chart' */
#define IN_End                         ((uint8_T)1U)
#define IN_Grabber                     ((uint8_T)2U)
#define IN_Iniital                     ((uint8_T)3U)
#define IN_Reach                       ((uint8_T)4U)

/* Block signals and states (auto storage) */
DW rtDW;

/* External inputs (root inport signals with auto storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with auto storage) */
ExtY rtY;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void Chart_step(void)
{
  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/t'
   */
  /* Gateway: Chart */
  /* During: Chart */
  if (rtDW.is_active_c3_Chart == 0U) {
    /* Entry: Chart */
    rtDW.is_active_c3_Chart = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:2' */
    rtDW.is_c3_Chart = IN_Iniital;

    /* Outport: '<Root>/s' */
    /* Entry 'Iniital': '<S1>:1' */
    /* '<S1>:1:1' s = 0; */
    rtY.s = 0.0;

    /* '<S1>:1:1' t1=t; */
    rtDW.t1 = rtU.t;

    /* Outport: '<Root>/dt' incorporates:
     *  Inport: '<Root>/t'
     */
    /* '<S1>:1:1' dt=0; */
    rtY.dt = 0.0;
  } else {
    switch (rtDW.is_c3_Chart) {
     case IN_End:
      /* Outport: '<Root>/dt' incorporates:
       *  Inport: '<Root>/t'
       */
      /* During 'End': '<S1>:6' */
      /* '<S1>:6:2' dt = t-t4; */
      rtY.dt = rtU.t - rtDW.t4;
      break;

     case IN_Grabber:
      /* During 'Grabber': '<S1>:21' */
      /* '<S1>:7:1' sf_internal_predicateOutput = ... */
      /* '<S1>:7:1' dt>=5; */
      if (rtY.dt >= 5.0) {
        /* Transition: '<S1>:7' */
        rtDW.is_c3_Chart = IN_End;

        /* Outport: '<Root>/s' */
        /* Entry 'End': '<S1>:6' */
        /* '<S1>:6:1' s=3; */
        rtY.s = 3.0;

        /* Outport: '<Root>/s_old' */
        /* '<S1>:6:1' s_old = 2; */
        rtY.s_old = 2.0;

        /* '<S1>:6:1' t4=t; */
        rtDW.t4 = rtU.t;

        /* Outport: '<Root>/dt' incorporates:
         *  Inport: '<Root>/t'
         */
        /* '<S1>:6:1' dt = 0; */
        rtY.dt = 0.0;
      } else {
        /* Outport: '<Root>/dt' incorporates:
         *  Inport: '<Root>/t'
         */
        /* '<S1>:21:2' dt = t-t3; */
        rtY.dt = rtU.t - rtDW.t3;
      }
      break;

     case IN_Iniital:
      /* During 'Iniital': '<S1>:1' */
      /* '<S1>:4:1' sf_internal_predicateOutput = ... */
      /* '<S1>:4:1' dt>=6; */
      if (rtY.dt >= 6.0) {
        /* Transition: '<S1>:4' */
        rtDW.is_c3_Chart = IN_Reach;

        /* Outport: '<Root>/s' */
        /* Entry 'Reach': '<S1>:3' */
        /* '<S1>:3:1' s=1; */
        rtY.s = 1.0;

        /* Outport: '<Root>/s_old' */
        /* '<S1>:3:1' s_old = 0; */
        rtY.s_old = 0.0;

        /* '<S1>:3:1' t2=t; */
        rtDW.t2 = rtU.t;

        /* Outport: '<Root>/dt' incorporates:
         *  Inport: '<Root>/t'
         */
        /* '<S1>:3:1' dt = 0; */
        rtY.dt = 0.0;
      } else {
        /* Outport: '<Root>/dt' incorporates:
         *  Inport: '<Root>/t'
         */
        /* '<S1>:1:1' dt = t-t1; */
        rtY.dt = rtU.t - rtDW.t1;
      }
      break;

     default:
      /* During 'Reach': '<S1>:3' */
      /* '<S1>:22:1' sf_internal_predicateOutput = ... */
      /* '<S1>:22:1' dt>=5; */
      if (rtY.dt >= 5.0) {
        /* Transition: '<S1>:22' */
        rtDW.is_c3_Chart = IN_Grabber;

        /* Outport: '<Root>/s' */
        /* Entry 'Grabber': '<S1>:21' */
        /* '<S1>:21:1' s=2; */
        rtY.s = 2.0;

        /* Outport: '<Root>/s_old' */
        /* '<S1>:21:1' s_old = 1; */
        rtY.s_old = 1.0;

        /* '<S1>:21:1' t3=t; */
        rtDW.t3 = rtU.t;

        /* Outport: '<Root>/dt' incorporates:
         *  Inport: '<Root>/t'
         */
        /* '<S1>:21:1' dt = 0; */
        rtY.dt = 0.0;
      } else {
        /* Outport: '<Root>/dt' incorporates:
         *  Inport: '<Root>/t'
         */
        /* '<S1>:3:2' dt = t-t2; */
        rtY.dt = rtU.t - rtDW.t2;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void Chart_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Chart_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
