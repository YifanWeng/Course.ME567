/*
 * Subsystem2_sid.h
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
 *
 * SOURCES: Subsystem2_sf.c
 */

/* statically allocated instance data for model: Subsystem2 */
{
  {
    /* Local SimStruct for the generated S-Function */
    static LocalS slS;
    LocalS *lS = &slS;
    ssSetUserData(rts, lS);

    /* block I/O */
    {
      static B_Subsystem2_T sfcnB;
      void *b = (real_T *) &sfcnB;
      ssSetLocalBlockIO(rts, b);
      (void) memset(b, 0,
                    sizeof(B_Subsystem2_T));
    }

    /* model checksums */
    ssSetChecksumVal(rts, 0, 782503069U);
    ssSetChecksumVal(rts, 1, 3382051406U);
    ssSetChecksumVal(rts, 2, 3688785383U);
    ssSetChecksumVal(rts, 3, 885282890U);
  }
}
