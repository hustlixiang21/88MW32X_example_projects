################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lwip/src/core/ipv6/dhcp6.c \
../lwip/src/core/ipv6/ethip6.c \
../lwip/src/core/ipv6/icmp6.c \
../lwip/src/core/ipv6/inet6.c \
../lwip/src/core/ipv6/ip6.c \
../lwip/src/core/ipv6/ip6_addr.c \
../lwip/src/core/ipv6/ip6_frag.c \
../lwip/src/core/ipv6/mld6.c \
../lwip/src/core/ipv6/nd6.c 

C_DEPS += \
./lwip/src/core/ipv6/dhcp6.d \
./lwip/src/core/ipv6/ethip6.d \
./lwip/src/core/ipv6/icmp6.d \
./lwip/src/core/ipv6/inet6.d \
./lwip/src/core/ipv6/ip6.d \
./lwip/src/core/ipv6/ip6_addr.d \
./lwip/src/core/ipv6/ip6_frag.d \
./lwip/src/core/ipv6/mld6.d \
./lwip/src/core/ipv6/nd6.d 

OBJS += \
./lwip/src/core/ipv6/dhcp6.o \
./lwip/src/core/ipv6/ethip6.o \
./lwip/src/core/ipv6/icmp6.o \
./lwip/src/core/ipv6/inet6.o \
./lwip/src/core/ipv6/ip6.o \
./lwip/src/core/ipv6/ip6_addr.o \
./lwip/src/core/ipv6/ip6_frag.o \
./lwip/src/core/ipv6/mld6.o \
./lwip/src/core/ipv6/nd6.o 


# Each subdirectory must supply rules for building sources it contributes
lwip/src/core/ipv6/%.o: ../lwip/src/core/ipv6/%.c lwip/src/core/ipv6/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -DCPU_88MW320_A0_NAPC -DUSE_RTOS=1 -DCONFIG_USE_PSM=1 -DCONFIG_SECURE_PSM=1 -DPRINTF_ADVANCED_ENABLE=1 -DMBEDTLS_CONFIG_FILE='"mbedtls_config.h"' -DFSL_RTOS_FREE_RTOS -DSDIO_ENABLED -DSERIAL_PORT_TYPE_UART=1 -DCPU_88MW320_A0_NAPC_cm4 -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -D__MCUXPRESSO -D__USE_CMSIS -DNDEBUG -D__NEWLIB__ -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\source" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\flash\mflash" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\flash\mflash\mw320" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\boot2_psm" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\freertos\freertos_kernel\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\freertos\freertos_kernel\portable\GCC\ARM_CM4F" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\lwip\port\arch" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\lwip\src\include\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\lwip\port" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\lwip\src" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\lwip\src\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\utilities" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\dhcpd" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\incl\port\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\port\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\wps" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\incl\port\mbedtls" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\port\mbedtls" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\lwip\src\include\lwip\apps" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\cli" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\incl" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\incl\wlcmgr" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\drivers" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\mbedtls\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\mbedtls\port\mw" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\sdmmc\inc" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\sdmmc\host" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\device" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\component\uart" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\component\serial_manager" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\component\lists" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\CMSIS" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\boot2_partition" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\incl\port\os" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\incl\wifidriver" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\wifi_bt_firmware" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\wifidriver" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\wifidriver\incl" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\sdmmc\osa" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\component\osa" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\board" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli" -Os -fno-common -g -gdwarf-4 -fomit-frame-pointer -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -imacros "wifi_config.h" -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-lwip-2f-src-2f-core-2f-ipv6

clean-lwip-2f-src-2f-core-2f-ipv6:
	-$(RM) ./lwip/src/core/ipv6/dhcp6.d ./lwip/src/core/ipv6/dhcp6.o ./lwip/src/core/ipv6/ethip6.d ./lwip/src/core/ipv6/ethip6.o ./lwip/src/core/ipv6/icmp6.d ./lwip/src/core/ipv6/icmp6.o ./lwip/src/core/ipv6/inet6.d ./lwip/src/core/ipv6/inet6.o ./lwip/src/core/ipv6/ip6.d ./lwip/src/core/ipv6/ip6.o ./lwip/src/core/ipv6/ip6_addr.d ./lwip/src/core/ipv6/ip6_addr.o ./lwip/src/core/ipv6/ip6_frag.d ./lwip/src/core/ipv6/ip6_frag.o ./lwip/src/core/ipv6/mld6.d ./lwip/src/core/ipv6/mld6.o ./lwip/src/core/ipv6/nd6.d ./lwip/src/core/ipv6/nd6.o

.PHONY: clean-lwip-2f-src-2f-core-2f-ipv6
