################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lwip/src/netif/ppp/auth.c \
../lwip/src/netif/ppp/ccp.c \
../lwip/src/netif/ppp/chap-md5.c \
../lwip/src/netif/ppp/chap-new.c \
../lwip/src/netif/ppp/chap_ms.c \
../lwip/src/netif/ppp/demand.c \
../lwip/src/netif/ppp/eap.c \
../lwip/src/netif/ppp/eui64.c \
../lwip/src/netif/ppp/fsm.c \
../lwip/src/netif/ppp/ipcp.c \
../lwip/src/netif/ppp/ipv6cp.c \
../lwip/src/netif/ppp/lcp.c \
../lwip/src/netif/ppp/lwip_ecp.c \
../lwip/src/netif/ppp/magic.c \
../lwip/src/netif/ppp/mppe.c \
../lwip/src/netif/ppp/multilink.c \
../lwip/src/netif/ppp/ppp.c \
../lwip/src/netif/ppp/pppapi.c \
../lwip/src/netif/ppp/pppcrypt.c \
../lwip/src/netif/ppp/pppoe.c \
../lwip/src/netif/ppp/pppol2tp.c \
../lwip/src/netif/ppp/pppos.c \
../lwip/src/netif/ppp/upap.c \
../lwip/src/netif/ppp/utils.c \
../lwip/src/netif/ppp/vj.c 

C_DEPS += \
./lwip/src/netif/ppp/auth.d \
./lwip/src/netif/ppp/ccp.d \
./lwip/src/netif/ppp/chap-md5.d \
./lwip/src/netif/ppp/chap-new.d \
./lwip/src/netif/ppp/chap_ms.d \
./lwip/src/netif/ppp/demand.d \
./lwip/src/netif/ppp/eap.d \
./lwip/src/netif/ppp/eui64.d \
./lwip/src/netif/ppp/fsm.d \
./lwip/src/netif/ppp/ipcp.d \
./lwip/src/netif/ppp/ipv6cp.d \
./lwip/src/netif/ppp/lcp.d \
./lwip/src/netif/ppp/lwip_ecp.d \
./lwip/src/netif/ppp/magic.d \
./lwip/src/netif/ppp/mppe.d \
./lwip/src/netif/ppp/multilink.d \
./lwip/src/netif/ppp/ppp.d \
./lwip/src/netif/ppp/pppapi.d \
./lwip/src/netif/ppp/pppcrypt.d \
./lwip/src/netif/ppp/pppoe.d \
./lwip/src/netif/ppp/pppol2tp.d \
./lwip/src/netif/ppp/pppos.d \
./lwip/src/netif/ppp/upap.d \
./lwip/src/netif/ppp/utils.d \
./lwip/src/netif/ppp/vj.d 

OBJS += \
./lwip/src/netif/ppp/auth.o \
./lwip/src/netif/ppp/ccp.o \
./lwip/src/netif/ppp/chap-md5.o \
./lwip/src/netif/ppp/chap-new.o \
./lwip/src/netif/ppp/chap_ms.o \
./lwip/src/netif/ppp/demand.o \
./lwip/src/netif/ppp/eap.o \
./lwip/src/netif/ppp/eui64.o \
./lwip/src/netif/ppp/fsm.o \
./lwip/src/netif/ppp/ipcp.o \
./lwip/src/netif/ppp/ipv6cp.o \
./lwip/src/netif/ppp/lcp.o \
./lwip/src/netif/ppp/lwip_ecp.o \
./lwip/src/netif/ppp/magic.o \
./lwip/src/netif/ppp/mppe.o \
./lwip/src/netif/ppp/multilink.o \
./lwip/src/netif/ppp/ppp.o \
./lwip/src/netif/ppp/pppapi.o \
./lwip/src/netif/ppp/pppcrypt.o \
./lwip/src/netif/ppp/pppoe.o \
./lwip/src/netif/ppp/pppol2tp.o \
./lwip/src/netif/ppp/pppos.o \
./lwip/src/netif/ppp/upap.o \
./lwip/src/netif/ppp/utils.o \
./lwip/src/netif/ppp/vj.o 


# Each subdirectory must supply rules for building sources it contributes
lwip/src/netif/ppp/%.o: ../lwip/src/netif/ppp/%.c lwip/src/netif/ppp/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -DCPU_88MW320_A0_NAPC -DUSE_RTOS=1 -DCONFIG_USE_PSM=1 -DCONFIG_SECURE_PSM=1 -DPRINTF_ADVANCED_ENABLE=1 -DMBEDTLS_CONFIG_FILE='"mbedtls_config.h"' -DFSL_RTOS_FREE_RTOS -DSDIO_ENABLED -DSERIAL_PORT_TYPE_UART=1 -DCPU_88MW320_A0_NAPC_cm4 -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -D__MCUXPRESSO -D__USE_CMSIS -DNDEBUG -D__NEWLIB__ -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\source" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\flash\mflash" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\flash\mflash\mw320" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\boot2_psm" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\freertos\freertos_kernel\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\freertos\freertos_kernel\portable\GCC\ARM_CM4F" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\lwip\port\arch" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\lwip\src\include\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\lwip\port" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\lwip\src" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\lwip\src\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\utilities" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\dhcpd" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\incl\port\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\port\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\wps" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\incl\port\mbedtls" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\port\mbedtls" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\lwip\src\include\lwip\apps" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\cli" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\incl" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\incl\wlcmgr" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\drivers" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\mbedtls\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\mbedtls\port\mw" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\sdmmc\inc" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\sdmmc\host" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\device" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\component\uart" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\component\serial_manager" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\component\lists" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\CMSIS" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\boot2_partition" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\incl\port\os" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\incl\wifidriver" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\wifi_bt_firmware" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\wifidriver" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\wifi\wifidriver\incl" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\sdmmc\osa" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\component\osa" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli\board" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_wifi_cli" -Os -fno-common -g -gdwarf-4 -fomit-frame-pointer -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -imacros "wifi_config.h" -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-lwip-2f-src-2f-netif-2f-ppp

clean-lwip-2f-src-2f-netif-2f-ppp:
	-$(RM) ./lwip/src/netif/ppp/auth.d ./lwip/src/netif/ppp/auth.o ./lwip/src/netif/ppp/ccp.d ./lwip/src/netif/ppp/ccp.o ./lwip/src/netif/ppp/chap-md5.d ./lwip/src/netif/ppp/chap-md5.o ./lwip/src/netif/ppp/chap-new.d ./lwip/src/netif/ppp/chap-new.o ./lwip/src/netif/ppp/chap_ms.d ./lwip/src/netif/ppp/chap_ms.o ./lwip/src/netif/ppp/demand.d ./lwip/src/netif/ppp/demand.o ./lwip/src/netif/ppp/eap.d ./lwip/src/netif/ppp/eap.o ./lwip/src/netif/ppp/eui64.d ./lwip/src/netif/ppp/eui64.o ./lwip/src/netif/ppp/fsm.d ./lwip/src/netif/ppp/fsm.o ./lwip/src/netif/ppp/ipcp.d ./lwip/src/netif/ppp/ipcp.o ./lwip/src/netif/ppp/ipv6cp.d ./lwip/src/netif/ppp/ipv6cp.o ./lwip/src/netif/ppp/lcp.d ./lwip/src/netif/ppp/lcp.o ./lwip/src/netif/ppp/lwip_ecp.d ./lwip/src/netif/ppp/lwip_ecp.o ./lwip/src/netif/ppp/magic.d ./lwip/src/netif/ppp/magic.o ./lwip/src/netif/ppp/mppe.d ./lwip/src/netif/ppp/mppe.o ./lwip/src/netif/ppp/multilink.d ./lwip/src/netif/ppp/multilink.o ./lwip/src/netif/ppp/ppp.d ./lwip/src/netif/ppp/ppp.o ./lwip/src/netif/ppp/pppapi.d ./lwip/src/netif/ppp/pppapi.o ./lwip/src/netif/ppp/pppcrypt.d ./lwip/src/netif/ppp/pppcrypt.o ./lwip/src/netif/ppp/pppoe.d ./lwip/src/netif/ppp/pppoe.o ./lwip/src/netif/ppp/pppol2tp.d ./lwip/src/netif/ppp/pppol2tp.o ./lwip/src/netif/ppp/pppos.d ./lwip/src/netif/ppp/pppos.o ./lwip/src/netif/ppp/upap.d ./lwip/src/netif/ppp/upap.o ./lwip/src/netif/ppp/utils.d ./lwip/src/netif/ppp/utils.o ./lwip/src/netif/ppp/vj.d ./lwip/src/netif/ppp/vj.o

.PHONY: clean-lwip-2f-src-2f-netif-2f-ppp

