###########################################################################
## Makefile generated for Simulink model 'serial_demo'. 
## 
## Makefile     : serial_demo.mk
## Generated on : Mon Apr 10 17:26:04 2017
## MATLAB Coder version: 3.2 (R2016b)
## 
## Build Info:
## 
## Final product: $(RELATIVE_PATH_TO_ANCHOR)/serial_demo.elf
## Product type : executable
## Build type   : Top-Level Standalone Executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPUTER                Computer type. See the MATLAB "computer" command.

PRODUCT_NAME              = serial_demo
MAKEFILE                  = serial_demo.mk
COMPUTER                  = GLNXA64
MATLAB_ROOT               = /usr/local/MATLAB/R2016b
MATLAB_BIN                = /usr/local/MATLAB/R2016b/bin
MATLAB_ARCH_BIN           = /usr/local/MATLAB/R2016b/bin/glnxa64
MASTER_ANCHOR_DIR         = 
START_DIR                 = /media/pec/DataOne/PROG/EECS567/proj/Course.ME567
ARCH                      = glnxa64
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = None
MODELREF_LINK_RSPFILE_NAME = serial_demo_ref.rsp
RELATIVE_PATH_TO_ANCHOR   = ..

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Arduino AVR v1.6.13 | gmake (64-bit Linux)
# Supported Version(s):    
# ToolchainInfo Version:   R2016b
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# ARDUINO_ROOT
# ARDUINO_PORT
# ARDUINO_MCU
# ARDUINO_BAUD
# ARDUINO_PROTOCOL
# ARDUINO_F_CPU

#-----------
# MACROS
#-----------

PRODUCT_HEX      = $(RELATIVE_PATH_TO_ANCHOR)/$(PRODUCT_NAME).hex
PRODUCT_BIN      = $(RELATIVE_PATH_TO_ANCHOR)/$(PRODUCT_NAME).eep
ARDUINO_TOOLS    = $(ARDUINO_ROOT)/hardware/tools/avr/bin
ELF2EEP_OPTIONS  = -O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0
DOWNLOAD_ARGS    =  >tmp.trash 2>&1 -P$(ARDUINO_PORT) -V -q -q -q -q -F -C$(ARDUINO_ROOT)/hardware/tools/avr/etc/avrdude.conf -p$(ARDUINO_MCU) -c$(ARDUINO_PROTOCOL) -b$(ARDUINO_BAUD) -D -Uflash:w:

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -lm

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# Assembler: Arduino AVR Assembler
AS_PATH = $(ARDUINO_TOOLS)
AS = $(AS_PATH)/avr-as

# C Compiler: Arduino AVR C Compiler
CC_PATH = $(ARDUINO_TOOLS)
CC = $(CC_PATH)/avr-gcc

# Linker: Arduino AVR Linker
LD_PATH = $(ARDUINO_TOOLS)
LD = $(LD_PATH)/avr-gcc

# C++ Compiler: Arduino AVR C++ Compiler
CPP_PATH = $(ARDUINO_TOOLS)
CPP = $(CPP_PATH)/avr-g++

# C++ Linker: Arduino AVR C++ Linker
CPP_LD_PATH = $(ARDUINO_TOOLS)
CPP_LD = $(CPP_LD_PATH)/avr-gcc

# Archiver: Arduino AVR Archiver
AR_PATH = $(ARDUINO_TOOLS)
AR = $(AR_PATH)/avr-ar

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_BIN)
MEX = $(MEX_PATH)/mex

# Binary Converter: Binary Converter
OBJCOPY_PATH = $(ARDUINO_ROOT)/hardware/tools/avr/bin
OBJCOPY = $(OBJCOPY_PATH)/avr-objcopy

# Hex Converter: Hex Converter
OBJCOPY_PATH = $(ARDUINO_ROOT)/hardware/tools/avr/bin
OBJCOPY = $(OBJCOPY_PATH)/avr-objcopy

# Download: Download
DOWNLOAD_PATH = $(ARDUINO_TOOLS)
DOWNLOAD = $(DOWNLOAD_PATH)/avrdude

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%/bin/glnxa64
MAKE = $(MAKE_PATH)/gmake


#-------------------------
# Directives/Utilities
#-------------------------

ASDEBUG             = -g
AS_OUTPUT_FLAG      =
CDEBUG              = -g
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  = @rm -f
ECHO                = @echo
MV                  = @mv
RUN                 =

#--------------------------------------
# "Faster Runs" Build Configuration
#--------------------------------------

ARFLAGS              = rcs
ASFLAGS              =
OBJCOPYFLAGS_BIN     = $(ELF2EEP_OPTIONS) $(PRODUCT) $(PRODUCT_BIN)
CFLAGS               = -std=gnu11  \
                       -c \
                       -g \
                       -w \
                       -ffunction-sections \
                       -fdata-sections  \
                       -MMD \
                       -DARDUINO=10613  \
                       -MMD -MP -MF"$(@:%.o=%.dep)" -MT"$@"  \
                       -Os
CPPFLAGS             = -std=gnu++11 -fpermissive -fno-exceptions -fno-threadsafe-statics  \
                       -c \
                       -g \
                       -w \
                       -ffunction-sections \
                       -fdata-sections  \
                       -MMD \
                       -DARDUINO=10613  \
                       -MMD -MP -MF"$(@:%.o=%.dep)" -MT"$@"  \
                       -Os
CPP_LDFLAGS          =  -w -Os -Wl,--gc-sections,--relax
CPP_SHAREDLIB_LDFLAGS  =
DOWNLOAD_FLAGS       = $(DOWNLOAD_ARGS)$(PRODUCT_HEX):i
EXECUTE_FLAGS        =
OBJCOPYFLAGS_HEX     = -O ihex -R .eeprom $(PRODUCT) $(PRODUCT_HEX)
LDFLAGS              =  -w -Os -Wl,--gc-sections,--relax
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    =

#--------------------
# File extensions
#--------------------

OBJ_EXT             = .o
ASM_EXT             = .s
AS_EXT              = .asm
C_DEP               = .dep
H_EXT               = .h
OBJ_EXT             = .o
C_EXT               = .c
EXE_EXT             = .elf
SHAREDLIB_EXT       =
C_DEP               = .dep
HPP_EXT             = .hpp
OBJ_EXT             = .o
CPP_EXT             = .cpp
EXE_EXT             =
SHAREDLIB_EXT       =
STATICLIB_EXT       = .a
MEX_EXT             = .mexa64
MAKE_EXT            = .mk


###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)/serial_demo.elf
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I/root/Documents/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinobase/include -I/root/Documents/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinobase/blocks/sfcn/include -I$(START_DIR)/serial_demo_ert_rtw -I$(START_DIR) -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/rtw/c/ert -I$(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino -I$(ARDUINO_ROOT)/hardware/arduino/avr/variants/standard -I$(ARDUINO_ROOT)/libraries/Servo/src -I/root/Documents/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinotarget/registry/../include -I/root/Documents/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinotarget/registry/../scheduler/include -I$(ARDUINO_ROOT)/hardware/tools/avr/avr/include/avr -I/root/Documents/MATLAB/SupportPackages/R2016b/toolbox/target/shared/externalmode_daemon/include -I/root/Documents/MATLAB/SupportPackages/R2016b/3P.instrset/arduinoide.instrset/arduino-1.6.13/libraries/Servo/src -I/root/Documents/MATLAB/SupportPackages/R2016b/3P.instrset/arduinoide.instrset/arduino-1.6.13/libraries/Servo/src/avr

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -D_RTT_USE_SERIAL0_ -DMODEL=serial_demo -DNUMST=1 -DNCSTATES=0 -DHAVESTDIO -DUNIX -DONESTEPFCN=1 -DTERMFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -D__MW_TARGET_USE_HARDWARE_RESOURCES_H__ -DEXIT_FAILURE=1 -DEXTMODE_DISABLEPRINTF -DEXTMODE_DISABLETESTING -DEXTMODE_DISABLE_ARGS_PROCESSING=1 -DRT -DSTACK_SIZE=64 -DMW_TIMERID=2 -DMW_PRESCALAR=1024 -DMW_TIMERCOUNT=131 -DMW_SCHEDULERCOUNTER=125 -D_RTT_BAUDRATE_SERIAL0_=9600 -D_RTT_ANALOG_REF_=0 -D_RTT_NUMSERVOS_=6
DEFINES_BUILD_ARGS = -DONESTEPFCN=1 -DTERMFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0
DEFINES_IMPLIED = -DTID01EQ=0
DEFINES_SKIPFORSIL = -DEXIT_FAILURE=1 -DEXTMODE_DISABLEPRINTF -DEXTMODE_DISABLETESTING -DEXTMODE_DISABLE_ARGS_PROCESSING=1 -DRT -DSTACK_SIZE=64
DEFINES_STANDARD = -DMODEL=serial_demo -DNUMST=1 -DNCSTATES=0 -DHAVESTDIO -DUNIX

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_IMPLIED) $(DEFINES_SKIPFORSIL) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = /root/Documents/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinobase/src/MW_digitalio.cpp $(START_DIR)/serial_demo_ert_rtw/serial_demo.c $(START_DIR)/serial_demo_ert_rtw/serial_demo_data.c $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/hooks.c $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/WInterrupts.c $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/wiring.c $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/wiring_analog.c $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/wiring_digital.c $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/wiring_pulse.c $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/wiring_shift.c $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/abi.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/CDC.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/HardwareSerial.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/HardwareSerial0.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/HardwareSerial1.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/HardwareSerial2.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/HardwareSerial3.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/PluggableUSB.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/IPAddress.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/new.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/Print.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/Stream.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/Tone.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/USBCore.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/WMath.cpp $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/WString.cpp /root/Documents/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinotarget/registry/../src/MW_ArduinoHWInit.cpp /root/Documents/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinobase/src/io_wrappers.cpp /root/Documents/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinotarget/registry/../scheduler/src/arduinoAVRScheduler.cpp /root/Documents/MATLAB/SupportPackages/R2016b/3P.instrset/arduinoide.instrset/arduino-1.6.13/libraries/Servo/src/avr/Servo.cpp

MAIN_SRC = $(START_DIR)/serial_demo_ert_rtw/ert_main.c

ALL_SRCS = $(SRCS) $(MAIN_SRC)

###########################################################################
## OBJECTS
###########################################################################

OBJS = MW_digitalio.o serial_demo.o serial_demo_data.o hooks.o WInterrupts.o wiring.o wiring_analog.o wiring_digital.o wiring_pulse.o wiring_shift.o abi.o CDC.o HardwareSerial.o HardwareSerial0.o HardwareSerial1.o HardwareSerial2.o HardwareSerial3.o PluggableUSB.o IPAddress.o new.o Print.o Stream.o Tone.o USBCore.o WMath.o WString.o MW_ArduinoHWInit.o io_wrappers.o arduinoAVRScheduler.o Servo.o

MAIN_OBJ = ert_main.o

ALL_OBJS = $(OBJS) $(MAIN_OBJ)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = 

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_SKIPFORSIL = -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR -D_RUNONTARGETHARDWARE_BUILD_
CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_SKIPFORSIL) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_SKIPFORSIL = -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR -D_RUNONTARGETHARDWARE_BUILD_
CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_SKIPFORSIL) $(CPPFLAGS_BASIC)

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_SKIPFORSIL = -mmcu=atmega328p 

CPP_LDFLAGS += $(CPP_LDFLAGS_SKIPFORSIL)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL = -mmcu=atmega328p 

CPP_SHAREDLIB_LDFLAGS += $(CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL)

#-----------
# Linker
#-----------

LDFLAGS_SKIPFORSIL = -mmcu=atmega328p 

LDFLAGS += $(LDFLAGS_SKIPFORSIL)

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_SKIPFORSIL = -mmcu=atmega328p 

SHAREDLIB_LDFLAGS += $(SHAREDLIB_LDFLAGS_SKIPFORSIL)

###########################################################################
## INLINED COMMANDS
###########################################################################


DERIVED_SRCS = $(subst .o,.dep,$(OBJS))

build:

%.dep:



-include codertarget_assembly_flags.mk
-include *.dep


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild postbuild download execute


all : build postbuild
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


postbuild : build
	@echo "### Invoking postbuild tool "Binary Converter" ..."
	$(OBJCOPY) $(OBJCOPYFLAGS_BIN)
	@echo "### Done invoking postbuild tool."
	@echo "### Invoking postbuild tool "Hex Converter" ..."
	$(OBJCOPY) $(OBJCOPYFLAGS_HEX)
	@echo "### Done invoking postbuild tool."


download : postbuild
	@echo "### Invoking postbuild tool "Download" ..."
	$(DOWNLOAD) $(DOWNLOAD_FLAGS)
	@echo "### Done invoking postbuild tool."


execute : download
	@echo "### Invoking postbuild tool "Execute" ..."
	$(EXECUTE) $(EXECUTE_FLAGS)
	@echo "### Done invoking postbuild tool."


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(MAIN_OBJ)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(CPP_LD) $(CPP_LDFLAGS) -o $(PRODUCT) $(OBJS) $(MAIN_OBJ) $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : %.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : %.s
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : %.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.s
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.s
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.s
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.s
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/serial_demo_ert_rtw/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/serial_demo_ert_rtw/%.s
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : $(START_DIR)/serial_demo_ert_rtw/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : ../%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : ../%.s
	$(AS) $(ASFLAGS)  "$@" "$<"


%.o : ../%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


MW_digitalio.o : /root/Documents/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinobase/src/MW_digitalio.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


hooks.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/hooks.c
	$(CC) $(CFLAGS) -o "$@" "$<"


WInterrupts.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/WInterrupts.c
	$(CC) $(CFLAGS) -o "$@" "$<"


wiring.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/wiring.c
	$(CC) $(CFLAGS) -o "$@" "$<"


wiring_analog.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/wiring_analog.c
	$(CC) $(CFLAGS) -o "$@" "$<"


wiring_digital.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/wiring_digital.c
	$(CC) $(CFLAGS) -o "$@" "$<"


wiring_pulse.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/wiring_pulse.c
	$(CC) $(CFLAGS) -o "$@" "$<"


wiring_shift.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/wiring_shift.c
	$(CC) $(CFLAGS) -o "$@" "$<"


abi.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/abi.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


CDC.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/CDC.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


HardwareSerial.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/HardwareSerial.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


HardwareSerial0.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/HardwareSerial0.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


HardwareSerial1.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/HardwareSerial1.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


HardwareSerial2.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/HardwareSerial2.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


HardwareSerial3.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/HardwareSerial3.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


PluggableUSB.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/PluggableUSB.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


IPAddress.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/IPAddress.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


new.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/new.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


Print.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/Print.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


Stream.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/Stream.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


Tone.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/Tone.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


USBCore.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/USBCore.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


WMath.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/WMath.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


WString.o : $(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino/WString.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


MW_ArduinoHWInit.o : /root/Documents/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinotarget/registry/../src/MW_ArduinoHWInit.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


io_wrappers.o : /root/Documents/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinobase/src/io_wrappers.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


arduinoAVRScheduler.o : /root/Documents/MATLAB/SupportPackages/R2016b/toolbox/target/supportpackages/arduinotarget/registry/../scheduler/src/arduinoAVRScheduler.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


Servo.o : /root/Documents/MATLAB/SupportPackages/R2016b/3P.instrset/arduinoide.instrset/arduino-1.6.13/libraries/Servo/src/avr/Servo.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : $(MAKEFILE) rtw_proj.tmw


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### ASFLAGS = $(ASFLAGS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### OBJCOPYFLAGS_BIN = $(OBJCOPYFLAGS_BIN)"
	@echo "### OBJCOPYFLAGS_HEX = $(OBJCOPYFLAGS_HEX)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(PRODUCT)
	$(RM) $(ALL_OBJS)
	$(RM) *.dep
	$(ECHO) "### Deleted all derived files."

