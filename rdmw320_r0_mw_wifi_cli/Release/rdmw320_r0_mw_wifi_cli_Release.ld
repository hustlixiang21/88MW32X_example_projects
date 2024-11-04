/*
 * GENERATED FILE - DO NOT EDIT
 * Copyright 2008-2013 Code Red Technologies Ltd,
 * Copyright 2013-2024 NXP
 * SPDX-License-Identifier: BSD-3-Clause
 * Generated linker script file for device_88MW320_xx_xxxx
 * Created from linkscript.ldt by FMCreateLinkLibraries
 * Using Freemarker v2.3.30
 * MCUXpresso IDE v24.9 [Build 25] [2024-09-26] on 2024年11月4日 下午5:16:27
 */

INCLUDE "rdmw320_r0_mw_wifi_cli_Release_library.ld"
INCLUDE "rdmw320_r0_mw_wifi_cli_Release_memory.ld"

ENTRY(ResetISR)

SECTIONS
{
 	/* Offset .text by 0x100 bytes. These 0x100 are to be added by mw_img_conv.exe*/
    .boot_hdr (NOLOAD) : ALIGN(8)
    {
        FILL(0xFF)
        BYTE(0xFF)
        . += 0x100 - 1;
    } > QSPI_FLASH

    /* MAIN TEXT SECTION */
    .text : ALIGN(8)
    {
        FILL(0xff)
        __vectors_start__ = ABSOLUTE(.) ;
        KEEP(*(.isr_vector))
        /* Global Section Table */
        . = ALIGN(4) ;
        __section_table_start = .;
        __data_section_table = .;
        LONG(LOADADDR(.data));
        LONG(    ADDR(.data));
        LONG(  SIZEOF(.data));
        LONG(LOADADDR(.data_RAM2));
        LONG(    ADDR(.data_RAM2));
        LONG(  SIZEOF(.data_RAM2));
        LONG(LOADADDR(.data_RAM3));
        LONG(    ADDR(.data_RAM3));
        LONG(  SIZEOF(.data_RAM3));
        __data_section_table_end = .;
        __bss_section_table = .;
        LONG(    ADDR(.bss));
        LONG(  SIZEOF(.bss));
        LONG(    ADDR(.bss_RAM2));
        LONG(  SIZEOF(.bss_RAM2));
        LONG(    ADDR(.bss_RAM3));
        LONG(  SIZEOF(.bss_RAM3));
        __bss_section_table_end = .;
        __section_table_end = . ;
        /* End of Global Section Table */

        *(.after_vectors*)

		/* Exclude flash and frequently executed functions from XIP */
		*(EXCLUDE_FILE(
			*/fsl_clock.o
			*/clock_config.o
			*/fsl_qspi.o
			*/fsl_flashc.o
			*/fsl_power.o
			*/mflash_drv.o
		) .text*)	/* .text* sections (code) */
		
       KEEP(*freertos*/tasks.o(.rodata*)) /* FreeRTOS Debug Config */
		/* Exclude flash and frequently executed functions from XIP */
		*(EXCLUDE_FILE(
			*/fsl_clock.o
			*/clock_config.o
			*/fsl_qspi.o
			*/fsl_flashc.o
			*/fsl_power.o
			*/mflash_drv.o
		) .rodata) /* .rodata sections (constants, strings, etc.) */
		/* Exclude flash and frequently executed functions from XIP */
		*(EXCLUDE_FILE(
			*/fsl_clock.o
			*/clock_config.o
			*/fsl_qspi.o
			*/fsl_flashc.o
			*/fsl_power.o
			*/mflash_drv.o
		) .rodata.*) /* .rodata.* sections (constants, strings, etc.) */
		/* Exclude flash and frequently executed functions from XIP */
		*(EXCLUDE_FILE(
			*/fsl_clock.o
			*/clock_config.o
			*/fsl_qspi.o
			*/fsl_flashc.o
			*/fsl_power.o
			*/mflash_drv.o
		) .constdata) /* .constdata sections (constants, strings, etc.) */
		/* Exclude flash and frequently executed functions from XIP */
		*(EXCLUDE_FILE(
			*/fsl_clock.o
			*/clock_config.o
			*/fsl_qspi.o
			*/fsl_flashc.o
			*/fsl_power.o
			*/mflash_drv.o
		) .constdata.*) /* .constdata.* sections (constants, strings, etc.) */
		. = ALIGN(8);

    } > QSPI_FLASH
    /*
     * for exception handling/unwind - some Newlib functions (in common
     * with C++ and STDC++) use this.
     */
    .ARM.extab : ALIGN(8)
    {
        *(.ARM.extab* .gnu.linkonce.armextab.*)
    } > QSPI_FLASH

    .ARM.exidx : ALIGN(8)
    {
        __exidx_start = .;
        *(.ARM.exidx* .gnu.linkonce.armexidx.*)
        __exidx_end = .;
    } > QSPI_FLASH
 
    _etext = .;
        
    /* DATA section for SRAM_SYS */

    .data_RAM2 : ALIGN(8)
    {
        FILL(0xff)
        PROVIDE(__start_data_RAM2 = .) ;
        PROVIDE(__start_data_SRAM_SYS = .) ;
        *(.ramfunc.$RAM2)
        *(.ramfunc.$SRAM_SYS)
        *(.data.$RAM2)
        *(.data.$SRAM_SYS)
        *(.data.$RAM2.*)
        *(.data.$SRAM_SYS.*)
        . = ALIGN(8) ;
        PROVIDE(__end_data_RAM2 = .) ;
        PROVIDE(__end_data_SRAM_SYS = .) ;
     } > SRAM_SYS AT>QSPI_FLASH

    /* DATA section for NVRAM */

    .data_RAM3 : ALIGN(8)
    {
        FILL(0xff)
        PROVIDE(__start_data_RAM3 = .) ;
        PROVIDE(__start_data_NVRAM = .) ;
        *(.ramfunc.$RAM3)
        *(.ramfunc.$NVRAM)
        *(.data.$RAM3)
        *(.data.$NVRAM)
        *(.data.$RAM3.*)
        *(.data.$NVRAM.*)
        . = ALIGN(8) ;
        PROVIDE(__end_data_RAM3 = .) ;
        PROVIDE(__end_data_NVRAM = .) ;
     } > NVRAM AT>QSPI_FLASH

    /* MAIN DATA SECTION */
    .uninit_RESERVED (NOLOAD) : ALIGN(8)
    {
        _start_uninit_RESERVED = .;
        KEEP(*(.bss.$RESERVED*))
       . = ALIGN(8) ;
        _end_uninit_RESERVED = .;
    } > SRAM_CODE AT> SRAM_CODE

    /* Main DATA section (SRAM_CODE) */
    .data : ALIGN(8)
    {
       FILL(0xff)
       _data = . ;
       PROVIDE(__start_data_RAM = .) ;
       PROVIDE(__start_data_SRAM_CODE = .) ;
       *(vtable)
       *(.ramfunc*)
       KEEP(*(CodeQuickAccess))
       KEEP(*(DataQuickAccess))
       *(RamFunction)

		/* Explicit placement of flash and frequently executed functions in RAM */
		*/fsl_clock.o(.text* .rodata .rodata.* .constdata .constdata.*)
		*/clock_config.o(.text* .rodata .rodata.* .constdata .constdata.*)
		*/fsl_qspi.o(.text* .rodata .rodata.* .constdata .constdata.*)
		*/fsl_flashc.o(.text* .rodata .rodata.* .constdata .constdata.*)
		*/fsl_power.o(.text* .rodata .rodata.* .constdata .constdata.*)
		*/mflash_drv.o(.text* .rodata .rodata.* .constdata .constdata.*)
		
       *(.data*)
       . = ALIGN(8) ;
       _edata = . ;
       PROVIDE(__end_data_RAM = .) ;
       PROVIDE(__end_data_SRAM_CODE = .) ;
    } > SRAM_CODE AT>QSPI_FLASH

    /* BSS section for SRAM_SYS */
    .bss_RAM2 (NOLOAD) : ALIGN(8)
    {
       PROVIDE(__start_bss_RAM2 = .) ;
       PROVIDE(__start_bss_SRAM_SYS = .) ;
       *(.bss.$RAM2)
       *(.bss.$SRAM_SYS)
       *(.bss.$RAM2.*)
       *(.bss.$SRAM_SYS.*)
       . = ALIGN (. != 0 ? 8 : 1) ; /* avoid empty segment */
       PROVIDE(__end_bss_RAM2 = .) ;
       PROVIDE(__end_bss_SRAM_SYS = .) ;
    } > SRAM_SYS AT> SRAM_SYS

    /* BSS section for NVRAM */
    .bss_RAM3 (NOLOAD) : ALIGN(8)
    {
       PROVIDE(__start_bss_RAM3 = .) ;
       PROVIDE(__start_bss_NVRAM = .) ;
       *(.bss.$RAM3)
       *(.bss.$NVRAM)
       *(.bss.$RAM3.*)
       *(.bss.$NVRAM.*)
       . = ALIGN (. != 0 ? 8 : 1) ; /* avoid empty segment */
       PROVIDE(__end_bss_RAM3 = .) ;
       PROVIDE(__end_bss_NVRAM = .) ;
    } > NVRAM AT> NVRAM

    /* MAIN BSS SECTION */
    .bss (NOLOAD) : ALIGN(8)
    {
        _bss = .;
        PROVIDE(__start_bss_RAM = .) ;
        PROVIDE(__start_bss_SRAM_CODE = .) ;
        *(.bss*)
        *(COMMON)
        . = ALIGN(8) ;
        _ebss = .;
        PROVIDE(__end_bss_RAM = .) ;
        PROVIDE(__end_bss_SRAM_CODE = .) ;
        PROVIDE(end = .);
    } > SRAM_CODE AT> SRAM_CODE

    /* NOINIT section for SRAM_SYS */
    .noinit_RAM2 (NOLOAD) : ALIGN(8)
    {
       PROVIDE(__start_noinit_RAM2 = .) ;
       PROVIDE(__start_noinit_SRAM_SYS = .) ;
       *(.noinit.$RAM2)
       *(.noinit.$SRAM_SYS)
       *(.noinit.$RAM2.*)
       *(.noinit.$SRAM_SYS.*)
       . = ALIGN(8) ;
       PROVIDE(__end_noinit_RAM2 = .) ;
       PROVIDE(__end_noinit_SRAM_SYS = .) ;
    } > SRAM_SYS AT> SRAM_SYS

    /* NOINIT section for NVRAM */
    .noinit_RAM3 (NOLOAD) : ALIGN(8)
    {
       PROVIDE(__start_noinit_RAM3 = .) ;
       PROVIDE(__start_noinit_NVRAM = .) ;
       *(.noinit.$RAM3)
       *(.noinit.$NVRAM)
       *(.noinit.$RAM3.*)
       *(.noinit.$NVRAM.*)
       . = ALIGN(8) ;
       PROVIDE(__end_noinit_RAM3 = .) ;
       PROVIDE(__end_noinit_NVRAM = .) ;
    } > NVRAM AT> NVRAM

    /* DEFAULT NOINIT SECTION */
    .noinit (NOLOAD): ALIGN(8)
    {
        _noinit = .;
        PROVIDE(__start_noinit_RAM = .) ;
        PROVIDE(__start_noinit_SRAM_CODE = .) ;
        *(.noinit*)
         . = ALIGN(8) ;
        _end_noinit = .;
       PROVIDE(__end_noinit_RAM = .) ;
       PROVIDE(__end_noinit_SRAM_CODE = .) ;        
    } > SRAM_CODE AT> SRAM_CODE

    /* Reserve and place Heap within memory map */
    _HeapSize = 0x400;
    .heap (NOLOAD) :  ALIGN(8)
    {
        _pvHeapStart = .;
        . += _HeapSize;
        . = ALIGN(8);
        _pvHeapLimit = .;
    } > SRAM_CODE

     _StackSize = 0x400;
     /* Reserve space in memory for Stack */
    .heap2stackfill (NOLOAD) :
    {
        . += _StackSize;
    } > SRAM_CODE
    /* Locate actual Stack in memory map */
    .stack ORIGIN(SRAM_CODE) + LENGTH(SRAM_CODE) - _StackSize - 0 (NOLOAD) :  ALIGN(8)
    {
        _vStackBase = .;
        . = ALIGN(8);
        _vStackTop = . + _StackSize;
    } > SRAM_CODE

    /* Provide basic symbols giving location and size of main text
     * block, including initial values of RW data sections. Note that
     * these will need extending to give a complete picture with
     * complex images (e.g multiple Flash banks).
     */
    _image_start = LOADADDR(.text);
    _image_end = LOADADDR(.data) + SIZEOF(.data);
    _image_size = _image_end - _image_start;
}