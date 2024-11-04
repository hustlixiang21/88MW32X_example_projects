################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lwip/src/apps/httpsrv/httpsrv.c \
../lwip/src/apps/httpsrv/httpsrv_base64.c \
../lwip/src/apps/httpsrv/httpsrv_fs.c \
../lwip/src/apps/httpsrv/httpsrv_fs_data.c \
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
./lwip/src/apps/httpsrv/httpsrv_fs_data.d \
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
./lwip/src/apps/httpsrv/httpsrv_fs_data.o \
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
	arm-none-eabi-gcc -std=gnu99 -DLWIP_TIMEVAL_PRIVATE=0 -DCPU_88MW320_A0_NAPC -DUSE_RTOS=1 -DPRINTF_ADVANCED_ENABLE=1 -DLWIP_NETIF_API=1 -DHTTPSRV_CFG_WEBSOCKET_ENABLED=1 -DHTTPSRV_CFG_DEFAULT_SES_CNT=8 -DHTTPSRV_CFG_MBEDTLS_ENABLE=0 -DMBEDTLS_CONFIG_FILE='"mbedtls_config.h"' -DSDK_DEBUGCONSOLE_UART -DCONFIG_USE_PSM=1 -DCONFIG_SECURE_PSM=1 -DSDIO_ENABLED -DSERIAL_PORT_TYPE_UART=1 -DFSL_RTOS_FREE_RTOS -DCPU_88MW320_A0_NAPC_cm4 -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -D__MCUXPRESSO -D__USE_CMSIS -DNDEBUG -D__NEWLIB__ -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\source" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\flash\mflash" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\flash\mflash\mw320" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\boot2_psm" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\lwip\src\apps\httpsrv" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\lwip\port\arch" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\lwip\src\include\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\lwip\port" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\lwip\src" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\lwip\src\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\utilities" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\dhcpd" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\incl\port\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\port\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\wps" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\incl\port\mbedtls" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\port\mbedtls" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\drivers" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\sdmmc\inc" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\sdmmc\host" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\mbedtls\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\mbedtls\port\mw" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\device" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\component\uart" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\component\serial_manager" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\component\lists" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\CMSIS" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\boot2_partition" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\freertos\freertos_kernel\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\freertos\freertos_kernel\portable\GCC\ARM_CM4F" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\incl" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\incl\port\os" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\incl\wifidriver" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\incl\wlcmgr" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\wifi_bt_firmware" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\wifidriver" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\wifidriver\incl" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\sdmmc\osa" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\component\osa" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\board" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wpl" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\rdmw320_r0\wifi_examples\mw_wifi_webconfig" -Os -fno-common -g -gdwarf-4 -fomit-frame-pointer -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -imacros "wifi_config.h" -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-lwip-2f-src-2f-apps-2f-httpsrv

clean-lwip-2f-src-2f-apps-2f-httpsrv:
	-$(RM) ./lwip/src/apps/httpsrv/httpsrv.d ./lwip/src/apps/httpsrv/httpsrv.o ./lwip/src/apps/httpsrv/httpsrv_base64.d ./lwip/src/apps/httpsrv/httpsrv_base64.o ./lwip/src/apps/httpsrv/httpsrv_fs.d ./lwip/src/apps/httpsrv/httpsrv_fs.o ./lwip/src/apps/httpsrv/httpsrv_fs_data.d ./lwip/src/apps/httpsrv/httpsrv_fs_data.o ./lwip/src/apps/httpsrv/httpsrv_script.d ./lwip/src/apps/httpsrv/httpsrv_script.o ./lwip/src/apps/httpsrv/httpsrv_sha1.d ./lwip/src/apps/httpsrv/httpsrv_sha1.o ./lwip/src/apps/httpsrv/httpsrv_supp.d ./lwip/src/apps/httpsrv/httpsrv_supp.o ./lwip/src/apps/httpsrv/httpsrv_task.d ./lwip/src/apps/httpsrv/httpsrv_task.o ./lwip/src/apps/httpsrv/httpsrv_tls.d ./lwip/src/apps/httpsrv/httpsrv_tls.o ./lwip/src/apps/httpsrv/httpsrv_utf8.d ./lwip/src/apps/httpsrv/httpsrv_utf8.o ./lwip/src/apps/httpsrv/httpsrv_ws.d ./lwip/src/apps/httpsrv/httpsrv_ws.o ./lwip/src/apps/httpsrv/httpsrv_ws_api.d ./lwip/src/apps/httpsrv/httpsrv_ws_api.o

.PHONY: clean-lwip-2f-src-2f-apps-2f-httpsrv

