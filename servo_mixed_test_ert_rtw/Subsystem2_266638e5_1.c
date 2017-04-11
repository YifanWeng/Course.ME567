/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Subsystem2/Subsystem2/Subsystem1/Simulation/Solver Configuration'.
 */

#include "ne_std.h"
#include "pm_default_allocator.h"
#include "ne_dae.h"
#include "ne_solverparameters.h"
#include "sm_ssci_NeDaePrivateData.h"

NeDae *sm_ssci_constructDae(NeDaePrivateData *smData);
void Subsystem2_266638e5_1_NeDaePrivateData_create(NeDaePrivateData *smData);
void Subsystem2_266638e5_1_dae(
  NeDae **dae,
  const NeModelParameters *modelParams,
  const NeSolverParameters *solverParams,
  const McLinearAlgebra *linear_algebra_ptr)
{
  PmAllocator *alloc = pm_default_allocator();
  NeDaePrivateData *smData =
    (NeDaePrivateData *) alloc->mCallocFcn(alloc, sizeof(NeDaePrivateData), 1);
  (void) modelParams;
  (void) solverParams;
  (void) linear_algebra_ptr;
  Subsystem2_266638e5_1_NeDaePrivateData_create(smData);
  *dae = sm_ssci_constructDae(smData);
}
