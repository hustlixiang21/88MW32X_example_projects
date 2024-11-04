/** @file wm_mbedtls_helper_api.c
 *
 *  @brief This file provides helper APIs to use mbedtls on marvell platform
 *
 *  Copyright 2008-2022 NXP
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

#include "wm_mbedtls_mem.h"
#include "wm_mbedtls_threading.h"
#include "wm_mbedtls_entropy.h"
#include "wm_mbedtls_helper_api.h"
#include "timing_alt.h"
#include <mbedtls/debug.h>

#ifdef MBEDTLS_DEBUG_C
#include <string.h>
#endif /* MBEDTLS_DEBUG_C */

static bool wm_mbedtls_lib_inited;

int wm_mbedtls_lib_init()
{
    int ret = 0;
    if (wm_mbedtls_lib_inited)
        return 0;

    wm_mbedtls_set_mem_alloc();
    wm_mbedtls_set_threading_alt();

    if ((ret = wm_mbedtls_entropy_ctr_drbg_setup()) != 0)
        return ret;

    wm_mbedtls_lib_inited = 1;
    return 0;
}

bool is_wm_mbedtls_lib_init()
{
    return wm_mbedtls_lib_inited;
}
