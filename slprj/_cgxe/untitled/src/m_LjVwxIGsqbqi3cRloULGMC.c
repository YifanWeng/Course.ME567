/* Include files */

#include "modelInterface.h"
#include "m_LjVwxIGsqbqi3cRloULGMC.h"

/* Type Definitions */

/* Named Constants */
#define portNumber                     (0.0)

/* Variable Declarations */

/* Variable Definitions */
static const mxArray *eml_mx;
static const mxArray *b_eml_mx;
static emlrtRSInfo emlrtRSI = { 1,     /* lineNo */
  "arduino_SerialWrite",               /* fcnName */
  "/root/Documents/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinobase/+codertarget/+arduinobase/+internal/ard"
  "uino_SerialWrite.p"                 /* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "/usr/local/MATLAB/R2016b/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "/usr/local/MATLAB/R2016b/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "/usr/local/MATLAB/R2016b/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 1,   /* lineNo */
  "Propagates",                        /* fcnName */
  "/usr/local/MATLAB/R2016b/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Propagates.p"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 1,   /* lineNo */
  "CustomIcon",                        /* fcnName */
  "/usr/local/MATLAB/R2016b/toolbox/matlab/system/+matlab/+system/+mixin/CustomIcon.p"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 43,  /* lineNo */
  "ExternalDependency",                /* fcnName */
  "/usr/local/MATLAB/R2016b/toolbox/shared/coder/coder/+coder/ExternalDependency.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 7,   /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 17,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 19,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 20,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 28,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 23,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 24,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "/usr/local/MATLAB/R2016b/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"/* pName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_LjVwxIGsqbqi3cRloULGMC *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_LjVwxIGsqbqi3cRloULGMC
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_LjVwxIGsqbqi3cRloULGMC
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_LjVwxIGsqbqi3cRloULGMC
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_LjVwxIGsqbqi3cRloULGMC
  *moduleInstance);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_LjVwxIGsqbqi3cRloULGMC *moduleInstance);
static codertarget_arduinobase_internal_arduino_SerialWrite emlrt_marshallIn(
  const emlrtStack *sp, const mxArray *b_sysobj, const char_T *identifier);
static codertarget_arduinobase_internal_arduino_SerialWrite b_emlrt_marshallIn(
  const emlrtStack *sp, const mxArray *u, const emlrtMsgIdentifier *parentId);
static int32_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, cell_wrap y[1]);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, uint32_T y[8]);
static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier);
static boolean_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void cgxe_mdl_set_sim_state(InstanceStruct_LjVwxIGsqbqi3cRloULGMC
  *moduleInstance, const mxArray *st);
static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static int32_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, uint32_T ret[8]);
static boolean_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void init_simulink_io_address(InstanceStruct_LjVwxIGsqbqi3cRloULGMC
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_LjVwxIGsqbqi3cRloULGMC *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emlrtStack b_st;
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  static const int32_T iv1[2] = { 0, 0 };

  codertarget_arduinobase_internal_arduino_SerialWrite *obj;
  emlrtStack c_st;
  emlrtStack d_st;
  int32_T i0;
  emlrtStack e_st;
  cell_wrap varSizes[1];
  const mxArray *y;
  char_T u[51];
  static char_T cv0[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static const int32_T iv2[2] = { 1, 51 };

  const mxArray *b_y;
  char_T b_u[5];
  static char_T cv1[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv3[2] = { 1, 5 };

  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  b_st.prev = &st;
  b_st.tls = st.tls;
  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  emlrtAssignP(&b_eml_mx, m0);
  m0 = emlrtCreateCharArray(2, iv1);
  emlrtAssignP(&eml_mx, m0);
  if (!moduleInstance->sysobj_not_empty) {
    b_st.site = &h_emlrtRSI;
    obj = &moduleInstance->sysobj;
    c_st.site = &emlrtRSI;
    d_st.site = &b_emlrtRSI;
    e_st.site = &c_emlrtRSI;
    d_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    e_st.site = &d_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &e_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &f_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &g_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
  }

  b_st.site = &i_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized != 0) {
    for (i0 = 0; i0 < 51; i0++) {
      u[i0] = cv0[i0];
    }

    y = NULL;
    m0 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&b_st, 51, m0, &u[0]);
    emlrtAssign(&y, m0);
    for (i0 = 0; i0 < 5; i0++) {
      b_u[i0] = cv1[i0];
    }

    b_y = NULL;
    m0 = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(&b_st, 5, m0, &b_u[0]);
    emlrtAssign(&b_y, m0);
    error(&b_st, message(&b_st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  obj->isInitialized = 1;
  c_st.site = &d_emlrtRSI;
  for (i0 = 0; i0 < 8; i0++) {
    varSizes[0].f1[i0] = 1U;
  }

  obj->inputVarSize[0] = varSizes[0];
}

static void cgxe_mdl_initialize(InstanceStruct_LjVwxIGsqbqi3cRloULGMC
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emlrtStack b_st;
  codertarget_arduinobase_internal_arduino_SerialWrite *obj;
  emlrtStack c_st;
  emlrtStack d_st;
  int32_T i1;
  emlrtStack e_st;
  boolean_T flag;
  const mxArray *y;
  char_T u[45];
  static char_T cv2[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m1;
  static const int32_T iv4[2] = { 1, 45 };

  const mxArray *b_y;
  char_T b_u[45];
  static const int32_T iv5[2] = { 1, 45 };

  const mxArray *c_y;
  char_T c_u[8];
  static char_T cv3[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  static const int32_T iv6[2] = { 1, 8 };

  const mxArray *d_y;
  char_T d_u[5];
  static char_T cv4[5] = { 'r', 'e', 's', 'e', 't' };

  static const int32_T iv7[2] = { 1, 5 };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    b_st.site = &h_emlrtRSI;
    obj = &moduleInstance->sysobj;
    c_st.site = &emlrtRSI;
    d_st.site = &b_emlrtRSI;
    e_st.site = &c_emlrtRSI;
    d_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    e_st.site = &d_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &e_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &f_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &g_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
  }

  b_st.site = &j_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i1 = 0; i1 < 45; i1++) {
      u[i1] = cv2[i1];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(&b_st, 45, m1, &u[0]);
    emlrtAssign(&y, m1);
    for (i1 = 0; i1 < 8; i1++) {
      c_u[i1] = cv3[i1];
    }

    c_y = NULL;
    m1 = emlrtCreateCharArray(2, iv6);
    emlrtInitCharArrayR2013a(&b_st, 8, m1, &c_u[0]);
    emlrtAssign(&c_y, m1);
    error(&b_st, message(&b_st, y, c_y, &emlrtMCI), &emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    b_st.site = &k_emlrtRSI;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i1 = 0; i1 < 45; i1++) {
        b_u[i1] = cv2[i1];
      }

      b_y = NULL;
      m1 = emlrtCreateCharArray(2, iv5);
      emlrtInitCharArrayR2013a(&b_st, 45, m1, &b_u[0]);
      emlrtAssign(&b_y, m1);
      for (i1 = 0; i1 < 5; i1++) {
        d_u[i1] = cv4[i1];
      }

      d_y = NULL;
      m1 = emlrtCreateCharArray(2, iv7);
      emlrtInitCharArrayR2013a(&b_st, 5, m1, &d_u[0]);
      emlrtAssign(&d_y, m1);
      error(&b_st, message(&b_st, b_y, d_y, &emlrtMCI), &emlrtMCI);
    }
  }
}

static void cgxe_mdl_outputs(InstanceStruct_LjVwxIGsqbqi3cRloULGMC
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  codertarget_arduinobase_internal_arduino_SerialWrite *obj;
  int32_T k;
  emlrtStack e_st;
  const mxArray *y;
  char_T u[45];
  static char_T cv5[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m2;
  static const int32_T iv8[2] = { 1, 45 };

  boolean_T exitg1;
  cell_wrap varSizes[1];
  const mxArray *b_y;
  char_T b_u[51];
  static char_T cv6[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static const int32_T iv9[2] = { 1, 51 };

  const mxArray *c_y;
  char_T c_u[4];
  static char_T cv7[4] = { 's', 't', 'e', 'p' };

  static const int32_T iv10[2] = { 1, 4 };

  const mxArray *d_y;
  char_T d_u[5];
  static char_T cv8[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv11[2] = { 1, 5 };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    b_st.site = &h_emlrtRSI;
    obj = &moduleInstance->sysobj;
    c_st.site = &emlrtRSI;
    d_st.site = &b_emlrtRSI;
    e_st.site = &c_emlrtRSI;
    d_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    e_st.site = &d_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &e_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &f_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &g_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
  }

  b_st.site = &l_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (k = 0; k < 45; k++) {
      u[k] = cv5[k];
    }

    y = NULL;
    m2 = emlrtCreateCharArray(2, iv8);
    emlrtInitCharArrayR2013a(&b_st, 45, m2, &u[0]);
    emlrtAssign(&y, m2);
    for (k = 0; k < 4; k++) {
      c_u[k] = cv7[k];
    }

    c_y = NULL;
    m2 = emlrtCreateCharArray(2, iv10);
    emlrtInitCharArrayR2013a(&b_st, 4, m2, &c_u[0]);
    emlrtAssign(&c_y, m2);
    error(&b_st, message(&b_st, y, c_y, &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    c_st.site = &d_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    if (obj->isInitialized != 0) {
      for (k = 0; k < 51; k++) {
        b_u[k] = cv6[k];
      }

      b_y = NULL;
      m2 = emlrtCreateCharArray(2, iv9);
      emlrtInitCharArrayR2013a(&d_st, 51, m2, &b_u[0]);
      emlrtAssign(&b_y, m2);
      for (k = 0; k < 5; k++) {
        d_u[k] = cv8[k];
      }

      d_y = NULL;
      m2 = emlrtCreateCharArray(2, iv11);
      emlrtInitCharArrayR2013a(&d_st, 5, m2, &d_u[0]);
      emlrtAssign(&d_y, m2);
      error(&d_st, message(&d_st, b_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    obj->isInitialized = 1;
    e_st.site = &d_emlrtRSI;
    for (k = 0; k < 8; k++) {
      varSizes[0].f1[k] = 1U;
    }

    obj->inputVarSize[0] = varSizes[0];
  }

  c_st.site = &d_emlrtRSI;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 8)) {
    if (obj->inputVarSize[0].f1[k] != 1U) {
      for (k = 0; k < 8; k++) {
        obj->inputVarSize[0].f1[k] = 1U;
      }

      exitg1 = true;
    } else {
      k++;
    }
  }
}

static void cgxe_mdl_update(InstanceStruct_LjVwxIGsqbqi3cRloULGMC
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_LjVwxIGsqbqi3cRloULGMC
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emlrtStack b_st;
  codertarget_arduinobase_internal_arduino_SerialWrite *obj;
  emlrtStack c_st;
  emlrtStack d_st;
  int32_T i2;
  emlrtStack e_st;
  boolean_T flag;
  const mxArray *y;
  char_T u[45];
  static char_T cv9[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m3;
  static const int32_T iv12[2] = { 1, 45 };

  const mxArray *b_y;
  char_T b_u[45];
  static const int32_T iv13[2] = { 1, 45 };

  const mxArray *c_y;
  char_T c_u[8];
  static char_T cv10[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  static const int32_T iv14[2] = { 1, 8 };

  const mxArray *d_y;
  char_T d_u[7];
  static char_T cv11[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  static const int32_T iv15[2] = { 1, 7 };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtDestroyArray(&b_eml_mx);
  emlrtDestroyArray(&eml_mx);
  if (!moduleInstance->sysobj_not_empty) {
    b_st.site = &h_emlrtRSI;
    obj = &moduleInstance->sysobj;
    c_st.site = &emlrtRSI;
    d_st.site = &b_emlrtRSI;
    e_st.site = &c_emlrtRSI;
    d_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    e_st.site = &d_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &e_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &f_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &g_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
  }

  b_st.site = &m_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i2 = 0; i2 < 45; i2++) {
      u[i2] = cv9[i2];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv12);
    emlrtInitCharArrayR2013a(&b_st, 45, m3, &u[0]);
    emlrtAssign(&y, m3);
    for (i2 = 0; i2 < 8; i2++) {
      c_u[i2] = cv10[i2];
    }

    c_y = NULL;
    m3 = emlrtCreateCharArray(2, iv14);
    emlrtInitCharArrayR2013a(&b_st, 8, m3, &c_u[0]);
    emlrtAssign(&c_y, m3);
    error(&b_st, message(&b_st, y, c_y, &emlrtMCI), &emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    b_st.site = &n_emlrtRSI;
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i2 = 0; i2 < 45; i2++) {
        b_u[i2] = cv9[i2];
      }

      b_y = NULL;
      m3 = emlrtCreateCharArray(2, iv13);
      emlrtInitCharArrayR2013a(&b_st, 45, m3, &b_u[0]);
      emlrtAssign(&b_y, m3);
      for (i2 = 0; i2 < 7; i2++) {
        d_u[i2] = cv11[i2];
      }

      d_y = NULL;
      m3 = emlrtCreateCharArray(2, iv15);
      emlrtInitCharArrayR2013a(&b_st, 7, m3, &d_u[0]);
      emlrtAssign(&d_y, m3);
      error(&b_st, message(&b_st, b_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
    }
  }
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_LjVwxIGsqbqi3cRloULGMC *moduleInstance)
{
  const mxArray *st;
  const mxArray *y;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m4;
  cell_wrap u[1];
  const mxArray *d_y;
  int32_T iv16[2];
  int32_T i3;
  const cell_wrap *r0;
  uint32_T b_u[8];
  const mxArray *e_y;
  static const int32_T iv17[2] = { 1, 8 };

  uint32_T *pData;
  int16_T i;
  const mxArray *f_y;
  st = NULL;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(2, 1));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  c_y = NULL;
  m4 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m4) = moduleInstance->sysobj.isInitialized;
  emlrtAssign(&c_y, m4);
  emlrtAddField(b_y, c_y, "isInitialized", 0);
  u[0] = moduleInstance->sysobj.inputVarSize[0];
  d_y = NULL;
  for (i3 = 0; i3 < 2; i3++) {
    iv16[i3] = 1;
  }

  emlrtAssign(&d_y, emlrtCreateStructArray(2, iv16, 0, NULL));
  r0 = &u[0];
  for (i3 = 0; i3 < 8; i3++) {
    b_u[i3] = r0->f1[i3];
  }

  e_y = NULL;
  m4 = emlrtCreateNumericArray(2, iv17, mxUINT32_CLASS, mxREAL);
  pData = (uint32_T *)mxGetData(m4);
  for (i = 0; i < 8; i++) {
    pData[i] = b_u[i];
  }

  emlrtAssign(&e_y, m4);
  emlrtAddField(d_y, e_y, "f1", 0);
  emlrtAddField(b_y, d_y, "inputVarSize", 0);
  emlrtSetCell(y, 0, b_y);
  f_y = NULL;
  m4 = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&f_y, m4);
  emlrtSetCell(y, 1, f_y);
  emlrtAssign(&st, y);
  return st;
}

static codertarget_arduinobase_internal_arduino_SerialWrite emlrt_marshallIn(
  const emlrtStack *sp, const mxArray *b_sysobj, const char_T *identifier)
{
  codertarget_arduinobase_internal_arduino_SerialWrite y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(b_sysobj), &thisId);
  emlrtDestroyArray(&b_sysobj);
  return y;
}

static codertarget_arduinobase_internal_arduino_SerialWrite b_emlrt_marshallIn(
  const emlrtStack *sp, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  codertarget_arduinobase_internal_arduino_SerialWrite y;
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[2] = { "isInitialized", "inputVarSize" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 2, fieldNames, 0U, &dims);
  thisId.fIdentifier = "isInitialized";
  y.isInitialized = c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u,
    0, "isInitialized")), &thisId);
  thisId.fIdentifier = "inputVarSize";
  d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "inputVarSize")),
                     &thisId, y.inputVarSize);
  emlrtDestroyArray(&u);
  return y;
}

static int32_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, cell_wrap y[1])
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[1] = { "f1" };

  static const int32_T dims[2] = { 1, 1 };

  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 1, fieldNames, 2U, dims);
  thisId.fIdentifier = "f1";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "f1")),
                     &thisId, y[0].f1);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, uint32_T y[8])
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = g_emlrt_marshallIn(sp, emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static boolean_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = j_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void cgxe_mdl_set_sim_state(InstanceStruct_LjVwxIGsqbqi3cRloULGMC
  *moduleInstance, const mxArray *st)
{
  emlrtStack b_st = { NULL,            /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *u;
  b_st.tls = moduleInstance->emlrtRootTLSGlobal;
  u = emlrtAlias(st);
  moduleInstance->sysobj = emlrt_marshallIn(&b_st, emlrtAlias(emlrtGetCell(&b_st,
    "sysobj", u, 0)), "sysobj");
  moduleInstance->sysobj_not_empty = f_emlrt_marshallIn(&b_st, emlrtAlias
    (emlrtGetCell(&b_st, "sysobj_not_empty", u, 1)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
  emlrtDestroyArray(&st);
}

static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m5;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m5, 2, pArrays, "message", true, location);
}

static int32_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  int32_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 0U, &dims);
  ret = *(int32_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, uint32_T ret[8])
{
  static const int32_T dims[2] = { 1, 8 };

  int32_T i4;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "uint32", false, 2U, dims);
  for (i4 = 0; i4 < 8; i4++) {
    ret[i4] = (*(uint32_T (*)[8])mxGetData(src))[i4];
  }

  emlrtDestroyArray(&src);
}

static boolean_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, &dims);
  ret = *mxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void init_simulink_io_address(InstanceStruct_LjVwxIGsqbqi3cRloULGMC
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->covInst = (covrtInstance *)cgxertGetCovrtInstance
    (moduleInstance->S);
  moduleInstance->u0 = (uint8_T *)cgxertGetInputPortSignal(moduleInstance->S, 0);
}

/* CGXE Glue Code */
static void mdlOutputs_LjVwxIGsqbqi3cRloULGMC(SimStruct *S, int_T tid)
{
  InstanceStruct_LjVwxIGsqbqi3cRloULGMC *moduleInstance =
    (InstanceStruct_LjVwxIGsqbqi3cRloULGMC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_LjVwxIGsqbqi3cRloULGMC(SimStruct *S)
{
  InstanceStruct_LjVwxIGsqbqi3cRloULGMC *moduleInstance =
    (InstanceStruct_LjVwxIGsqbqi3cRloULGMC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_LjVwxIGsqbqi3cRloULGMC(SimStruct *S, int_T tid)
{
  InstanceStruct_LjVwxIGsqbqi3cRloULGMC *moduleInstance =
    (InstanceStruct_LjVwxIGsqbqi3cRloULGMC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_LjVwxIGsqbqi3cRloULGMC(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_LjVwxIGsqbqi3cRloULGMC *moduleInstance =
    (InstanceStruct_LjVwxIGsqbqi3cRloULGMC *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_LjVwxIGsqbqi3cRloULGMC(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_LjVwxIGsqbqi3cRloULGMC *moduleInstance =
    (InstanceStruct_LjVwxIGsqbqi3cRloULGMC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_LjVwxIGsqbqi3cRloULGMC(SimStruct *S)
{
  InstanceStruct_LjVwxIGsqbqi3cRloULGMC *moduleInstance =
    (InstanceStruct_LjVwxIGsqbqi3cRloULGMC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlStart_LjVwxIGsqbqi3cRloULGMC(SimStruct *S)
{
  InstanceStruct_LjVwxIGsqbqi3cRloULGMC *moduleInstance =
    (InstanceStruct_LjVwxIGsqbqi3cRloULGMC *)calloc(1, sizeof
    (InstanceStruct_LjVwxIGsqbqi3cRloULGMC));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_LjVwxIGsqbqi3cRloULGMC);
  ssSetmdlInitializeConditions(S, mdlInitialize_LjVwxIGsqbqi3cRloULGMC);
  ssSetmdlUpdate(S, mdlUpdate_LjVwxIGsqbqi3cRloULGMC);
  ssSetmdlTerminate(S, mdlTerminate_LjVwxIGsqbqi3cRloULGMC);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_LjVwxIGsqbqi3cRloULGMC(SimStruct *S)
{
}

void method_dispatcher_LjVwxIGsqbqi3cRloULGMC(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_LjVwxIGsqbqi3cRloULGMC(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_LjVwxIGsqbqi3cRloULGMC(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_LjVwxIGsqbqi3cRloULGMC(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_LjVwxIGsqbqi3cRloULGMC(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: LjVwxIGsqbqi3cRloULGMC.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_LjVwxIGsqbqi3cRloULGMC_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxArray * elem_11;
  mxArray * elem_12;
  mxArray * elem_13;
  mxArray * elem_14;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,1,elem_3);
  elem_4 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_4);
  elem_5 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_5);
  elem_6 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_6);
  elem_7 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_7);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_8 = mxCreateCellMatrix(1,1);
  elem_9 = mxCreateString("codertarget.arduinobase.internal.arduino_SerialWrite");
  mxSetCell(elem_8,0,elem_9);
  mxSetCell(mxBIArgs,1,elem_8);
  elem_10 = mxCreateCellMatrix(1,1);
  elem_11 = mxCreateCellMatrix(1,2);
  elem_12 = mxCreateString("addDefines");
  mxSetCell(elem_11,0,elem_12);
  elem_13 = mxCreateCellMatrix(1,1);
  elem_14 = mxCreateString("_RTT_USE_SERIAL0_");
  mxSetCell(elem_13,0,elem_14);
  mxSetCell(elem_11,1,elem_13);
  mxSetCell(elem_10,0,elem_11);
  mxSetCell(mxBIArgs,2,elem_10);
  return mxBIArgs;
}

mxArray *cgxe_LjVwxIGsqbqi3cRloULGMC_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "codertarget.arduinobase.internal.arduino_SerialWrite");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}