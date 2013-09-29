# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/Users/FRC2014/Documents/workspace
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/FRC2014TestCode/2013Robot



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate.out \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage.o


#Rules

# CommandBasedRobotTemplate
ifeq ($(DEBUG_MODE),1)
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEFINES = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBasedRobotTemplate/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBasedRobotTemplate/$(MODE_DIR)/% : CPU = PPC603
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL = gnu
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL_PATH = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBasedRobotTemplate/$(MODE_DIR)/% : LIBPATH = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : LIBS = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : OBJ_DIR := CommandBasedRobotTemplate/$(MODE_DIR)

CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/AutonomousCommand.o : $(PRJ_ROOT_DIR)/Commands/AutonomousCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/DeployPanCommand.o : $(PRJ_ROOT_DIR)/Commands/DeployPanCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/FrisbeePanSuperVisorCommand.o : $(PRJ_ROOT_DIR)/Commands/FrisbeePanSuperVisorCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/KickerSupervisorCommand.o : $(PRJ_ROOT_DIR)/Commands/KickerSupervisorCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/LEDSupervisorCommand.o : $(PRJ_ROOT_DIR)/Commands/LEDSupervisorCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/MovePBToBottomCommand.o : $(PRJ_ROOT_DIR)/Commands/MovePBToBottomCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/MovePBToTopCommand.o : $(PRJ_ROOT_DIR)/Commands/MovePBToTopCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/PanAtFeederStationCommand.o : $(PRJ_ROOT_DIR)/Commands/PanAtFeederStationCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/PizzaBoxSupervisorCommand.o : $(PRJ_ROOT_DIR)/Commands/PizzaBoxSupervisorCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/ShootAndIndexOneFrisbeeCommand.o : $(PRJ_ROOT_DIR)/Commands/ShootAndIndexOneFrisbeeCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/ShooterAndIndexAllFrisbeesCommand.o : $(PRJ_ROOT_DIR)/Commands/ShooterAndIndexAllFrisbeesCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/ShooterSupervisiorCommand.o : $(PRJ_ROOT_DIR)/Commands/ShooterSupervisiorCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/ShooterTiltSupervisorCommand.o : $(PRJ_ROOT_DIR)/Commands/ShooterTiltSupervisorCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/StowPanCommand.o : $(PRJ_ROOT_DIR)/Commands/StowPanCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/TiltShooterTiltDownCommand.o : $(PRJ_ROOT_DIR)/Commands/TiltShooterTiltDownCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/TiltShooterUpCommand.o : $(PRJ_ROOT_DIR)/Commands/TiltShooterUpCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/OI.o : $(PRJ_ROOT_DIR)/OI.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Robot.o : $(PRJ_ROOT_DIR)/Robot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/RobotMap.o : $(PRJ_ROOT_DIR)/RobotMap.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/Chassis.o : $(PRJ_ROOT_DIR)/Subsystems/Chassis.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/FrisbeePanSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/FrisbeePanSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/KickerSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/KickerSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/LEDSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/LEDSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/LcdDisplaySubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/LcdDisplaySubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/PizzaBoxSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/PizzaBoxSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/SensorSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/SensorSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/ShooterSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/ShooterSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/ShooterTiltSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/ShooterTiltSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_CommandBasedRobotTemplate = CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/AutonomousCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/DeployPanCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/FrisbeePanSuperVisorCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/KickerSupervisorCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/LEDSupervisorCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/MovePBToBottomCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/MovePBToTopCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/PanAtFeederStationCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/PizzaBoxSupervisorCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/ShootAndIndexOneFrisbeeCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/ShooterAndIndexAllFrisbeesCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/ShooterSupervisiorCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/ShooterTiltSupervisorCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/StowPanCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/TiltShooterTiltDownCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/TiltShooterUpCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/OI.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Robot.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/RobotMap.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/Chassis.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/FrisbeePanSubsystem.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/KickerSubsystem.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/LEDSubsystem.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/LcdDisplaySubsystem.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/PizzaBoxSubsystem.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/SensorSubsystem.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/ShooterSubsystem.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/ShooterTiltSubsystem.o

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate.out : $(OBJECTS_CommandBasedRobotTemplate)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_CommandBasedRobotTemplate) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_CommandBasedRobotTemplate) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_compile_file : $(FILE) ;

_clean :: CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_clean

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_clean : 
	$(TRACE_FLAG)if [ -d "CommandBasedRobotTemplate" ]; then cd "CommandBasedRobotTemplate"; rm -rf $(MODE_DIR); fi


# CommandBassedRobotTemplate_partialImage
ifeq ($(DEBUG_MODE),1)
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEFINES = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : CPU = PPC603
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL = gnu
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : LIBPATH = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : LIBS = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : OBJ_DIR := CommandBassedRobotTemplate_partialImage/$(MODE_DIR)

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/AutonomousCommand.o : $(PRJ_ROOT_DIR)/Commands/AutonomousCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/DeployPanCommand.o : $(PRJ_ROOT_DIR)/Commands/DeployPanCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/FrisbeePanSuperVisorCommand.o : $(PRJ_ROOT_DIR)/Commands/FrisbeePanSuperVisorCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/KickerSupervisorCommand.o : $(PRJ_ROOT_DIR)/Commands/KickerSupervisorCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/LEDSupervisorCommand.o : $(PRJ_ROOT_DIR)/Commands/LEDSupervisorCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/MovePBToBottomCommand.o : $(PRJ_ROOT_DIR)/Commands/MovePBToBottomCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/MovePBToTopCommand.o : $(PRJ_ROOT_DIR)/Commands/MovePBToTopCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/PanAtFeederStationCommand.o : $(PRJ_ROOT_DIR)/Commands/PanAtFeederStationCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/PizzaBoxSupervisorCommand.o : $(PRJ_ROOT_DIR)/Commands/PizzaBoxSupervisorCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/ShootAndIndexOneFrisbeeCommand.o : $(PRJ_ROOT_DIR)/Commands/ShootAndIndexOneFrisbeeCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/ShooterAndIndexAllFrisbeesCommand.o : $(PRJ_ROOT_DIR)/Commands/ShooterAndIndexAllFrisbeesCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/ShooterSupervisiorCommand.o : $(PRJ_ROOT_DIR)/Commands/ShooterSupervisiorCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/ShooterTiltSupervisorCommand.o : $(PRJ_ROOT_DIR)/Commands/ShooterTiltSupervisorCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/StowPanCommand.o : $(PRJ_ROOT_DIR)/Commands/StowPanCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/TiltShooterTiltDownCommand.o : $(PRJ_ROOT_DIR)/Commands/TiltShooterTiltDownCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/TiltShooterUpCommand.o : $(PRJ_ROOT_DIR)/Commands/TiltShooterUpCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/OI.o : $(PRJ_ROOT_DIR)/OI.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Robot.o : $(PRJ_ROOT_DIR)/Robot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/RobotMap.o : $(PRJ_ROOT_DIR)/RobotMap.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/Chassis.o : $(PRJ_ROOT_DIR)/Subsystems/Chassis.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/FrisbeePanSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/FrisbeePanSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/KickerSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/KickerSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/LEDSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/LEDSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/LcdDisplaySubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/LcdDisplaySubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/PizzaBoxSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/PizzaBoxSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/SensorSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/SensorSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/ShooterSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/ShooterSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/ShooterTiltSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/ShooterTiltSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_CommandBassedRobotTemplate_partialImage = CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/AutonomousCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/DeployPanCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/FrisbeePanSuperVisorCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/KickerSupervisorCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/LEDSupervisorCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/MovePBToBottomCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/MovePBToTopCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/PanAtFeederStationCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/PizzaBoxSupervisorCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/ShootAndIndexOneFrisbeeCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/ShooterAndIndexAllFrisbeesCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/ShooterSupervisiorCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/ShooterTiltSupervisorCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/StowPanCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/TiltShooterTiltDownCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/TiltShooterUpCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/OI.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Robot.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/RobotMap.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/Chassis.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/FrisbeePanSubsystem.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/KickerSubsystem.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/LEDSubsystem.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/LcdDisplaySubsystem.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/PizzaBoxSubsystem.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/SensorSubsystem.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/ShooterSubsystem.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/ShooterTiltSubsystem.o

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage.o : $(OBJECTS_CommandBassedRobotTemplate_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_CommandBassedRobotTemplate_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage_compile_file : $(FILE) ;

_clean :: CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage_clean

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "CommandBassedRobotTemplate_partialImage" ]; then cd "CommandBassedRobotTemplate_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/AutonomousCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/DeployPanCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/FrisbeePanSuperVisorCommand.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/KickerSupervisorCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/LEDSupervisorCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/MovePBToBottomCommand.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/MovePBToTopCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/PanAtFeederStationCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/PizzaBoxSupervisorCommand.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/ShootAndIndexOneFrisbeeCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/ShooterAndIndexAllFrisbeesCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/ShooterSupervisiorCommand.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/ShooterTiltSupervisorCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/StowPanCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/TiltShooterTiltDownCommand.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Commands/TiltShooterUpCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/OI.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Robot.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/RobotMap.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/Chassis.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/FrisbeePanSubsystem.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/KickerSubsystem.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/LEDSubsystem.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/LcdDisplaySubsystem.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/PizzaBoxSubsystem.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/SensorSubsystem.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/ShooterSubsystem.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/2013Robot/Subsystems/ShooterTiltSubsystem.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/AutonomousCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/DeployPanCommand.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/FrisbeePanSuperVisorCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/KickerSupervisorCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/LEDSupervisorCommand.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/MovePBToBottomCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/MovePBToTopCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/PanAtFeederStationCommand.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/PizzaBoxSupervisorCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/ShootAndIndexOneFrisbeeCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/ShooterAndIndexAllFrisbeesCommand.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/ShooterSupervisiorCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/ShooterTiltSupervisorCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/StowPanCommand.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/TiltShooterTiltDownCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Commands/TiltShooterUpCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/OI.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Robot.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/RobotMap.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/Chassis.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/FrisbeePanSubsystem.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/KickerSubsystem.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/LEDSubsystem.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/LcdDisplaySubsystem.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/PizzaBoxSubsystem.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/SensorSubsystem.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/ShooterSubsystem.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2013Robot/Subsystems/ShooterTiltSubsystem.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
