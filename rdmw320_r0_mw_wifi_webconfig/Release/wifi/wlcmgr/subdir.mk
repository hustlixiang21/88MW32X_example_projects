################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../wifi/wlcmgr/wlan.c \
../wifi/wlcmgr/wlan_txpwrlimit_cfg.c 

C_DEPS += \
./wifi/wlcmgr/wlan.d \
./wifi/wlcmgr/wlan_txpwrlimit_cfg.d 

OBJS += \
./wifi/wlcmgr/wlan.o \
./wifi/wlcmgr/wlan_txpwrlimit_cfg.o 


# Each subdirectory must supply rules for building sources it contributes
wifi/wlcmgr/%.o: ../wifi/wlcmgr/%.c wifi/wlcmgr/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -DLWIP_TIMEVAL_PRIVATE=0 -DCPU_88MW320_A0_NAPC -DUSE_RTOS=1 -DPRINTF_ADVANCED_ENABLE=1 -DLWIP_NETIF_API=1 -DHTTPSRV_CFG_WEBSOCKET_ENABLED=1 -DHTTPSRV_CFG_DEFAULT_SES_CNT=8 -DHTTPSRV_CFG_MBEDTLS_ENABLE=0 -DMBEDTLS_CONFIG_FILE='"mbedtls_config.h"' -DSDK_DEBUGCONSOLE_UART -DCONFIG_USE_PSM=1 -DCONFIG_SECURE_PSM=1 -DSDIO_ENABLED -DSERIAL_PORT_TYPE_UART=1 -DFSL_RTOS_FREE_RTOS -DCPU_88MW320_A0_NAPC_cm4 -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -D__MCUXPRESSO -D__USE_CMSIS -DNDEBUG -D__NEWLIB__ -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\source" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\flash\mflash" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\flash\mflash\mw320" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\boot2_psm" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\lwip\src\apps\httpsrv" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\lwip\port\arch" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\lwip\src\include\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\lwip\port" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\lwip\src" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\lwip\src\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\utilities" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\dhcpd" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\incl\port\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\port\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\wps" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\incl\port\mbedtls" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\port\mbedtls" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\drivers" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\sdmmc\inc" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\sdmmc\host" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\mbedtls\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\mbedtls\port\mw" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\device" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\component\uart" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\component\serial_manager" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\component\lists" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\CMSIS" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\boot2_partition" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\freertos\freertos_kernel\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\freertos\freertos_kernel\portable\GCC\ARM_CM4F" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\incl" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\incl\port\os" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\incl\wifidriver" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\incl\wlcmgr" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\wifi_bt_firmware" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\wifidriver" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wifi\wifidriver\incl" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\sdmmc\osa" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\component\osa" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\board" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\wpl" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_webconfig\rdmw320_r0\wifi_examples\mw_wifi_webconfig" -Os -fno-common -g -gdwarf-4 -fomit-frame-pointer -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -imacros "wifi_config.h" -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-wifi-2f-wlcmgr

clean-wifi-2f-wlcmgr:
	-$(RM) ./wifi/wlcmgr/wlan.d ./wifi/wlcmgr/wlan.o ./wifi/wlcmgr/wlan_txpwrlimit_cfg.d ./wifi/wlcmgr/wlan_txpwrlimit_cfg.o

.PHONY: clean-wifi-2f-wlcmgr

