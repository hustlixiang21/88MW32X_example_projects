################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include wpl/subdir.mk
-include wifi/wps/subdir.mk
-include wifi/wlcmgr/subdir.mk
-include wifi/wifidriver/subdir.mk
-include wifi/port/os/subdir.mk
-include wifi/port/mbedtls/subdir.mk
-include wifi/port/lwip/subdir.mk
-include wifi/dhcpd/subdir.mk
-include utilities/subdir.mk
-include startup/subdir.mk
-include source/subdir.mk
-include sdmmc/src/subdir.mk
-include sdmmc/osa/subdir.mk
-include sdmmc/host/subdir.mk
-include network/subdir.mk
-include mbedtls/port/mw/subdir.mk
-include mbedtls/library/subdir.mk
-include lwip/src/netif/ppp/subdir.mk
-include lwip/src/netif/subdir.mk
-include lwip/src/core/ipv6/subdir.mk
-include lwip/src/core/ipv4/subdir.mk
-include lwip/src/core/subdir.mk
-include lwip/src/apps/httpsrv/subdir.mk
-include lwip/src/api/subdir.mk
-include lwip/port/subdir.mk
-include freertos/freertos_kernel/portable/MemMang/subdir.mk
-include freertos/freertos_kernel/portable/GCC/ARM_CM4F/subdir.mk
-include freertos/freertos_kernel/subdir.mk
-include flash/mflash/mw320/subdir.mk
-include drivers/subdir.mk
-include device/subdir.mk
-include component/uart/subdir.mk
-include component/serial_manager/subdir.mk
-include component/osa/subdir.mk
-include component/lists/subdir.mk
-include boot2_partition/subdir.mk
-include board/subdir.mk
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := rdmw320_r0_mw_lwip_httpssrv_ota
BUILD_ARTIFACT_EXTENSION := axf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all:
	+@$(MAKE) --no-print-directory main-build && $(MAKE) --no-print-directory post-build

# Main-build Target
main-build: rdmw320_r0_mw_lwip_httpssrv_ota.axf

# Tool invocations
rdmw320_r0_mw_lwip_httpssrv_ota.axf: $(OBJS) $(USER_OBJS) makefile $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -Xlinker -Map="rdmw320_r0_mw_lwip_httpssrv_ota.map" -Xlinker --gc-sections -Xlinker -print-memory-usage -Xlinker --sort-section=alignment -Xlinker --cref -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -T rdmw320_r0_mw_lwip_httpssrv_ota_Debug.ld -o "rdmw320_r0_mw_lwip_httpssrv_ota.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) rdmw320_r0_mw_lwip_httpssrv_ota.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-cd ../tools/mw_img_conv/mw320 ; ./make_load_image.sh E:/MCUXpressoIDE_24.9.25/88MW32X/rdmw320_r0_mw_lwip_httpssrv_ota/Debug/rdmw320_r0_mw_lwip_httpssrv_ota.axf E:/MCUXpressoIDE_24.9.25/88MW32X/rdmw320_r0_mw_lwip_httpssrv_ota/Debug/loadimage.o 0x1f010000 ;
	-@echo ' '

.PHONY: all clean dependents main-build post-build

-include ../makefile.targets
