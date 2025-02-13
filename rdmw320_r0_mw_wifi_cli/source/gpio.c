/** @file gpio.c
 *
 *  @brief gpio file
 *
 *  Copyright 2008-2022 NXP
 *
 *  NXP CONFIDENTIAL
 *  The source code contained or described herein and all documents related to
 *  the source code ("Materials") are owned by NXP, its
 *  suppliers and/or its licensors. Title to the Materials remains with NXP,
 *  its suppliers and/or its licensors. The Materials contain
 *  trade secrets and proprietary and confidential information of NXP, its
 *  suppliers and/or its licensors. The Materials are protected by worldwide copyright
 *  and trade secret laws and treaty provisions. No part of the Materials may be
 *  used, copied, reproduced, modified, published, uploaded, posted,
 *  transmitted, distributed, or disclosed in any way without NXP's prior
 *  express written permission.
 *
 *  No license under any patent, copyright, trade secret or other intellectual
 *  property right is granted to or conferred upon you by disclosure or delivery
 *  of the Materials, either expressly, by implication, inducement, estoppel or
 *  otherwise. Any license under such intellectual property rights must be
 *  express and approved by NXP in writing.
 *
 */

///////////////////////////////////////////////////////////////////////////////
//  Includes
///////////////////////////////////////////////////////////////////////////////

// SDK Included Files
#include "board.h"
#include "fsl_gpio.h"
#ifdef CONFIG_WPS2
#include "wlan.h"
#endif

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define BOARD_SW_GPIO        BOARD_SW1_GPIO
#define BOARD_SW_GPIO_PIN    BOARD_SW1_GPIO_PIN
#define BOARD_SW_IRQ         BOARD_SW1_IRQ
#define BOARD_SW_IRQ_HANDLER BOARD_SW1_IRQ_HANDLER
#define BOARD_SW_NAME        BOARD_SW1_NAME

/*******************************************************************************
 * Code
 ******************************************************************************/
/*!
 * @brief Interrupt service fuction of switch.
 */
void BOARD_SW_IRQ_HANDLER(void)
{
    /* Clear external interrupt flag. */
    GPIO_PortClearInterruptFlags(BOARD_SW_GPIO, GPIO_PORT(BOARD_SW_GPIO_PIN), 1UL << GPIO_PORT_PIN(BOARD_SW_GPIO_PIN));
#ifdef CONFIG_WPS2
    wlan_start_wps_pbc();
#endif
    SDK_ISR_EXIT_BARRIER;
}

/*!
 * @brief GPIO initialization function.
 */
void GPIO_Init(void)
{
    /* Define the init structure for the input switch pin */
    gpio_pin_config_t sw_config = {
        kGPIO_DigitalInput,
        0,
    };

    GPIO_PinSetInterruptConfig(BOARD_SW_GPIO, BOARD_SW_GPIO_PIN, kGPIO_InterruptFallingEdge);
    GPIO_PortEnableInterrupts(BOARD_SW_GPIO, GPIO_PORT(BOARD_SW_GPIO_PIN), 1UL << GPIO_PORT_PIN(BOARD_SW_GPIO_PIN));
    EnableIRQ(BOARD_SW_IRQ);
    GPIO_PinInit(BOARD_SW_GPIO, BOARD_SW_GPIO_PIN, &sw_config);
}
