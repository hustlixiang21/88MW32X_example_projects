/** @file mlan_11n_aggr.h
 *
 *  @brief This file contains related macros, enum, and struct
 *  of 11n aggregation functionalities
 *
 *  Copyright 2008-2021 NXP
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

/********************************************************
Change log:
    11/10/2008: initial version
********************************************************/

#ifndef _MLAN_11N_AGGR_H_
#define _MLAN_11N_AGGR_H_

/** Aggregate 11N packets */
mlan_status wlan_11n_deaggregate_pkt(pmlan_private priv, pmlan_buffer pmbuf);
/** Deaggregate 11N packets */
int wlan_11n_aggregate_pkt(mlan_private *priv, raListTbl *ptr, int headroom, int ptrindex);

#endif /* !_MLAN_11N_AGGR_H_ */
