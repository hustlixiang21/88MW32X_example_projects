//*****************************************************************************
// 88MW320 startup code for use with MCUXpresso IDE
//
// Version : 110321
//*****************************************************************************
//
// Copyright 2016-2021 NXP
// All rights reserved.
//
// SPDX-License-Identifier: BSD-3-Clause
//*****************************************************************************

#if defined (DEBUG)
#pragma GCC push_options
#pragma GCC optimize ("Og")
#endif // (DEBUG)

#if defined (__cplusplus)
#ifdef __REDLIB__
#error Redlib does not support C++
#else
//*****************************************************************************
//
// The entry point for the C++ library startup
//
//*****************************************************************************
extern "C" {
    extern void __libc_init_array(void);
}
#endif
#endif

#define WEAK __attribute__ ((weak))
#define WEAK_AV __attribute__ ((weak, section(".after_vectors")))
#define ALIAS(f) __attribute__ ((weak, alias (#f)))

//*****************************************************************************
#if defined (__cplusplus)
extern "C" {
#endif

//*****************************************************************************
// Variable to store CRP value in. Will be placed automatically
// by the linker when "Enable Code Read Protect" selected.
// See crp.h header for more information
//*****************************************************************************
#include <NXP/crp.h>
__CRP const unsigned int CRP_WORD = CRP_NO_CRP ;

//*****************************************************************************
// Declaration of external SystemInit function
//*****************************************************************************
#if defined (__USE_CMSIS)
extern void SystemInit(void);
#endif // (__USE_CMSIS)

//*****************************************************************************
// Forward declaration of the core exception handlers.
// When the application defines a handler (with the same name), this will
// automatically take precedence over these weak definitions.
// If your application is a C++ one, then any interrupt handlers defined
// in C++ files within in your main application will need to have C linkage
// rather than C++ linkage. To do this, make sure that you are using extern "C"
// { .... } around the interrupt handler within your main application code.
//*****************************************************************************
     void ResetISR(void);
WEAK void NMI_Handler(void);
WEAK void HardFault_Handler(void);
WEAK void MemManage_Handler(void);
WEAK void BusFault_Handler(void);
WEAK void UsageFault_Handler(void);
WEAK void SVC_Handler(void);
WEAK void DebugMon_Handler(void);
WEAK void PendSV_Handler(void);
WEAK void SysTick_Handler(void);
WEAK void IntDefaultHandler(void);

//*****************************************************************************
// Forward declaration of the application IRQ handlers. When the application
// defines a handler (with the same name), this will automatically take
// precedence over weak definitions below
//*****************************************************************************
WEAK void EXTPIN0_IRQHandler(void);
WEAK void EXTPIN1_IRQHandler(void);
WEAK void RTC_IRQHandler(void);
WEAK void CRC_IRQHandler(void);
WEAK void AES_IRQHandler(void);
WEAK void I2C0_IRQHandler(void);
WEAK void I2C1_IRQHandler(void);
WEAK void Reserved23_IRQHandler(void);
WEAK void DMAC_IRQHandler(void);
WEAK void GPIO_IRQHandler(void);
WEAK void SSP0_IRQHandler(void);
WEAK void SSP1_IRQHandler(void);
WEAK void SSP2_IRQHandler(void);
WEAK void QSPI_IRQHandler(void);
WEAK void GPT0_IRQHandler(void);
WEAK void GPT1_IRQHandler(void);
WEAK void GPT2_IRQHandler(void);
WEAK void GPT3_IRQHandler(void);
WEAK void UART0_IRQHandler(void);
WEAK void UART1_IRQHandler(void);
WEAK void UART2_IRQHandler(void);
WEAK void Reserved37_IRQHandler(void);
WEAK void WDT_IRQHandler(void);
WEAK void Reserved39_IRQHandler(void);
WEAK void ADC0_IRQHandler(void);
WEAK void DAC_IRQHandler(void);
WEAK void ACOMP_WAKEUP_IRQHandler(void);
WEAK void ACOMP_IRQHandler(void);
WEAK void SDIO_IRQHandler(void);
WEAK void USB_IRQHandler(void);
WEAK void Reserved46_IRQHandler(void);
WEAK void PLL_IRQHandler(void);
WEAK void Reserved48_IRQHandler(void);
WEAK void RC32M_IRQHandler(void);
WEAK void GPIO_0_1_IRQHandler(void);
WEAK void GPIO_2_3_IRQHandler(void);
WEAK void GPIO_4_5_IRQHandler(void);
WEAK void GPIO_6_7_IRQHandler(void);
WEAK void GPIO_8_9_IRQHandler(void);
WEAK void GPIO_10_11_IRQHandler(void);
WEAK void GPIO_12_13_IRQHandler(void);
WEAK void GPIO_14_15_IRQHandler(void);
WEAK void GPIO_16_17_IRQHandler(void);
WEAK void GPIO_18_19_IRQHandler(void);
WEAK void GPIO_20_21_IRQHandler(void);
WEAK void GPIO_22_23_IRQHandler(void);
WEAK void GPIO_24_25_IRQHandler(void);
WEAK void GPIO_26_27_IRQHandler(void);
WEAK void GPIO_28_29_IRQHandler(void);
WEAK void GPIO_30_31_IRQHandler(void);
WEAK void GPIO_32_33_IRQHandler(void);
WEAK void GPIO_34_35_IRQHandler(void);
WEAK void GPIO_36_37_IRQHandler(void);
WEAK void GPIO_38_39_IRQHandler(void);
WEAK void GPIO_40_41_IRQHandler(void);
WEAK void GPIO_42_43_IRQHandler(void);
WEAK void GPIO_44_45_IRQHandler(void);
WEAK void GPIO_46_47_IRQHandler(void);
WEAK void GPIO_48_49_IRQHandler(void);
WEAK void Reserved75_IRQHandler(void);
WEAK void PMU_IRQHandler(void);
WEAK void BRNOUT_IRQHandler(void);
WEAK void WIFIWKUP_IRQHandler(void);

//*****************************************************************************
// Forward declaration of the driver IRQ handlers. These are aliased
// to the IntDefaultHandler, which is a 'forever' loop. When the driver
// defines a handler (with the same name), this will automatically take
// precedence over these weak definitions
//*****************************************************************************
void EXTPIN0_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void EXTPIN1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void RTC_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void CRC_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void AES_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void I2C0_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void I2C1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved23_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMAC_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void SSP0_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void SSP1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void SSP2_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void QSPI_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPT0_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPT1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPT2_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPT3_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void UART0_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void UART1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void UART2_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved37_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void WDT_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved39_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void ADC0_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DAC_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void ACOMP_WAKEUP_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void ACOMP_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void SDIO_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void USB_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved46_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void PLL_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved48_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void RC32M_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_0_1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_2_3_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_4_5_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_6_7_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_8_9_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_10_11_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_12_13_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_14_15_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_16_17_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_18_19_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_20_21_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_22_23_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_24_25_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_26_27_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_28_29_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_30_31_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_32_33_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_34_35_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_36_37_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_38_39_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_40_41_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_42_43_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_44_45_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_46_47_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void GPIO_48_49_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved75_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void PMU_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void BRNOUT_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void WIFIWKUP_DriverIRQHandler(void) ALIAS(IntDefaultHandler);

//*****************************************************************************
// The entry point for the application.
// __main() is the entry point for Redlib based applications
// main() is the entry point for Newlib based applications
//*****************************************************************************
#if defined (__REDLIB__)
extern void __main(void);
#endif
extern int main(void);

//*****************************************************************************
// External declaration for the pointer to the stack top from the Linker Script
//*****************************************************************************
extern void _vStackTop(void);
//*****************************************************************************
#if defined (__cplusplus)
} // extern "C"
#endif
//*****************************************************************************
// The vector table.
// This relies on the linker script to place at correct location in memory.
//*****************************************************************************



extern void (* const g_pfnVectors[])(void);
extern void * __Vectors __attribute__ ((alias ("g_pfnVectors")));

__attribute__ ((used, section(".isr_vector")))
void (* const g_pfnVectors[])(void) = {
    // Core Level - CM4
    &_vStackTop,                       // The initial stack pointer
    ResetISR,                          // The reset handler
    NMI_Handler,                       // The NMI handler
    HardFault_Handler,                 // The hard fault handler
    MemManage_Handler,                 // The MPU fault handler
    BusFault_Handler,                  // The bus fault handler
    UsageFault_Handler,                // The usage fault handler
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    SVC_Handler,                       // SVCall handler
    DebugMon_Handler,                  // Debug monitor handler
    0,                                 // Reserved
    PendSV_Handler,                    // The PendSV handler
    SysTick_Handler,                   // The SysTick handler

    // Chip Level - 88MW320
    EXTPIN0_IRQHandler,       // 16: Ext. Pin 0
    EXTPIN1_IRQHandler,       // 17: Ext. Pin 1
    RTC_IRQHandler,           // 18: RTC INT
    CRC_IRQHandler,           // 19: CRC INT
    AES_IRQHandler,           // 20: AES INT
    I2C0_IRQHandler,          // 21: I2C0 INT
    I2C1_IRQHandler,          // 22: I2C1 INT
    Reserved23_IRQHandler,    // 23: Reserved interrupt
    DMAC_IRQHandler,          // 24: DMAC INT
    GPIO_IRQHandler,          // 25: GPIO INT
    SSP0_IRQHandler,          // 26: SSP0 INT
    SSP1_IRQHandler,          // 27: SSP1 INT
    SSP2_IRQHandler,          // 28: SSP2 INT
    QSPI_IRQHandler,          // 29: QSPI INT
    GPT0_IRQHandler,          // 30: GPT0 INT
    GPT1_IRQHandler,          // 31: GPT1 INT
    GPT2_IRQHandler,          // 32: GPT2 INT
    GPT3_IRQHandler,          // 33: GPT3 INT
    UART0_IRQHandler,         // 34: UART0 INT
    UART1_IRQHandler,         // 35: UART1 INT
    UART2_IRQHandler,         // 36: UART2 INT
    Reserved37_IRQHandler,    // 37: Reserved interrupt
    WDT_IRQHandler,           // 38: WDT INT
    Reserved39_IRQHandler,    // 39: Reserved interrupt
    ADC0_IRQHandler,          // 40: ADC0 INT
    DAC_IRQHandler,           // 41: DAC INT
    ACOMP_WAKEUP_IRQHandler,  // 42: ACOMP Wake-up INT
    ACOMP_IRQHandler,         // 43: ACOMP INT
    SDIO_IRQHandler,          // 44: SDIO INT
    USB_IRQHandler,           // 45: USB INT
    Reserved46_IRQHandler,    // 46: Reserved interrupt
    PLL_IRQHandler,           // 47: PLL INT
    Reserved48_IRQHandler,    // 48: Reserved interrupt
    RC32M_IRQHandler,         // 49: RC32M INT FUNC
    GPIO_0_1_IRQHandler,      // 50: External Pin 0 selected by PMU.EXT_SEL_REG
    GPIO_2_3_IRQHandler,      // 51: External Pin 1 selected by PMU.EXT_SEL_REG
    GPIO_4_5_IRQHandler,      // 52: External Pin 2 selected by PMU.EXT_SEL_REG
    GPIO_6_7_IRQHandler,      // 53: External Pin 3 selected by PMU.EXT_SEL_REG
    GPIO_8_9_IRQHandler,      // 54: External Pin 4 selected by PMU.EXT_SEL_REG
    GPIO_10_11_IRQHandler,    // 55: External Pin 5 selected by PMU.EXT_SEL_REG
    GPIO_12_13_IRQHandler,    // 56: External Pin 6 selected by PMU.EXT_SEL_REG
    GPIO_14_15_IRQHandler,    // 57: External Pin 7 selected by PMU.EXT_SEL_REG
    GPIO_16_17_IRQHandler,    // 58: External Pin 8 selected by PMU.EXT_SEL_REG
    GPIO_18_19_IRQHandler,    // 59: External Pin 9 selected by PMU.EXT_SEL_REG
    GPIO_20_21_IRQHandler,    // 60: External Pin 10 selected by PMU.EXT_SEL_REG
    GPIO_22_23_IRQHandler,    // 61: External Pin 11 selected by PMU.EXT_SEL_REG
    GPIO_24_25_IRQHandler,    // 62: External Pin 12 selected by PMU.EXT_SEL_REG
    GPIO_26_27_IRQHandler,    // 63: External Pin 13 selected by PMU.EXT_SEL_REG
    GPIO_28_29_IRQHandler,    // 64: External Pin 14 selected by PMU.EXT_SEL_REG
    GPIO_30_31_IRQHandler,    // 65: External Pin 15 selected by PMU.EXT_SEL_REG
    GPIO_32_33_IRQHandler,    // 66: External Pin 16 selected by PMU.EXT_SEL_REG
    GPIO_34_35_IRQHandler,    // 67: External Pin 17 selected by PMU.EXT_SEL_REG
    GPIO_36_37_IRQHandler,    // 68: External Pin 18 selected by PMU.EXT_SEL_REG
    GPIO_38_39_IRQHandler,    // 69: External Pin 19 selected by PMU.EXT_SEL_REG
    GPIO_40_41_IRQHandler,    // 70: External Pin 20 selected by PMU.EXT_SEL_REG
    GPIO_42_43_IRQHandler,    // 71: External Pin 21 selected by PMU.EXT_SEL_REG
    GPIO_44_45_IRQHandler,    // 72: External Pin 22 selected by PMU.EXT_SEL_REG
    GPIO_46_47_IRQHandler,    // 73: External Pin 23 selected by PMU.EXT_SEL_REG
    GPIO_48_49_IRQHandler,    // 74: External Pin 24 selected by PMU.EXT_SEL_REG
    Reserved75_IRQHandler,    // 75: Reserved interrupt
    PMU_IRQHandler,           // 76: ULP COMP
    BRNOUT_IRQHandler,        // 77: Brnout INT
    WIFIWKUP_IRQHandler,      // 78: WiFi Wakeup INT


}; /* End of g_pfnVectors */

//*****************************************************************************
// Functions to carry out the initialization of RW and BSS data sections. These
// are written as separate functions rather than being inlined within the
// ResetISR() function in order to cope with MCUs with multiple banks of
// memory.
//*****************************************************************************
__attribute__ ((section(".after_vectors.init_data")))
void data_init(unsigned int romstart, unsigned int start, unsigned int len) {
    unsigned int *pulDest = (unsigned int*) start;
    unsigned int *pulSrc = (unsigned int*) romstart;
    unsigned int loop;
    for (loop = 0; loop < len; loop = loop + 4)
        *pulDest++ = *pulSrc++;
}

__attribute__ ((section(".after_vectors.init_bss")))
void bss_init(unsigned int start, unsigned int len) {
    unsigned int *pulDest = (unsigned int*) start;
    unsigned int loop;
    for (loop = 0; loop < len; loop = loop + 4)
        *pulDest++ = 0;
}

//*****************************************************************************
// The following symbols are constructs generated by the linker, indicating
// the location of various points in the "Global Section Table". This table is
// created by the linker via the Code Red managed linker script mechanism. It
// contains the load address, execution address and length of each RW data
// section and the execution and length of each BSS (zero initialized) section.
//*****************************************************************************
extern unsigned int __data_section_table;
extern unsigned int __data_section_table_end;
extern unsigned int __bss_section_table;
extern unsigned int __bss_section_table_end;

//*****************************************************************************
// Reset entry point for your code.
// Sets up a simple runtime environment and initializes the C/C++
// library.
//*****************************************************************************
__attribute__ ((section(".after_vectors.reset")))
void ResetISR(void) {

    // Disable interrupts
    __asm volatile ("cpsid i");


    // Config VTOR & MSP register
    __asm volatile ("LDR R0, =0xE000ED08  \n"
                    "STR %0, [R0]         \n"
                    "LDR R1, [%0]         \n"
                    "MSR MSP, R1          \n"
                    :
                    : "r"(g_pfnVectors)
                    : "r0", "r1");

#if defined (__USE_CMSIS)
// If __USE_CMSIS defined, then call CMSIS SystemInit code
    SystemInit();

#endif // (__USE_CMSIS)

    //
    // Copy the data sections from flash to SRAM.
    //
    unsigned int LoadAddr, ExeAddr, SectionLen;
    unsigned int *SectionTableAddr;

    // Load base address of Global Section Table
    SectionTableAddr = &__data_section_table;

    // Copy the data sections from flash to SRAM.
    while (SectionTableAddr < &__data_section_table_end) {
        LoadAddr = *SectionTableAddr++;
        ExeAddr = *SectionTableAddr++;
        SectionLen = *SectionTableAddr++;
        data_init(LoadAddr, ExeAddr, SectionLen);
    }

    // At this point, SectionTableAddr = &__bss_section_table;
    // Zero fill the bss segment
    while (SectionTableAddr < &__bss_section_table_end) {
        ExeAddr = *SectionTableAddr++;
        SectionLen = *SectionTableAddr++;
        bss_init(ExeAddr, SectionLen);
    }

#if !defined (__USE_CMSIS)
// Assume that if __USE_CMSIS defined, then CMSIS SystemInit code
// will enable the FPU
#if defined (__VFP_FP__) && !defined (__SOFTFP__)
    //
    // Code to enable the Cortex-M4 FPU only included
    // if appropriate build options have been selected.
    // Code taken from Section 7.1, Cortex-M4 TRM (DDI0439C)
    //
    // Read CPACR (located at address 0xE000ED88)
    // Set bits 20-23 to enable CP10 and CP11 coprocessors
    // Write back the modified value to the CPACR
    asm volatile ("LDR.W R0, =0xE000ED88\n\t"
                  "LDR R1, [R0]\n\t"
                  "ORR R1, R1, #(0xF << 20)\n\t"
                  "STR R1, [R0]");
#endif // (__VFP_FP__) && !(__SOFTFP__)
#endif // (__USE_CMSIS)


#if !defined (__USE_CMSIS)
// Assume that if __USE_CMSIS defined, then CMSIS SystemInit code
// will setup the VTOR register

    // Check to see if we are running the code from a non-zero
    // address (eg RAM, external flash), in which case we need
    // to modify the VTOR register to tell the CPU that the
    // vector table is located at a non-0x0 address.
    unsigned int * pSCB_VTOR = (unsigned int *) 0xE000ED08;
    if ((unsigned int *)g_pfnVectors!=(unsigned int *) 0x00000000) {
        *pSCB_VTOR = (unsigned int)g_pfnVectors;
    }
#endif // (__USE_CMSIS)
#if defined (__cplusplus)
    //
    // Call C++ library initialisation
    //
    __libc_init_array();
#endif

    // Reenable interrupts
    __asm volatile ("cpsie i");

#if defined (__REDLIB__)
    // Call the Redlib library, which in turn calls main()
    __main();
#else
    main();
#endif

    //
    // main() shouldn't return, but if it does, we'll just enter an infinite loop
    //
    while (1) {
        ;
    }
}

//*****************************************************************************
// Default core exception handlers. Override the ones here by defining your own
// handler routines in your application code.
//*****************************************************************************
WEAK_AV void NMI_Handler(void)
{ while(1) {}
}

WEAK_AV void HardFault_Handler(void)
{ while(1) {}
}

WEAK_AV void MemManage_Handler(void)
{ while(1) {}
}

WEAK_AV void BusFault_Handler(void)
{ while(1) {}
}

WEAK_AV void UsageFault_Handler(void)
{ while(1) {}
}

WEAK_AV void SVC_Handler(void)
{ while(1) {}
}

WEAK_AV void DebugMon_Handler(void)
{ while(1) {}
}

WEAK_AV void PendSV_Handler(void)
{ while(1) {}
}

WEAK_AV void SysTick_Handler(void)
{ while(1) {}
}

//*****************************************************************************
// Processor ends up here if an unexpected interrupt occurs or a specific
// handler is not present in the application code.
//*****************************************************************************
WEAK_AV void IntDefaultHandler(void)
{ while(1) {}
}

//*****************************************************************************
// Default application exception handlers. Override the ones here by defining
// your own handler routines in your application code. These routines call
// driver exception handlers or IntDefaultHandler() if no driver exception
// handler is included.
//*****************************************************************************
WEAK void EXTPIN0_IRQHandler(void)
{   EXTPIN0_DriverIRQHandler();
}

WEAK void EXTPIN1_IRQHandler(void)
{   EXTPIN1_DriverIRQHandler();
}

WEAK void RTC_IRQHandler(void)
{   RTC_DriverIRQHandler();
}

WEAK void CRC_IRQHandler(void)
{   CRC_DriverIRQHandler();
}

WEAK void AES_IRQHandler(void)
{   AES_DriverIRQHandler();
}

WEAK void I2C0_IRQHandler(void)
{   I2C0_DriverIRQHandler();
}

WEAK void I2C1_IRQHandler(void)
{   I2C1_DriverIRQHandler();
}

WEAK void Reserved23_IRQHandler(void)
{   Reserved23_DriverIRQHandler();
}

WEAK void DMAC_IRQHandler(void)
{   DMAC_DriverIRQHandler();
}

WEAK void GPIO_IRQHandler(void)
{   GPIO_DriverIRQHandler();
}

WEAK void SSP0_IRQHandler(void)
{   SSP0_DriverIRQHandler();
}

WEAK void SSP1_IRQHandler(void)
{   SSP1_DriverIRQHandler();
}

WEAK void SSP2_IRQHandler(void)
{   SSP2_DriverIRQHandler();
}

WEAK void QSPI_IRQHandler(void)
{   QSPI_DriverIRQHandler();
}

WEAK void GPT0_IRQHandler(void)
{   GPT0_DriverIRQHandler();
}

WEAK void GPT1_IRQHandler(void)
{   GPT1_DriverIRQHandler();
}

WEAK void GPT2_IRQHandler(void)
{   GPT2_DriverIRQHandler();
}

WEAK void GPT3_IRQHandler(void)
{   GPT3_DriverIRQHandler();
}

WEAK void UART0_IRQHandler(void)
{   UART0_DriverIRQHandler();
}

WEAK void UART1_IRQHandler(void)
{   UART1_DriverIRQHandler();
}

WEAK void UART2_IRQHandler(void)
{   UART2_DriverIRQHandler();
}

WEAK void Reserved37_IRQHandler(void)
{   Reserved37_DriverIRQHandler();
}

WEAK void WDT_IRQHandler(void)
{   WDT_DriverIRQHandler();
}

WEAK void Reserved39_IRQHandler(void)
{   Reserved39_DriverIRQHandler();
}

WEAK void ADC0_IRQHandler(void)
{   ADC0_DriverIRQHandler();
}

WEAK void DAC_IRQHandler(void)
{   DAC_DriverIRQHandler();
}

WEAK void ACOMP_WAKEUP_IRQHandler(void)
{   ACOMP_WAKEUP_DriverIRQHandler();
}

WEAK void ACOMP_IRQHandler(void)
{   ACOMP_DriverIRQHandler();
}

WEAK void SDIO_IRQHandler(void)
{   SDIO_DriverIRQHandler();
}

WEAK void USB_IRQHandler(void)
{   USB_DriverIRQHandler();
}

WEAK void Reserved46_IRQHandler(void)
{   Reserved46_DriverIRQHandler();
}

WEAK void PLL_IRQHandler(void)
{   PLL_DriverIRQHandler();
}

WEAK void Reserved48_IRQHandler(void)
{   Reserved48_DriverIRQHandler();
}

WEAK void RC32M_IRQHandler(void)
{   RC32M_DriverIRQHandler();
}

WEAK void GPIO_0_1_IRQHandler(void)
{   GPIO_0_1_DriverIRQHandler();
}

WEAK void GPIO_2_3_IRQHandler(void)
{   GPIO_2_3_DriverIRQHandler();
}

WEAK void GPIO_4_5_IRQHandler(void)
{   GPIO_4_5_DriverIRQHandler();
}

WEAK void GPIO_6_7_IRQHandler(void)
{   GPIO_6_7_DriverIRQHandler();
}

WEAK void GPIO_8_9_IRQHandler(void)
{   GPIO_8_9_DriverIRQHandler();
}

WEAK void GPIO_10_11_IRQHandler(void)
{   GPIO_10_11_DriverIRQHandler();
}

WEAK void GPIO_12_13_IRQHandler(void)
{   GPIO_12_13_DriverIRQHandler();
}

WEAK void GPIO_14_15_IRQHandler(void)
{   GPIO_14_15_DriverIRQHandler();
}

WEAK void GPIO_16_17_IRQHandler(void)
{   GPIO_16_17_DriverIRQHandler();
}

WEAK void GPIO_18_19_IRQHandler(void)
{   GPIO_18_19_DriverIRQHandler();
}

WEAK void GPIO_20_21_IRQHandler(void)
{   GPIO_20_21_DriverIRQHandler();
}

WEAK void GPIO_22_23_IRQHandler(void)
{   GPIO_22_23_DriverIRQHandler();
}

WEAK void GPIO_24_25_IRQHandler(void)
{   GPIO_24_25_DriverIRQHandler();
}

WEAK void GPIO_26_27_IRQHandler(void)
{   GPIO_26_27_DriverIRQHandler();
}

WEAK void GPIO_28_29_IRQHandler(void)
{   GPIO_28_29_DriverIRQHandler();
}

WEAK void GPIO_30_31_IRQHandler(void)
{   GPIO_30_31_DriverIRQHandler();
}

WEAK void GPIO_32_33_IRQHandler(void)
{   GPIO_32_33_DriverIRQHandler();
}

WEAK void GPIO_34_35_IRQHandler(void)
{   GPIO_34_35_DriverIRQHandler();
}

WEAK void GPIO_36_37_IRQHandler(void)
{   GPIO_36_37_DriverIRQHandler();
}

WEAK void GPIO_38_39_IRQHandler(void)
{   GPIO_38_39_DriverIRQHandler();
}

WEAK void GPIO_40_41_IRQHandler(void)
{   GPIO_40_41_DriverIRQHandler();
}

WEAK void GPIO_42_43_IRQHandler(void)
{   GPIO_42_43_DriverIRQHandler();
}

WEAK void GPIO_44_45_IRQHandler(void)
{   GPIO_44_45_DriverIRQHandler();
}

WEAK void GPIO_46_47_IRQHandler(void)
{   GPIO_46_47_DriverIRQHandler();
}

WEAK void GPIO_48_49_IRQHandler(void)
{   GPIO_48_49_DriverIRQHandler();
}

WEAK void Reserved75_IRQHandler(void)
{   Reserved75_DriverIRQHandler();
}

WEAK void PMU_IRQHandler(void)
{   PMU_DriverIRQHandler();
}

WEAK void BRNOUT_IRQHandler(void)
{   BRNOUT_DriverIRQHandler();
}

WEAK void WIFIWKUP_IRQHandler(void)
{   WIFIWKUP_DriverIRQHandler();
}

//*****************************************************************************

#if defined (DEBUG)
#pragma GCC pop_options
#endif // (DEBUG)
