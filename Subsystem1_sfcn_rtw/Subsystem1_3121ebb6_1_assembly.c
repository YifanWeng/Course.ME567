/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Subsystem1/Subsystem1/Simulation/Solver Configuration'.
 */

#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"

void Subsystem1_3121ebb6_1_resetStateVector(const void *mech, double *state)
{
  double xx[1];
  (void) mech;
  xx[0] = 0.0;
  state[0] = xx[0];
  state[1] = xx[0];
  state[2] = xx[0];
  state[3] = xx[0];
  state[4] = xx[0];
  state[5] = xx[0];
  state[6] = xx[0];
  state[7] = xx[0];
  state[8] = xx[0];
  state[9] = xx[0];
  state[10] = xx[0];
  state[11] = xx[0];
  state[12] = xx[0];
  state[13] = xx[0];
}

void Subsystem1_3121ebb6_1_initializeTrackedAngleState(const void *mech, const
  double *motionData, double *state, void *neDiagMgr0)
{
  NeuDiagnosticManager *neDiagMgr = (NeuDiagnosticManager *) neDiagMgr0;
  (void) mech;
  (void) motionData;
  (void) state;
  (void) neDiagMgr;
}

void Subsystem1_3121ebb6_1_computeDiscreteState(const void *mech, double *state)
{
  (void) mech;
  (void) state;
}

void Subsystem1_3121ebb6_1_adjustPosition(const void *mech, const double
  *dofDeltas, double *state)
{
  (void) mech;
  state[0] = state[0] + dofDeltas[0];
  state[2] = state[2] + dofDeltas[1];
  state[4] = state[4] + dofDeltas[2];
  state[6] = state[6] + dofDeltas[3];
  state[8] = state[8] + dofDeltas[4];
  state[10] = state[10] + dofDeltas[5];
  state[12] = state[12] + dofDeltas[6];
}

static void perturbState_0_0(double mag, double *state)
{
  state[0] = state[0] + mag;
}

static void perturbState_0_0v(double mag, double *state)
{
  state[0] = state[0] + mag;
  state[1] = state[1] - 0.875 * mag;
}

static void perturbState_1_0(double mag, double *state)
{
  state[2] = state[2] + mag;
}

static void perturbState_1_0v(double mag, double *state)
{
  state[2] = state[2] + mag;
  state[3] = state[3] - 0.875 * mag;
}

static void perturbState_2_0(double mag, double *state)
{
  state[4] = state[4] + mag;
}

static void perturbState_2_0v(double mag, double *state)
{
  state[4] = state[4] + mag;
  state[5] = state[5] - 0.875 * mag;
}

static void perturbState_3_0(double mag, double *state)
{
  state[6] = state[6] + mag;
}

static void perturbState_3_0v(double mag, double *state)
{
  state[6] = state[6] + mag;
  state[7] = state[7] - 0.875 * mag;
}

static void perturbState_4_0(double mag, double *state)
{
  state[8] = state[8] + mag;
}

static void perturbState_4_0v(double mag, double *state)
{
  state[8] = state[8] + mag;
  state[9] = state[9] - 0.875 * mag;
}

static void perturbState_5_0(double mag, double *state)
{
  state[10] = state[10] + mag;
}

static void perturbState_5_0v(double mag, double *state)
{
  state[10] = state[10] + mag;
  state[11] = state[11] - 0.875 * mag;
}

static void perturbState_6_0(double mag, double *state)
{
  state[12] = state[12] + mag;
}

static void perturbState_6_0v(double mag, double *state)
{
  state[12] = state[12] + mag;
  state[13] = state[13] - 0.875 * mag;
}

void Subsystem1_3121ebb6_1_perturbState(const void *mech, size_t stageIdx,
  size_t primIdx, double mag, boolean_T doPerturbVelocity, double *state)
{
  (void) mech;
  (void) stageIdx;
  (void) primIdx;
  (void) mag;
  (void) doPerturbVelocity;
  (void) state;
  switch ((stageIdx * 6 + primIdx) * 2 + (doPerturbVelocity ? 1 : 0))
  {
   case 0:
    perturbState_0_0(mag, state);
    break;

   case 1:
    perturbState_0_0v(mag, state);
    break;

   case 12:
    perturbState_1_0(mag, state);
    break;

   case 13:
    perturbState_1_0v(mag, state);
    break;

   case 24:
    perturbState_2_0(mag, state);
    break;

   case 25:
    perturbState_2_0v(mag, state);
    break;

   case 36:
    perturbState_3_0(mag, state);
    break;

   case 37:
    perturbState_3_0v(mag, state);
    break;

   case 48:
    perturbState_4_0(mag, state);
    break;

   case 49:
    perturbState_4_0v(mag, state);
    break;

   case 60:
    perturbState_5_0(mag, state);
    break;

   case 61:
    perturbState_5_0v(mag, state);
    break;

   case 72:
    perturbState_6_0(mag, state);
    break;

   case 73:
    perturbState_6_0v(mag, state);
    break;
  }
}

void Subsystem1_3121ebb6_1_computeDofBlendMatrix(const void *mech, size_t
  stageIdx, size_t primIdx, const double *state, int partialType, double *matrix)
{
  (void) mech;
  (void) stageIdx;
  (void) primIdx;
  (void) state;
  (void) partialType;
  (void) matrix;
  switch ((stageIdx * 6 + primIdx))
  {
  }
}

void Subsystem1_3121ebb6_1_projectPartiallyTargetedPos(const void *mech, size_t
  stageIdx, size_t primIdx, const double *origState, int partialType, double
  *state)
{
  (void) mech;
  (void) stageIdx;
  (void) primIdx;
  (void) origState;
  (void) partialType;
  (void) state;
  switch ((stageIdx * 6 + primIdx))
  {
  }
}

void Subsystem1_3121ebb6_1_propagateMotion(const void *mech, const double *state,
  double *motionData)
{
  double xx[94];
  (void) mech;
  xx[0] = 0.9996134925822675;
  xx[1] = 0.5;
  xx[2] = xx[1] * state[0];
  xx[3] = cos(xx[2]);
  xx[4] = xx[0] * xx[3];
  xx[6] = 0.05557942520325758;
  xx[7] = sin(xx[2]);
  xx[2] = xx[6] * xx[7];
  xx[8] = 0.0278004576847403;
  xx[9] = 0.9984542691050379;
  xx[10] = xx[9] * xx[7];
  xx[7] = xx[0] * xx[2] - xx[8] * xx[10];
  xx[11] = xx[8] * xx[3];
  xx[3] = - xx[11];
  xx[12] = xx[0] * xx[10] + xx[8] * xx[2];
  xx[0] = - xx[12];
  xx[2] = 1.135849103076745e-3;
  xx[8] = 2.0;
  xx[13] = xx[7];
  xx[14] = xx[3];
  xx[15] = xx[0];
  xx[10] = 0.02623090888865897;
  xx[16] = xx[10] * xx[11];
  xx[17] = xx[10] * xx[7] - xx[2] * xx[12];
  xx[12] = xx[2] * xx[11];
  xx[18] = xx[16];
  xx[19] = xx[17];
  xx[20] = xx[12];
  pm_math_cross3(xx + 13, xx + 18, xx + 21);
  xx[11] = 0.70683347917049;
  xx[13] = xx[1] * state[2];
  xx[14] = cos(xx[13]);
  xx[18] = 0.01965789214896957;
  xx[19] = sin(xx[13]);
  xx[13] = xx[11] * xx[14] + xx[18] * xx[19];
  xx[15] = xx[11] * xx[19];
  xx[11] = xx[18] * xx[14];
  xx[14] = xx[15] - xx[11];
  xx[18] = xx[15] - xx[11];
  xx[11] = 0.03284537409976541;
  xx[15] = xx[11] * xx[18];
  xx[19] = xx[15] * xx[13];
  xx[20] = xx[11] * xx[14];
  xx[24] = xx[20] * xx[13];
  xx[26] = 0.01638068334290061 + xx[8] * (xx[19] + xx[24]);
  xx[25] = xx[8] * (xx[24] - xx[19]);
  xx[24] = 0.05974929248933442 - (xx[8] * (xx[20] * xx[14] + xx[15] * xx[18]) -
    xx[11]);
  xx[11] = xx[1] * state[4];
  xx[15] = cos(xx[11]);
  xx[19] = sin(xx[11]);
  xx[11] = 0.0;
  xx[20] = 0.02901181287557648;
  xx[27] = xx[20] * xx[19];
  xx[29] = xx[8] * xx[27] * xx[15];
  xx[28] = 0.07215462590023458 - (xx[8] * xx[27] * xx[19] - xx[20]);
  xx[20] = xx[1] * state[6];
  xx[27] = cos(xx[20]);
  xx[31] = sin(xx[20]);
  xx[20] = 0.01590544877626959;
  xx[32] = xx[20] * xx[31];
  xx[34] = xx[8] * xx[32] * xx[27];
  xx[33] = 0.06698818712442352 - (xx[8] * xx[32] * xx[31] - xx[20]);
  xx[20] = 0.7071067811865476;
  xx[32] = xx[1] * state[8];
  xx[36] = xx[20] * cos(xx[32]);
  xx[37] = - xx[36];
  xx[38] = xx[20] * sin(xx[32]);
  xx[20] = - xx[38];
  xx[32] = 0.0375;
  xx[39] = xx[32] * xx[38];
  xx[41] = xx[32] * xx[36];
  xx[43] = - (xx[8] * (xx[39] * xx[36] - xx[41] * xx[38]));
  xx[40] = xx[8] * (xx[41] * xx[36] + xx[39] * xx[38]);
  xx[36] = - xx[40];
  xx[39] = 0.01409455122373041 - (xx[40] - xx[32]);
  xx[40] = 0.9997932689993341;
  xx[41] = xx[1] * state[10];
  xx[42] = cos(xx[41]);
  xx[44] = 0.02033271412343695;
  xx[45] = sin(xx[41]);
  xx[47] = xx[40] * xx[42] + xx[44] * xx[45];
  xx[46] = xx[44] * xx[42] - xx[40] * xx[45];
  xx[41] = 0.06711702982444835;
  xx[42] = xx[41] * xx[46];
  xx[45] = 0.02121548491866883;
  xx[50] = xx[45] * xx[46];
  xx[52] = xx[8] * (xx[42] * xx[47] + xx[50] * xx[46]) - xx[45];
  xx[51] = xx[32] + xx[41] + xx[8] * (xx[50] * xx[47] - xx[42] * xx[46]);
  xx[42] = xx[1] * state[12];
  xx[1] = sin(xx[42]);
  xx[49] = cos(xx[42]);
  xx[42] = xx[44] * xx[1] - xx[40] * xx[49];
  xx[50] = xx[40] * xx[1] + xx[44] * xx[49];
  xx[1] = xx[41] * xx[50];
  xx[40] = xx[45] * xx[50];
  xx[44] = xx[45] + xx[8] * (xx[1] * xx[42] - xx[40] * xx[50]);
  xx[49] = xx[32] - (xx[8] * (xx[40] * xx[42] + xx[1] * xx[50]) - xx[41]);
  xx[1] = xx[6] * state[1];
  xx[32] = xx[9] * state[1];
  xx[40] = 3.238054525645817e-4 * state[1];
  xx[54] = xx[14];
  xx[55] = xx[18];
  xx[56] = xx[13];
  xx[57] = xx[32] * xx[18];
  xx[58] = xx[1] * xx[13] + xx[32] * xx[14];
  xx[60] = xx[1] * xx[18];
  xx[61] = xx[57];
  xx[62] = - xx[58];
  xx[63] = xx[60];
  pm_math_cross3(xx + 54, xx + 61, xx + 64);
  xx[54] = xx[8] * (xx[64] - xx[57] * xx[13]) - xx[1] + state[3];
  xx[55] = xx[8] * (xx[65] + xx[13] * xx[58]);
  xx[56] = xx[32] + xx[8] * (xx[66] - xx[60] * xx[13]);
  xx[57] = xx[13];
  xx[58] = xx[14];
  xx[59] = xx[18];
  xx[60] = xx[13];
  xx[61] = xx[25] * xx[32];
  xx[62] = xx[32] * xx[26] + xx[1] * xx[24] + xx[40];
  xx[63] = xx[1] * xx[25];
  pm_math_quatInverseXform(xx + 57, xx + 61, xx + 64);
  xx[57] = xx[65] - 0.03284537409976542 * state[3];
  xx[58] = xx[54] + state[5];
  xx[59] = xx[56] * xx[19];
  xx[61] = xx[55] * xx[19];
  xx[63] = xx[55] + xx[8] * (xx[59] * xx[15] - xx[61] * xx[19]);
  xx[60] = xx[56] - xx[8] * (xx[61] * xx[15] + xx[59] * xx[19]);
  xx[59] = xx[55] * xx[28] + xx[29] * xx[56] + xx[64];
  xx[61] = xx[57] - xx[28] * xx[54];
  xx[62] = xx[66] - xx[29] * xx[54];
  xx[30] = xx[62] * xx[19];
  xx[65] = xx[61] * xx[19];
  xx[67] = xx[61] + xx[8] * (xx[30] * xx[15] - xx[65] * xx[19]) -
    0.02901181287557649 * state[5];
  xx[61] = xx[62] - xx[8] * (xx[65] * xx[15] + xx[30] * xx[19]);
  xx[30] = xx[58] + state[7];
  xx[62] = xx[60] * xx[31];
  xx[65] = xx[63] * xx[31];
  xx[68] = xx[63] + xx[8] * (xx[62] * xx[27] - xx[65] * xx[31]);
  xx[69] = xx[60] - xx[8] * (xx[65] * xx[27] + xx[62] * xx[31]);
  xx[62] = xx[33] * xx[63] + xx[34] * xx[60] + xx[59];
  xx[65] = xx[67] - xx[33] * xx[58];
  xx[70] = xx[61] - xx[34] * xx[58];
  xx[35] = xx[70] * xx[31];
  xx[71] = xx[65] * xx[31];
  xx[73] = xx[65] + xx[8] * (xx[35] * xx[27] - xx[71] * xx[31]) -
    0.01590544877626959 * state[7];
  xx[65] = xx[70] - xx[8] * (xx[71] * xx[27] + xx[35] * xx[31]);
  xx[74] = xx[37];
  xx[75] = xx[37];
  xx[76] = xx[38];
  xx[77] = xx[20];
  xx[70] = xx[30];
  xx[71] = xx[68];
  xx[72] = xx[69];
  pm_math_quatInverseXform(xx + 74, xx + 70, xx + 78);
  xx[35] = xx[80] + state[9];
  xx[80] = xx[43];
  xx[81] = xx[36];
  xx[82] = xx[39];
  pm_math_cross3(xx + 70, xx + 80, xx + 83);
  xx[70] = xx[83] + xx[62];
  xx[71] = xx[84] + xx[73];
  xx[72] = xx[85] + xx[65];
  pm_math_quatInverseXform(xx + 74, xx + 70, xx + 80);
  xx[70] = xx[46] * xx[78];
  xx[72] = xx[35] * xx[46];
  xx[74] = xx[51] * xx[79] + xx[80];
  xx[75] = xx[74] * xx[46];
  xx[77] = xx[52] * xx[79] + xx[82];
  xx[83] = xx[77] * xx[46];
  xx[85] = xx[50] * xx[78];
  xx[87] = xx[35] * xx[50];
  xx[89] = xx[49] * xx[79] + xx[80];
  xx[90] = xx[89] * xx[50];
  xx[92] = xx[44] * xx[79] + xx[82];
  xx[93] = xx[92] * xx[50];
  motionData[0] = - xx[4];
  motionData[1] = xx[7];
  motionData[2] = xx[3];
  motionData[3] = xx[0];
  motionData[4] = - (xx[2] + xx[8] * (xx[21] - xx[16] * xx[4]));
  motionData[5] = - (xx[8] * (xx[22] - xx[4] * xx[17]));
  motionData[6] = - (xx[8] * (xx[23] - xx[4] * xx[12]) - xx[10]);
  motionData[7] = xx[13];
  motionData[8] = xx[14];
  motionData[9] = xx[18];
  motionData[10] = xx[13];
  motionData[11] = xx[26];
  motionData[12] = - xx[25];
  motionData[13] = xx[24];
  motionData[14] = xx[15];
  motionData[15] = xx[19];
  motionData[16] = xx[11];
  motionData[17] = xx[11];
  motionData[18] = xx[11];
  motionData[19] = - xx[29];
  motionData[20] = xx[28];
  motionData[21] = xx[27];
  motionData[22] = xx[31];
  motionData[23] = xx[11];
  motionData[24] = xx[11];
  motionData[25] = xx[11];
  motionData[26] = - xx[34];
  motionData[27] = xx[33];
  motionData[28] = xx[37];
  motionData[29] = xx[37];
  motionData[30] = xx[38];
  motionData[31] = xx[20];
  motionData[32] = xx[43];
  motionData[33] = xx[36];
  motionData[34] = xx[39];
  motionData[35] = - xx[47];
  motionData[36] = xx[11];
  motionData[37] = xx[46];
  motionData[38] = xx[11];
  motionData[39] = - xx[52];
  motionData[40] = xx[11];
  motionData[41] = xx[51];
  motionData[42] = xx[42];
  motionData[43] = xx[11];
  motionData[44] = - xx[50];
  motionData[45] = xx[11];
  motionData[46] = - xx[44];
  motionData[47] = xx[11];
  motionData[48] = xx[49];
  motionData[49] = - xx[1];
  motionData[50] = xx[11];
  motionData[51] = xx[32];
  motionData[52] = xx[11];
  motionData[53] = xx[40];
  motionData[54] = xx[11];
  motionData[55] = xx[54];
  motionData[56] = xx[55];
  motionData[57] = xx[56];
  motionData[58] = xx[64];
  motionData[59] = xx[57];
  motionData[60] = xx[66];
  motionData[61] = xx[58];
  motionData[62] = xx[63];
  motionData[63] = xx[60];
  motionData[64] = xx[59];
  motionData[65] = xx[67];
  motionData[66] = xx[61];
  motionData[67] = xx[30];
  motionData[68] = xx[68];
  motionData[69] = xx[69];
  motionData[70] = xx[62];
  motionData[71] = xx[73];
  motionData[72] = xx[65];
  motionData[73] = xx[78];
  motionData[74] = xx[79];
  motionData[75] = xx[35];
  motionData[76] = xx[80];
  motionData[77] = xx[81];
  motionData[78] = xx[82];
  motionData[79] = xx[78] - xx[8] * (xx[70] * xx[46] - xx[72] * xx[47]);
  motionData[80] = xx[79] + state[11];
  motionData[81] = xx[35] - xx[8] * (xx[70] * xx[47] + xx[72] * xx[46]);
  motionData[82] = xx[74] - xx[8] * (xx[75] * xx[46] - xx[83] * xx[47]) + xx[41]
    * state[11];
  motionData[83] = xx[81] - (xx[35] * xx[52] + xx[51] * xx[78]);
  motionData[84] = xx[77] - xx[8] * (xx[75] * xx[47] + xx[83] * xx[46]) - xx[45]
    * state[11];
  motionData[85] = xx[78] - xx[8] * (xx[85] * xx[50] - xx[87] * xx[42]);
  motionData[86] = xx[79] + state[13];
  motionData[87] = xx[35] - xx[8] * (xx[85] * xx[42] + xx[87] * xx[50]);
  motionData[88] = xx[89] - xx[8] * (xx[90] * xx[50] - xx[93] * xx[42]) + xx[41]
    * state[13];
  motionData[89] = xx[81] - (xx[35] * xx[44] + xx[49] * xx[78]);
  motionData[90] = xx[92] - xx[8] * (xx[90] * xx[42] + xx[93] * xx[50]) + xx[45]
    * state[13];
}

size_t Subsystem1_3121ebb6_1_computeAssemblyError(const void *mech, size_t
  constraintIdx, const double *state, const double *motionData, double *error)
{
  (void) mech;
  (void) state;
  (void) motionData;
  (void) error;
  (void) state;
  switch (constraintIdx)
  {
  }

  return 0;
}

size_t Subsystem1_3121ebb6_1_computeAssemblyJacobian(const void *mech, size_t
  constraintIdx, boolean_T forVelocitySatisfaction, const double *state, const
  double *motionData, double *J)
{
  (void) mech;
  (void) state;
  (void) forVelocitySatisfaction;
  (void) motionData;
  (void) J;
  switch (constraintIdx)
  {
  }

  return 0;
}

size_t Subsystem1_3121ebb6_1_computeFullAssemblyJacobian(const void *mech, const
  double *state, const double *motionData, double *J)
{
  (void) mech;
  (void) state;
  (void) motionData;
  (void) J;
  return 0;
}

int Subsystem1_3121ebb6_1_isInKinematicSingularity(const void *mech, size_t
  constraintIdx, const double *motionData)
{
  (void) mech;
  (void) motionData;
  switch (constraintIdx)
  {
  }

  return 0;
}

PmfMessageId Subsystem1_3121ebb6_1_convertStateVector(const void *asmMech, const
  void *simMech, const double *asmState, double *simState, void *neDiagMgr0)
{
  NeuDiagnosticManager *neDiagMgr = (NeuDiagnosticManager *) neDiagMgr0;
  (void) asmMech;
  (void) simMech;
  (void) neDiagMgr;
  simState[0] = asmState[0];
  simState[1] = asmState[1];
  simState[2] = asmState[2];
  simState[3] = asmState[3];
  simState[4] = asmState[4];
  simState[5] = asmState[5];
  simState[6] = asmState[6];
  simState[7] = asmState[7];
  simState[8] = asmState[8];
  simState[9] = asmState[9];
  simState[10] = asmState[10];
  simState[11] = asmState[11];
  simState[12] = asmState[12];
  simState[13] = asmState[13];
  return NULL;
}

void Subsystem1_3121ebb6_1_constructStateVector(const void *mech, const double
  *solverState, const double *u, const double *uDot, double *discreteState,
  double *fullState)
{
  (void) mech;
  (void) solverState;
  (void) discreteState;
  fullState[0] = u[0];
  fullState[1] = uDot[0];
  fullState[2] = u[1];
  fullState[3] = uDot[1];
  fullState[4] = u[2];
  fullState[5] = uDot[2];
  fullState[6] = u[3];
  fullState[7] = uDot[3];
  fullState[8] = u[4];
  fullState[9] = uDot[4];
  fullState[10] = u[5];
  fullState[11] = uDot[5];
  fullState[12] = u[6];
  fullState[13] = uDot[6];
}

void Subsystem1_3121ebb6_1_extractSolverStateVector(const void *mech, const
  double *fullState, double *solverState)
{
  (void) mech;
  (void) fullState;
  (void) solverState;
}

int Subsystem1_3121ebb6_1_isPositionViolation(const void *mech, const double
  *state)
{
  (void) mech;
  (void) state;
  return 0;
}

int Subsystem1_3121ebb6_1_isVelocityViolation(const void *mech, const double
  *state)
{
  (void) mech;
  (void) state;
  return 0;
}

PmfMessageId Subsystem1_3121ebb6_1_projectStateSim(const void *mech, const
  double *input, double *state, void *neDiagMgr0)
{
  NeuDiagnosticManager *neDiagMgr = (NeuDiagnosticManager *) neDiagMgr0;
  (void) mech;
  (void) input;
  (void) state;
  (void) neDiagMgr;
  return NULL;
}
