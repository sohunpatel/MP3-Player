TARGET := Discovery_Board

# ------------------------------------------------------------------------------
# GNU ARM Embedded Toolchain
# ------------------------------------------------------------------------------
CC   = arm-none-eabi-gcc
CXX  = arm-none-eabi-g++
LD   = arm-none-eabi-ld
AR   = arm-none-eabi-ar
AS   = arm-none-eabi-as
CP   = arm-none-eabi-objcopy
OD   = arm-none-eabi-objdump
NM   = arm-none-eabi-nm
SIZE = arm-none-eabi-size
A2L  = arm-none-eabi-addr2line

# ------------------------------------------------------------------------------
# Working directories
# ------------------------------------------------------------------------------
BUILD_DIR := ./build
SRC_DIRS  := $(shell find $(CURR_DIR) -type d | grep Source)
CURR_DIR  := .

# ------------------------------------------------------------------------------
# Find sources
# ------------------------------------------------------------------------------
ASOURCES   := $(CURR_DIR)/startup_stm32f746xx.s
CSOURCES   := $(shell find $(CURR_DIR) -name *.c)
CXXSOURCES := $(shell find $(CURR_DIR) -name *.cpp)
INC_DIRS   := $(shell find $(CURR_DIR) -type d | grep Include)


# ------------------------------------------------------------------------------
# Object list
# ------------------------------------------------------------------------------
OBJECTS  = $(addsuffix .o,$(addprefix $(BUILD_DIR)/$(TARGET),$(basename $(ASOURCES))))
OBJECTS += $(addsuffix .o,$(addprefix $(BUILD_DIR)/$(TARGET),$(basename $(CSOURCES))))
OBJECTS += $(addsuffix .o,$(addprefix $(BUILD_DIR)/$(TARGET),$(basename $(CXXSOURCES))))

# ------------------------------------------------------------------------------
# Target output files
# ------------------------------------------------------------------------------
TARGET_ELF = $(BUILD_DIR)/$(TARGET).elf
TARGET_HEX = $(BUILD_DIR)/$(TARGET).hex
TARGET_BIN = $(BUILD_DIR)/$(TARGET).bin

# ------------------------------------------------------------------------------
# Flags
# ------------------------------------------------------------------------------
MCFLAGS  = -mcpu=cortex-m7 -mthumb -mfpu=fpv5-sp-d16 -mfloat-abi=hard
OPTIMIZE = -Og
DEFS     = 
DEBUG	 = 1
WARNINGS = -Wall -fdata-sections -ffunction-sections
CSTD     = -std=c17
CXXSTD   = -std=c++17
CFLAGS   = -c $(MCFLAGS) $(DEFS) $(OPTIMIZE) $(addprefix -I,$(INC_DIRS)) $(WARNINGS) $(CSTD)
CXXFLAGS = -c $(MCFLAGS) $(DEFS) $(OPTIMIZE) $(addprefix -I,$(INC_DIRS)) $(WARNINGS) $(CXXSTD)
ifeq ($(DEBUG), 1)
CFLAGS	+= -g -gdwarf-2
CXXFLAGS+= -g -gdwarf-2
endif
LDSCRIPT = $(CURR_DIR)/STM32F746NGHx_FLASH.ld
LIBS     = -lc -lm -lnosys
LIBDIR	 =
LDFLAGS  = $(MCFLAGS) -specs=nano.specs -T$(LDSCRIPT) $(LIBDIR) $(LIBS) -Wl,-Map=$(BUILD_DIR)/$(TARGET).map,--cref -Wl,--gc-sections

# ------------------------------------------------------------------------------
# Build
# ------------------------------------------------------------------------------
$(TARGET_BIN): $(TARGET_ELF)
	$(CP) -O binary -S $< $@

$(TARGET_HEX): $(TARGET_ELF)
	$(CP) -O ihex --set-start 0x08000000 $< $@

$(TARGET_ELF): $(OBJECTS)
	$(CXX) -o $@ $^ $(LDFLAGS)
	$(SIZE) $(TARGET_ELF)

$(BUILD_DIR)/$(TARGET)%.o: %.cpp
	@mkdir -p $(dir $@)
	@echo %% $(notdir $<)
	@$(CXX) -c -o $@ $(CFLAGS) $<

$(BUILD_DIR)/$(TARGET)%.o: %.c
	@mkdir -p $(dir $@)
	@echo %% $(notdir $<)
	@$(CC) -c -o $@ $(CFLAGS) $<

$(BUILD_DIR)/$(TARGET)%.o: %.s
	@mkdir -p $(dir $@)
	@echo %% $(notdir $<)
	@$(CC) -c -o $@ $(CFLAGS) $<

# ------------------------------------------------------------------------------
# Recipes
# ------------------------------------------------------------------------------
.PHONY: all flash clean

clean:
	rm -rf $(BUILD_DIR)

flash: $(TARGET_HEX)
	st-flash write $(BUILD_DIR)/$(TARGET).bin 0x08000000

all: $(TARGET_HEX)

# Include the .d makefiles. The - at the front suppresses the errors of missing
# Makefiles. Initially, all the .d files will be missing, and we don't want those
# errors to show up.
-include $(DEPS)