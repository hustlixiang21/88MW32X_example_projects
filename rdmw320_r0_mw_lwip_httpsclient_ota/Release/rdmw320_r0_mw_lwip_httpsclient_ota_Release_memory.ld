/*
 * GENERATED FILE - DO NOT EDIT
 * Copyright 2008-2013 Code Red Technologies Ltd,
 * Copyright 2013-2024 NXP
 * SPDX-License-Identifier: BSD-3-Clause
 * Generated linker script file for device_88MW320_xx_xxxx
 * Created from memory.ldt by FMCreateLinkMemory
 * Using Freemarker v2.3.30
 * MCUXpresso IDE v24.9 [Build 25] [2024-09-26] on 2024年11月4日 下午5:00:31
 */

MEMORY
{
  /* Define each memory region */
  QSPI_FLASH (rx) : ORIGIN = 0x1f000000, LENGTH = 0x90000 /* 576K bytes (alias Flash) */  
  SRAM_CODE (rwx) : ORIGIN = 0x100000, LENGTH = 0x5efc0 /* 389056 bytes (alias RAM) */  
  SRAM_SYS (rwx) : ORIGIN = 0x20000000, LENGTH = 0x20000 /* 128K bytes (alias RAM2) */  
  NVRAM (rwx) : ORIGIN = 0x480c0044, LENGTH = 0xfbc /* 4028 bytes (alias RAM3) */  
}

  /* Define a symbol for the top of each memory region */
  __base_QSPI_FLASH = 0x1f000000  ; /* QSPI_FLASH */  
  __base_Flash = 0x1f000000 ; /* Flash */  
  __top_QSPI_FLASH = 0x1f000000 + 0x90000 ; /* 576K bytes */  
  __top_Flash = 0x1f000000 + 0x90000 ; /* 576K bytes */  
  __base_SRAM_CODE = 0x100000  ; /* SRAM_CODE */  
  __base_RAM = 0x100000 ; /* RAM */  
  __top_SRAM_CODE = 0x100000 + 0x5efc0 ; /* 389056 bytes */  
  __top_RAM = 0x100000 + 0x5efc0 ; /* 389056 bytes */  
  __base_SRAM_SYS = 0x20000000  ; /* SRAM_SYS */  
  __base_RAM2 = 0x20000000 ; /* RAM2 */  
  __top_SRAM_SYS = 0x20000000 + 0x20000 ; /* 128K bytes */  
  __top_RAM2 = 0x20000000 + 0x20000 ; /* 128K bytes */  
  __base_NVRAM = 0x480c0044  ; /* NVRAM */  
  __base_RAM3 = 0x480c0044 ; /* RAM3 */  
  __top_NVRAM = 0x480c0044 + 0xfbc ; /* 4028 bytes */  
  __top_RAM3 = 0x480c0044 + 0xfbc ; /* 4028 bytes */  
