/* Include files */

#include "modelInterface.h"
#include "m_1zaV5uMNHzKnbxW73AHPbB.h"
#include "mwmathutil.h"

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

static emlrtRSInfo e_emlrtRSI = { 12,  /* lineNo */
  "toLogicalCheck",                    /* fcnName */
  "/usr/local/MATLAB/R2016b/toolbox/eml/eml/+coder/+internal/toLogicalCheck.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 1,   /* lineNo */
  "Propagates",                        /* fcnName */
  "/usr/local/MATLAB/R2016b/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Propagates.p"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 1,   /* lineNo */
  "CustomIcon",                        /* fcnName */
  "/usr/local/MATLAB/R2016b/toolbox/matlab/system/+matlab/+system/+mixin/CustomIcon.p"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 43,  /* lineNo */
  "ExternalDependency",                /* fcnName */
  "/usr/local/MATLAB/R2016b/toolbox/shared/coder/coder/+coder/ExternalDependency.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 7,   /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 17,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 19,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 20,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 28,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 23,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 24,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtMCInfo emlrtMCI = { 17,    /* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "/usr/local/MATLAB/R2016b/toolbox/eml/eml/+coder/+internal/error.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 1,   /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "/usr/local/MATLAB/R2016b/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 171, /* lineNo */
  28,                                  /* colNo */
  "validateattributes",                /* fName */
  "/usr/local/MATLAB/R2016b/toolbox/eml/lib/matlab/lang/validateattributes.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 162, /* lineNo */
  28,                                  /* colNo */
  "validateattributes",                /* fName */
  "/usr/local/MATLAB/R2016b/toolbox/eml/lib/matlab/lang/validateattributes.m"/* pName */
};

static emlrtRSInfo p_emlrtRSI = { 162, /* lineNo */
  "validateattributes",                /* fcnName */
  "/usr/local/MATLAB/R2016b/toolbox/eml/lib/matlab/lang/validateattributes.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 171, /* lineNo */
  "validateattributes",                /* fcnName */
  "/usr/local/MATLAB/R2016b/toolbox/eml/lib/matlab/lang/validateattributes.m"/* pathName */
};

/* Function Declarations */
static void arduino_SerialWrite_validateInputsImpl
  (InstanceStruct_1zaV5uMNHzKnbxW73AHPbB *moduleInstance, const emlrtStack *sp,
   real_T dataIn[6]);
static void cgxe_mdl_start(InstanceStruct_1zaV5uMNHzKnbxW73AHPbB *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_1zaV5uMNHzKnbxW73AHPbB
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_1zaV5uMNHzKnbxW73AHPbB
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_1zaV5uMNHzKnbxW73AHPbB
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_1zaV5uMNHzKnbxW73AHPbB
  *moduleInstance);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_1zaV5uMNHzKnbxW73AHPbB *moduleInstance);
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
static void cgxe_mdl_set_sim_state(InstanceStruct_1zaV5uMNHzKnbxW73AHPbB
  *moduleInstance, const mxArray *st);
static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void b_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location);
static int32_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, uint32_T ret[8]);
static boolean_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void init_simulink_io_address(InstanceStruct_1zaV5uMNHzKnbxW73AHPbB
  *moduleInstance);

/* Function Definitions */
static void arduino_SerialWrite_validateInputsImpl
  (InstanceStruct_1zaV5uMNHzKnbxW73AHPbB *moduleInstance, const emlrtStack *sp,
   real_T dataIn[6])
{
  emlrtStack st;
  emlrtStack b_st;
  int32_T k;
  boolean_T p;
  int32_T b_k;
  boolean_T exitg2;
  boolean_T exitg1;
  const mxArray *y;
  char_T u[21];
  static char_T cv0[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 21 };

  const mxArray *b_y;
  char_T b_u[21];
  static char_T cv1[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  const mxArray *c_y;
  char_T c_u[29];
  static char_T cv2[29] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'i',
    'n', 'p', 'u', 't', ' ', 't', 'o', ' ', 'b', 'e', ' ', 'n', 'o', 'n', '-',
    'N', 'a', 'N', '.' };

  static const int32_T iv1[2] = { 1, 21 };

  static const int32_T iv2[2] = { 1, 29 };

  const mxArray *d_y;
  char_T d_u[28];
  static char_T cv3[28] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'i',
    'n', 'p', 'u', 't', ' ', 't', 'o', ' ', 'b', 'e', ' ', 'f', 'i', 'n', 'i',
    't', 'e', '.' };

  static const int32_T iv3[2] = { 1, 28 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (k = 0; k < 6; k++) {
    st.site = &emlrtRSI;
    p = true;
    b_k = 0;
    exitg2 = false;
    while ((!exitg2) && (b_k < 6)) {
      if (!muDoubleScalarIsNaN(dataIn[b_k])) {
        b_k++;
      } else {
        p = false;
        exitg2 = true;
      }
    }

    if (!p) {
      for (b_k = 0; b_k < 21; b_k++) {
        u[b_k] = cv0[b_k];
      }

      y = NULL;
      m0 = emlrtCreateCharArray(2, iv0);
      emlrtInitCharArrayR2013a(&st, 21, m0, &u[0]);
      emlrtAssign(&y, m0);
      for (b_k = 0; b_k < 29; b_k++) {
        c_u[b_k] = cv2[b_k];
      }

      c_y = NULL;
      m0 = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(&st, 29, m0, &c_u[0]);
      emlrtAssign(&c_y, m0);
      b_st.site = &q_emlrtRSI;
      b_error(&b_st, y, c_y, &c_emlrtMCI);
    }

    p = true;
    b_k = 0;
    exitg1 = false;
    while ((!exitg1) && (b_k < 6)) {
      if ((!muDoubleScalarIsInf(dataIn[b_k])) && (!muDoubleScalarIsNaN
           (dataIn[b_k]))) {
        b_k++;
      } else {
        p = false;
        exitg1 = true;
      }
    }

    if (!p) {
      for (b_k = 0; b_k < 21; b_k++) {
        b_u[b_k] = cv1[b_k];
      }

      b_y = NULL;
      m0 = emlrtCreateCharArray(2, iv1);
      emlrtInitCharArrayR2013a(&st, 21, m0, &b_u[0]);
      emlrtAssign(&b_y, m0);
      for (b_k = 0; b_k < 28; b_k++) {
        d_u[b_k] = cv3[b_k];
      }

      d_y = NULL;
      m0 = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(&st, 28, m0, &d_u[0]);
      emlrtAssign(&d_y, m0);
      b_st.site = &p_emlrtRSI;
      b_error(&b_st, b_y, d_y, &d_emlrtMCI);
    }

    cgxertListenForCtrlC(moduleInstance->S);
  }
}

static void cgxe_mdl_start(InstanceStruct_1zaV5uMNHzKnbxW73AHPbB *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emlrtStack b_st;
  emlrtStack c_st;
  const mxArray *m1;
  static const int32_T iv4[2] = { 0, 0 };

  static const int32_T iv5[2] = { 0, 0 };

  real_T varargin_2[6];
  int32_T i0;
  codertarget_arduinobase_internal_arduino_SerialWrite *obj;
  emlrtStack d_st;
  emlrtStack e_st;
  cell_wrap varSizes[1];
  const mxArray *y;
  char_T u[51];
  static char_T cv4[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static const int32_T iv6[2] = { 1, 51 };

  static int8_T iv7[8] = { 6, 1, 1, 1, 1, 1, 1, 1 };

  const mxArray *b_y;
  char_T b_u[5];
  static char_T cv5[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv8[2] = { 1, 5 };

  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  m1 = emlrtCreateNumericArray(2, iv4, mxDOUBLE_CLASS, mxREAL);
  emlrtAssignP(&b_eml_mx, m1);
  m1 = emlrtCreateCharArray(2, iv5);
  emlrtAssignP(&eml_mx, m1);
  for (i0 = 0; i0 < 6; i0++) {
    varargin_2[i0] = (*moduleInstance->u0)[i0];
  }

  if (!moduleInstance->sysobj_not_empty) {
    b_st.site = &i_emlrtRSI;
    obj = &moduleInstance->sysobj;
    c_st.site = &emlrtRSI;
    d_st.site = &b_emlrtRSI;
    e_st.site = &c_emlrtRSI;
    d_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    e_st.site = &d_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &f_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &g_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &h_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
  }

  b_st.site = &j_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized != 0) {
    for (i0 = 0; i0 < 51; i0++) {
      u[i0] = cv4[i0];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv6);
    emlrtInitCharArrayR2013a(&b_st, 51, m1, &u[0]);
    emlrtAssign(&y, m1);
    for (i0 = 0; i0 < 5; i0++) {
      b_u[i0] = cv5[i0];
    }

    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv8);
    emlrtInitCharArrayR2013a(&b_st, 5, m1, &b_u[0]);
    emlrtAssign(&b_y, m1);
    error(&b_st, message(&b_st, y, b_y, &b_emlrtMCI), &b_emlrtMCI);
  }

  obj->isInitialized = 1;
  c_st.site = &d_emlrtRSI;
  for (i0 = 0; i0 < 8; i0++) {
    varSizes[0].f1[i0] = (uint32_T)iv7[i0];
  }

  obj->inputVarSize[0] = varSizes[0];
  c_st.site = &d_emlrtRSI;
  arduino_SerialWrite_validateInputsImpl(moduleInstance, &c_st, varargin_2);
}

static void cgxe_mdl_initialize(InstanceStruct_1zaV5uMNHzKnbxW73AHPbB
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
  static char_T cv6[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m2;
  static const int32_T iv9[2] = { 1, 45 };

  const mxArray *b_y;
  char_T b_u[45];
  static const int32_T iv10[2] = { 1, 45 };

  const mxArray *c_y;
  char_T c_u[8];
  static char_T cv7[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  static const int32_T iv11[2] = { 1, 8 };

  const mxArray *d_y;
  char_T d_u[5];
  static char_T cv8[5] = { 'r', 'e', 's', 'e', 't' };

  static const int32_T iv12[2] = { 1, 5 };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    b_st.site = &i_emlrtRSI;
    obj = &moduleInstance->sysobj;
    c_st.site = &emlrtRSI;
    d_st.site = &b_emlrtRSI;
    e_st.site = &c_emlrtRSI;
    d_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    e_st.site = &d_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &f_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &g_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &h_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
  }

  b_st.site = &k_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i1 = 0; i1 < 45; i1++) {
      u[i1] = cv6[i1];
    }

    y = NULL;
    m2 = emlrtCreateCharArray(2, iv9);
    emlrtInitCharArrayR2013a(&b_st, 45, m2, &u[0]);
    emlrtAssign(&y, m2);
    for (i1 = 0; i1 < 8; i1++) {
      c_u[i1] = cv7[i1];
    }

    c_y = NULL;
    m2 = emlrtCreateCharArray(2, iv11);
    emlrtInitCharArrayR2013a(&b_st, 8, m2, &c_u[0]);
    emlrtAssign(&c_y, m2);
    error(&b_st, message(&b_st, y, c_y, &b_emlrtMCI), &b_emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    b_st.site = &l_emlrtRSI;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i1 = 0; i1 < 45; i1++) {
        b_u[i1] = cv6[i1];
      }

      b_y = NULL;
      m2 = emlrtCreateCharArray(2, iv10);
      emlrtInitCharArrayR2013a(&b_st, 45, m2, &b_u[0]);
      emlrtAssign(&b_y, m2);
      for (i1 = 0; i1 < 5; i1++) {
        d_u[i1] = cv8[i1];
      }

      d_y = NULL;
      m2 = emlrtCreateCharArray(2, iv12);
      emlrtInitCharArrayR2013a(&b_st, 5, m2, &d_u[0]);
      emlrtAssign(&d_y, m2);
      error(&b_st, message(&b_st, b_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
    }
  }
}

static void cgxe_mdl_outputs(InstanceStruct_1zaV5uMNHzKnbxW73AHPbB
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  real_T varargin_2[6];
  int32_T k;
  codertarget_arduinobase_internal_arduino_SerialWrite *obj;
  const mxArray *y;
  char_T u[45];
  static char_T cv9[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  boolean_T anyInputSizeChanged;
  const mxArray *m3;
  static const int32_T iv13[2] = { 1, 45 };

  boolean_T exitg1;
  cell_wrap varSizes[1];
  const mxArray *b_y;
  char_T b_u[51];
  static char_T cv10[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static int8_T inSize[8] = { 6, 1, 1, 1, 1, 1, 1, 1 };

  static const int32_T iv14[2] = { 1, 51 };

  const mxArray *c_y;
  char_T c_u[4];
  static char_T cv11[4] = { 's', 't', 'e', 'p' };

  static const int32_T iv15[2] = { 1, 4 };

  const mxArray *d_y;
  char_T d_u[5];
  static char_T cv12[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv16[2] = { 1, 5 };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  for (k = 0; k < 6; k++) {
    varargin_2[k] = (*moduleInstance->u0)[k];
  }

  if (!moduleInstance->sysobj_not_empty) {
    b_st.site = &i_emlrtRSI;
    obj = &moduleInstance->sysobj;
    c_st.site = &emlrtRSI;
    d_st.site = &b_emlrtRSI;
    e_st.site = &c_emlrtRSI;
    d_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    e_st.site = &d_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &f_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &g_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &h_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
  }

  b_st.site = &m_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (k = 0; k < 45; k++) {
      u[k] = cv9[k];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv13);
    emlrtInitCharArrayR2013a(&b_st, 45, m3, &u[0]);
    emlrtAssign(&y, m3);
    for (k = 0; k < 4; k++) {
      c_u[k] = cv11[k];
    }

    c_y = NULL;
    m3 = emlrtCreateCharArray(2, iv15);
    emlrtInitCharArrayR2013a(&b_st, 4, m3, &c_u[0]);
    emlrtAssign(&c_y, m3);
    error(&b_st, message(&b_st, y, c_y, &b_emlrtMCI), &b_emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    c_st.site = &d_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    if (obj->isInitialized != 0) {
      for (k = 0; k < 51; k++) {
        b_u[k] = cv10[k];
      }

      b_y = NULL;
      m3 = emlrtCreateCharArray(2, iv14);
      emlrtInitCharArrayR2013a(&d_st, 51, m3, &b_u[0]);
      emlrtAssign(&b_y, m3);
      for (k = 0; k < 5; k++) {
        d_u[k] = cv12[k];
      }

      d_y = NULL;
      m3 = emlrtCreateCharArray(2, iv16);
      emlrtInitCharArrayR2013a(&d_st, 5, m3, &d_u[0]);
      emlrtAssign(&d_y, m3);
      error(&d_st, message(&d_st, b_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
    }

    obj->isInitialized = 1;
    e_st.site = &d_emlrtRSI;
    for (k = 0; k < 8; k++) {
      varSizes[0].f1[k] = (uint32_T)inSize[k];
    }

    obj->inputVarSize[0] = varSizes[0];
    e_st.site = &d_emlrtRSI;
    arduino_SerialWrite_validateInputsImpl(moduleInstance, &e_st, varargin_2);
  }

  c_st.site = &d_emlrtRSI;
  anyInputSizeChanged = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 8)) {
    if (obj->inputVarSize[0].f1[k] != (uint32_T)inSize[k]) {
      anyInputSizeChanged = true;
      for (k = 0; k < 8; k++) {
        obj->inputVarSize[0].f1[k] = (uint32_T)inSize[k];
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    c_st.site = &d_emlrtRSI;
    arduino_SerialWrite_validateInputsImpl(moduleInstance, &c_st, varargin_2);
  }
}

static void cgxe_mdl_update(InstanceStruct_1zaV5uMNHzKnbxW73AHPbB
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_1zaV5uMNHzKnbxW73AHPbB
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
  static char_T cv13[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m4;
  static const int32_T iv17[2] = { 1, 45 };

  const mxArray *b_y;
  char_T b_u[45];
  static const int32_T iv18[2] = { 1, 45 };

  const mxArray *c_y;
  char_T c_u[8];
  static char_T cv14[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  static const int32_T iv19[2] = { 1, 8 };

  const mxArray *d_y;
  char_T d_u[7];
  static char_T cv15[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  static const int32_T iv20[2] = { 1, 7 };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtDestroyArray(&b_eml_mx);
  emlrtDestroyArray(&eml_mx);
  if (!moduleInstance->sysobj_not_empty) {
    b_st.site = &i_emlrtRSI;
    obj = &moduleInstance->sysobj;
    c_st.site = &emlrtRSI;
    d_st.site = &b_emlrtRSI;
    e_st.site = &c_emlrtRSI;
    d_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    e_st.site = &d_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &f_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &g_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &h_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
  }

  b_st.site = &n_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i2 = 0; i2 < 45; i2++) {
      u[i2] = cv13[i2];
    }

    y = NULL;
    m4 = emlrtCreateCharArray(2, iv17);
    emlrtInitCharArrayR2013a(&b_st, 45, m4, &u[0]);
    emlrtAssign(&y, m4);
    for (i2 = 0; i2 < 8; i2++) {
      c_u[i2] = cv14[i2];
    }

    c_y = NULL;
    m4 = emlrtCreateCharArray(2, iv19);
    emlrtInitCharArrayR2013a(&b_st, 8, m4, &c_u[0]);
    emlrtAssign(&c_y, m4);
    error(&b_st, message(&b_st, y, c_y, &b_emlrtMCI), &b_emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    b_st.site = &o_emlrtRSI;
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i2 = 0; i2 < 45; i2++) {
        b_u[i2] = cv13[i2];
      }

      b_y = NULL;
      m4 = emlrtCreateCharArray(2, iv18);
      emlrtInitCharArrayR2013a(&b_st, 45, m4, &b_u[0]);
      emlrtAssign(&b_y, m4);
      for (i2 = 0; i2 < 7; i2++) {
        d_u[i2] = cv15[i2];
      }

      d_y = NULL;
      m4 = emlrtCreateCharArray(2, iv20);
      emlrtInitCharArrayR2013a(&b_st, 7, m4, &d_u[0]);
      emlrtAssign(&d_y, m4);
      error(&b_st, message(&b_st, b_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
    }

    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
    }
  }
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_1zaV5uMNHzKnbxW73AHPbB *moduleInstance)
{
  const mxArray *st;
  const mxArray *y;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m5;
  cell_wrap u[1];
  const mxArray *d_y;
  int32_T iv21[2];
  int32_T i3;
  const cell_wrap *r0;
  uint32_T b_u[8];
  const mxArray *e_y;
  static const int32_T iv22[2] = { 1, 8 };

  uint32_T *pData;
  int16_T i;
  const mxArray *f_y;
  st = NULL;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(2, 1));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  c_y = NULL;
  m5 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m5) = moduleInstance->sysobj.isInitialized;
  emlrtAssign(&c_y, m5);
  emlrtAddField(b_y, c_y, "isInitialized", 0);
  u[0] = moduleInstance->sysobj.inputVarSize[0];
  d_y = NULL;
  for (i3 = 0; i3 < 2; i3++) {
    iv21[i3] = 1;
  }

  emlrtAssign(&d_y, emlrtCreateStructArray(2, iv21, 0, NULL));
  r0 = &u[0];
  for (i3 = 0; i3 < 8; i3++) {
    b_u[i3] = r0->f1[i3];
  }

  e_y = NULL;
  m5 = emlrtCreateNumericArray(2, iv22, mxUINT32_CLASS, mxREAL);
  pData = (uint32_T *)mxGetData(m5);
  for (i = 0; i < 8; i++) {
    pData[i] = b_u[i];
  }

  emlrtAssign(&e_y, m5);
  emlrtAddField(d_y, e_y, "f1", 0);
  emlrtAddField(b_y, d_y, "inputVarSize", 0);
  emlrtSetCell(y, 0, b_y);
  f_y = NULL;
  m5 = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&f_y, m5);
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

static void cgxe_mdl_set_sim_state(InstanceStruct_1zaV5uMNHzKnbxW73AHPbB
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
  const mxArray *m6;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m6, 2, pArrays, "message", true, location);
}

static void b_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "error", true, location);
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

static void init_simulink_io_address(InstanceStruct_1zaV5uMNHzKnbxW73AHPbB
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->covInst = (covrtInstance *)cgxertGetCovrtInstance
    (moduleInstance->S);
  moduleInstance->u0 = (real_T (*)[6])cgxertGetInputPortSignal(moduleInstance->S,
    0);
}

/* CGXE Glue Code */
static void mdlOutputs_1zaV5uMNHzKnbxW73AHPbB(SimStruct *S, int_T tid)
{
  InstanceStruct_1zaV5uMNHzKnbxW73AHPbB *moduleInstance =
    (InstanceStruct_1zaV5uMNHzKnbxW73AHPbB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_1zaV5uMNHzKnbxW73AHPbB(SimStruct *S)
{
  InstanceStruct_1zaV5uMNHzKnbxW73AHPbB *moduleInstance =
    (InstanceStruct_1zaV5uMNHzKnbxW73AHPbB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_1zaV5uMNHzKnbxW73AHPbB(SimStruct *S, int_T tid)
{
  InstanceStruct_1zaV5uMNHzKnbxW73AHPbB *moduleInstance =
    (InstanceStruct_1zaV5uMNHzKnbxW73AHPbB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_1zaV5uMNHzKnbxW73AHPbB(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_1zaV5uMNHzKnbxW73AHPbB *moduleInstance =
    (InstanceStruct_1zaV5uMNHzKnbxW73AHPbB *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_1zaV5uMNHzKnbxW73AHPbB(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_1zaV5uMNHzKnbxW73AHPbB *moduleInstance =
    (InstanceStruct_1zaV5uMNHzKnbxW73AHPbB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_1zaV5uMNHzKnbxW73AHPbB(SimStruct *S)
{
  InstanceStruct_1zaV5uMNHzKnbxW73AHPbB *moduleInstance =
    (InstanceStruct_1zaV5uMNHzKnbxW73AHPbB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlStart_1zaV5uMNHzKnbxW73AHPbB(SimStruct *S)
{
  InstanceStruct_1zaV5uMNHzKnbxW73AHPbB *moduleInstance =
    (InstanceStruct_1zaV5uMNHzKnbxW73AHPbB *)calloc(1, sizeof
    (InstanceStruct_1zaV5uMNHzKnbxW73AHPbB));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_1zaV5uMNHzKnbxW73AHPbB);
  ssSetmdlInitializeConditions(S, mdlInitialize_1zaV5uMNHzKnbxW73AHPbB);
  ssSetmdlUpdate(S, mdlUpdate_1zaV5uMNHzKnbxW73AHPbB);
  ssSetmdlTerminate(S, mdlTerminate_1zaV5uMNHzKnbxW73AHPbB);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_1zaV5uMNHzKnbxW73AHPbB(SimStruct *S)
{
}

void method_dispatcher_1zaV5uMNHzKnbxW73AHPbB(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_1zaV5uMNHzKnbxW73AHPbB(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_1zaV5uMNHzKnbxW73AHPbB(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_1zaV5uMNHzKnbxW73AHPbB(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_1zaV5uMNHzKnbxW73AHPbB(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: 1zaV5uMNHzKnbxW73AHPbB.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_1zaV5uMNHzKnbxW73AHPbB_BuildInfoUpdate(void)
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

mxArray *cgxe_1zaV5uMNHzKnbxW73AHPbB_fallback_info(void)
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
