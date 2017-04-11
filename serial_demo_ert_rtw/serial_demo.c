/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: serial_demo.c
 *
 * Code generated for Simulink model 'serial_demo'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Apr 10 23:23:19 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "serial_demo.h"
#include "serial_demo_private.h"
#define serial_demo_PinNumber          (13.0)

/* Block states (auto storage) */
DW_serial_demo_T serial_demo_DW;

/* Real-time model */
RT_MODEL_serial_demo_T serial_demo_M_;
RT_MODEL_serial_demo_T *const serial_demo_M = &serial_demo_M_;

/* Model step function */
void serial_demo_step(void)
{
  uint8_T rtb_Switch[6];
  uint8_T rtb_SerialReceive_o1;
  boolean_T rtb_LogicalOperator;
  int16_T rtb_SerialReceive_o2;
  real_T rtb_LogicalOperator_0;
  uint8_T rtb_LogicalOperator_1;

  /* S-Function (arduinoserialread_sfcn): '<Root>/Serial Receive' */
  Serial_read(serial_demo_P.SerialReceive_p1, serial_demo_P.SerialReceive_p2,
              &rtb_SerialReceive_o1, &rtb_SerialReceive_o2);

  /* Logic: '<Root>/Logical Operator' incorporates:
   *  Constant: '<Root>/Constant'
   */
  rtb_LogicalOperator = ((rtb_SerialReceive_o2 != 0) &&
    (serial_demo_P.Constant_Value != 0.0));

  /* Switch: '<Root>/Switch1' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Constant2'
   */
  if (rtb_LogicalOperator) {
    rtb_LogicalOperator_0 = serial_demo_P.Constant1_Value;
  } else {
    rtb_LogicalOperator_0 = serial_demo_P.Constant2_Value;
  }

  /* End of Switch: '<Root>/Switch1' */

  /* DataTypeConversion: '<S1>/Data Type Conversion' */
  if (rtb_LogicalOperator_0 < 256.0) {
    if (rtb_LogicalOperator_0 >= 0.0) {
      rtb_LogicalOperator_1 = (uint8_T)rtb_LogicalOperator_0;
    } else {
      rtb_LogicalOperator_1 = 0U;
    }
  } else {
    rtb_LogicalOperator_1 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S1>/Data Type Conversion' */

  /* Start for MATLABSystem: '<S1>/Digital Output' incorporates:
   *  MATLABSystem: '<S1>/Digital Output'
   */
  writeDigitalPin((uint8_T)serial_demo_PinNumber, rtb_LogicalOperator_1);

  /* S-Function (arduinoservoread_sfcn): '<S2>/Standard Servo Read' */
  MW_servoRead(serial_demo_P.StandardServoRead_p1);

  /* S-Function (arduinoservoread_sfcn): '<S2>/Standard Servo Read1' */
  MW_servoRead(serial_demo_P.StandardServoRead1_p1);

  /* S-Function (arduinoservoread_sfcn): '<S2>/Standard Servo Read2' */
  MW_servoRead(serial_demo_P.StandardServoRead2_p1);

  /* S-Function (arduinoservoread_sfcn): '<S2>/Standard Servo Read3' */
  MW_servoRead(serial_demo_P.StandardServoRead3_p1);

  /* S-Function (arduinoservoread_sfcn): '<S2>/Standard Servo Read4' */
  MW_servoRead(serial_demo_P.StandardServoRead4_p1);

  /* S-Function (arduinoservoread_sfcn): '<S2>/Standard Servo Read5' */
  MW_servoRead(serial_demo_P.StandardServoRead5_p1);

  /* Switch: '<Root>/Switch' */
  for (rtb_SerialReceive_o2 = 0; rtb_SerialReceive_o2 < 6; rtb_SerialReceive_o2
       ++) {
    if (rtb_LogicalOperator) {
      rtb_Switch[rtb_SerialReceive_o2] = rtb_SerialReceive_o1;
    } else {
      rtb_Switch[rtb_SerialReceive_o2] = 0U;
    }
  }

  /* End of Switch: '<Root>/Switch' */

  /* S-Function (arduinoservowrite_sfcn): '<S3>/Servo Write' */
  MW_servoWrite(serial_demo_P.ServoWrite_p1, rtb_Switch[0]);

  /* S-Function (arduinoservowrite_sfcn): '<S4>/Servo Write' */
  MW_servoWrite(serial_demo_P.ServoWrite_p1_e, rtb_Switch[1]);

  /* S-Function (arduinoservowrite_sfcn): '<S5>/Servo Write' */
  MW_servoWrite(serial_demo_P.ServoWrite_p1_eh, rtb_Switch[2]);

  /* S-Function (arduinoservowrite_sfcn): '<S6>/Servo Write' */
  MW_servoWrite(serial_demo_P.ServoWrite_p1_j, rtb_Switch[3]);

  /* S-Function (arduinoservowrite_sfcn): '<S7>/Servo Write' */
  MW_servoWrite(serial_demo_P.ServoWrite_p1_l, rtb_Switch[4]);

  /* S-Function (arduinoservowrite_sfcn): '<S8>/Servo Write' */
  MW_servoWrite(serial_demo_P.ServoWrite_p1_c, rtb_Switch[5]);
}

/* Model initialize function */
void serial_demo_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(serial_demo_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&serial_demo_DW, 0,
                sizeof(DW_serial_demo_T));

  /* Start for MATLABSystem: '<S1>/Digital Output' */
  serial_demo_DW.obj.isInitialized = 0L;
  serial_demo_DW.obj.isInitialized = 1L;
  digitalIOSetup((uint8_T)serial_demo_PinNumber, true);

  /* Start for S-Function (arduinoservoread_sfcn): '<S2>/Standard Servo Read' */
  MW_servoAttach(serial_demo_P.StandardServoRead_p1,
                 serial_demo_P.StandardServoRead_p2);

  /* Start for S-Function (arduinoservoread_sfcn): '<S2>/Standard Servo Read1' */
  MW_servoAttach(serial_demo_P.StandardServoRead1_p1,
                 serial_demo_P.StandardServoRead1_p2);

  /* Start for S-Function (arduinoservoread_sfcn): '<S2>/Standard Servo Read2' */
  MW_servoAttach(serial_demo_P.StandardServoRead2_p1,
                 serial_demo_P.StandardServoRead2_p2);

  /* Start for S-Function (arduinoservoread_sfcn): '<S2>/Standard Servo Read3' */
  MW_servoAttach(serial_demo_P.StandardServoRead3_p1,
                 serial_demo_P.StandardServoRead3_p2);

  /* Start for S-Function (arduinoservoread_sfcn): '<S2>/Standard Servo Read4' */
  MW_servoAttach(serial_demo_P.StandardServoRead4_p1,
                 serial_demo_P.StandardServoRead4_p2);

  /* Start for S-Function (arduinoservoread_sfcn): '<S2>/Standard Servo Read5' */
  MW_servoAttach(serial_demo_P.StandardServoRead5_p1,
                 serial_demo_P.StandardServoRead5_p2);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S3>/Servo Write' */
  MW_servoAttach(serial_demo_P.ServoWrite_p1, serial_demo_P.ServoWrite_pinNumber);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S4>/Servo Write' */
  MW_servoAttach(serial_demo_P.ServoWrite_p1_e,
                 serial_demo_P.ServoWrite_pinNumber_a);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S5>/Servo Write' */
  MW_servoAttach(serial_demo_P.ServoWrite_p1_eh,
                 serial_demo_P.ServoWrite_pinNumber_h);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S6>/Servo Write' */
  MW_servoAttach(serial_demo_P.ServoWrite_p1_j,
                 serial_demo_P.ServoWrite_pinNumber_j);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S7>/Servo Write' */
  MW_servoAttach(serial_demo_P.ServoWrite_p1_l,
                 serial_demo_P.ServoWrite_pinNumber_d);

  /* Start for S-Function (arduinoservowrite_sfcn): '<S8>/Servo Write' */
  MW_servoAttach(serial_demo_P.ServoWrite_p1_c,
                 serial_demo_P.ServoWrite_pinNumber_m);
}

/* Model terminate function */
void serial_demo_terminate(void)
{
  /* Start for MATLABSystem: '<S1>/Digital Output' incorporates:
   *  Terminate for MATLABSystem: '<S1>/Digital Output'
   */
  if (serial_demo_DW.obj.isInitialized == 1L) {
    serial_demo_DW.obj.isInitialized = 2L;
  }

  /* End of Start for MATLABSystem: '<S1>/Digital Output' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
