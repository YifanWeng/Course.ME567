/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'servo_mixed_test/Subsystem1/Simulation/Solver Configuration'.
 */

#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"

PmfMessageId servo_mixed_test_e8940bbe_1_checkDynamics(const double *state,
  const double *input, const double *inputDot, const double *inputDdot, const
  double *discreteState, double *result, NeuDiagnosticManager *neDiagMgr)
{
  (void) state;
  (void) input;
  (void) inputDot;
  (void) inputDdot;
  (void) discreteState;
  (void) neDiagMgr;
  result[0] = 0.0;
  return NULL;
}
