/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Subsystem2/Subsystem2/Subsystem1/Simulation/Solver Configuration'.
 */

#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"

PmfMessageId Subsystem2_266638e5_1_deriv(const double *state, const double
  *input, const double *inputDot, const double *inputDdot, const double
  *discreteState, double *deriv, double *errorResult, NeuDiagnosticManager
  *neDiagMgr)
{
  (void) state;
  (void) input;
  (void) inputDot;
  (void) inputDdot;
  (void) discreteState;
  (void) deriv;
  (void) neDiagMgr;
  errorResult[0] = 0.0;
  return NULL;
}
