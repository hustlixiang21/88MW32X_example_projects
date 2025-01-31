/** @file wifi-wps.c
 *
 *  @brief This file provides WPS IE and parser.
 *
 *  Copyright 2008-2020 NXP
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
#include <mlan_api.h>
#include <lwip/def.h>

#define SC_Device_Password_ID 0x1012

const t_u8 wps_oui[4] = {0x00, 0x50, 0xf2, 0x04};

typedef MLAN_PACK_START struct
{
    t_u16 Type;
    t_u16 Length;
} MLAN_PACK_END MrvlIEParamSet_t;

/**
 *  @brief  Parsing Device Password ID
 *
 *  @param message      A pointer to buffer for parsing
 *  @param size         Length of buffer
 *  @return             Device Password ID
 */
static t_u16 wps_parser(t_u8 *message, size_t size)
{
    t_u16 device_password_id = 0xffff;
    MrvlIEParamSet_t *ptlv;
    t_u8 *plast_byte, *data;
    t_u16 len;

    /* Beginning from Version, skip IE_ID/Length/SC_OUI field */
    ptlv       = (MrvlIEParamSet_t *)(message + 4);
    data       = (t_u8 *)ptlv;
    plast_byte = (t_u8 *)(message + (t_u8)size);

    while ((void *)ptlv < (void *)plast_byte)
    {
        ptlv->Type   = ntohs(ptlv->Type);
        ptlv->Length = ntohs(ptlv->Length);

        switch (ptlv->Type)
        {
            case SC_Device_Password_ID:
                wifi_d("SC_Device_Password_ID :: ");
                memcpy(&device_password_id, data, sizeof(t_u16));
                device_password_id = ntohs(device_password_id);
                wifi_d("device_password_id = 0x%x", device_password_id);
                break;
            default:
                break;
        }

        len = ptlv->Length + sizeof(MrvlIEParamSet_t);

        ptlv->Type   = htons(ptlv->Type);
        ptlv->Length = htons(ptlv->Length);

        ptlv = (MrvlIEParamSet_t *)((t_u8 *)ptlv + len);

        data = (t_u8 *)ptlv;
        data += sizeof(MrvlIEParamSet_t);
    } /* while */

    return device_password_id;
}

void check_for_wps_ie(
    const t_u8 *OuiType, bool *wps_IE_exist, t_u16 *wps_session, void *element_data, unsigned element_len)
{
    *wps_IE_exist = false;
    *wps_session  = 0xffff;

    if (!memcmp(OuiType, &wps_oui, sizeof(wps_oui)))
    {
        /* WPS IE is present in probe response. */
        wifi_d("WPS IE :: %x:%x:%x:%x", OuiType[0], OuiType[1], OuiType[2], OuiType[3]);

        *wps_IE_exist = true;
        *wps_session  = wps_parser(element_data, element_len);
    }
}
