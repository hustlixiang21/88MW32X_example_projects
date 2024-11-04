################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lwip/src/apps/httpsrv/httpsrv.c \
../lwip/src/apps/httpsrv/httpsrv_base64.c \
../lwip/src/apps/httpsrv/httpsrv_fs.c \
../lwip/src/apps/httpsrv/httpsrv_script.c \
../lwip/src/apps/httpsrv/httpsrv_sha1.c \
../lwip/src/apps/httpsrv/httpsrv_supp.c \
../lwip/src/apps/httpsrv/httpsrv_task.c \
../lwip/src/apps/httpsrv/httpsrv_tls.c \
../lwip/src/apps/httpsrv/httpsrv_utf8.c \
../lwip/src/apps/httpsrv/httpsrv_ws.c \
../lwip/src/apps/httpsrv/httpsrv_ws_api.c 

C_DEPS += \
./lwip/src/apps/httpsrv/httpsrv.d \
./lwip/src/apps/httpsrv/httpsrv_base64.d \
./lwip/src/apps/httpsrv/httpsrv_fs.d \
./lwip/src/apps/httpsrv/httpsrv_script.d \
./lwip/src/apps/httpsrv/httpsrv_sha1.d \
./lwip/src/apps/httpsrv/httpsrv_supp.d \
./lwip/src/apps/httpsrv/httpsrv_task.d \
./lwip/src/apps/httpsrv/httpsrv_tls.d \
./lwip/src/apps/httpsrv/httpsrv_utf8.d \
./lwip/src/apps/httpsrv/httpsrv_ws.d \
./lwip/src/apps/httpsrv/httpsrv_ws_api.d 

OBJS += \
./lwip/src/apps/httpsrv/httpsrv.o \
./lwip/src/apps/httpsrv/httpsrv_base64.o \
./lwip/src/apps/httpsrv/httpsrv_fs.o \
./lwip/src/apps/httpsrv/httpsrv_script.o \
./lwip/src/apps/httpsrv/httpsrv_sha1.o \
./lwip/src/apps/httpsrv/httpsrv_supp.o \
./lwip/src/apps/httpsrv/httpsrv_task.o \
./lwip/src/apps/httpsrv/httpsrv_tls.o \
./lwip/src/apps/httpsrv/httpsrv_utf8.o \
./lwip/src/apps/httpsrv/httpsrv_ws.o \
./lwip/src/apps/httpsrv/httpsrv_ws_api.o 


# Each subdirectory must supply rules for building sources it contributes
lwip/src/apps/httpsrv/%.o: ../lwip/src/apps/httpsrv/%.c lwip/src/apps/httpsrv/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D_POSIX_SOURCE -DCPU_88MW320_A0_NAPC -DUSE_RTOS=1 -DPRINTF_ADVANCED_ENABLE=1 -DHTTPSRV_CFG_WEBSOCKET_ENABLED=0 -DHTTPSRV_CFG_MBEDTLS_ENABLE=1 -DMBEDTLS_CONFIG_FILE='"mbedtls_config.h"' -DSDIO_ENABLED -DSERIAL_PORT_TYPE_UART=1 -DFSL_RTOS_FREE_RTOS -DCPU_88MW320_A0_NAPC_cm4 -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__NEWLIB__ -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\source" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\flash\mflash\mw320" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\boot2_partition" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\lwip\src\apps\httpsrv" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\lwip\port\arch" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\lwip\src\include\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\lwip\port" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\lwip\src" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\lwip\src\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\utilities" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\dhcpd" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\incl\port\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\port\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\wps" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\incl\port\mbedtls" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\port\mbedtls" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\mbedtls\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\mbedtls\port\mw" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\drivers" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\sdmmc\inc" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\sdmmc\host" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\device" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\component\uart" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\component\serial_manager" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\component\lists" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\flash\mflash" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\CMSIS" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\freertos\freertos_kernel\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\freertos\freertos_kernel\portable\GCC\ARM_CM4F" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\incl" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\incl\port\os" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\incl\wifidriver" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\incl\wlcmgr" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\wifi_bt_firmware" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\wifidriver" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wifi\wifidriver\incl" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\sdmmc\osa" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\component\osa" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\network" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\board" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpssrv_ota\wpl" -O0 -fno-common -g1 -gdwarf-4 -fomit-frame-pointer -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -imacros "wifi_config.h" -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-lwip-2f-src-2f-apps-2f-httpsrv

clean-lwip-2f-src-2f-apps-2f-httpsrv:
	-$(RM) ./lwip/src/apps/httpsrv/httpsrv.d ./lwip/src/apps/httpsrv/httpsrv.o ./lwip/src/apps/httpsrv/httpsrv_base64.d ./lwip/src/apps/httpsrv/httpsrv_base64.o ./lwip/src/apps/httpsrv/httpsrv_fs.d ./lwip/src/apps/httpsrv/httpsrv_fs.o ./lwip/src/apps/httpsrv/httpsrv_script.d ./lwip/src/apps/httpsrv/httpsrv_script.o ./lwip/src/apps/httpsrv/httpsrv_sha1.d ./lwip/src/apps/httpsrv/httpsrv_sha1.o ./lwip/src/apps/httpsrv/httpsrv_supp.d ./lwip/src/apps/httpsrv/httpsrv_supp.o ./lwip/src/apps/httpsrv/httpsrv_task.d ./lwip/src/apps/httpsrv/httpsrv_task.o ./lwip/src/apps/httpsrv/httpsrv_tls.d ./lwip/src/apps/httpsrv/httpsrv_tls.o ./lwip/src/apps/httpsrv/httpsrv_utf8.d ./lwip/src/apps/httpsrv/httpsrv_utf8.o ./lwip/src/apps/httpsrv/httpsrv_ws.d ./lwip/src/apps/httpsrv/httpsrv_ws.o ./lwip/src/apps/httpsrv/httpsrv_ws_api.d ./lwip/src/apps/httpsrv/httpsrv_ws_api.o

.PHONY: clean-lwip-2f-src-2f-apps-2f-httpsrv
