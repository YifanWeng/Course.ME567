# Copyright 1994-2010 The MathWorks, Inc.
#
# File    : rtwsfcn_unix.tmf   
#
# Abstract:
#	Template makefile for building a UNIX-based, generated S-Function of 
#       Simulink model using generated C code.
#
# 	This makefile attempts to conform to the guidelines specified in the
# 	IEEE Std 1003.2-1992 (POSIX) standard. It is designed to be used
#       with GNU Make which is located in matlabroot/rtw/bin.
#
# 	Note that this template is automatically customized by the build 
#       procedure to create "<model>.mk"
#
#       The following defines can be used to modify the behavior of the
#	build:
#
#         MEX_OPTS       - User specific mex options.
#	  OPT_OPTS       - Optimization options. Default is -O. To enable 
#                          debugging specify as OPT_OPTS=-g. 
#                          Because of optimization problems in IBM_RS, 
#                          default is no-optimization. 
#	  USER_SRCS      - Additional user sources, such as files needed by
#			   S-functions.
#	  USER_INCLUDES  - Additional include paths
#			   (i.e. USER_INCLUDES="-Iwhere-ever -Iwhere-ever2")
#
#       To enable debugging:
#         set DEBUG_BUILD = 1 below, which will trigger MEX_OPTS=-g and
#          LDFLAGS += -g (may vary with compiler version, see compiler doc) 
#
#       This template makefile is designed to be used with a system target
#       file that contains 'rtwgensettings.BuildDirSuffix' see accel.tlc

#------------------------ Macros read by make_rtw ------------------------------
#
# The following macros are read by the build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the build procedure (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.

MAKECMD         = /usr/local/MATLAB/R2016b/bin/glnxa64/gmake
HOST            = UNIX
BUILD           = yes
SYS_TARGET_FILE = rtwsfcn.tlc
COMPILER_TOOL_CHAIN = unix

#---------------------- Tokens expanded by make_rtw ----------------------------
#
# The following tokens, when wrapped with "|>" and "<|" are expanded by the
# build procedure.
#
#  MODEL_NAME      - Name of the Simulink block diagram
#  MODEL_MODULES   - Any additional generated source modules
#  MAKEFILE_NAME   - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT     - Path to where MATLAB is installed.
#  S_FUNCTIONS     - List of S-functions.
#  S_FUNCTIONS_LIB - List of S-functions libraries to link.
#  SOLVER          - Solver source file name
#  NUMST           - Number of sample times
#  TID01EQ         - yes (1) or no (0): Are sampling rates of continuous task
#                    (tid=0) and 1st discrete task equal.
#  NCSTATES        - Number of continuous states
#  COMPUTER        - Computer type. See the MATLAB computer command.
#  MEXEXT          - extension that a mex file has. See the MATLAB mexext 
#                    command
#  BUILDARGS       - Options passed in at the command line.
#  USERMODULES     - passed along for later code generations of models that 
#                    contain this S-Function. (Used by generated S-Function block.)
#  CREATEMODEL     - 1 will cause a untitled model to be opened with the 
#                    generated S-function block inside it.
#  USEPARAMVALUES  - 1 will cause the generated S-function block to have values
#                    instead of variable names.

MODEL              = Subsystem1
MODULES            = Subsystem1_3121ebb6_1.c Subsystem1_3121ebb6_1_assembly.c Subsystem1_3121ebb6_1_checkDynamics.c Subsystem1_3121ebb6_1_computeConstraintError.c Subsystem1_3121ebb6_1_create.c Subsystem1_3121ebb6_1_deriv.c Subsystem1_3121ebb6_1_gateway.c pm_printf.c rtGetInf.c rtGetNaN.c rt_backsubrr_dbl.c rt_forwardsubrr_dbl.c rt_lu_real.c rt_matrixlib_dbl.c 
MAKEFILE           = Subsystem1.mk
MATLAB_ROOT        = /usr/local/MATLAB/R2016b
ALT_MATLAB_ROOT    = /usr/local/MATLAB/R2016b
MASTER_ANCHOR_DIR  = 
START_DIR          = /media/pec/DataOne/PROG/EECS567/proj/Course.ME567
S_FUNCTIONS        = 
S_FUNCTIONS_LIB    = 
SOLVER             = 
NUMST              = 2
TID01EQ            = 0
NCSTATES           = 0
MEM_ALLOC          = RT_STATIC
COMPUTER           = GLNXA64
MEXEXT             = mexa64
BUILDARGS          =  MODELLIB=Subsystem1lib.a RELATIVE_PATH_TO_ANCHOR=.. MODELREF_TARGET_TYPE=NONE ISPROTECTINGMODEL=NOTPROTECTING
USERMODULES        =  
CREATEMODEL        = 1
USEPARAMVALUES     = 0
PURIFY             = 0
TARGET_LANG_EXT    = c
OPTIMIZATION_FLAGS = -O0 -fPIC
ADDITIONAL_LDFLAGS = 
DEFINES_CUSTOM     = 

# To enable debugging:
# set DEBUG_BUILD = 1
DEBUG_BUILD             = 0

#-- In the case when directory name contains space ---
ifneq ($(MATLAB_ROOT),$(ALT_MATLAB_ROOT))
MATLAB_ROOT := $(ALT_MATLAB_ROOT)
endif

#--------------------------- Tool Specifications -------------------------------
include $(MATLAB_ROOT)/rtw/c/tools/unixtools.mk

CC = $(MATLAB_ROOT)/bin/mex
CPP = $(MATLAB_ROOT)/bin/mex

#------------------------------ Include Path -----------------------------------
MATLAB_INCLUDES = \
	-I$(MATLAB_ROOT)/simulink/include \
	-I$(MATLAB_ROOT)/extern/include \
	-I$(MATLAB_ROOT)/rtw/c/src

# Additional file include paths
ADD_INCLUDES = \
	-I$(START_DIR)/Subsystem1_sfcn_rtw \
	-I$(START_DIR) \
	-I$(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c \
	-I$(MATLAB_ROOT)/toolbox/physmod/sm/core/c \
	-I$(MATLAB_ROOT)/toolbox/physmod/pm_math/c \
	-I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c \
	-I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c \
	-I$(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c \
	-I$(MATLAB_ROOT)/toolbox/physmod/network_engine/c \
	-I$(MATLAB_ROOT)/toolbox/physmod/common/math/core/c \
	-I$(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c \
	-I$(MATLAB_ROOT)/toolbox/physmod/common/external/library/c \
	-I$(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c \


INCLUDES = -I. -I.. $(MATLAB_INCLUDES) $(ADD_INCLUDES) $(USER_INCLUDES)

#-------------------------------- Mex Options  ---------------------------------
# General User Options
ifeq ($(DEBUG_BUILD),0)
MEX_OPTS =
else
#   Set OPTS=-g and any additional flags for debugging
MEX_OPTS = -g
LDFLAGS += -g
endif

OPT_OPTS  = $(DEFAULT_OPT_OPTS)

GCC_WARN_OPTS := 

ifneq ($(ADDITIONAL_LDFLAGS),)
  ifeq ($(COMPUTER),MACI64)
    MEX_LDFLAGS = LDFLAGS='$$LDFLAGS $(ADDITIONAL_LDFLAGS) -Wl,-rpath,@loader_path'
  else
    MEX_LDFLAGS = LDFLAGS='$$LDFLAGS $(ADDITIONAL_LDFLAGS)'
  endif
else
  ifeq ($(COMPUTER),MACI64)
    MEX_LDFLAGS = LDFLAGS='$$LDFLAGS -Wl,-rpath,@loader_path'
  else
    MEX_LDFLAGS =
  endif
endif

# See rtw/c/tools/unixtools.mk for the definition of GCC_WARN_OPTS

ifeq ($(PURIFY),1)
  MEX_FLAGS = $(MEX_OPTS) -g $(DEFINES_CUSTOM) COPTIMFLAGS="$(GCC_WARN_OPTS)" $(MEX_LDFLAGS)
else
  ifeq ($(MEX_OPTS),-g)
    MEX_FLAGS = -g $(DEFINES_CUSTOM) COPTIMFLAGS="$(GCC_WARN_OPTS)" $(MEX_LDFLAGS)
  else
    ifeq ($(OPT_OPTS),-g)
     MEX_FLAGS = $(MEX_OPTS) -g $(DEFINES_CUSTOM) COPTIMFLAGS="$(GCC_WARN_OPTS)" $(MEX_LDFLAGS)
    else
      ifneq ($(OPTIMIZATION_FLAGS),)
       MEX_FLAGS = $(MEX_OPTS) $(DEFINES_CUSTOM) COPTIMFLAGS="$(OPTIMIZATION_FLAGS) -DNDEBUG $(GCC_WARN_OPTS)" $(MEX_LDFLAGS)
      else
       MEX_FLAGS = $(MEX_OPTS) $(DEFINES_CUSTOM) COPTIMFLAGS="$(OPT_OPTS) -DNDEBUG $(GCC_WARN_OPTS)" $(MEX_LDFLAGS)
      endif
    endif
  endif
endif

#----------------------------- Source Files -----------------------------------
USER_SRCS =

USER_OBJS       = $(USER_SRCS:.c=.o)
LOCAL_USER_OBJS = $(notdir $(USER_OBJS))

SRCS      = $(MODEL)_sf.$(TARGET_LANG_EXT) $(MODULES)
SRCS_OBJS = $(addsuffix .o, $(basename $(SRCS)))
OBJS      = $(SRCS_OBJS) $(USER_OBJS)
LINK_OBJS = $(SRCS_OBJS) $(LOCAL_USER_OBJS)

#-------------------------- Additional Libraries ------------------------------

LIBS =

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/lib/glnxa64/sm_ssci_rtwsfcn.a
else
LIBS += sm_ssci.a
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/sm/core/lib/glnxa64/sm_rtwsfcn.a
else
LIBS += sm.a
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/pm_math/lib/glnxa64/pm_math_rtwsfcn.a
else
LIBS += pm_math.a
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/lib/glnxa64/ssc_sli_rtwsfcn.a
else
LIBS += ssc_sli.a
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/lib/glnxa64/ssc_core_rtwsfcn.a
else
LIBS += ssc_core.a
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/network_engine/lib/glnxa64/ne_rtwsfcn.a
else
LIBS += ne.a
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/common/math/core/lib/glnxa64/mc_rtwsfcn.a
else
LIBS += mc.a
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/common/external/library/lib/glnxa64/ex_rtwsfcn.a
else
LIBS += ex.a
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/lib/glnxa64/pm_rtwsfcn.a
else
LIBS += pm.a
endif
 
LIBS += $(S_FUNCTIONS_LIB)

ifeq ($(PURIFY),1)
  LIBUT = -L$(MATLAB_ROOT)/bin/PURIFY/$(ARCH) -lut
else
  LIBUT = -L$(MATLAB_ROOT)/bin/$(ARCH) -lut
endif

LIBFIXPT = -lfixedpoint

PROGRAM = ../$(MODEL)_sf.$(MEXEXT)

#--------------------------------- Rules --------------------------------------

$(PROGRAM) : $(OBJS) $(LIBS)
	@echo "### Linking ..."
	$(CC) $(MEX_FLAGS) -MATLAB_ARCH=$(ARCH) -silent -outdir .. $(LINK_OBJS) $(LIBS) $(LIBUT) $(LIBFIXPT)
	@echo "### Created mex file: $(MODEL)_sf.$(MEXEXT)"

%.o : %.c
	$(CC) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : %.cpp
	$(CPP) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : ../%.c
	$(CC) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : ../%.cpp
	$(CPP) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/%.c
	$(CC) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/core/c/%.c
	$(CC) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/pm_math/c/%.c
	$(CC) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/%.c
	$(CC) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/%.c
	$(CC) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/%.c
	$(CC) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/%.c
	$(CC) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/%.c
	$(CC) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/%.c
	$(CC) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/%.c
	$(CC) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/%.c
	$(CC) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : ../%.c
	$(CC) -c $(MEX_FLAGS) $(INCLUDES) "$<"



%.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/%.cpp
	$(CPP) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/sm/core/c/%.cpp
	$(CPP) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/pm_math/c/%.cpp
	$(CPP) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/%.cpp
	$(CPP) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/%.cpp
	$(CPP) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/%.cpp
	$(CPP) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/%.cpp
	$(CPP) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/%.cpp
	$(CPP) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/%.cpp
	$(CPP) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/%.cpp
	$(CPP) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/%.cpp
	$(CPP) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : ../%.cpp
	$(CPP) -c $(MEX_FLAGS) $(INCLUDES) "$<"



%.o : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) -c $(MEX_FLAGS) $(INCLUDES) "$<"

%.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) -c $(MEX_FLAGS) $(INCLUDES) "$<"

#------------------------------- Libraries -------------------------------------



MODULES_sm_ssci = \
    sm_ssci_3dd14f0a.o \
    sm_ssci_646478c5.o \
    sm_ssci_916e6db1.o \
    sm_ssci_b2b6b422.o \
    sm_ssci_c16a187b.o \


sm_ssci.a : $(MAKEFILE) rtw_proj.tmw $(MODULES_sm_ssci)
	@echo "### Creating $@ "
	$(AR) rs $@ $(MODULES_sm_ssci)
	@echo "### Created $@"

MODULES_sm = \
    sm_440126a7.o \
    sm_6166f1eb.o \
    sm_62d41fb5.o \
    sm_67d72683.o \
    sm_6fbd150d.o \
    sm_73d210b9.o \
    sm_9abcb56e.o \
    sm_b402b573.o \
    sm_badd8656.o \
    sm_bc63e36c.o \
    sm_c0ba649d.o \
    sm_d3d946fd.o \
    sm_e8bab6d7.o \
    sm_efdfa66e.o \
    sm_f7683dd1.o \


sm.a : $(MAKEFILE) rtw_proj.tmw $(MODULES_sm)
	@echo "### Creating $@ "
	$(AR) rs $@ $(MODULES_sm)
	@echo "### Created $@"

MODULES_pm_math = \
    pm_math_1966ea7d.o \
    pm_math_1ad202b7.o \
    pm_math_1c69d5b2.o \
    pm_math_2cdd2951.o \
    pm_math_3463da5d.o \
    pm_math_360e4b46.o \
    pm_math_48bd51fb.o \
    pm_math_5a01dda4.o \
    pm_math_646fa971.o \
    pm_math_a001e9ec.o \
    pm_math_b7b980b1.o \
    pm_math_bad43c87.o \
    pm_math_d1be0f30.o \
    pm_math_da630bd2.o \
    pm_math_f760e8f6.o \


pm_math.a : $(MAKEFILE) rtw_proj.tmw $(MODULES_pm_math)
	@echo "### Creating $@ "
	$(AR) rs $@ $(MODULES_pm_math)
	@echo "### Created $@"

MODULES_ssc_sli = \
    ssc_sli_0763c151.o \
    ssc_sli_0bd269e6.o \
    ssc_sli_360cfd63.o \
    ssc_sli_43618287.o \
    ssc_sli_466b08dd.o \
    ssc_sli_4e028390.o \
    ssc_sli_51dbd3b5.o \
    ssc_sli_550a4805.o \
    ssc_sli_5a0cb974.o \
    ssc_sli_62d81790.o \
    ssc_sli_77063d8b.o \
    ssc_sli_7a618260.o \
    ssc_sli_7f630b0f.o \
    ssc_sli_89d0f30a.o \
    ssc_sli_8a64c4e2.o \
    ssc_sli_9c030181.o \
    ssc_sli_c7dda239.o \
    ssc_sli_dcd66f69.o \
    ssc_sli_eb0a5702.o \
    ssc_sli_fa0ce53e.o \
    ssc_sli_fbdf29da.o \


ssc_sli.a : $(MAKEFILE) rtw_proj.tmw $(MODULES_ssc_sli)
	@echo "### Creating $@ "
	$(AR) rs $@ $(MODULES_ssc_sli)
	@echo "### Created $@"

MODULES_ssc_core = \
    ssc_core_01dcc633.o \
    ssc_core_04da2c69.o \
    ssc_core_05058dd9.o \
    ssc_core_06ba68a6.o \
    ssc_core_09b5fa6e.o \
    ssc_core_0bd666aa.o \
    ssc_core_0f019bd9.o \
    ssc_core_0f0420a6.o \
    ssc_core_1b0cafd5.o \
    ssc_core_1c6b0332.o \
    ssc_core_1fd25120.o \
    ssc_core_24b4cdee.o \
    ssc_core_2568b075.o \
    ssc_core_280c0222.o \
    ssc_core_2cd54448.o \
    ssc_core_3169e4b7.o \
    ssc_core_330acdca.o \
    ssc_core_37d4ea84.o \
    ssc_core_40dfdbdc.o \
    ssc_core_41017299.o \
    ssc_core_4666b45b.o \
    ssc_core_48b08af1.o \
    ssc_core_48b1386a.o \
    ssc_core_4965213d.o \
    ssc_core_4ad9135b.o \
    ssc_core_4db6bd68.o \
    ssc_core_4db86fcc.o \
    ssc_core_4e03e39d.o \
    ssc_core_4e04eecd.o \
    ssc_core_54d55ae9.o \
    ssc_core_56b1a2bf.o \
    ssc_core_59b034b8.o \
    ssc_core_5d6ba758.o \
    ssc_core_67d1f118.o \
    ssc_core_68da074b.o \
    ssc_core_6b6b89d2.o \
    ssc_core_6dd833f3.o \
    ssc_core_73d9c2b7.o \
    ssc_core_76d825be.o \
    ssc_core_79dd08ab.o \
    ssc_core_7a613edb.o \
    ssc_core_83db8762.o \
    ssc_core_856738f2.o \
    ssc_core_8569edc5.o \
    ssc_core_8a6471dc.o \
    ssc_core_8d0064b8.o \
    ssc_core_96061071.o \
    ssc_core_97d767fe.o \
    ssc_core_9b6a1dd2.o \
    ssc_core_9c01d168.o \
    ssc_core_9dd110ad.o \
    ssc_core_9fb0e229.o \
    ssc_core_9fb25b4f.o \
    ssc_core_a1d393be.o \
    ssc_core_a4d4c45e.o \
    ssc_core_a4da1d0a.o \
    ssc_core_a6b78ccc.o \
    ssc_core_a867d880.o \
    ssc_core_a9bf1ff2.o \
    ssc_core_abd05c18.o \
    ssc_core_abd5e7b4.o \
    ssc_core_acb64294.o \
    ssc_core_acb6462e.o \
    ssc_core_b1038cbb.o \
    ssc_core_b10e34f4.o \
    ssc_core_b2b3b239.o \
    ssc_core_b402b40d.o \
    ssc_core_b96ebc21.o \
    ssc_core_bb0b2992.o \
    ssc_core_bc648043.o \
    ssc_core_c3003040.o \
    ssc_core_c5b050d7.o \
    ssc_core_c5b63cb2.o \
    ssc_core_c607b660.o \
    ssc_core_c8d83e88.o \
    ssc_core_cab615c8.o \
    ssc_core_cabdc251.o \
    ssc_core_cc067f58.o \
    ssc_core_ce6a84bb.o \
    ssc_core_d06d763c.o \
    ssc_core_d3d34d7c.o \
    ssc_core_d70a6a09.o \
    ssc_core_d807fa59.o \
    ssc_core_d9d13dac.o \
    ssc_core_dcda6edd.o \
    ssc_core_deb7fd8d.o \
    ssc_core_e0d0866d.o \
    ssc_core_e2b61d72.o \
    ssc_core_e400c1c2.o \
    ssc_core_ee000fbe.o \
    ssc_core_ee01086d.o \
    ssc_core_ee0f0141.o \
    ssc_core_f9b6dbed.o \
    ssc_core_fa09e9e6.o \
    ssc_core_fbd34e62.o \
    ssc_core_fd6bfe36.o \
    ssc_core_ff06d9a4.o \


ssc_core.a : $(MAKEFILE) rtw_proj.tmw $(MODULES_ssc_core)
	@echo "### Creating $@ "
	$(AR) rs $@ $(MODULES_ssc_core)
	@echo "### Created $@"

MODULES_ne = \
    ne_59b4e14a.o \


ne.a : $(MAKEFILE) rtw_proj.tmw $(MODULES_ne)
	@echo "### Creating $@ "
	$(AR) rs $@ $(MODULES_ne)
	@echo "### Created $@"

MODULES_mc = \
    mc_026e4f4b.o \
    mc_03b98f6f.o \
    mc_0bd30dee.o \
    mc_0ed73c49.o \
    mc_10d4ab75.o \
    mc_11086079.o \
    mc_110e6c6c.o \
    mc_15d12d95.o \
    mc_15d828ca.o \
    mc_220ba961.o \
    mc_2565d6e0.o \
    mc_2a642f54.o \
    mc_2bbf87e3.o \
    mc_2cdc96b4.o \
    mc_32d501e3.o \
    mc_32dc008a.o \
    mc_3b66f800.o \
    mc_3e66abdf.o \
    mc_47b8cebe.o \
    mc_47b91db1.o \
    mc_4b0301c6.o \
    mc_4c6117e3.o \
    mc_51d4094e.o \
    mc_52623861.o \
    mc_52688a58.o \
    mc_53b1fc84.o \
    mc_550847c3.o \
    mc_5766048f.o \
    mc_59b6e413.o \
    mc_5d65cd86.o \
    mc_630dda0e.o \
    mc_67da200d.o \
    mc_67da4f41.o \
    mc_6b6d311a.o \
    mc_6fb1c336.o \
    mc_7a613aec.o \
    mc_7bbf41f0.o \
    mc_7cd58f0b.o \
    mc_7cdbe436.o \
    mc_7d0547c8.o \
    mc_7d099de7.o \
    mc_7eb21b39.o \
    mc_81b0ada5.o \
    mc_81b5717e.o \
    mc_870ec75e.o \
    mc_89d597cf.o \
    mc_90b6aa0a.o \
    mc_9ab7d9b0.o \
    mc_9b6376d1.o \
    mc_9b6c1529.o \
    mc_a2647600.o \
    mc_a26bab1a.o \
    mc_a3b90582.o \
    mc_a865d1dd.o \
    mc_af0cc4c9.o \
    mc_b0de9cbc.o \
    mc_b362c5eb.o \
    mc_b7b03d44.o \
    mc_b96a0bad.o \
    mc_bb0520ee.o \
    mc_bdbb9b78.o \
    mc_c2dbf4b2.o \
    mc_c8d25d23.o \
    mc_cab8a1f9.o \
    mc_d20085b7.o \
    mc_d9d38185.o \
    mc_dbbb14d2.o \
    mc_dcdddfae.o \
    mc_debb448f.o \
    mc_e7bc2f1a.o \
    mc_e969ae87.o \
    mc_edbf543c.o \
    mc_ee000fbe.o \
    mc_efdea3a7.o \
    mc_f3be157c.o \
    mc_fcb15a9b.o \
    mc_fd619d14.o \
    mc_fd6341bb.o \


mc.a : $(MAKEFILE) rtw_proj.tmw $(MODULES_mc)
	@echo "### Creating $@ "
	$(AR) rs $@ $(MODULES_mc)
	@echo "### Created $@"

MODULES_ex = \
    ex_04d5441d.o \
    ex_076caee1.o \
    ex_09b84ed2.o \
    ex_136645f8.o \
    ex_18b4440a.o \
    ex_2ebcd5b2.o \
    ex_316a81de.o \
    ex_40d5be33.o \
    ex_436c54cf.o \
    ex_47b11894.o \
    ex_53ba9332.o \
    ex_5d6f13be.o \
    ex_690b7cd0.o \
    ex_79d100f1.o \
    ex_8a6fc761.o \
    ex_b2b40ad5.o \
    ex_b7b137d8.o \
    ex_bb0efd4b.o \
    ex_d4b33b97.o \
    ex_debffef2.o \
    ex_e40d74b8.o \
    ex_f3b1cdf6.o \
    ex_f866102d.o \


ex.a : $(MAKEFILE) rtw_proj.tmw $(MODULES_ex)
	@echo "### Creating $@ "
	$(AR) rs $@ $(MODULES_ex)
	@echo "### Created $@"

MODULES_pm = \
    pm_09bc42e2.o \
    pm_14098e54.o \
    pm_26dc3230.o \
    pm_4fd5f5b9.o \
    pm_fed8c2c9.o \


pm.a : $(MAKEFILE) rtw_proj.tmw $(MODULES_pm)
	@echo "### Creating $@ "
	$(AR) rs $@ $(MODULES_pm)
	@echo "### Created $@"



clean :
	@echo "### Deleting the objects and $(PROGRAM)"
	@\rm -f $(wildcard *.o) $(PROGRAM)

#----------------------------- Dependencies -------------------------------

$(OBJS) : $(MAKEFILE) rtw_proj.tmw
