/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Simulation/Simulation/Solver Configuration'.
 */

#include "pm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "pm_default_allocator.h"
#include "sm_ssci_NeDaePrivateData.h"
#include "sm_CTarget.h"

PmfMessageId sm_ssci_recordRunTimeError(
  const char *errorId, const char *errorMsg, NeuDiagnosticManager* mgr);

#define pm_allocator_alloc(_allocator, _m, _n) ((_allocator)->mCallocFcn((_allocator), (_m), (_n)))
#define PM_ALLOCATE_ARRAY(_name, _type, _size, _allocator)\
 _name = (_type *) pm_allocator_alloc(_allocator, sizeof(_type), _size)
#define pm_size_to_int(_size)          ((int32_T) (_size))

PmIntVector *pm_create_int_vector(size_t, PmAllocator *);
int_T pm_create_int_vector_fields (PmIntVector *, size_t, PmAllocator *);
int_T pm_create_real_vector_fields(PmRealVector *, size_t, PmAllocator *);
int_T pm_create_char_vector_fields(PmCharVector *, size_t, PmAllocator *);
int_T pm_create_bool_vector_fields(PmBoolVector *, size_t, PmAllocator *);
void pm_rv_equals_rv(const PmRealVector *, const PmRealVector *);
void sm_ssci_setupLoggerFcn_codeGen(const NeDae *dae,
  NeLoggerBuilder *neLoggerBuilder);
int32_T sm_ssci_logFcn_codeGen(const NeDae *dae,
  const NeSystemInput *systemInput,
  PmRealVector *output);
PmfMessageId Simulation_f1e64dd8_1_deriv(
  const double *,
  const double *, const double *, const double *,
  const double *,
  double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Simulation_f1e64dd8_1_checkDynamics(
  const double *,
  const double *, const double *, const double *,
  const double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Simulation_f1e64dd8_1_outputDyn(
  const double *,
  const double *, const double *, const double *,
  const double *,
  double *,
  double *,
  int *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Simulation_f1e64dd8_1_outputKin(
  const double *,
  const double *, const double *, const double *,
  const double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId Simulation_f1e64dd8_1_output (
  const double *,
  const double *, const double *, const double *,
  const double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
void Simulation_f1e64dd8_1_resetStateVector(const void *mech, double
  *stateVector);
void Simulation_f1e64dd8_1_initializeTrackedAngleState(
  const void *mech,
  const double *motionData,
  double *stateVector,
  void *neDiagMgr);
void Simulation_f1e64dd8_1_computeDiscreteState(const void *mech, double
  *stateVector);
void Simulation_f1e64dd8_1_adjustPosition(
  const void *mech,
  const double *dofDeltas,
  double *stateVector);
void Simulation_f1e64dd8_1_perturbState(
  const void *mech,
  size_t stageIdx,
  size_t primitiveIdx,
  double magnitude,
  boolean_T doPerturbVelocity,
  double *stateVector);
void Simulation_f1e64dd8_1_computeDofBlendMatrix(
  const void *mech,
  size_t stageIdx,
  size_t primitiveIdx,
  const double *stateVector,
  int partialType,
  double *matrix);
void Simulation_f1e64dd8_1_projectPartiallyTargetedPos(
  const void *mech,
  size_t stageIdx,
  size_t primitiveIdx,
  const double *origStateVector,
  int partialType,
  double *stateVector);
void Simulation_f1e64dd8_1_propagateMotion(
  const void *mech,
  const double *stateVector,
  double *motionData);
size_t Simulation_f1e64dd8_1_computeAssemblyError(
  const void *mech,
  size_t constraintIdx,
  const double *stateVector,
  const double *motionData,
  double *error);
size_t Simulation_f1e64dd8_1_computeAssemblyJacobian(
  const void *mech,
  size_t constraintIdx,
  boolean_T forVelocitySatisfaction,
  const double *stateVector,
  const double *motionData,
  double *J);
size_t Simulation_f1e64dd8_1_computeFullAssemblyJacobian(
  const void *mech,
  const double *stateVector,
  const double *motionData,
  double *J);
int Simulation_f1e64dd8_1_isInKinematicSingularity(
  const void *mech,
  size_t constraintIdx,
  const double *motionData);
PmfMessageId Simulation_f1e64dd8_1_convertStateVector(
  const void *asmMech,
  const void *simMech,
  const double *asmStateVector,
  double *simStateVector,
  void *neDiagMgr);
void Simulation_f1e64dd8_1_constructStateVector(
  const void *mech,
  const double *solverStateVector,
  const double *u,
  const double *uDot,
  const double *discreteStateVector,
  double *fullStateVector);
void Simulation_f1e64dd8_1_extractSolverStateVector(
  const void *mech,
  const double *fullStateVector,
  double *solverStateVector);
int Simulation_f1e64dd8_1_isPositionViolation(
  const void *mech,
  const double *stateVector);
int Simulation_f1e64dd8_1_isVelocityViolation(
  const void *mech,
  const double *stateVector);
PmfMessageId Simulation_f1e64dd8_1_projectStateSim(
  const void *mech,
  const double *inputVector,
  double *stateVector,
  void *neDiagMgr);
void Simulation_f1e64dd8_1_computeConstraintError(
  const void *mech,
  const double *stateVector,
  double *error);
PmfMessageId Simulation_f1e64dd8_1_assemble(const double *u, double *udot,
  double *x,
  NeuDiagnosticManager *neDiagMgr)
{
  (void) x;
  (void) u;
  (void) udot;
  (void) neDiagMgr;
  return NULL;
}

static
  PmfMessageId dae_cg_deriv_method(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  double errorResult = 0.0;
  if (smData->mCachedDerivativesAvailable)
    memcpy(daeMethodOutput->mXP0.mX, smData->mCachedDerivatives.mX,
           0 * sizeof(real_T));
  else
    errorId = Simulation_f1e64dd8_1_deriv(
      systemInput->mX.mX,
      systemInput->mU.mX,
      systemInput->mU.mX + 7,
      systemInput->mV.mX + 7,
      systemInput->mD.mX,
      daeMethodOutput->mXP0.mX,
      &errorResult,
      neDiagMgr);
  return errorId;
}

static
  PmfMessageId dae_cg_output_method(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  PmfMessageId errorId = NULL;
  (void) dae;
  (void) systemInput;
  (void) daeMethodOutput;
  (void) neDiagMgr;
  return errorId;
}

static
  PmfMessageId dae_cg_project_solve(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeuDiagnosticManager *neDiagMgr)
{
  NeDaePrivateData *smData = dae->mPrivateData;
  return
    sm_core_projectState(
    false,
    &smData->mSimulationDelegate,
    systemInput->mU.mX,
    systemInput->mU.mX + 7,
    systemInput->mD.mX,
    systemInput->mX.mX, neDiagMgr);
}

static
  PmfMessageId dae_cg_check_solve(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeuDiagnosticManager *neDiagMgr)
{
  NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  if (smData->mNumConstraintEqns > 0)
    errorId = sm_core_projectState(
      false,
      &smData->mSimulationDelegate,
      systemInput->mU.mX,
      systemInput->mU.mX + 7,
      systemInput->mD.mX,
      systemInput->mX.mX, neDiagMgr);
  if (errorId == NULL && smData->mDoCheckDynamics) {
    double result = 0.0;
    errorId = Simulation_f1e64dd8_1_checkDynamics(
      systemInput->mX.mX,
      systemInput->mU.mX,
      systemInput->mU.mX + 7,
      systemInput->mV.mX + 7,
      systemInput->mD.mX,
      &result, neDiagMgr);
  }

  return errorId;
}

static
  PmfMessageId dae_cg_projectMaybe_solve(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeuDiagnosticManager *neDiagMgr)
{
  NeDaePrivateData *smData = dae->mPrivateData;
  return
    sm_core_projectState(
    true,
    &smData->mSimulationDelegate,
    systemInput->mU.mX,
    systemInput->mU.mX + 7,
    systemInput->mD.mX,
    systemInput->mX.mX, neDiagMgr);
}

static
  PmfMessageId dae_cg_assemble_solve(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeuDiagnosticManager *neDiagMgr)
{
  NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  if (smData->mNumInputMotionPrimitives == 0) {
    pm_rv_equals_rv(&systemInput->mX, &dae->mPrivateData->mInitialStateVector);
    pm_rv_equals_rv(&systemInput->mD, &dae->mPrivateData->mDiscreteStateVector);
  } else {
    size_t i;
    const size_t numTargets = 28;
    unsigned int asmStatus = 0;
    double *assemblyFullStateVector = smData->mAssemblyFullStateVector.mX;
    double *simulationFullStateVector = smData->mSimulationFullStateVector.mX;
    const double *u = systemInput->mU.mX;
    const double *uDot = u + smData->mInputVectorSize;
    CTarget *target = smData->mTargets + smData->mNumInternalTargets;
    for (i = 0; i < smData->mNumInputMotionPrimitives; ++i) {
      const size_t inputOffset = smData->mMotionInputOffsets.mX[i];
      (target++)->mValue[0] = u [inputOffset];
      (target++)->mValue[0] = uDot[inputOffset];
    }

    errorId = sm_core_computeStateVector(
      &smData->mAssemblyDelegate, numTargets, smData->mTargets,
      assemblyFullStateVector, neDiagMgr);
    if (errorId != NULL)
      return errorId;
    asmStatus = sm_core_checkAssembly(
      &smData->mAssemblyDelegate, numTargets, smData->mTargets,
      assemblyFullStateVector, NULL, NULL, NULL);
    if (asmStatus != 1) {
      return sm_ssci_recordRunTimeError(
        "sm:compiler:messages:simulationErrors:AssemblyFailure",
        asmStatus == 2 ?
        "Model not assembled due to a position violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
        :
        (asmStatus == 3 ?
         "Model not assembled due to a velocity violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
         :
         "Model not assembled due to a singularity violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."),
        neDiagMgr);
    }

    errorId =
      (*smData->mAssemblyDelegate.mConvertStateVector)(
      NULL, NULL, assemblyFullStateVector, simulationFullStateVector,
      neDiagMgr);
    for (i = 0; i < smData->mStateVectorSize; ++i)
      systemInput->mX.mX[i] = simulationFullStateVector
        [smData->mStateVectorMap.mX[i]];
    memcpy(systemInput->mD.mX,
           simulationFullStateVector +
           smData->mFullStateVectorSize - smData->mDiscreteStateSize,
           smData->mDiscreteStateSize * sizeof(double));
  }

  return errorId;
}

typedef struct {
  size_t first;
  size_t second;
} SizePair;

static void checkMemAllocStatus(int_T status)
{
  (void) status;
}

static
  PmCharVector cStringToCharVector(const char *src)
{
  const size_t n = strlen(src);
  PmCharVector charVect;
  const int_T status =
    pm_create_char_vector_fields(&charVect, n + 1, pm_default_allocator());
  checkMemAllocStatus(status);
  strcpy(charVect.mX, src);
  return charVect;
}

static
  void initBasicAttributes(NeDaePrivateData *smData)
{
  size_t i;
  smData->mStateVectorSize = 0;
  smData->mFullStateVectorSize = 14;
  smData->mDiscreteStateSize = 0;
  smData->mInputVectorSize = 7;
  smData->mOutputVectorSize = 0;
  smData->mNumConstraintEqns = 0;
  smData->mDoCheckDynamics = false;
  for (i = 0; i < 4; ++i)
    smData->mChecksum[i] = 0;
}

static
  void initStateVector(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  const double *initialStateVector = NULL;
  const double *discreteStateVector = NULL;
  const int32_T *stateVectorMap = NULL;
  const CTarget targets[28] = {
    { 0, 87, 0, false, 0, 0, "1", false, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 87, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 88, 0, false, 0, 0, "1", false, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 88, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 89, 0, false, 0, 0, "1", false, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 89, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 90, 0, false, 0, 0, "1", false, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 90, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 91, 0, false, 0, 0, "1", false, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 91, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 92, 0, false, 0, 0, "1", false, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 92, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 93, 0, false, 0, 0, "1", false, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 93, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 87, 0, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 87, 0, false, 0, 3, "", true, false, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 88, 0, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 88, 0, false, 0, 3, "", true, false, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 89, 0, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 89, 0, false, 0, 3, "", true, false, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 90, 0, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 90, 0, false, 0, 3, "", true, false, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 91, 0, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 91, 0, false, 0, 3, "", true, false, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 92, 0, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 92, 0, false, 0, 3, "", true, false, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 93, 0, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 93, 0, false, 0, 3, "", true, false, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } }
  };

  const size_t numTargets = 28;
  int_T status;
  size_t i;
  status = pm_create_real_vector_fields(
    &smData->mAssemblyFullStateVector, 14, alloc);
  checkMemAllocStatus(status);
  status = pm_create_real_vector_fields(
    &smData->mSimulationFullStateVector, 14, alloc);
  checkMemAllocStatus(status);
  status = pm_create_real_vector_fields(
    &smData->mInitialStateVector, 0, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mInitialStateVector.mX, initialStateVector,
         0 * sizeof(real_T));
  status = pm_create_real_vector_fields(
    &smData->mDiscreteStateVector, 0, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mDiscreteStateVector.mX, discreteStateVector,
         0 * sizeof(real_T));
  status = pm_create_int_vector_fields(
    &smData->mStateVectorMap, smData->mStateVectorSize, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mStateVectorMap.mX, stateVectorMap,
         smData->mStateVectorSize * sizeof(int32_T));
  smData->mNumInternalTargets = 14;
  smData->mNumInputMotionPrimitives = 7;
  PM_ALLOCATE_ARRAY(smData->mTargets, CTarget, numTargets, alloc);
  for (i = 0; i < numTargets; ++i)
    sm_compiler_CTarget_copy(targets + i, smData->mTargets + i);
}

static
  void initVariables(NeDaePrivateData *smData)
{
  const char **varFullPaths = NULL;
  const char **varObjects = NULL;
  smData->mNumVarScalars = 0;
  smData->mVarFullPaths = NULL;
  smData->mVarObjects = NULL;
  if (smData->mNumVarScalars > 0) {
    size_t s;
    PmAllocator *alloc = pm_default_allocator();
    PM_ALLOCATE_ARRAY(smData->mVarFullPaths, PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mVarObjects, PmCharVector, 0, alloc);
    for (s = 0; s < smData->mNumVarScalars; ++s) {
      smData->mVarFullPaths[s] = cStringToCharVector(varFullPaths[s]);
      smData->mVarObjects[s] = cStringToCharVector(varObjects[s]);
    }
  }
}

static
  void initIoInfoHelper(
  size_t n,
  const char *portPathsSource[],
  const char *unitsSource[],
  const SizePair dimensions[],
  boolean_T doInputs,
  NeDaePrivateData *smData)
{
  PmCharVector *portPaths = NULL;
  PmCharVector *units = NULL;
  NeDsIoInfo *infos = NULL;
  if (n > 0) {
    size_t s;
    PmAllocator *alloc = pm_default_allocator();
    PM_ALLOCATE_ARRAY(portPaths, PmCharVector, n, alloc);
    PM_ALLOCATE_ARRAY(units, PmCharVector, n, alloc);
    PM_ALLOCATE_ARRAY(infos, NeDsIoInfo, n, alloc);
    for (s = 0; s < n; ++s) {
      portPaths[s] = cStringToCharVector(portPathsSource[s]);
      units[s] = cStringToCharVector(unitsSource[s]);

      {
        NeDsIoInfo *info = infos + s;
        info->mName = info->mIdentifier = portPaths[s].mX;
        info->mM = dimensions[s].first;
        info->mN = dimensions[s].second;
        info->mUnit = units[s].mX;
      }
    }
  }

  if (doInputs) {
    smData->mNumInputs = n;
    smData->mInputPortPaths = portPaths;
    smData->mInputUnits = units;
    smData->mInputInfos = infos;
  } else {
    smData->mNumOutputs = n;
    smData->mOutputPortPaths = portPaths;
    smData->mOutputUnits = units;
    smData->mOutputInfos = infos;
  }
}

static
  void initIoInfo(NeDaePrivateData *smData)
{
  const char *inputPortPaths[7] = {
    "Simulation.Revolute_Joint1.qi",
    "Simulation.Revolute_Joint2.qi",
    "Simulation.Revolute_Joint3.qi",
    "Simulation.Revolute_Joint4.qi",
    "Simulation.Revolute_Joint5.qi",
    "Simulation.Revolute_Joint6.qi",
    "Simulation.Revolute_Joint7.qi"
  };

  const char *inputUnits[7] = {
    "rad",
    "rad",
    "rad",
    "rad",
    "rad",
    "rad",
    "rad"
  };

  const SizePair inputDimensions[7] = {
    { 1, 1 }, { 1, 1 }, { 1, 1 }, { 1, 1 },

    { 1, 1 }, { 1, 1 }, { 1, 1 }
  };

  const char **outputPortPaths = NULL;
  const char **outputUnits = NULL;
  const SizePair *outputDimensions = NULL;
  initIoInfoHelper(7, inputPortPaths, inputUnits, inputDimensions,
                   true, smData);
  initIoInfoHelper(0, outputPortPaths, outputUnits, outputDimensions,
                   false, smData);
}

static
  void initInputDerivs(NeDaePrivateData *smData)
{
  const int32_T numInputDerivs[7] = {
    2, 2, 2, 2, 2, 2, 2
  };

  PmAllocator *alloc = pm_default_allocator();
  const int_T status = pm_create_int_vector_fields(
    &smData->mNumInputDerivs, smData->mInputVectorSize, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mNumInputDerivs.mX, numInputDerivs,
         7 * sizeof(int32_T));
  smData->mInputOrder = 2;
}

static
  void initDirectFeedthrough(NeDaePrivateData *smData)
{
  const boolean_T directFeedthroughVector[7] = {
    true, true, true, true, true, true, true
  };

  const boolean_T *directFeedthroughMatrix = NULL;
  PmAllocator *alloc = pm_default_allocator();

  {
    const int_T status = pm_create_bool_vector_fields(
      &smData->mDirectFeedthroughVector, 7, alloc);
    checkMemAllocStatus(status);
    memcpy(smData->mDirectFeedthroughVector.mX, directFeedthroughVector,
           7 * sizeof(boolean_T));
  }

  {
    const int_T status = pm_create_bool_vector_fields(
      &smData->mDirectFeedthroughMatrix, 0, alloc);
    checkMemAllocStatus(status);
    memcpy(smData->mDirectFeedthroughMatrix.mX, directFeedthroughMatrix,
           0 * sizeof(boolean_T));
  }
}

static
  void initOutputDerivProc(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  const int32_T *outputFunctionMap = NULL;
  smData->mOutputFunctionMap = pm_create_int_vector(0, alloc);
  memcpy(smData->mOutputFunctionMap->mX, outputFunctionMap,
         0 * sizeof(int32_T));
  smData->mNumOutputClasses = 0;
  smData->mHasKinematicOutputs = false;
  smData->mHasDynamicOutputs = false;
  smData->mIsOutputClass0Dynamic = false;
  smData->mDoComputeDynamicOutputs = false;
  smData->mCachedDerivativesAvailable = false;

  {
    size_t i = 0;
    const int_T status = pm_create_real_vector_fields(
      &smData->mCachedDerivatives, 0, pm_default_allocator());
    checkMemAllocStatus(status);
    for (i = 0; i < smData->mCachedDerivatives.mN; ++i)
      smData->mCachedDerivatives.mX[i] = 0.0;
  }
}

#if 0

static void initializeSizePairVector(const SmSizePair *data,
  SmSizePairVector *vector)
{
  const size_t n = sm_core_SmSizePairVector_size(vector);
  size_t i;
  for (i = 0; i < n; ++i, ++data)
    sm_core_SmSizePairVector_setValue(vector, i, data++);
}

#endif

static
  void initAssemblyDelegate(SmMechanismDelegate *delegate)
{
  const SmSizePair jointToStageIdx[7] = {
    { 87, 0 }, { 88, 1 }, { 89, 2 }, { 90, 3 }, { 91, 4 }, { 92, 5 },

    { 93, 6 }
  };

  const size_t primitiveIndices[7 + 1] = {
    0, 1, 2, 3, 4, 5, 6, 7
  };

  const SmSizePair stateOffsets[7] = {
    { 0, 1 }, { 2, 3 }, { 4, 5 }, { 6, 7 }, { 8, 9 }, { 10, 11 },

    { 12, 13 }
  };

  const SmSizePair dofOffsets[7] = {
    { 0, 1 }, { 1, 2 }, { 2, 3 }, { 3, 4 }, { 4, 5 }, { 5, 6 },

    { 6, 7 }
  };

  const size_t remodIndices[7] = {
    0, 2, 4, 6, 8, 10, 12
  };

  const size_t *equationsPerConstraint = NULL;
  const size_t dofToVelSlot[7] = {
    1, 3, 5, 7, 9, 11, 13
  };

  const size_t *constraintDofs = NULL;
  const size_t constraintDofOffsets[0 + 1] = {
    0
  };

  const size_t Jm = 0;
  const size_t Jn = 7;
  SmSizePair zeroSizePair;
  zeroSizePair.mFirst = zeroSizePair.mSecond = 0;
  delegate->mTargetStrengthFree = 0;
  delegate->mTargetStrengthSuggested = 1;
  delegate->mTargetStrengthDesired = 2;
  delegate->mTargetStrengthRequired = 3;
  delegate->mConsistencyTol = +1.000000000000000062e-09;
  delegate->mDof = 7;
  delegate->mStateSize = 14;
  delegate->mContinuousStateSize = 14;
  delegate->mNumStages = 7;
  delegate->mNumConstraints = 0;
  delegate->mNumAllConstraintEquations = 0;
  sm_core_SmSizePairVector_create(
    &delegate->mJointToStageIdx, delegate->mNumStages, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mJointToStageIdx),
         jointToStageIdx, delegate->mNumStages * sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mPrimitiveIndices, delegate->mNumStages + 1, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mPrimitiveIndices),
         primitiveIndices, (delegate->mNumStages + 1) * sizeof(size_t));
  sm_core_SmSizePairVector_create(
    &delegate->mStateOffsets, 7, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mStateOffsets),
         stateOffsets, 7 * sizeof(SmSizePair));
  sm_core_SmSizePairVector_create(
    &delegate->mDofOffsets, 7, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mDofOffsets),
         dofOffsets, 7 * sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mRemodIndices, 7, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mRemodIndices),
         remodIndices, 7 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mEquationsPerConstraint, delegate->mNumConstraints, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mEquationsPerConstraint),
         equationsPerConstraint, delegate->mNumConstraints * sizeof(size_t));
  sm_core_SmIntVector_create(
    &delegate->mRunTimeEnabledEquations,
    delegate->mNumAllConstraintEquations, 1);
  sm_core_SmSizeTVector_create(
    &delegate->mDofToVelSlot, delegate->mDof, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mDofToVelSlot),
         dofToVelSlot, delegate->mDof * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mConstraintDofs, 0, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mConstraintDofs),
         constraintDofs, 0 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mConstraintDofOffsets, delegate->mNumConstraints + 1, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mConstraintDofOffsets),
         constraintDofOffsets, (delegate->mNumConstraints + 1) * sizeof(size_t));
  sm_core_SmBoundedSet_create(&delegate->mPosRequired, 7);
  sm_core_SmBoundedSet_create(&delegate->mPosDesired, 7);
  sm_core_SmBoundedSet_create(&delegate->mPosSuggested, 7);
  sm_core_SmBoundedSet_create(&delegate->mPosFree, 7);
  sm_core_SmBoundedSet_create(&delegate->mPosNonRequired, 7);
  sm_core_SmBoundedSet_create(&delegate->mPosSuggAndFree, 7);
  sm_core_SmBoundedSet_create(&delegate->mVelRequired, 7);
  sm_core_SmBoundedSet_create(&delegate->mVelDesired, 7);
  sm_core_SmBoundedSet_create(&delegate->mVelSuggested, 7);
  sm_core_SmBoundedSet_create(&delegate->mVelFree, 7);
  sm_core_SmBoundedSet_create(&delegate->mVelNonRequired, 7);
  sm_core_SmBoundedSet_create(&delegate->mVelSuggAndFree, 7);
  sm_core_SmBoundedSet_create(&delegate->mConstraintFilter, 0);
  sm_core_SmBoundedSet_create(&delegate->mActiveConstraints, 0);
  sm_core_SmBoundedSet_create(&delegate->mActiveDofs, 7);
  sm_core_SmBoundedSet_create(&delegate->mActiveDofs0, 7);
  sm_core_SmBoundedSet_create(&delegate->mNewConstraints, 0);
  sm_core_SmBoundedSet_create(&delegate->mNewDofs, 7);
  sm_core_SmBoundedSet_create(&delegate->mUnsatisfiedConstraints, 0);
  sm_core_SmSizeTVector_create(&delegate->mActiveConstraintsVect,
    0, 0);
  sm_core_SmSizeTVector_create(&delegate->mActiveDofsVect, 7, 0);
  sm_core_SmSizeTVector_create(&delegate->mFullDofToActiveDof, 7, 0);
  sm_core_SmSizePairVector_create(
    &delegate->mPartiallyPosTargetedPrims, 7, &zeroSizePair);
  sm_core_SmSizePairVector_create(
    &delegate->mPartiallyVelTargetedPrims, 7, &zeroSizePair);
  sm_core_SmSizeTVector_create(&delegate->mPosPartialTypes, 7, 0);
  sm_core_SmSizeTVector_create(&delegate->mVelPartialTypes, 7, 0);
  sm_core_SmSizeTVector_create(&delegate->mPartiallyActivePrims, 7, 0);
  sm_core_SmSizePairVector_create(
    &delegate->mBaseFrameVelOffsets, 0, &zeroSizePair);
  sm_core_SmSizePairVector_create(
    &delegate->mCvVelOffsets, 7, &zeroSizePair);
  sm_core_SmRealVector_create(&delegate->mInitialState, 14, 0.0);
  sm_core_SmRealVector_create(&delegate->mStartState, 14, 0.0);
  sm_core_SmRealVector_create(&delegate->mTestState, 14, 0.0);
  sm_core_SmRealVector_create(&delegate->mFullStateVector, 14, 0.0);
  sm_core_SmRealVector_create(&delegate->mJacobianRowMaj, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&delegate->mJacobian, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&delegate->mJacobianPrimSubmatrix, Jm * 6, 0.0);
  sm_core_SmRealVector_create(&delegate->mConstraintNonhomoTerms, Jm, 0.0);
  sm_core_SmRealVector_create(&delegate->mConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&delegate->mBestConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&delegate->mDeltas,
    Jn * (Jm <= Jn ? Jm : Jn), 0.0);
  sm_core_SmRealVector_create(&delegate->mSvdWork, 64, 0.0);
  sm_core_SmRealVector_create(
    &delegate->mLineSearchScaledDeltaVect, 7, 0.0);
  sm_core_SmRealVector_create(
    &delegate->mLineSearchTestStateVect, 14, 0.0);
  sm_core_SmRealVector_create(&delegate->mLineSearchErrorVect, Jm, 0.0);
  sm_core_SmRealVector_create(&delegate->mActiveDofVelsVect, 7, 0.0);
  sm_core_SmRealVector_create(&delegate->mVelSystemRhs, Jm, 0.0);
  sm_core_SmRealVector_create(&delegate->mMotionData, 91, 0.0);
  delegate->mResetStateVector = Simulation_f1e64dd8_1_resetStateVector;
  delegate->mInitializeTrackedAngleState =
    Simulation_f1e64dd8_1_initializeTrackedAngleState;
  delegate->mComputeDiscreteState = Simulation_f1e64dd8_1_computeDiscreteState;
  delegate->mAdjustPosition = Simulation_f1e64dd8_1_adjustPosition;
  delegate->mPerturbState = Simulation_f1e64dd8_1_perturbState;
  delegate->mComputeDofBlendMatrix = Simulation_f1e64dd8_1_computeDofBlendMatrix;
  delegate->mProjectPartiallyTargetedPos =
    Simulation_f1e64dd8_1_projectPartiallyTargetedPos;
  delegate->mPropagateMotion = Simulation_f1e64dd8_1_propagateMotion;
  delegate->mComputeAssemblyError = Simulation_f1e64dd8_1_computeAssemblyError;
  delegate->mComputeAssemblyJacobian =
    Simulation_f1e64dd8_1_computeAssemblyJacobian;
  delegate->mComputeFullAssemblyJacobian =
    Simulation_f1e64dd8_1_computeFullAssemblyJacobian;
  delegate->mIsInKinematicSingularity =
    Simulation_f1e64dd8_1_isInKinematicSingularity;
  delegate->mConvertStateVector = Simulation_f1e64dd8_1_convertStateVector;
  delegate->mConstructStateVector = Simulation_f1e64dd8_1_constructStateVector;
  delegate->mExtractSolverStateVector =
    Simulation_f1e64dd8_1_extractSolverStateVector;
  delegate->mIsPositionViolation = Simulation_f1e64dd8_1_isPositionViolation;
  delegate->mIsVelocityViolation = Simulation_f1e64dd8_1_isVelocityViolation;
  delegate->mProjectStateSim = Simulation_f1e64dd8_1_projectStateSim;
  delegate->mComputeConstraintError =
    Simulation_f1e64dd8_1_computeConstraintError;
  delegate->mMech = NULL;
}

static
  void initSimulationDelegate(SmMechanismDelegate *delegate)
{
  const SmSizePair jointToStageIdx[7] = {
    { 87, 0 }, { 88, 1 }, { 89, 2 }, { 90, 3 }, { 91, 4 }, { 92, 5 },

    { 93, 6 }
  };

  const size_t primitiveIndices[7 + 1] = {
    0, 1, 2, 3, 4, 5, 6, 7
  };

  const SmSizePair stateOffsets[7] = {
    { 0, 1 }, { 2, 3 }, { 4, 5 }, { 6, 7 }, { 8, 9 }, { 10, 11 },

    { 12, 13 }
  };

  const SmSizePair dofOffsets[7] = {
    { 0, 1 }, { 1, 2 }, { 2, 3 }, { 3, 4 }, { 4, 5 }, { 5, 6 },

    { 6, 7 }
  };

  const size_t remodIndices[7] = {
    0, 2, 4, 6, 8, 10, 12
  };

  const size_t *equationsPerConstraint = NULL;
  const size_t dofToVelSlot[7] = {
    1, 3, 5, 7, 9, 11, 13
  };

  const size_t *constraintDofs = NULL;
  const size_t constraintDofOffsets[0 + 1] = {
    0
  };

  const size_t Jm = 0;
  const size_t Jn = 7;
  SmSizePair zeroSizePair;
  zeroSizePair.mFirst = zeroSizePair.mSecond = 0;
  delegate->mTargetStrengthFree = 0;
  delegate->mTargetStrengthSuggested = 1;
  delegate->mTargetStrengthDesired = 2;
  delegate->mTargetStrengthRequired = 3;
  delegate->mConsistencyTol = +1.000000000000000062e-09;
  delegate->mDof = 7;
  delegate->mStateSize = 14;
  delegate->mContinuousStateSize = 14;
  delegate->mNumStages = 7;
  delegate->mNumConstraints = 0;
  delegate->mNumAllConstraintEquations = 0;
  sm_core_SmSizePairVector_create(
    &delegate->mJointToStageIdx, delegate->mNumStages, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mJointToStageIdx),
         jointToStageIdx, delegate->mNumStages * sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mPrimitiveIndices, delegate->mNumStages + 1, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mPrimitiveIndices),
         primitiveIndices, (delegate->mNumStages + 1) * sizeof(size_t));
  sm_core_SmSizePairVector_create(
    &delegate->mStateOffsets, 7, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mStateOffsets),
         stateOffsets, 7 * sizeof(SmSizePair));
  sm_core_SmSizePairVector_create(
    &delegate->mDofOffsets, 7, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mDofOffsets),
         dofOffsets, 7 * sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mRemodIndices, 7, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mRemodIndices),
         remodIndices, 7 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mEquationsPerConstraint, delegate->mNumConstraints, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mEquationsPerConstraint),
         equationsPerConstraint, delegate->mNumConstraints * sizeof(size_t));
  sm_core_SmIntVector_create(
    &delegate->mRunTimeEnabledEquations,
    delegate->mNumAllConstraintEquations, 1);
  sm_core_SmSizeTVector_create(
    &delegate->mDofToVelSlot, delegate->mDof, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mDofToVelSlot),
         dofToVelSlot, delegate->mDof * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mConstraintDofs, 0, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mConstraintDofs),
         constraintDofs, 0 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mConstraintDofOffsets, delegate->mNumConstraints + 1, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mConstraintDofOffsets),
         constraintDofOffsets, (delegate->mNumConstraints + 1) * sizeof(size_t));
  sm_core_SmBoundedSet_create(&delegate->mPosRequired, 7);
  sm_core_SmBoundedSet_create(&delegate->mPosDesired, 7);
  sm_core_SmBoundedSet_create(&delegate->mPosSuggested, 7);
  sm_core_SmBoundedSet_create(&delegate->mPosFree, 7);
  sm_core_SmBoundedSet_create(&delegate->mPosNonRequired, 7);
  sm_core_SmBoundedSet_create(&delegate->mPosSuggAndFree, 7);
  sm_core_SmBoundedSet_create(&delegate->mVelRequired, 7);
  sm_core_SmBoundedSet_create(&delegate->mVelDesired, 7);
  sm_core_SmBoundedSet_create(&delegate->mVelSuggested, 7);
  sm_core_SmBoundedSet_create(&delegate->mVelFree, 7);
  sm_core_SmBoundedSet_create(&delegate->mVelNonRequired, 7);
  sm_core_SmBoundedSet_create(&delegate->mVelSuggAndFree, 7);
  sm_core_SmBoundedSet_create(&delegate->mConstraintFilter, 0);
  sm_core_SmBoundedSet_create(&delegate->mActiveConstraints, 0);
  sm_core_SmBoundedSet_create(&delegate->mActiveDofs, 7);
  sm_core_SmBoundedSet_create(&delegate->mNewConstraints, 0);
  sm_core_SmBoundedSet_create(&delegate->mNewDofs, 7);
  sm_core_SmBoundedSet_create(&delegate->mUnsatisfiedConstraints, 0);
  sm_core_SmSizeTVector_create(&delegate->mActiveConstraintsVect,
    0, 0);
  sm_core_SmSizeTVector_create(&delegate->mActiveDofsVect, 7, 0);
  sm_core_SmSizePairVector_create(
    &delegate->mBaseFrameVelOffsets, 0, &zeroSizePair);
  sm_core_SmRealVector_create(&delegate->mInitialState, 14, 0.0);
  sm_core_SmRealVector_create(&delegate->mStartState, 14, 0.0);
  sm_core_SmRealVector_create(&delegate->mTestState, 14, 0.0);
  sm_core_SmRealVector_create(&delegate->mFullStateVector, 14, 0.0);
  sm_core_SmRealVector_create(&delegate->mJacobianRowMaj, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&delegate->mJacobian, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&delegate->mConstraintNonhomoTerms, Jm, 0.0);
  sm_core_SmRealVector_create(&delegate->mConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&delegate->mBestConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&delegate->mDeltas,
    Jn * (Jm <= Jn ? Jm : Jn), 0.0);
  sm_core_SmRealVector_create(&delegate->mSvdWork, 64, 0.0);
  sm_core_SmRealVector_create(
    &delegate->mLineSearchScaledDeltaVect, 7, 0.0);
  sm_core_SmRealVector_create(
    &delegate->mLineSearchTestStateVect, 14, 0.0);
  sm_core_SmRealVector_create(&delegate->mLineSearchErrorVect, Jm, 0.0);
  sm_core_SmRealVector_create(&delegate->mActiveDofVelsVect, 7, 0.0);
  sm_core_SmRealVector_create(&delegate->mVelSystemRhs, Jm, 0.0);
  sm_core_SmRealVector_create(&delegate->mMotionData, 91, 0.0);
  delegate->mResetStateVector = Simulation_f1e64dd8_1_resetStateVector;
  delegate->mInitializeTrackedAngleState =
    Simulation_f1e64dd8_1_initializeTrackedAngleState;
  delegate->mComputeDiscreteState = Simulation_f1e64dd8_1_computeDiscreteState;
  delegate->mAdjustPosition = Simulation_f1e64dd8_1_adjustPosition;
  delegate->mPerturbState = Simulation_f1e64dd8_1_perturbState;
  delegate->mPropagateMotion = Simulation_f1e64dd8_1_propagateMotion;
  delegate->mComputeAssemblyError = Simulation_f1e64dd8_1_computeAssemblyError;
  delegate->mComputeAssemblyJacobian =
    Simulation_f1e64dd8_1_computeAssemblyJacobian;
  delegate->mComputeFullAssemblyJacobian =
    Simulation_f1e64dd8_1_computeFullAssemblyJacobian;
  delegate->mIsInKinematicSingularity =
    Simulation_f1e64dd8_1_isInKinematicSingularity;
  delegate->mConvertStateVector = Simulation_f1e64dd8_1_convertStateVector;
  delegate->mConstructStateVector = Simulation_f1e64dd8_1_constructStateVector;
  delegate->mExtractSolverStateVector =
    Simulation_f1e64dd8_1_extractSolverStateVector;
  delegate->mIsPositionViolation = Simulation_f1e64dd8_1_isPositionViolation;
  delegate->mIsVelocityViolation = Simulation_f1e64dd8_1_isVelocityViolation;
  delegate->mProjectStateSim = Simulation_f1e64dd8_1_projectStateSim;
  delegate->mComputeConstraintError =
    Simulation_f1e64dd8_1_computeConstraintError;
  delegate->mMech = NULL;
}

static
  void initMechanismDelegates(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  const int32_T motionInputOffsets[7] = {
    0, 1, 2, 3, 4, 5, 6
  };

  int_T status = 0;
  initAssemblyDelegate(&smData->mAssemblyDelegate);
  initSimulationDelegate(&smData->mSimulationDelegate);
  status = pm_create_int_vector_fields(
    &smData->mMotionInputOffsets, smData->mNumInputMotionPrimitives, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mMotionInputOffsets.mX, motionInputOffsets,
         7 * sizeof(int32_T));
}

static
  void initComputationFcnPtrs(NeDaePrivateData *smData)
{
  smData->mDerivativeFcn = dae_cg_deriv_method;
  smData->mOutputFcn = dae_cg_output_method;
  smData->mProjectionFcn = dae_cg_project_solve;
  smData->mProjectionMaybeFcn = dae_cg_projectMaybe_solve;
  smData->mCheckFcn =
    (smData->mStateVectorSize == 0) ? dae_cg_check_solve : NULL;
  smData->mAssemblyFcn = dae_cg_assemble_solve;
  smData->mSetupLoggerFcn = sm_ssci_setupLoggerFcn_codeGen;
  smData->mLogFcn = sm_ssci_logFcn_codeGen;
  smData->mResidualsFcn = NULL;
  smData->mLinearizeFcn = NULL;
  smData->mGenerateFcn = NULL;
}

static
  void initLiveLinkToSm(NeDaePrivateData *smData)
{
  smData->mLiveSmLink = NULL;
  smData->mLiveSmLink_destroy = NULL;
  smData->mLiveSmLink_copy = NULL;
}

void Simulation_f1e64dd8_1_NeDaePrivateData_create(NeDaePrivateData *smData)
{
  initBasicAttributes (smData);
  initStateVector (smData);
  initVariables (smData);
  initIoInfo (smData);
  initInputDerivs (smData);
  initDirectFeedthrough (smData);
  initOutputDerivProc (smData);
  initMechanismDelegates (smData);
  initComputationFcnPtrs (smData);
  initLiveLinkToSm (smData);
}
