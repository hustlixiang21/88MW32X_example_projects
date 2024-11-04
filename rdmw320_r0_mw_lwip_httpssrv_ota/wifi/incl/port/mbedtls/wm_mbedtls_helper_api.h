/*
 *  Copyright 2018-2022 NXP
 *
 *  NXP CONFIDENTIAL
 *  The source code contained or described herein and all documents related to
 *  the source code ("Materials") are owned by NXP, its suppliers and/or its
 *  licensors. Title to the Materials remains with NXP, its suppliers and/or its
 *  licensors. The Materials contain trade secrets and proprietary and
 *  confidential information of NXP, its suppliers and/or its licensors. The
 *  Materials are protected by worldwide copyright and trade secret laws and
 *  treaty provisions. No part of the Materials may be used, copied, reproduced,
 *  modified, published, uploaded, posted, transmitted, distributed, or
 *  disclosed in any way without NXP's prior express written permission.
 *
 *  No license under any patent, copyright, trade secret or other intellectual
 *  property right is granted to or conferred upon you by disclosure or delivery
 *  of the Materials, either expressly, by implication, inducement, estoppel or
 *  otherwise. Any license under such intellectual property rights must be
 *  express and approved by NXP in writing.
 *
 */

/** @file wm_mbedtls_helper_api.h
 *
 *  @brief This header file provides abstraction layer for mbedTLS stack
 */

#ifndef WM_MBEDTLS_HELPER_H
#define WM_MBEDTLS_HELPER_H

#include <wm_mbedtls_debug.h>

/**
 * Initialize MBEDTLS library pre-requisites as following:
 *
 * Initialize time subsystem including RTC.
 * Set memory callback functions for alloc, free
 * Set threading callback function for mutex free, lock, unlock
 * Setup global entropy, CTR_DRBG context.
 *
 * @return 0    Success
 * @return -1   Failed in setup for entropy, CTR_DRBG context.
 */
int wm_mbedtls_lib_init();

/**
 * Get wm_mbedtls library initialization status
 *
 * return true if initialized, false if not.
 */
bool is_wm_mbedtls_lib_init();

#endif /* WM_MBEDTLS_HELPER_H */
