################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../freertos/freertos_kernel/croutine.c \
../freertos/freertos_kernel/event_groups.c \
../freertos/freertos_kernel/list.c \
../freertos/freertos_kernel/queue.c \
../freertos/freertos_kernel/stream_buffer.c \
../freertos/freertos_kernel/tasks.c \
../freertos/freertos_kernel/timers.c 

C_DEPS += \
./freertos/freertos_kernel/croutine.d \
./freertos/freertos_kernel/event_groups.d \
./freertos/freertos_kernel/list.d \
./freertos/freertos_kernel/queue.d \
./freertos/freertos_kernel/stream_buffer.d \
./freertos/freertos_kernel/tasks.d \
./freertos/freertos_kernel/timers.d 

OBJS += \
./freertos/freertos_kernel/croutine.o \
./freertos/freertos_kernel/event_groups.o \
./freertos/freertos_kernel/list.o \
./freertos/freertos_kernel/queue.o \
./freertos/freertos_kernel/stream_buffer.o \
./freertos/freertos_kernel/tasks.o \
./freertos/freertos_kernel/timers.o 


# Each subdirectory must supply rules for building sources it contributes
freertos/freertos_kernel/%.o: ../freertos/freertos_kernel/%.c freertos/freertos_kernel/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D_POSIX_SOURCE -DCPU_88MW320_A0_NAPC -DUSE_RTOS=1 -DPRINTF_ADVANCED_ENABLE=1 -DHTTPSRV_CFG_WEBSOCKET_ENABLED=0 -DHTTPSRV_CFG_MBEDTLS_ENABLE=1 -DMBEDTLS_CONFIG_FILE='"mbedtls_config.h"' -DSDIO_ENABLED -DSERIAL_PORT_TYPE_UART=1 -DFSL_RTOS_FREE_RTOS -DCPU_88MW320_A0_NAPC_cm4 -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__NEWLIB__ -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\source" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\flash\mflash\mw320" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\boot2_partition" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\lwip\src\apps\httpsrv" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\lwip\port\arch" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\lwip\src\include\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\lwip\port" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\lwip\src" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\lwip\src\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\utilities" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\dhcpd" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\incl\port\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\port\lwip" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\wps" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\incl\port\mbedtls" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\port\mbedtls" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\cli" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\incl" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\incl\wlcmgr" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\mbedtls\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\mbedtls\port\mw" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\drivers" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\lwip\src\include\lwip\apps" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\sdmmc\inc" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\sdmmc\host" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\device" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\component\uart" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\component\serial_manager" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\component\lists" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\flash\mflash" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\CMSIS" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\freertos\freertos_kernel\include" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\freertos\freertos_kernel\portable\GCC\ARM_CM4F" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\incl\port\os" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\incl\wifidriver" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\wifi_bt_firmware" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\wifidriver" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\wifi\wifidriver\incl" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\sdmmc\osa" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\component\osa" -I"E:\MCUXpressoIDE_24.9.25\88MW32X\rdmw320_r0_mw_lwip_httpsclient_ota\board" -O0 -fno-common -g1 -gdwarf-4 -fomit-frame-pointer -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -imacros "wifi_config.h" -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-freertos-2f-freertos_kernel

clean-freertos-2f-freertos_kernel:
	-$(RM) ./freertos/freertos_kernel/croutine.d ./freertos/freertos_kernel/croutine.o ./freertos/freertos_kernel/event_groups.d ./freertos/freertos_kernel/event_groups.o ./freertos/freertos_kernel/list.d ./freertos/freertos_kernel/list.o ./freertos/freertos_kernel/queue.d ./freertos/freertos_kernel/queue.o ./freertos/freertos_kernel/stream_buffer.d ./freertos/freertos_kernel/stream_buffer.o ./freertos/freertos_kernel/tasks.d ./freertos/freertos_kernel/tasks.o ./freertos/freertos_kernel/timers.d ./freertos/freertos_kernel/timers.o

.PHONY: clean-freertos-2f-freertos_kernel
