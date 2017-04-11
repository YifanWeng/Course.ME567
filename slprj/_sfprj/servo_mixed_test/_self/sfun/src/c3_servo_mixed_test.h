#ifndef __c3_servo_mixed_test_h__
#define __c3_servo_mixed_test_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc3_servo_mixed_testInstanceStruct
#define typedef_SFc3_servo_mixed_testInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c3_dataWrittenToVector[6];
  uint8_T c3_doSetSimStateSideEffects;
  const mxArray *c3_setSimStateSideEffectsInfo;
  int32_T *c3_sfEvent;
  uint8_T *c3_is_active_c3_servo_mixed_test;
  uint8_T *c3_is_c3_servo_mixed_test;
  real_T *c3_s;
  real_T *c3_t;
  real_T *c3_t2;
  real_T *c3_t1;
  real_T *c3_dt;
  real_T *c3_t3;
  real_T *c3_s_old;
} SFc3_servo_mixed_testInstanceStruct;

#endif                                 /*typedef_SFc3_servo_mixed_testInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c3_servo_mixed_test_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c3_servo_mixed_test_get_check_sum(mxArray *plhs[]);
extern void c3_servo_mixed_test_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
