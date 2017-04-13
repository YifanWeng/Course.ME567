/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: untitled.h
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

#ifndef RTW_HEADER_untitled_h_
#define RTW_HEADER_untitled_h_
#include <string.h>
#include <stddef.h>
#ifndef untitled_COMMON_INCLUDES_
# define untitled_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "arduino_servowrite_lct.h"
#endif                                 /* untitled_COMMON_INCLUDES_ */

#include "untitled_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->blkStateChange = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T Sum;                          /* '<S1>/Sum' */
  real_T Sum2;                         /* '<S1>/Sum2' */
  real_T Sum4;                         /* '<S1>/Sum4' */
  real_T Sum6;                         /* '<S1>/Sum6' */
  real_T Sum8;                         /* '<S1>/Sum8' */
} B_untitled_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T TransferFcn_CSTATE;           /* '<S1>/Transfer Fcn' */
  real_T TransferFcn1_CSTATE;          /* '<S1>/Transfer Fcn1' */
  real_T TransferFcn2_CSTATE;          /* '<S1>/Transfer Fcn2' */
  real_T TransferFcn3_CSTATE;          /* '<S1>/Transfer Fcn3' */
  real_T TransferFcn4_CSTATE;          /* '<S1>/Transfer Fcn4' */
} X_untitled_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T TransferFcn_CSTATE;           /* '<S1>/Transfer Fcn' */
  real_T TransferFcn1_CSTATE;          /* '<S1>/Transfer Fcn1' */
  real_T TransferFcn2_CSTATE;          /* '<S1>/Transfer Fcn2' */
  real_T TransferFcn3_CSTATE;          /* '<S1>/Transfer Fcn3' */
  real_T TransferFcn4_CSTATE;          /* '<S1>/Transfer Fcn4' */
} XDot_untitled_T;

/* State disabled  */
typedef struct {
  boolean_T TransferFcn_CSTATE;        /* '<S1>/Transfer Fcn' */
  boolean_T TransferFcn1_CSTATE;       /* '<S1>/Transfer Fcn1' */
  boolean_T TransferFcn2_CSTATE;       /* '<S1>/Transfer Fcn2' */
  boolean_T TransferFcn3_CSTATE;       /* '<S1>/Transfer Fcn3' */
  boolean_T TransferFcn4_CSTATE;       /* '<S1>/Transfer Fcn4' */
} XDis_untitled_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* Parameters (auto storage) */
struct P_untitled_T_ {
  uint32_T ServoWrite_pinNumber;       /* Mask Parameter: ServoWrite_pinNumber
                                        * Referenced by: '<S2>/Servo Write'
                                        */
  uint32_T ServoWrite_pinNumber_j;     /* Mask Parameter: ServoWrite_pinNumber_j
                                        * Referenced by: '<S3>/Servo Write'
                                        */
  uint32_T ServoWrite_pinNumber_n;     /* Mask Parameter: ServoWrite_pinNumber_n
                                        * Referenced by: '<S4>/Servo Write'
                                        */
  uint32_T ServoWrite_pinNumber_m;     /* Mask Parameter: ServoWrite_pinNumber_m
                                        * Referenced by: '<S5>/Servo Write'
                                        */
  uint32_T ServoWrite_pinNumber_a;     /* Mask Parameter: ServoWrite_pinNumber_a
                                        * Referenced by: '<S6>/Servo Write'
                                        */
  uint32_T ServoWrite_pinNumber_h;     /* Mask Parameter: ServoWrite_pinNumber_h
                                        * Referenced by: '<S7>/Servo Write'
                                        */
  real_T TransferFcn_A;                /* Computed Parameter: TransferFcn_A
                                        * Referenced by: '<S1>/Transfer Fcn'
                                        */
  real_T TransferFcn_C;                /* Computed Parameter: TransferFcn_C
                                        * Referenced by: '<S1>/Transfer Fcn'
                                        */
  real_T Constant1_Value;              /* Expression: 90
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T TransferFcn1_A;               /* Computed Parameter: TransferFcn1_A
                                        * Referenced by: '<S1>/Transfer Fcn1'
                                        */
  real_T TransferFcn1_C;               /* Computed Parameter: TransferFcn1_C
                                        * Referenced by: '<S1>/Transfer Fcn1'
                                        */
  real_T TransferFcn2_A;               /* Computed Parameter: TransferFcn2_A
                                        * Referenced by: '<S1>/Transfer Fcn2'
                                        */
  real_T TransferFcn2_C;               /* Computed Parameter: TransferFcn2_C
                                        * Referenced by: '<S1>/Transfer Fcn2'
                                        */
  real_T TransferFcn3_A;               /* Computed Parameter: TransferFcn3_A
                                        * Referenced by: '<S1>/Transfer Fcn3'
                                        */
  real_T TransferFcn3_C;               /* Computed Parameter: TransferFcn3_C
                                        * Referenced by: '<S1>/Transfer Fcn3'
                                        */
  real_T TransferFcn4_A;               /* Computed Parameter: TransferFcn4_A
                                        * Referenced by: '<S1>/Transfer Fcn4'
                                        */
  real_T TransferFcn4_C;               /* Computed Parameter: TransferFcn4_C
                                        * Referenced by: '<S1>/Transfer Fcn4'
                                        */
  real_T Constant_Value;               /* Expression: 100
                                        * Referenced by: '<Root>/Constant'
                                        */
  uint8_T ServoWrite_p1;               /* Computed Parameter: ServoWrite_p1
                                        * Referenced by: '<S2>/Servo Write'
                                        */
  uint8_T ServoWrite_p1_b;             /* Computed Parameter: ServoWrite_p1_b
                                        * Referenced by: '<S3>/Servo Write'
                                        */
  uint8_T ServoWrite_p1_h;             /* Computed Parameter: ServoWrite_p1_h
                                        * Referenced by: '<S4>/Servo Write'
                                        */
  uint8_T ServoWrite_p1_hc;            /* Computed Parameter: ServoWrite_p1_hc
                                        * Referenced by: '<S5>/Servo Write'
                                        */
  uint8_T ServoWrite_p1_e;             /* Computed Parameter: ServoWrite_p1_e
                                        * Referenced by: '<S6>/Servo Write'
                                        */
  uint8_T ServoWrite_p1_eh;            /* Computed Parameter: ServoWrite_p1_eh
                                        * Referenced by: '<S7>/Servo Write'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_untitled_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_untitled_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T blkStateChange;
  real_T odeY[5];
  real_T odeF[3][5];
  ODE3_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

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
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_untitled_T untitled_P;

/* Block signals (auto storage) */
extern B_untitled_T untitled_B;

/* Continuous states (auto storage) */
extern X_untitled_T untitled_X;

/* Model entry point functions */
extern void untitled_initialize(void);
extern void untitled_step(void);
extern void untitled_terminate(void);

/* Real-time Model object */
extern RT_MODEL_untitled_T *const untitled_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'untitled'
 * '<S1>'   : 'untitled/Delay'
 * '<S2>'   : 'untitled/Standard Servo Write'
 * '<S3>'   : 'untitled/Standard Servo Write1'
 * '<S4>'   : 'untitled/Standard Servo Write2'
 * '<S5>'   : 'untitled/Standard Servo Write3'
 * '<S6>'   : 'untitled/Standard Servo Write4'
 * '<S7>'   : 'untitled/Standard Servo Write5'
 */
#endif                                 /* RTW_HEADER_untitled_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
