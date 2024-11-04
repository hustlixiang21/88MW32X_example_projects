################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../source/board_hash.c \
../source/httpsrv_fs_data.c \
../source/lwip_httpssrv_ota.c \
../source/semihost_hardfault.c \
../source/sha224-256.c \
../source/wlan_reset.c 

C_DEPS += \
./source/board_hash.d \
./source/httpsrv_fs_data.d \
./source/lwip_httpssrv_ota.d \
./source/semihost_hardfault.d \
./source/sha224-256.d \
./source/wlan_reset.d 

OBJS += \
./source/board_hash.o \
./source/httpsrv_fs_data.o \
./source/lwip_httpssrv_ota.o \
./source/semihost_hardfault.o \
./source/sha224-256.o \
./source/wlan_reset.o 


# Each subdirectory must supply rules for building sources it contributes
source/%.o: ../source/%.c source/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D_POSIX_SOURCE -DCPU_88MW320_A0_NAPC -DUSE_RTOS=1 -DPRINTF_ADVANCED_ENABLE=1 -DHTTPSRV_CFG_WEBSOCKET_ENABLED=0 -DHTTPSRV_CFG_MBEDTLS_ENABLE=1 -DMBEDTLS_CONFIG_FILE='"mbedtls_config.h"' -DSDIO_ENABLED -DSERIAL_PORT_TYPE_UART=1 -DFSL_RTOS_FREE_RTOS -DCPU_88MW320_A0_NAPC_cm4 -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -D__MCUXPRESSO -D__USE_CMSIS -DNDEBUG -D__NEWLIB__ -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\source" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\flash\mflash\mw320" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\boot2_partition" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\lwip\src\apps\httpsrv" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\lwip\port\arch" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\lwip\src\include\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\lwip\port" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\lwip\src" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\lwip\src\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\utilities" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\dhcpd" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\incl\port\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\port\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\wps" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\incl\port\mbedtls" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\port\mbedtls" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\mbedtls\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\mbedtls\port\mw" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\drivers" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\sdmmc\inc" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\sdmmc\host" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\device" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\component\uart" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\component\serial_manager" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\component\lists" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\flash\mflash" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\CMSIS" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\freertos\freertos_kernel\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\freertos\freertos_kernel\portable\GCC\ARM_CM4F" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\incl" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\incl\port\os" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\incl\wifidriver" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\incl\wlcmgr" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\wifi_bt_firmware" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\wifidriver" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\wifidriver\incl" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\sdmmc\osa" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\component\osa" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\network" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\board" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wpl" -Os -fno-common -g -gdwarf-4 -fomit-frame-pointer -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -imacros "wifi_config.h" -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-source

clean-source:
	-$(RM) ./source/board_hash.d ./source/board_hash.o ./source/httpsrv_fs_data.d ./source/httpsrv_fs_data.o ./source/lwip_httpssrv_ota.d ./source/lwip_httpssrv_ota.o ./source/semihost_hardfault.d ./source/semihost_hardfault.o ./source/sha224-256.d ./source/sha224-256.o ./source/wlan_reset.d ./source/wlan_reset.o

.PHONY: clean-source
