################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../wifi/dhcpd/dhcp-server-cli.c \
../wifi/dhcpd/dhcp-server-main.c \
../wifi/dhcpd/dhcp-server.c \
../wifi/dhcpd/dns-server.c 

C_DEPS += \
./wifi/dhcpd/dhcp-server-cli.d \
./wifi/dhcpd/dhcp-server-main.d \
./wifi/dhcpd/dhcp-server.d \
./wifi/dhcpd/dns-server.d 

OBJS += \
./wifi/dhcpd/dhcp-server-cli.o \
./wifi/dhcpd/dhcp-server-main.o \
./wifi/dhcpd/dhcp-server.o \
./wifi/dhcpd/dns-server.o 


# Each subdirectory must supply rules for building sources it contributes
wifi/dhcpd/%.o: ../wifi/dhcpd/%.c wifi/dhcpd/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D_POSIX_SOURCE -DCPU_88MW320_A0_NAPC -DUSE_RTOS=1 -DPRINTF_ADVANCED_ENABLE=1 -DHTTPSRV_CFG_WEBSOCKET_ENABLED=0 -DHTTPSRV_CFG_MBEDTLS_ENABLE=1 -DMBEDTLS_CONFIG_FILE='"mbedtls_config.h"' -DSDIO_ENABLED -DSERIAL_PORT_TYPE_UART=1 -DFSL_RTOS_FREE_RTOS -DCPU_88MW320_A0_NAPC_cm4 -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -D__MCUXPRESSO -D__USE_CMSIS -DNDEBUG -D__NEWLIB__ -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\source" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\flash\mflash\mw320" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\boot2_partition" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\lwip\src\apps\httpsrv" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\lwip\port\arch" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\lwip\src\include\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\lwip\port" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\lwip\src" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\lwip\src\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\utilities" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\dhcpd" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\incl\port\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\port\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\wps" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\incl\port\mbedtls" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\port\mbedtls" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\cli" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\incl" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\incl\wlcmgr" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\mbedtls\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\mbedtls\port\mw" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\drivers" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\lwip\src\include\lwip\apps" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\sdmmc\inc" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\sdmmc\host" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\device" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\component\uart" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\component\serial_manager" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\component\lists" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\flash\mflash" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\CMSIS" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\freertos\freertos_kernel\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\freertos\freertos_kernel\portable\GCC\ARM_CM4F" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\incl\port\os" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\incl\wifidriver" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\wifi_bt_firmware" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\wifidriver" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\wifidriver\incl" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\sdmmc\osa" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\component\osa" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\board" -Os -fno-common -g -gdwarf-4 -fomit-frame-pointer -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -imacros "wifi_config.h" -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-wifi-2f-dhcpd

clean-wifi-2f-dhcpd:
	-$(RM) ./wifi/dhcpd/dhcp-server-cli.d ./wifi/dhcpd/dhcp-server-cli.o ./wifi/dhcpd/dhcp-server-main.d ./wifi/dhcpd/dhcp-server-main.o ./wifi/dhcpd/dhcp-server.d ./wifi/dhcpd/dhcp-server.o ./wifi/dhcpd/dns-server.d ./wifi/dhcpd/dns-server.o

.PHONY: clean-wifi-2f-dhcpd

