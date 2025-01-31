/** @file mlan_main.h
 *
 *  @brief This file defines the private and adapter data
 *  structures and declares global function prototypes used
 *  in MLAN module.
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

/******************************************************
Change log:
    10/13/2008: initial version
******************************************************/

#ifndef _MLAN_MAIN_H_
#define _MLAN_MAIN_H_

#include "mlan_main_defs.h"

#ifdef DEBUG_LEVEL1
extern t_void (*print_callback)(IN t_void *pmoal_handle, IN t_u32 level, IN t_s8 *pformat, IN...);

extern mlan_status (*get_sys_time_callback)(IN t_void *pmoal_handle, OUT t_u32 *psec, OUT t_u32 *pusec);

extern t_u32 drvdbg;

#ifdef DEBUG_LEVEL2
#define PRINTM_MINFO(msg...)                      \
    do                                            \
    {                                             \
        if ((drvdbg & MINFO) && (print_callback)) \
            print_callback(MNULL, MINFO, msg);    \
    } while (false)
#define PRINTM_MWARN(msg...)                      \
    do                                            \
    {                                             \
        if ((drvdbg & MWARN) && (print_callback)) \
            print_callback(MNULL, MWARN, msg);    \
    } while (false)
#define PRINTM_MENTRY(msg...)                      \
    do                                             \
    {                                              \
        if ((drvdbg & MENTRY) && (print_callback)) \
            print_callback(MNULL, MENTRY, msg);    \
    } while (false)
#define PRINTM_GET_SYS_TIME(level, psec, pusec)          \
    do                                                   \
    {                                                    \
        if ((level & drvdbg) && (get_sys_time_callback)) \
            get_sys_time_callback(MNULL, psec, pusec);   \
    } while (false)

/** Hexdump for level-2 debugging */
#define HEXDUMP(x, y, z)                                        \
    do                                                          \
    {                                                           \
        if ((drvdbg & (MHEX_DUMP | MINFO)) && (print_callback)) \
            print_callback(MNULL, MHEX_DUMP | MINFO, x, y, z);  \
    } while (false)

#else

#define PRINTM_MINFO(msg...) \
    do                       \
    {                        \
    } while (false)
#define PRINTM_MWARN(msg...) \
    do                       \
    {                        \
    } while (false)
#define PRINTM_MENTRY(msg...) \
    do                        \
    {                         \
    } while (false)

#define PRINTM_GET_SYS_TIME(level, psec, pusec)                                                  \
    do                                                                                           \
    {                                                                                            \
        if ((level & drvdbg) && (get_sys_time_callback) && (level != MINFO) && (level != MWARN)) \
            get_sys_time_callback(MNULL, psec, pusec);                                           \
    } while (false)

/** Hexdump for debugging */
#define HEXDUMP(x, y, z) \
    do                   \
    {                    \
    } while (false)

#endif /* DEBUG_LEVEL2 */

#define PRINTM_MFW_D(msg...)                      \
    do                                            \
    {                                             \
        if ((drvdbg & MFW_D) && (print_callback)) \
            print_callback(MNULL, MFW_D, msg);    \
    } while (false)
#define PRINTM_MCMD_D(msg...)                      \
    do                                             \
    {                                              \
        if ((drvdbg & MCMD_D) && (print_callback)) \
            print_callback(MNULL, MCMD_D, msg);    \
    } while (false)
#define PRINTM_MDAT_D(msg...)                      \
    do                                             \
    {                                              \
        if ((drvdbg & MDAT_D) && (print_callback)) \
            print_callback(MNULL, MDAT_D, msg);    \
    } while (false)
#define PRINTM_MIF_D(msg...)                      \
    do                                            \
    {                                             \
        if ((drvdbg & MIF_D) && (print_callback)) \
            print_callback(MNULL, MIF_D, msg);    \
    } while (false)

#define PRINTM_MIOCTL(msg...)                      \
    do                                             \
    {                                              \
        if ((drvdbg & MIOCTL) && (print_callback)) \
            print_callback(MNULL, MIOCTL, msg);    \
    } while (false)
#define PRINTM_MINTR(msg...)                      \
    do                                            \
    {                                             \
        if ((drvdbg & MINTR) && (print_callback)) \
            print_callback(MNULL, MINTR, msg);    \
    } while (false)
#define PRINTM_MEVENT(msg...)                      \
    do                                             \
    {                                              \
        if ((drvdbg & MEVENT) && (print_callback)) \
            print_callback(MNULL, MEVENT, msg);    \
    } while (false)
#define PRINTM_MCMND(msg...)                      \
    do                                            \
    {                                             \
        if ((drvdbg & MCMND) && (print_callback)) \
            print_callback(MNULL, MCMND, msg);    \
    } while (false)
#define PRINTM_MDATA(msg...)                      \
    do                                            \
    {                                             \
        if ((drvdbg & MDATA) && (print_callback)) \
            print_callback(MNULL, MDATA, msg);    \
    } while (false)
#define PRINTM_MERROR(msg...)                      \
    do                                             \
    {                                              \
        if ((drvdbg & MERROR) && (print_callback)) \
            print_callback(MNULL, MERROR, msg);    \
    } while (false)
#define PRINTM_MFATAL(msg...)                      \
    do                                             \
    {                                              \
        if ((drvdbg & MFATAL) && (print_callback)) \
            print_callback(MNULL, MFATAL, msg);    \
    } while (false)
#define PRINTM_MMSG(msg...)                      \
    do                                           \
    {                                            \
        if ((drvdbg & MMSG) && (print_callback)) \
            print_callback(MNULL, MMSG, msg);    \
    } while (false)

#define PRINTM(level, msg...) PRINTM_##level(msg)

/** Log debug message */
#ifdef __GNUC__
#define PRINTM_NETINTF(level, pmpriv)                                                                               \
    do                                                                                                              \
    {                                                                                                               \
        if ((drvdbg & level) && pmpriv && pmpriv->adapter->callbacks.moal_print_netintf)                            \
            pmpriv->adapter->callbacks.moal_print_netintf(pmpriv->adapter->pmoal_handle, pmpriv->bss_index, level); \
    } while (false)
#endif /* __GNUC__ */

/** Max hex dump data length */
#define MAX_DATA_DUMP_LEN 64

/** Debug hexdump for level-1 debugging */
#define DBG_HEXDUMP(level, x, y, z)                            \
    do                                                         \
    {                                                          \
        if ((drvdbg & level) && print_callback)                \
            print_callback(MNULL, MHEX_DUMP | level, x, y, z); \
    } while (false)

#else /* DEBUG_LEVEL1 */

#define PRINTM(level, msg...) \
    do                        \
    {                         \
    } while ((bool)false)

#define PRINTM_NETINTF(level, pmpriv) \
    do                                \
    {                                 \
    } while (false)

/** Debug hexdump for level-1 debugging */
#define DBG_HEXDUMP(level, x, y, z) \
    do                              \
    {                               \
    } while (false)

/** Hexdump for debugging */
#define HEXDUMP(x, y, z) \
    do                   \
    {                    \
    } while (false)

#define PRINTM_GET_SYS_TIME(level, psec, pusec) \
    do                                          \
    {                                           \
    } while (false)

#endif /* DEBUG_LEVEL1 */

/** Log entry point for debugging */
#define ENTER()                                      \
    do                                               \
    {                                                \
        PRINTM(MENTRY, "Enter: %s\n", __FUNCTION__); \
    } while (false)

/** Log exit point for debugging */
#define LEAVE()                                      \
    do                                               \
    {                                                \
        PRINTM(MENTRY, "Leave: %s\n", __FUNCTION__); \
    } while (false)

/** Find minimum */
#ifndef MIN
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#endif

/** Find maximum */
#ifndef MAX
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#endif

#if 0
#ifdef memset
#undef memset
#endif
/** Memset routine */
#define memset(adapter, s, c, len) adapter->callbacks.moal_memset(adapter->pmoal_handle, s, c, len)

#ifdef memmove
#undef memmove
#endif
/** Memmove routine */
#define memmove(adapter, dest, src, len) adapter->callbacks.moal_memmove(adapter->pmoal_handle, dest, src, len)

#ifdef memcpy
#undef memcpy
#endif
/** Memcpy routine */
#define memcpy(adapter, to, from, len) adapter->callbacks.moal_memcpy(adapter->pmoal_handle, to, from, len)

#ifdef memcmp
#undef memcmp
#endif
/** Memcmp routine */
#define memcmp(adapter, s1, s2, len) adapter->callbacks.moal_memcmp(adapter->pmoal_handle, s1, s2, len)
#endif /* 0 */

/** Find number of elements */
#ifndef NELEMENTS
#define NELEMENTS(x) (sizeof(x) / sizeof(x[0]))
#endif

/** SWAP: swap t_u8 */
#define SWAP_U8(a, b) \
    {                 \
        t_u8 t;       \
        t = a;        \
        a = b;        \
        b = t;        \
    }

/** SWAP: swap t_u8 */
#define SWAP_U16(a, b) \
    {                  \
        t_u16 t;       \
        t = a;         \
        a = b;         \
        b = t;         \
    }

/** MLAN MNULL pointer */
#ifndef MNULL
#define MNULL ((void *)0)
#endif

/** 16 bits byte swap */
#define swap_byte_16(x) ((t_u16)((((t_u16)(x)&0x00ffU) << 8) | (((t_u16)(x)&0xff00U) >> 8)))

/** 32 bits byte swap */
#define swap_byte_32(x)                                                                                                \
    ((t_u32)((((t_u32)(x)&0x000000ffUL) << 24) | (((t_u32)(x)&0x0000ff00UL) << 8) | (((t_u32)(x)&0x00ff0000UL) >> 8) | \
             (((t_u32)(x)&0xff000000UL) >> 24)))

/** 64 bits byte swap */
#define swap_byte_64(x)                                                                                              \
    ((t_u64)((t_u64)(((t_u64)(x)&0x00000000000000ffULL) << 56) | (t_u64)(((t_u64)(x)&0x000000000000ff00ULL) << 40) | \
             (t_u64)(((t_u64)(x)&0x0000000000ff0000ULL) << 24) | (t_u64)(((t_u64)(x)&0x00000000ff000000ULL) << 8) |  \
             (t_u64)(((t_u64)(x)&0x000000ff00000000ULL) >> 8) | (t_u64)(((t_u64)(x)&0x0000ff0000000000ULL) >> 24) |  \
             (t_u64)(((t_u64)(x)&0x00ff000000000000ULL) >> 40) | (t_u64)(((t_u64)(x)&0xff00000000000000ULL) >> 56)))

/** Convert ulong n/w to host */
#define mlan_ntohl(x) swap_byte_32(x)
/** Convert host ulong to n/w */
#define mlan_htonl(x) swap_byte_32(x)
/** Convert n/w to host */
#define mlan_ntohs(x) swap_byte_16(x)
/** Convert host to n/w */
#define mlan_htons(x) swap_byte_16(x)
/** Do nothing */
#define wlan_le16_to_cpu(x) x
/** Do nothing */
#define wlan_le32_to_cpu(x) x
/** Do nothing */
#define wlan_le64_to_cpu(x) x
/** Do nothing */
#define wlan_cpu_to_le16(x) (t_u16)(x)
/** Do nothing */
#define wlan_cpu_to_le32(x) x
/** Do nothing */
#define wlan_cpu_to_le64(x) x

/** Convert TxPD to little endian format from CPU format */
#define endian_convert_TxPD(x) \
    do                         \
    {                          \
    } while (false)
/** Convert RxPD from little endian format to CPU format */
#define endian_convert_RxPD(x) \
    do                         \
    {                          \
    } while (false)

/** Global moal_assert_callback */
extern t_void (*assert_callback)(IN t_void *pmoal_handle, IN t_u32 cond);

/** Assertion */
#define MASSERT(cond)                                                   \
    do                                                                  \
    {                                                                   \
        if (!(cond))                                                    \
        {                                                               \
            PRINTM(MFATAL, "ASSERT: %s: %i\n", __FUNCTION__, __LINE__); \
            if (assert_callback != NULL)                                \
            {                                                           \
                assert_callback(MNULL, (t_ptr)(cond));                  \
            }                                                           \
            else                                                        \
            {                                                           \
                do                                                      \
                {                                                       \
                } while (true);                                         \
            }                                                           \
        }                                                               \
    } while (false)

/** Upload size */
#define WLAN_UPLD_SIZE (2312)

/** Maximum event buffer size */
#define MAX_EVENT_SIZE 1024

/** Maximum event buffer size */
#define MAX_P2P_EVENT_SIZE 512

/** Maximum buffer size for ARP filter */
#define ARP_FILTER_MAX_BUF_SIZE 68

/** 60 seconds */
#define MRVDRV_TIMER_60S 60000
/** 10 seconds */
#define MRVDRV_TIMER_10S 10000U
/** 5 seconds */
#define MRVDRV_TIMER_5S 5000
/** 1 second */
#define MRVDRV_TIMER_1S 1000U

/** Maximum size of multicast list */
#define MRVDRV_MAX_MULTICAST_LIST_SIZE 32
/** Maximum size of channel */
#define MRVDRV_MAX_CHANNEL_SIZE 14
/** Maximum length of SSID */
#define MRVDRV_MAX_SSID_LENGTH 32U
/** WEP list macros & data structures */
/** Size of key buffer in bytes */
#define MRVL_KEY_BUFFER_SIZE_IN_BYTE 16
/** Maximum length of WPA key */
#define MRVL_MAX_KEY_WPA_KEY_LENGTH 32

/** Default listen interval */
/* wmsdk: Changed to keep same as was in legacy */
#define MLAN_DEFAULT_LISTEN_INTERVAL 10

/** Maximum number of region codes */
#define MRVDRV_MAX_REGION_CODE 10U

/** Maximum number of CFP codes for BG */
#define MRVDRV_MAX_CFP_CODE_BG 0
/** Maximum number of CFP codes for A */
#define MRVDRV_MAX_CFP_CODE_A 5

/** Default region code */
#define MRVDRV_DEFAULT_REGION_CODE 0xAA

/** Default country code */
#define MRVDRV_DEFAULT_COUNTRY_CODE "WW"

/** Default factor for calculating beacon average */
#define DEFAULT_BCN_AVG_FACTOR 8
/** Default factor for calculating data average */
#define DEFAULT_DATA_AVG_FACTOR 8

/** The first valid channel for use */
#define FIRST_VALID_CHANNEL 0xffU
/** Default Ad-Hoc channel */
#define DEFAULT_AD_HOC_CHANNEL 6
/** Default Ad-Hoc channel A */
#define DEFAULT_AD_HOC_CHANNEL_A 36

/** Number of WEP keys */
/* fixme: This param has been set to 1 as it is seen in legacy code */
/* that only one set is used. If needed could be increased upto 4 */
#define MRVL_NUM_WEP_KEY (1U) /* 4 */

/** Default multiple DTIM */
#define MRVDRV_DEFAULT_MULTIPLE_DTIM 1

/** Default beacon missing timeout */
#define DEFAULT_BCN_MISS_TIMEOUT 5

#ifdef CONFIG_EXT_SCAN_SUPPORT
/** Maximum buffer space for beacons retrieved from scan responses */
#define MAX_SCAN_BEACON_BUFFER 49152
#else
#define MAX_SCAN_BEACON_BUFFER 16384
#endif
/** Default buffer space for beacons retrieved from scan responses */
#define DEFAULT_SCAN_BEACON_BUFFER 4096

/**
 * @brief Buffer pad space for newly allocated beacons/probe responses
 *
 * Beacons are typically 6 bytes longer than an equivalent probe response.
 *  For each scan response stored, allocate an extra byte pad at the end to
 *  allow easy expansion to store a beacon in the same memory a probe response
 *  previously contained
 */
#define SCAN_BEACON_ENTRY_PAD 6

/** Scan time specified in the channel TLV for each channel for passive scans */
/* wmsdk: Changed this so that UAP connectivity is not lost
   for more than acceptable value to all known clients.
   The downside is that some clients whose beacon interval
   is more than 100mS and does not coincide with uAP
   passive scan duration will not be listed in the scan */
#define MRVDRV_PASSIVE_SCAN_CHAN_TIME 100 /* 200 */

/** Scan time specified in the channel TLV for each channel for active scans */
/* wmsdk: Note: Modified this to keep same as what was in legacy code. */
#define MRVDRV_ACTIVE_SCAN_CHAN_TIME 100 /* 200 */

/** Scan time specified in the channel TLV for each channel for specific scans */
#define MRVDRV_SPECIFIC_SCAN_CHAN_TIME 110

/**
 * Max total scan time in milliseconds
 * The total scan time should be less than scan command timeout value (20s)
 */
#define MRVDRV_MAX_TOTAL_SCAN_TIME (MRVDRV_TIMER_10S * 2U - MRVDRV_TIMER_1S)

/** Offset for GTK as it has version to skip past for GTK */
#define RSN_GTK_OUI_OFFSET 2

/** If OUI is not found */
#define MLAN_OUI_NOT_PRESENT 0
/** If OUI is found */
#define MLAN_OUI_PRESENT 1

/** RF antenna selection */
#define RF_ANTENNA_MASK(n) ((1 << (n)) - 1)
/** RF antenna auto select */
#define RF_ANTENNA_AUTO 0xFFFF

/** Is cmd_resp, event or data packet received? */
#define IS_CARD_RX_RCVD(adapter) (adapter->cmd_resp_received || adapter->event_received || adapter->data_received)

/** Type command */
#define MLAN_TYPE_CMD 1U
/** Type data */
#define MLAN_TYPE_DATA 0U
/** Type event */
#define MLAN_TYPE_EVENT 3U

/** High threshold at which to start drop packets */
#define RX_HIGH_THRESHOLD 1024
/** Medium threshold at which to disable Rx BA */
#define RX_MED_THRESHOLD 256
/** Low threshold to allow Rx BA */
#define RX_LOW_THRESHOLD 128

/** Debug command number */
#define DBG_CMD_NUM 5

/** Hotspot status enable */
#define HOTSPOT_ENABLED MTRUE
/** Hotspot status disable */
#define HOTSPOT_DISABLED MFALSE
/** inteworking indication in extended capa IE */
#define HOTSPOT_ENABLE_INTERWORKING_IND MBIT(0)
/** TDLS indication in extended capa IE */
#define HOTSPOT_ENABLE_TDLS_IND MBIT(1)

/** Info for debug purpose */
typedef struct _wlan_dbg
{
    /** Number of host to card command failures */
    t_u32 num_cmd_host_to_card_failure;
    /** Number of host to card sleep confirm failures */
    t_u32 num_cmd_sleep_cfm_host_to_card_failure;
    /** Number of host to card Tx failures */
    t_u32 num_tx_host_to_card_failure;
    /** Number of card to host command/event failures */
    t_u32 num_cmdevt_card_to_host_failure;
    /** Number of card to host Rx failures */
    t_u32 num_rx_card_to_host_failure;
    /** Number of interrupt read failures */
    t_u32 num_int_read_failure;
    /** Last interrupt status */
    t_u32 last_int_status;
    /** Number of deauthentication events */
    t_u32 num_event_deauth;
    /** Number of disassosiation events */
    t_u32 num_event_disassoc;
    /** Number of link lost events */
    t_u32 num_event_link_lost;
    /** Number of deauthentication commands */
    t_u32 num_cmd_deauth;
    /** Number of association comamnd successes */
    t_u32 num_cmd_assoc_success;
    /** Number of association command failures */
    t_u32 num_cmd_assoc_failure;
    /** Number of Tx timeouts */
    t_u32 num_tx_timeout;
    /** Number of command timeouts */
    t_u32 num_cmd_timeout;
    /** Timeout command ID */
    t_u16 timeout_cmd_id;
    /** Timeout command action */
    t_u16 timeout_cmd_act;
    /** List of last command IDs */
    t_u16 last_cmd_id[DBG_CMD_NUM];
    /** List of last command actions */
    t_u16 last_cmd_act[DBG_CMD_NUM];
    /** Last command index */
    t_u16 last_cmd_index;
    /** List of last command response IDs */
    t_u16 last_cmd_resp_id[DBG_CMD_NUM];
    /** Last command response index */
    t_u16 last_cmd_resp_index;
    /** List of last events */
    t_u16 last_event[DBG_CMD_NUM];
    /** Last event index */
    t_u16 last_event_index;
} wlan_dbg;

/** Hardware status codes */
typedef enum _WLAN_HARDWARE_STATUS
{
    WlanHardwareStatusReady,
    WlanHardwareStatusInitializing,
    WlanHardwareStatusInitdone,
    WlanHardwareStatusReset,
    WlanHardwareStatusClosing,
    WlanHardwareStatusNotReady
} WLAN_HARDWARE_STATUS;

/** WLAN_802_11_POWER_MODE */
typedef enum _WLAN_802_11_POWER_MODE
{
    Wlan802_11PowerModeCAM,
    Wlan802_11PowerModePSP
} WLAN_802_11_POWER_MODE;

/** tx param */
typedef struct _mlan_tx_param
{
    /** next packet length */
    t_u32 next_pkt_len;
} mlan_tx_param;

#if 0
/** PS_STATE */
typedef enum _PS_STATE
{
    PS_STATE_AWAKE,
    PS_STATE_PRE_SLEEP,
    PS_STATE_SLEEP_CFM,
    PS_STATE_SLEEP
} PS_STATE;
#endif

/** Minimum flush timer for win size of 1 is 50 ms */
#define MIN_FLUSH_TIMER_MS 50
/** Tx BA stream table */
typedef struct _TxBAStreamTbl TxBAStreamTbl;

/** Add BA parameter data structure */
typedef struct
{
    /** Window size for initiator */
    t_u32 tx_win_size;
    /** Window size for receiver */
    t_u32 rx_win_size;
    /** Block ack timeout */
    t_u32 timeout;
    /** amsdu support for ADDBA request */
    t_u8 tx_amsdu;
    /** amsdu support for ADDBA response */
    t_u8 rx_amsdu;
} add_ba_param_t;

/** Tx aggregation data structure */
typedef struct _txAggr_t
{
    /** AMPDU user */
    t_u8 ampdu_user;
    /** AMPDU AP */
    t_u8 ampdu_ap;
    /** AMSDU */
    t_u8 amsdu;
} tx_aggr_t;

/** RA list table */
typedef struct _raListTbl raListTbl;

/** RA list table */
struct _raListTbl
{
    /** Pointer to previous node */
    raListTbl *pprev;
    /** Pointer to next node */
    raListTbl *pnext;
    /** Buffer list head */
    mlan_list_head buf_head;
    /** RA list buffer */
    t_u8 ra[MLAN_MAC_ADDR_LENGTH];
    /** total packets in RA list */
    t_u16 total_pkts;
    /** packets received */
    t_u16 packet_count;
    /** packet count threshold to setup BA */
    t_u8 ba_packet_threshold;
    /** is 11n enabled */
    t_u8 is_11n_enabled;
    /** max amsdu size */
    t_u16 max_amsdu;
    /** tx_pause flag */
    t_u8 tx_pause;
};

/** TID table */
typedef struct _tidTbl
{
    /** RA list head */
    mlan_list_head ra_list;
    /** Current RA list */
    raListTbl *ra_list_curr;
} tid_tbl_t;

/** Highest priority setting for a packet (uses voice AC) */
#define WMM_HIGHEST_PRIORITY 7
/** Highest priority TID  */
#define HIGH_PRIO_TID 7
/** Lowest priority TID  */
#define LOW_PRIO_TID 0
/** No packet priority (< lowest) */
#define NO_PKT_PRIO_TID -1

/** Struct of WMM DESC */
typedef struct _wmm_desc
{
    /** TID table */
    tid_tbl_t tid_tbl_ptr[MAX_NUM_TID];
    /** Packets out */
    t_u32 packets_out[MAX_NUM_TID];
    /** Packets queued */
    t_u32 pkts_queued[MAX_NUM_TID];
    /** Spin lock to protect ra_list */
    t_void *ra_list_spinlock;

    /** AC status */
    WmmAcStatus_t ac_status[MAX_AC_QUEUES];
    /** AC downgraded values */
    mlan_wmm_ac_e ac_down_graded_vals[MAX_AC_QUEUES];

    /** Max driver packet delay sent to the firmware for expiry eval */
    t_u32 drv_pkt_delay_max;

    /** WMM queue priority table */
    t_u8 queue_priority[MAX_AC_QUEUES];
    /** User priority packet transmission control */
    t_u32 user_pri_pkt_tx_ctrl[WMM_HIGHEST_PRIORITY + 1]; /* UP: 0 to 7 */

    /** Number of transmit packets queued */
    mlan_scalar tx_pkts_queued;
    /** Tracks highest priority with a packet queued */
    mlan_scalar highest_queued_prio;
} wmm_desc_t;

/** Security structure */
typedef struct _wlan_802_11_security_t
{
    /** WPA enabled flag */
    t_u8 wpa_enabled;
    /** WPA TKIP flag */
    t_u8 is_wpa_tkip;
    /** E-Supplicant enabled flag */
    t_u8 ewpa_enabled;
    /** WPA2 enabled flag */
    t_u8 wpa2_enabled;
    /** WAPI enabled flag */
    t_u8 wapi_enabled;
    /** WAPI key on flag */
    t_u8 wapi_key_on;
    /** WEP status */
    WLAN_802_11_WEP_STATUS wep_status;
    /** Authentication mode */
    mlan_auth_mode authentication_mode;
    /** Encryption mode */
    mlan_encryption_mode encryption_mode;
} wlan_802_11_security_t;

/** Current Basic Service Set State Structure */
typedef struct
{
    /** BSS descriptor */
    BSSDescriptor_t bss_descriptor;
    /** WMM enable? */
    t_u8 wmm_enabled;
    /** Uapsd enable?*/
    t_u8 wmm_uapsd_enabled;
    /** Band */
    t_u8 band;
    /** Number of rates supported */
    t_u32 num_of_rates;
    /** Supported rates*/
    t_u8 data_rates[WLAN_SUPPORTED_RATES];
} current_bss_params_t;

/** Sleep_params */
typedef struct _sleep_params_t
{
    /** Sleep parameter error */
    t_u16 sp_error;
    /** Sleep parameter offset */
    t_u16 sp_offset;
    /** Sleep parameter stable time */
    t_u16 sp_stable_time;
    /** Sleep parameter calibration control */
    t_u8 sp_cal_control;
    /** Sleep parameter external sleep clock */
    t_u8 sp_ext_sleep_clk;
    /** Sleep parameter reserved */
    t_u16 sp_reserved;
} sleep_params_t;

/** Sleep_period */
typedef struct sleep_period_t
{
    /** Sleep period */
    t_u16 period;
    /** Reserved */
    t_u16 reserved;
} sleep_period_t;

/** mrvl_wep_key_t */
typedef struct _mrvl_wep_key_t
{
    /** Length */
    t_u32 length;
    /** WEP key index */
    t_u32 key_index;
    /** WEP key length */
    t_u32 key_length;
    /** WEP keys */
    t_u8 key_material[MRVL_KEY_BUFFER_SIZE_IN_BYTE];
} mrvl_wep_key_t;

/** Maximum number of region channel */
#define MAX_REGION_CHANNEL_NUM 2U

/** Region-band mapping table */
typedef struct _region_chan_t
{
    /** TRUE if this entry is valid */
    t_u8 valid;
    /** Region code for US, Japan ... */
    t_u8 region;
    /** Band B/G/A, used for BAND_CONFIG cmd */
    mlan_band_def band;
    /** Actual No. of elements in the array below */
    t_u8 num_cfp;
    /** chan-freq-txpower mapping table */
    chan_freq_power_t *pcfp;
} region_chan_t;

/** State of 11d */
typedef enum _state_11d_t
{
    DISABLE_11D = 0,
    ENABLE_11D  = 1,
} state_11d_t;

#define DEFAULT_11D_STATE DISABLE_11D

/** Domain regulatory information */
typedef struct _wlan_802_11d_domain_reg
{
    /** Country Code */
    t_u8 country_code[COUNTRY_CODE_LEN];
    /** band that channels in sub_band belong to */
    t_u8 band;
    /** No. of subband in below */
    t_u8 no_of_sub_band;
    /** Subband data to send/last sent */
    IEEEtypes_SubbandSet_t sub_band[MRVDRV_MAX_SUBBAND_802_11D];
} wlan_802_11d_domain_reg_t;

/** Data for state machine */
typedef struct _wlan_802_11d_state
{
    /** True for enabling 11D */
    state_11d_t enable_11d;
    /** True for user enabling 11D */
    state_11d_t user_enable_11d;
    /** True for user enabling 11D support*/
    state_11d_t user_enable_11d_support;
} wlan_802_11d_state_t;

/** 802.11h State information kept in the 'mlan_private' driver structure */
typedef struct
{
    /** Indicates whether 11h is enabled in the driver */
    t_bool is_11h_enabled;
    /** Indicates whether 11h is active in the firmware */
    t_bool is_11h_active;
    /** Master device using automatic channel select */
    t_bool adhoc_auto_sel_chan;
    /** Set when driver receives a STOP TX event from fw */
    t_bool tx_disabled;
} wlan_11h_interface_state_t;

/** UAP get info callback state kept in the 'mlan_private' driver structure */
typedef struct
{
    /** UAP internal callback after wlan_uap_get_channel */
    /**  (parameter is really pointer to mlan_private)   */
    mlan_status (*get_chan_callback)(t_void *);
    /** current ioctl_req (to be completed in callback) */
    pmlan_ioctl_req pioctl_req_curr;
    /** band_cfg from MrvlIEtypes_channel_band_t */
    t_u8 band_config;
    /** channel from MrvlIEtypes_channel_band_t */
    t_u8 channel;
    /** beacon period (in msec) from MrvlIEtypes_beacon_period_t */
    t_u16 beacon_period;
    /** dtim period (no unit) from MrvlIEtypes_dtim_period_t */
    t_u8 dtim_period;
    /** Maximum number of stations that will be allowed to connect to the uAP.
     */
    t_u16 max_sta_count;
} wlan_uap_get_info_cb_t;

/** Data structure for WPS information */
typedef struct
{
    /** WPS IE */
    IEEEtypes_VendorSpecific_t wps_ie;
    /** Session enable flag */
    t_u8 session_enable;
} wps_t;

typedef struct _mlan_private mlan_private;
typedef struct _mlan_private *pmlan_private;

/* 802.11D related structs */
typedef struct
{
    mlan_status (*wlan_11d_prepare_dnld_domain_info_cmd_p)(mlan_private *pmpriv);
    mlan_status (*wlan_11d_create_dnld_countryinfo_p)(mlan_private *pmpriv, mlan_band_def band);
    mlan_status (*wlan_11d_parse_dnld_countryinfo_p)(mlan_private *pmpriv, BSSDescriptor_t *pbss_desc);
} wlan_11d_fn_t;

typedef struct _mlan_adapter *pmlan_adapter;
typedef struct _mlan_adapter mlan_adapter;

typedef struct
{
    mlan_status (*wlan_11d_cfg_ioctl_p)(IN mlan_private *pmpriv, IN pmlan_ioctl_req pioctl_req);
    mlan_status (*wlan_11d_cfg_domain_info_p)(IN pmlan_adapter pmadapter, IN mlan_ioctl_req *pioctl_req);
    mlan_status (*wlan_cmd_802_11d_domain_info_p)(mlan_private *pmpriv, HostCmd_DS_COMMAND *pcmd, t_u16 cmd_action);
    mlan_status (*wlan_11d_handle_uap_domain_info_p)(mlan_private *pmpriv,
                                                     mlan_band_def band,
                                                     t_u8 *domain_tlv,
                                                     t_void *pioctl_buf);
} wlan_11d_apis_t;

/** mlan_operations data structure */
typedef struct _mlan_operations
{
    /** cmd handler */
    mlan_status (*prepare_cmd)(IN t_void *priv,
                               IN t_u16 cmd_no,
                               IN t_u16 cmd_action,
                               IN t_u32 cmd_oid,
                               IN t_void *pioctl_buf,
                               IN t_void *pdata_buf,
                               IN t_void *pcmd_buf);
    /** rx handler */
    mlan_status (*process_rx_packet)(IN t_void *adapter, IN pmlan_buffer pmbuf);
    /** BSS role */
    mlan_bss_role bss_role;
} mlan_operations;

/** Private structure for MLAN */
struct _mlan_private
{
    /** Pointer to mlan_adapter */
    struct _mlan_adapter *adapter;
    /** BSS index */
    t_u8 bss_index;
    /** BSS type */
    t_u8 bss_type;
    /** BSS role */
    mlan_bss_role bss_role;
    /** BSS Priority */
    t_u8 bss_priority;
    /** BSS number */
    t_u8 bss_num;
    /** Frame type */
    t_u8 frame_type;
    /** MAC address information */
    t_u8 curr_addr[MLAN_MAC_ADDR_LENGTH];
    /** Media connection status */
    t_bool media_connected;

    /** Current packet filter */
    t_u16 curr_pkt_filter;
    /** Infrastructure mode */
    mlan_bss_mode bss_mode;

    /** Tx packet control */
    t_u32 pkt_tx_ctrl;

    /** Tx power level */
    t_u16 tx_power_level;
    /** Maximum Tx power level */
    t_u8 max_tx_power_level;
    /** Minimum Tx power level */
    t_u8 min_tx_power_level;
    /** Tx rate */
    t_u8 tx_rate;
#ifdef SD8801
    /** tx ht_info */
    t_u8 tx_htinfo;
    /** rxpd_htinfo */
    t_u8 rxpd_htinfo;
#else
    t_u8 tx_rate_info;
    /*HE tx tone mode and DCM info*/
    t_u8 ext_tx_rate_info;
    /** rxpd_htinfo */
    t_u8 rxpd_rate_info;
#endif

#ifdef CONFIG_11AX
    /** UAP 11ax flag */
    t_u8 is_11ax_enabled;
    /** length of hw he capability */
    t_u8 user_hecap_len;
    /** user configured 802.11ax HE capability */
    t_u8 user_he_cap[54];
    /** length of hw he capability */
    t_u8 user_2g_hecap_len;
    /** user configured 802.11ax HE capability */
    t_u8 user_2g_he_cap[54];
#endif

    /** max amsdu size */
    t_u16 max_amsdu;
    /** UAP 11n flag */
    t_u8 is_11n_enabled;
    /** UAP 11ac flag */
    t_u8 is_11ac_enabled;
    /** packet forward control */
    t_u8 pkt_fwd;
    /**  dropped pkts */
    t_u32 num_drop_pkts;
    /** TX beamforming capability */
    t_u32 tx_bf_cap;
    /** Rx PD rate */
    t_u8 rxpd_rate;
    /** Rate bitmap */
    t_u16 rate_bitmap;
    /** Bitmap rates */
    t_u16 bitmap_rates[MAX_BITMAP_RATES_SIZE];
    /** Data rate */
    t_u32 data_rate;
    /** Data rate index */
    t_u8 data_rate_index;
    /** Automatic data rate flag */
    t_u8 is_data_rate_auto;
    /** Factor for calculating beacon average */
    t_u16 bcn_avg_factor;
    /** Factor for calculating data average */
    t_u16 data_avg_factor;
    /** Last data RSSI */
    t_s16 data_rssi_last;
    /** Last data Noise Floor */
    t_s16 data_nf_last;
    /** Average data RSSI */
    t_s16 data_rssi_avg;
    /** Averag data Noise Floor */
    t_s16 data_nf_avg;
    /** Last beacon RSSI */
    t_s16 bcn_rssi_last;
    /** Last beacon Noise Floor */
    t_s16 bcn_nf_last;
    /** Average beacon RSSI */
    t_s16 bcn_rssi_avg;
    /** Average beacon Noise Floor */
    t_s16 bcn_nf_avg;

    /** Attempted BSS descriptor */
    BSSDescriptor_t *pattempted_bss_desc;

    /** Current SSID/BSSID related parameters*/
    current_bss_params_t curr_bss_params;

    /** User selected bands */
    mlan_band_def config_bands;

    /** Beacon period */
    t_u16 beacon_period;
    /** Listen interval */
    t_u16 listen_interval;
    /** ATIM window */
    t_u16 atim_window;

    /** AdHoc channel */
    t_u8 adhoc_channel;
    /** AdHoc link sensed flag */
    t_u8 adhoc_is_link_sensed;
    /** AdHoc operating state */
    t_u8 adhoc_state;
    /** AdHoc operating state backup */
    t_u8 adhoc_state_prev;
    /** AdHoc previous ssid used for Start */
    mlan_802_11_ssid adhoc_last_start_ssid;
    /** FSM variable for 11d support */
    wlan_802_11d_state_t state_11d;
    /** 11d function pointer */
    wlan_11d_fn_t *support_11d;
    /** 11d Driver function pointer */
    wlan_11d_apis_t *support_11d_APIs;
    /** FSM variable for 11h support */
    wlan_11h_interface_state_t intf_state_11h;
    /** Whether UAP interface has started */
    t_bool uap_bss_started;
    /** state variable for UAP Get Info callback */
    wlan_uap_get_info_cb_t uap_state_chan_cb;
    /** Security related */
    /** Encryption parameter */
    wlan_802_11_security_t sec_info;
    /** WEP keys */
    mrvl_wep_key_t wep_key[MRVL_NUM_WEP_KEY];
    /** Current WEP key index */
    t_u16 wep_key_curr_index;
    /** EWPA query 0: disable, 1: enable */
    t_u8 ewpa_query;
    /** Encryption Key*/
    t_u8 wpa_ie[MLAN_WMSDK_MAX_WPA_IE_LEN];
    /** WPA IE length */
    t_u8 wpa_ie_len;
    /** GTK set flag */
    t_u8 wpa_is_gtk_set;
    /** mgmt frame passthru mask */
    t_u32 mgmt_frame_passthru_mask;
    /** Advanced Encryption Standard */
    t_u8 adhoc_aes_enabled;
    /** WMM required */
    t_u8 wmm_required;
    /** WMM enabled */
    t_u8 wmm_enabled;
    /** WMM qos info */
    t_u8 wmm_qosinfo;
    /** WMM related variable*/
    wmm_desc_t wmm;

    /* Mgmt Frame Protection config */
    mlan_ds_misc_pmfcfg pmfcfg;

    /* ED MAC MODE config */
    mlan_ds_misc_ed_mac_mode ed_mac_mode;

    /** Pointer to the Transmit BA stream table*/
    mlan_list_head tx_ba_stream_tbl_ptr;
    /** Pointer to the priorities for AMSDU/AMPDU table*/
    tx_aggr_t aggr_prio_tbl[MAX_NUM_TID];
    /** Pointer to the priorities for AMSDU/AMPDU table*/
    t_u8 addba_reject[MAX_NUM_TID];
    /** Struct to store ADDBA parameters */
    add_ba_param_t add_ba_param;
    /** last rx_seq */
    t_u16 rx_seq[MAX_NUM_TID];
    /** Pointer to the Receive Reordering table*/
    mlan_list_head rx_reorder_tbl_ptr;
    /** Lock for Rx packets */
    t_void *rx_pkt_lock;

    /** function table */
    mlan_operations ops;

    /** Port Control mode */
    t_u8 port_ctrl_mode;

    /** Port open flag */
    t_u8 port_open;

    /** Port open flag state at time of association attempt */
    t_u8 prior_port_status;

    /** Scan block flag */
    t_u8 scan_block;
    /** IP address operation */
    t_u32 op_code;
    /** IP address */
    t_u8 ip_addr[IPADDR_LEN];
    t_u32 hotspot_cfg;
    ExtCap_t ext_cap;
};

/** BA stream status */
typedef enum _baStatus_e
{
    BA_STREAM_NOT_SETUP = 0,
    BA_STREAM_SETUP_INPROGRESS,
    BA_STREAM_SETUP_COMPLETE
} baStatus_e;

/** Tx BA stream table */
struct _TxBAStreamTbl
{
    /** TxBAStreamTbl previous node */
    TxBAStreamTbl *pprev;
    /** TxBAStreamTbl next node */
    TxBAStreamTbl *pnext;
    /** TID */
    int tid;
    /** RA */
    t_u8 ra[MLAN_MAC_ADDR_LENGTH];
    /** BA stream status */
    baStatus_e ba_status;
    t_u8 amsdu;
};

/** RX reorder table */
typedef struct _RxReorderTbl RxReorderTbl;

typedef struct
{
    /** Timer for flushing */
    t_void *timer;
    /** Timer set flag */
    t_u8 timer_is_set;
    /** RxReorderTbl ptr */
    RxReorderTbl *ptr;
    /** Priv pointer */
    mlan_private *priv;
} reorder_tmr_cnxt_t;

/** RX reorder table */
struct _RxReorderTbl
{
    /** RxReorderTbl previous node */
    RxReorderTbl *pprev;
    /** RxReorderTbl next node */
    RxReorderTbl *pnext;
    /** TID */
    int tid;
    /** TA */
    t_u8 ta[MLAN_MAC_ADDR_LENGTH];
    /** Start window */
    int start_win;
    /** last_seq */
    int last_seq;
    /** Window size */
    int win_size;
    /** Pointer to pointer to RxReorderTbl */
    t_void **rx_reorder_ptr;
    /** Timer context */
    reorder_tmr_cnxt_t timer_context;
    /** BA stream status */
    baStatus_e ba_status;
    t_u8 amsdu;
    /** no packet drop flag for rx_reorder_tbl */
    t_u8 force_no_drop;
    /** flag for check start win */
    t_u8 check_start_win;
    /** pkt receive after BA setup */
    t_u8 pkt_count;
};

/** BSS priority node */
typedef struct _mlan_bssprio_node mlan_bssprio_node;

/** BSS priority node */
struct _mlan_bssprio_node
{
    /** Pointer to previous node */
    mlan_bssprio_node *pprev;
    /** Pointer to next node */
    mlan_bssprio_node *pnext;
    /** Pointer to priv */
    pmlan_private priv;
};

/** BSS priority table */
typedef struct _mlan_bssprio_tbl mlan_bssprio_tbl;

/** BSS priority table */
struct _mlan_bssprio_tbl
{
    /** BSS priority list head */
    mlan_list_head bssprio_head;
    /** Current priority node */
    mlan_bssprio_node *bssprio_cur;
};

/** cmd_ctrl_node */
typedef struct _cmd_ctrl_node cmd_ctrl_node;

/** _cmd_ctrl_node */
struct _cmd_ctrl_node
{
    /** Pointer to previous node */
    cmd_ctrl_node *pprev;
    /** Pointer to next node */
    cmd_ctrl_node *pnext;
    /** Pointer to priv */
    pmlan_private priv;
    /** Command OID for sub-command use */
    t_u32 cmd_oid;
    /** Command flag */
    t_u32 cmd_flag;
    /** Pointer to mlan_buffer */
    mlan_buffer *cmdbuf;
    /** Pointer to mlan_buffer */
    mlan_buffer *respbuf;
    /** Command parameter */
    t_void *pdata_buf;
    /** Pointer to mlan_ioctl_req if command is from IOCTL */
    t_void *pioctl_buf;
    /** pre_allocated mlan_buffer for cmd */
    mlan_buffer *pmbuf;
};

/** station node */
typedef struct _sta_node sta_node;

/** station node*/
struct _sta_node
{
    /** previous node */
    sta_node *pprev;
    /** next node */
    sta_node *pnext;
    /** station mac address */
    t_u8 mac_addr[MLAN_MAC_ADDR_LENGTH];
    /** 11n flag */
    t_u8 is_11n_enabled;
    /** 11ac flag */
    t_u8 is_11ac_enabled;
#ifdef CONFIG_11AX
    t_u8 is_11ax_enabled;
    IEEEtypes_HECap_t he_cap;
#endif
    /** AMPDU STA */
    t_u8 ampdu_sta[MAX_NUM_TID];
    /** last rx_seq */
    t_u16 rx_seq[MAX_NUM_TID];
    /** max amsdu size */
    t_u16 max_amsdu;
    /** wapi key on off flag */
    t_u8 wapi_key_on;
    /** tx pause status */
    t_u8 tx_pause;
};

/** 802.11h State information kept in the 'mlan_adapter' driver structure */
typedef struct
{
    /** Min TX Power capability sent to FW for 11h use and fw power control */
    t_s8 min_tx_power_capability;
    /** Max TX Power capability sent to FW for 11h use and fw power control */
    t_s8 max_tx_power_capability;
    /** User provisioned local power constraint sent in association requests */
    t_s8 usr_def_power_constraint;
    /** Received CHANNEL_SWITCH_ANN event */
    t_bool recvd_chanswann_event;
    /** Indicates an interface wants to enable master radar detection */
    t_bool master_radar_det_enable_pending;
    /** Indicates an interface wants to enable slave radar detection */
    t_bool slave_radar_det_enable_pending;
    /** Indicates whether master radar detection active in the firmware */
    t_bool is_master_radar_det_active;
    /** Indicates whether slave radar detection active in the firmware */
    t_bool is_slave_radar_det_active;
    /** Quiet IE */
    IEEEtypes_Quiet_t quiet_ie;
} wlan_11h_device_state_t;

/** Enumeration for DFS Timestamp represents field */
enum _dfs_timestamp_repr_e
{
    /** Ignore entry */
    DFS_TS_REPR_NOT_IN_USE = 0,
    /** NOP (Non-Occupancy Period) start time */
    DFS_TS_REPR_NOP_START = 1,
    /** CAC (Channel Availability Check) completion time */
    DFS_TS_REPR_CAC_COMPLETION
};

/** DFS Timestamp type used for marking NOP/CAC events */
typedef struct _wlan_dfs_timestamp_t wlan_dfs_timestamp_t;

/** DFS Timestamp type used for marking NOP/CAC events */
struct _wlan_dfs_timestamp_t
{
    /** Pointer to previous node */
    wlan_dfs_timestamp_t *pprev;
    /** Pointer to next node */
    wlan_dfs_timestamp_t *pnext;
    /** WLAN Channel number */
    t_u8 channel;
    /** What this timestamp represents */
    t_u8 represents;
    /** reserved field */
    t_u16 reserved;
    /** timestamp - seconds */
    t_u32 ts_sec;
    /** timestamp - microseconds */
    t_u32 ts_usec;
};

/** DFS State information kept in the 'mlan_adapter' driver structure */
typedef struct
{
    /** Indicates whether DFS channel check is occurring in firmware */
    t_bool dfs_check_pending;
    /** Indicates whether DFS channel check found radar */
    t_bool dfs_radar_found;
    /** Channel radar is being checked on.  BAND_A is assumed. */
    t_u8 dfs_check_channel;
    /** Timestamp when we got last report, to determine if data is old or not. */
    t_u32 dfs_report_time_sec;
    /** List for holding dfs_timestamps for NOP/CAC events */
    mlan_list_head dfs_ts_head;
} wlan_dfs_device_state_t;

/** Enumeration for mlan_ds_11h_radar_det_hndlg stages */
enum _mlan_ds_11h_rdh_stages
{
    RDH_OFF       = 0,
    RDH_CHK_INTFS = 1,
    RDH_STOP_TRAFFIC,
    RDH_GET_INFO_CHANNEL,
    RDH_GET_INFO_BEACON_DTIM,
    RDH_SET_CUSTOM_IE,
    RDH_REM_CUSTOM_IE,
    RDH_STOP_INTFS,
    RDH_SET_NEW_CHANNEL,
    RDH_RESTART_INTFS,
    RDH_RESTART_TRAFFIC
};

/** State info for Radar Detected Handling kept in 'mlan_adapter' */
typedef struct
{
    /** Stage (of Operation) */
    t_u8 stage;
    /** Number of interfaces to handle */
    t_u8 priv_list_count;
    /** Index of interface in process (used by some stages) */
    t_u8 priv_curr_idx;
    /** Current Channel (to leave) */
    t_u8 curr_channel;
    /** New Channel (to switch to) */
    t_u8 new_channel;
    /** UAP band_config */
    t_u8 uap_band_cfg;
    /** BEACON*DTIM period (in msec; max of STA/UAP) */
    t_u16 max_bcn_dtim_ms;
    /** List of interfaces to handle */
    mlan_private *priv_list[MLAN_MAX_BSS_NUM];
} wlan_radar_det_hndlg_state_t;

/**
 * @brief Driver measurement state held in 'mlan_adapter' structure
 *
 *  Used to record a measurement request that the driver is pending on
 *    the result (received measurement report).
 */
typedef struct
{
    /**
     * Dialog token of a pending measurement request/report.  Used to
     *   block execution while waiting for the specific dialog token
     */
    t_u8 meas_rpt_pend_on;

    /**
     * Measurement report received from the firmware that we were pending on
     */
    HostCmd_DS_MEASUREMENT_REPORT meas_rpt_returned;

} wlan_meas_state_t;

/** mlan_init_para structure */
typedef struct _mlan_init_para
{
    /** SDIO interrupt mode (0: INT_MODE_SDIO, 1: INT_MODE_GPIO) */
    t_u32 int_mode;
    /** GPIO interrupt pin number */
    t_u32 gpio_pin;
    /** Auto deep sleep */
    t_u32 auto_ds;
    /** IEEE PS mode */
    t_u32 ps_mode;
    /** Max Tx buffer size */
    t_u32 max_tx_buf;
    /** 802.11d configuration */
    t_u32 cfg_11d;
    /** 802.11H DFS Master Radar Detect */
    t_u32 dfs_master_radar_det_en;
    /** 802.11H DFS Slave Radar Detect */
    t_u32 dfs_slave_radar_det_en;
    /** FW download CRC check flag */
    t_u32 fw_crc_check;
} mlan_init_para, *pmlan_init_para;

/** Adapter data structure for MLAN */
struct _mlan_adapter
{
    /** MOAL handle structure */
    t_void *pmoal_handle;
    /** Private pointer */
    pmlan_private priv[MLAN_MAX_BSS_NUM];
    /** Total number of Priv number */
    t_u8 priv_num;
    mlan_callbacks callbacks;
    /** Init parameters */
    mlan_init_para init_para;

    /** IO port */
    t_u32 ioport;
    /** STATUS variables */
    WLAN_HARDWARE_STATUS hw_status;
    /** Firmware release number */
    t_u32 fw_release_number;

    /** Number of antenna used */
    t_u16 number_of_antenna;

    /** Firmware capability information */
    t_u32 fw_cap_info;
    /** Extended firmware capability information */
    t_u32 fw_cap_ext;
    /** pint_lock for interrupt handling */
    t_void *pint_lock;
    /** Interrupt status */
    t_u8 sdio_ireg;
    /** SDIO multiple port read bitmap */
    t_u32 mp_rd_bitmap;
    /** SDIO multiple port write bitmap */
    t_u32 mp_wr_bitmap;
    /** SDIO end port from txbufcfg */
    t_u16 mp_end_port;
    /** SDIO port mask calculated based on txbufcfg end port */
    t_u32 mp_data_port_mask;
    /** Current available port for read */
    t_u8 curr_rd_port;
    /** Current available port for write */
    t_u8 curr_wr_port;
    /** Array to store values of SDIO multiple port group registers */
    t_u8 *mp_regs;
    /** allocated buf to read SDIO multiple port group registers */
    t_u8 *mp_regs_buf;

    /** ECSA support */
    t_u8 ecsa_enable;

    /** CMD sent:
     *       TRUE - CMD is sent to fw, no CMD Done received
     *       FALSE - CMD done received for previous CMD
     */
    t_u8 cmd_sent;
    /** Region code */
    t_u16 region_code;
    /** Region Channel data */
    region_chan_t region_channel[MAX_REGION_CHANNEL_NUM];
    /** CFP table code for 2.4GHz */
    t_u8 cfp_code_bg;
    /** CFP table code for 5GHz */
    t_u8 cfp_code_a;
    /** Universal Channel data */
    region_chan_t universal_channel[MAX_REGION_CHANNEL_NUM];
    /** Parsed region channel */
    parsed_region_chan_11d_t parsed_region_chan;
    /** 11D and Domain Regulatory Data */
    wlan_802_11d_domain_reg_t domain_reg;
    /** Country Code */
    t_u8 country_code[COUNTRY_CODE_LEN];
    /** FSM variable for 11h support */
    wlan_11h_device_state_t state_11h;
    /** FSM variable for DFS support */
    wlan_dfs_device_state_t state_dfs;
    /** FSM variable for RDH support */
    wlan_radar_det_hndlg_state_t state_rdh;
    /** FSM variable for MEAS support */
    wlan_meas_state_t state_meas;
    /** Scan table */
    BSSDescriptor_t *pscan_table;
    /** scan age in secs */
    t_u32 age_in_secs;
    /** Active scan for hidden ssid triggered */
    t_u8 active_scan_triggered;
    /** Number of records in the scan table */
    t_u32 num_in_scan_table;
    /** Scan probes */
    t_u16 scan_probes;

    /** Scan type */
    mlan_scan_type scan_type;
    /** Scan mode */
    t_u32 scan_mode;
    /** Specific scan time */
    t_u16 specific_scan_time;
    /** Active scan time */
    t_u16 active_scan_time;
    /** Passive scan time */
    t_u16 passive_scan_time;
#ifdef CONFIG_EXT_SCAN_SUPPORT
    /** Extended scan or legacy scan */
    t_u8 ext_scan;
#endif
    /** F/W supported bands */
    mlan_band_def fw_bands;
    /** User selected band to start adhoc network */
    mlan_band_def adhoc_start_band;
    /** User selected bands */
    mlan_band_def config_bands;
    /** Pointer to channel list last sent to the firmware for scanning */
    ChanScanParamSet_t *pscan_channels;
    /** Multiple DTIM */
    t_u16 multiple_dtim;
    /** Local listen interval */
    t_u16 local_listen_interval;
    /** Null packet interval */
    t_u16 null_pkt_interval;

    /** Beacon miss timeout */
    t_u16 bcn_miss_time_out;

    /** AdHoc awake period */
    t_u16 adhoc_awake_period;

    /** Delay to PS in milliseconds */
    t_u16 delay_to_ps;
    /** Enhanced PS mode */
    t_u16 enhanced_ps_mode;
    /** 802.11n device capabilities */
    t_u32 hw_dot_11n_dev_cap;
    /** Device support for MIMO abstraction of MCSs */
    t_u8 hw_dev_mcs_support;
    /** 802.11n Device Capabilities for 2.4GHz */
    t_u32 usr_dot_11n_dev_cap_bg;
    /** 802.11n Device Capabilities for 5GHz */
    t_u32 usr_dot_11n_dev_cap_a;
    /** MIMO abstraction of MCSs supported by device */
    t_u8 usr_dev_mcs_support;
    /** Enable 11n support for adhoc start */
    t_u8 adhoc_11n_enabled;
    /** Adhoc Secondary Channel Bandwidth */
    t_u8 chan_bandwidth;

    /** 802.11ac device capabilities */
    t_u32 hw_dot_11ac_dev_cap;
    /** 802.11ac device support for MIMO abstraction of MCSs */
    t_u32 hw_dot_11ac_mcs_support;
    /** tx vht_info */
    t_u8 tx_vhtinfo;
    /** rxpd_vhtinfo */
    t_u8 rxpd_vhtinfo;
    /** 802.11ac Device Capabilities for 2.4GHz */
    t_u32 usr_dot_11ac_dev_cap_bg;
    /** 802.11ac Device Capabilities for 5GHz */
    t_u32 usr_dot_11ac_dev_cap_a;
    /** MIMO abstraction of MCSs supported by device */
    t_u32 usr_dot_11ac_mcs_support;
    /** user dot 11ac_BW */
    t_u8 usr_dot_11ac_bw;
    /** user dot 11ac_opermode_BW */
    t_u8 usr_dot_11ac_opermode_bw;
    /** user dot 11ac_opermode_nss */
    t_u8 usr_dot_11ac_opermode_nss;

#ifdef CONFIG_11AX
    /** enable 11ax flag */
    t_u8 enable_11ax;
    /** length of hw he capability */
    t_u8 hw_hecap_len;
    /** 802.11ax HE capability */
    t_u8 hw_he_cap[54];
    /** length of hw 2.4G he capability */
    t_u8 hw_2g_hecap_len;
    /** 802.11ax 2.4G HE capability */
    t_u8 hw_2g_he_cap[54];
#endif
    /** max mgmt IE index in device */
    t_u16 max_mgmt_ie_index;
#ifdef OTP_CHANINFO
    otp_region_info_t *otp_region;
    chan_freq_power_t *cfp_otp_bg;
    t_u8 *tx_power_table_bg;
    t_u32 tx_power_table_bg_size;
    t_u8 tx_power_table_bg_rows;
    t_u8 tx_power_table_bg_cols;
#ifdef CONFIG_5GHz_SUPPORT
    chan_freq_power_t *cfp_otp_a;
    t_u8 *tx_power_table_a;
    t_u32 tx_power_table_a_size;
    t_u8 tx_power_table_a_rows;
    t_u8 tx_power_table_a_cols;
#endif
#endif
};

/** Ethernet packet type for EAPOL */
#define MLAN_ETHER_PKT_TYPE_EAPOL (0x888E)
/** Ethernet packet type for WAPI */
#define MLAN_ETHER_PKT_TYPE_WAPI (0x88B4)
/** Ethernet packet type offset */
#define MLAN_ETHER_PKT_TYPE_OFFSET (12)

mlan_status wlan_cmd_get_tsf(pmlan_private pmpriv, IN HostCmd_DS_COMMAND *cmd, IN t_u16 cmd_action);

mlan_status wlan_init_lock_list(IN pmlan_adapter pmadapter);

/** Initialize firmware */
mlan_status wlan_init_fw(IN pmlan_adapter pmadapter);

/** Initialize mlan_adapter structure */
t_void wlan_init_adapter(IN pmlan_adapter pmadapter);

/** Initialize mlan_private structure */
mlan_status wlan_init_priv(IN pmlan_private priv);

/** Prepare command */
mlan_status wlan_prepare_cmd(IN pmlan_private priv,
                             IN t_u16 cmd_no,
                             IN t_u16 cmd_action,
                             IN t_u32 cmd_oid,
                             IN t_void *pioctl_buf,
                             IN t_void *pdata_buf);

/** Allocate memory for adapter structure members */
mlan_status wlan_allocate_adapter(pmlan_adapter pmadapter);

/** Flush the scan pending queue */
t_void wlan_flush_scan_queue(pmlan_adapter pmadapter);
/** Handle received packet, has extra handling for aggregate packets */
mlan_status wlan_handle_rx_packet(pmlan_adapter pmadapter, pmlan_buffer pmbuf);

/** Clean Tx Rx queues */
t_void wlan_clean_txrx(pmlan_private priv);

/** function to allocate a mlan_buffer */
pmlan_buffer wlan_alloc_mlan_buffer(mlan_adapter *pmadapter, t_u32 data_len, t_u32 head_room, t_u32 malloc_flag);
/** function to free a mlan_buffer */
t_void wlan_free_mlan_buffer(mlan_adapter *pmadapter, pmlan_buffer pmbuf);

/** handle command for enhanced power save mode */
mlan_status wlan_cmd_enh_power_mode(
    pmlan_private pmpriv, IN HostCmd_DS_COMMAND *cmd, IN t_u16 cmd_action, IN t_u16 ps_bitmap, IN t_void *pdata_buf);

mlan_status wlan_cmd_remain_on_channel(IN pmlan_private pmpriv,
                                       IN HostCmd_DS_COMMAND *cmd,
                                       IN t_u16 cmd_action,
                                       IN t_void *pdata_buf);

mlan_status wlan_cmd_tx_rate_cfg(IN pmlan_private pmpriv,
                                 IN HostCmd_DS_COMMAND *cmd,
                                 IN t_u16 cmd_action,
                                 IN t_void *pdata_buf);
mlan_status wlan_ret_tx_rate_cfg(IN pmlan_private pmpriv, IN HostCmd_DS_COMMAND *resp, IN void *pioctl);

mlan_status wlan_rate_ioctl_cfg(IN pmlan_adapter pmadapter, IN pmlan_ioctl_req pioctl_req);
mlan_status wlan_ret_802_11_tx_rate_query(IN pmlan_private pmpriv, IN HostCmd_DS_COMMAND *resp, IN void *pioctl);

/** Process received packet */
mlan_status wlan_process_rx_packet(pmlan_adapter pmadapter, pmlan_buffer pmbuf);
/** ioctl handler for station mode */
mlan_status wlan_ops_sta_ioctl(t_void *adapter, pmlan_ioctl_req pioctl_req);

/** cmd handler for station mode */
mlan_status wlan_ops_sta_prepare_cmd(IN t_void *priv,
                                     IN t_u16 cmd_no,
                                     IN t_u16 cmd_action,
                                     IN t_u32 cmd_oid,
                                     IN t_void *pioctl_buf,
                                     IN t_void *pdata_buf,
                                     IN t_void *pcmd_buf);

/** cmdresp handler for station mode */
mlan_status wlan_ops_sta_process_cmdresp(IN t_void *priv, IN t_u16 cmdresp_no, IN t_void *pcmd_buf, IN t_void *pioctl);

/** rx handler for station mode */
mlan_status wlan_ops_sta_process_rx_packet(IN t_void *adapter, IN pmlan_buffer pmbuf);

/** Scan for networks */
mlan_status wlan_scan_networks(IN mlan_private *pmpriv,
                               IN t_void *pioctl_buf,
                               IN const wlan_user_scan_cfg *puser_scan_in);

/** Scan command handler */
mlan_status wlan_cmd_802_11_scan(IN pmlan_private pmpriv, IN HostCmd_DS_COMMAND *pcmd, IN t_void *pdata_buf);

/** Handler for scan command response */
mlan_status wlan_ret_802_11_scan(IN pmlan_private pmpriv, IN HostCmd_DS_COMMAND *resp, IN t_void *pioctl_buf);

#ifdef CONFIG_EXT_SCAN_SUPPORT
/** Extended scan command handler */
mlan_status wlan_cmd_802_11_scan_ext(IN pmlan_private pmpriv, IN HostCmd_DS_COMMAND *pcmd, IN t_void *pdata_buf);
/** Handler for extended scan command response */
mlan_status wlan_ret_802_11_scan_ext(IN pmlan_private pmpriv, IN HostCmd_DS_COMMAND *resp, IN t_void *pioctl_buf);
/** Handler event for extended scan report */
mlan_status wlan_handle_event_ext_scan_report(IN mlan_private *pmpriv, IN t_u8 *pmbuf);
#endif

/** check network compatibility */
t_s32 wlan_is_network_compatible(IN mlan_private *pmpriv, IN t_u32 index, IN mlan_bss_mode mode);

/** Find an SSID in a list */
t_s32 wlan_find_ssid_in_list(IN pmlan_private pmpriv, IN mlan_802_11_ssid *ssid, IN t_u8 *bssid, IN mlan_bss_mode mode);

/** Find a BSSID in a list */
t_s32 wlan_find_bssid_in_list(IN mlan_private *pmpriv, IN t_u8 *bssid, IN mlan_bss_mode mode);

/** Compare two SSIDs */
t_s32 wlan_ssid_cmp(IN pmlan_adapter pmadapter, IN mlan_802_11_ssid *ssid1, IN mlan_802_11_ssid *ssid2);

/** Associate */
mlan_status wlan_associate(IN mlan_private *pmpriv, IN t_void *pioctl_buf, IN BSSDescriptor_t *pBSSDesc);

/** Associate command handler */
mlan_status wlan_cmd_802_11_associate(IN mlan_private *pmpriv, IN HostCmd_DS_COMMAND *cmd, IN t_void *pdata_buf);

/** Handler for association command response */
mlan_status wlan_ret_802_11_associate(IN mlan_private *pmpriv, IN HostCmd_DS_COMMAND *resp, IN t_void *pioctl_buf);

/** Reset connected state */
t_void wlan_reset_connect_state(IN pmlan_private priv, IN t_u8 drv_disconnect);

t_void wlan_handle_disconnect_event(pmlan_private pmpriv);

mlan_status wlan_ret_802_11_deauthenticate(IN pmlan_private pmpriv,
                                           IN HostCmd_DS_COMMAND *resp,
                                           IN mlan_ioctl_req *pioctl_buf);

/** convert band to radio type */
t_u8 wlan_band_to_radio_type(IN t_u8 band);

/** Disconnect */
/* Temporary disable prototype. Same name function present in wmsdk */
/* mlan_status wlan_disconnect(IN mlan_private * pmpriv, */
/*                             IN mlan_ioctl_req * pioctl_req, */
/*                             IN mlan_802_11_mac_addr * mac); */

/** Get Channel-Frequency-Power by band and channel */
chan_freq_power_t *wlan_get_cfp_by_band_and_channel(pmlan_adapter pmadapter,
                                                    t_u8 band,
                                                    t_u16 channel,
                                                    region_chan_t *region_channel);
/** Find Channel-Frequency-Power by band and channel */
chan_freq_power_t *wlan_find_cfp_by_band_and_channel(mlan_adapter *pmadapter, mlan_band_def band, t_u16 channel);
/** Find Channel-Frequency-Power by band and frequency */
chan_freq_power_t *wlan_find_cfp_by_band_and_freq(mlan_adapter *pmadapter, mlan_band_def band, t_u32 freq);
/** Get Tx power of channel from Channel-Frequency-Power */
t_u8 wlan_get_txpwr_of_chan_from_cfp(mlan_private *pmpriv, t_u8 channel);

/* Rate related functions */
/** Convert index into data rate */
#ifdef SD8801
t_u32 wlan_index_to_data_rate(pmlan_adapter pmadapter, t_u8 index, t_u8 ht_info);
#else
t_u32 wlan_index_to_data_rate(pmlan_adapter pmadapter, t_u8 index, t_u8 tx_rate_info, t_u8 ext_rate_info);
#endif
/** Get active data rates */
t_u32 wlan_get_active_data_rates(mlan_private *pmpriv,
                                 mlan_bss_mode bss_mode,
                                 mlan_band_def config_bands,
                                 WLAN_802_11_RATES rates);
/** Get supported data rates */
t_u32 wlan_get_supported_rates(mlan_private *pmpriv,
                               mlan_bss_mode bss_mode,
                               t_u16 config_bands,
                               WLAN_802_11_RATES rates);
/** Check if rate is auto */
t_u8 wlan_is_rate_auto(mlan_private *pmpriv);
/** Get rate index */
int wlan_get_rate_index(pmlan_adapter pmadapter, t_u16 *rateBitmap, int size);

/* CFP related functions */
/** Region code index table */
extern t_u16 region_code_index[MRVDRV_MAX_REGION_CODE];

/** The table to keep CFP code for A */
extern t_u16 cfp_code_index_a[MRVDRV_MAX_CFP_CODE_A];
/** Set region table */
mlan_status wlan_set_regiontable(mlan_private *pmpriv, t_u8 region, mlan_band_def band);
/** Get radar detection requirements*/
t_bool wlan_get_cfp_radar_detect(mlan_private *priv, t_u8 chnl);
/** check if scan type is passive for b/g band*/
t_bool wlan_bg_scan_type_is_passive(mlan_private *priv, t_u8 chnl);
t_u8 wlan_convert_v14_rate_ht_info(t_u8 ht_info);
/** Check if channel number is valid */
t_bool wlan_is_channel_valid(t_u8 chan_num);
/** Check if channel number and its frequency is valid */
t_bool wlan_is_channel_and_freq_valid(t_u8 chan_num, t_u16 chan_freq);
/** Set Custom CFP Table */
#ifdef CONFIG_5GHz_SUPPORT
mlan_status wlan_set_custom_cfp_table(wifi_chanlist_t *chanlist, t_u8 *cfp_no_bg, t_u8 *cfp_no_a);
void wlan_set_custom_regiontable(mlan_private *pmpriv, t_u8 cfp_no_bg, t_u8 cfp_no_a);
#else
mlan_status wlan_set_custom_cfp_table(wifi_chanlist_t *chanlist, t_u8 *cfp_no_bg);
void wlan_set_custom_regiontable(mlan_private *pmpriv, t_u8 cfp_no_bg);
#endif
/** Get the list of active channels */
void wlan_get_active_channel_list(mlan_private *pmpriv, t_u8 *chan_list, t_u8 *num_chans);

/* 802.11D related functions */
/** Initialize 11D */
t_void wlan_11d_priv_init(mlan_private *pmpriv);
/** Initialize 11D */
t_void wlan_11d_init(mlan_adapter *pmadapter);
/** Enable 11D support */
t_u16 wlan_enable_11d_support(mlan_private *pmpriv);
t_u16 wlan_11d_support_APIs(mlan_private *pmpriv);
/** Get if 11D support is enabled */
t_bool wlan_11d_support_is_enabled(mlan_private *pmpriv);
/** Get if 11D is enabled */
t_bool wlan_11d_is_enabled(mlan_private *pmpriv);
/** Get if priv is station */
t_bool wlan_is_station(mlan_private *pmpriv);
/** Command handler for 11D country info */
mlan_status wlan_cmd_802_11d_domain_info(mlan_private *pmpriv, HostCmd_DS_COMMAND *pcmd, t_u16 cmd_action);
/** Convert channel to frequency */
t_u32 wlan_11d_chan_2_freq(pmlan_adapter pmadapter, t_u8 chan, mlan_band_def band);
/** Set 11D universal table */
mlan_status wlan_11d_set_universaltable(mlan_private *pmpriv, mlan_band_def band);
/** Clear 11D region table */
mlan_status wlan_11d_clear_parsedtable(mlan_private *pmpriv);
/** Create 11D country information for downloading */
mlan_status wlan_11d_create_dnld_countryinfo(mlan_private *pmpriv, mlan_band_def band);
/** Get scan type from 11D info */
mlan_scan_type wlan_11d_get_scan_type(mlan_private *pmpriv,
                                      mlan_band_def band,
                                      t_u8 chan,
                                      parsed_region_chan_11d_t *parsed_region_chan);
/** Parse 11D country info */
mlan_status wlan_11d_parse_dnld_countryinfo(mlan_private *pmpriv, BSSDescriptor_t *pBSSDesc);
/** Prepare 11D domain information for download */
mlan_status wlan_11d_prepare_dnld_domain_info_cmd(mlan_private *pmpriv);
/** Parse 11D country information into domain info */
mlan_status wlan_11d_parse_domain_info(pmlan_adapter pmadapter,
                                       IEEEtypes_CountryInfoFullSet_t *country_info,
                                       mlan_band_def band,
                                       parsed_region_chan_11d_t *parsed_region_chan);
/** Configure 11D domain info command */
mlan_status wlan_11d_cfg_domain_info(IN pmlan_adapter pmadapter, IN mlan_ioctl_req *pioctl_req);

mlan_status wlan_11d_cfg_ioctl(IN mlan_private *pmpriv, IN pmlan_ioctl_req pioctl_req);
/** Handle 11D domain information from UAP */
mlan_status wlan_11d_handle_uap_domain_info(mlan_private *pmpriv,
                                            mlan_band_def band,
                                            t_u8 *domain_tlv,
                                            t_void *pioctl_buf);

/** get station node */
sta_node *wlan_get_station_entry(mlan_private *priv, t_u8 *mac);

#ifdef CONFIG_RF_TEST_MODE
mlan_status wlan_ret_mfg(pmlan_private pmpriv, HostCmd_DS_COMMAND *resp, void *pioctl_buf);
#endif

/** find specific ie */
#if 0
t_u8 *wlan_get_specific_ie(pmlan_private priv, t_u8 * ie_buf, t_u8 ie_len,
                           IEEEtypes_ElementId_e id);
#endif

/**
 *  @brief This function checks tx_pause flag for peer
 *
 *  @param priv     A pointer to mlan_private
 *  @param ra       Address of the receiver STA
 *
 *  @return 	    MTRUE or MFALSE
 */
INLINE
static int wlan_is_tx_pause(mlan_private *priv, t_u8 *ra)
{
    sta_node *sta_ptr = MNULL;
    sta_ptr           = wlan_get_station_entry(priv, ra);
    if (sta_ptr != MNULL)
    {
        return sta_ptr->tx_pause;
    }
    return MFALSE;
}

mlan_status wlan_cmd_get_hw_spec(IN pmlan_private pmpriv, IN HostCmd_DS_COMMAND *pcmd);
mlan_status wlan_ret_get_hw_spec(IN pmlan_private pmpriv, IN HostCmd_DS_COMMAND *resp, IN t_void *pioctl_buf);

mlan_status wlan_cmd_802_11_rf_antenna(IN pmlan_private pmpriv,
                                       IN HostCmd_DS_COMMAND *cmd,
                                       IN t_u16 cmd_action,
                                       IN t_void *pdata_buf);

#ifdef DEBUG_LEVEL1
mlan_status wlan_set_drvdbg(IN pmlan_adapter pmadapter, IN pmlan_ioctl_req pioctl_req);
#endif

void wlan_add_ext_capa_info_ie(IN mlan_private *pmpriv, IN BSSDescriptor_t *pbss_desc, OUT t_u8 **pptlv_out);

#ifdef WLAN_LOW_POWER_ENABLE
mlan_status wlan_misc_ioctl_low_pwr_mode(IN pmlan_adapter pmadapter, IN pmlan_ioctl_req pioctl_req);
#endif // WLAN_LOW_POWER_ENABLE

#ifdef OTP_CHANINFO
mlan_status wlan_ret_chan_region_cfg(IN pmlan_private pmpriv,
                                     IN HostCmd_DS_COMMAND *resp,
                                     IN mlan_ioctl_req *pioctl_buf);

void wlan_add_fw_cfp_tables(pmlan_private pmpriv, t_u8 *buf, t_u16 buf_left);

void wlan_free_fw_cfp_tables(mlan_adapter *pmadapter);

mlan_status wlan_misc_chan_reg_cfg(IN pmlan_adapter pmadapter, IN pmlan_ioctl_req pioctl_req);
#endif

#define BW_20MHZ 0
#define BW_40MHZ 1
#define BW_80MHZ 2

/**
 *  @brief RA based queueing
 *
 *  @param priv                 A pointer to mlan_private structure
 *
 *  @return 	   	        MTRUE or MFALSE
 */
INLINE
static t_u8 queuing_ra_based(pmlan_private priv)
{
    /*
     * Currently we assume if we are in Infra, then DA=RA. This might not be
     * true in the future
     */
    if ((priv->bss_mode == MLAN_BSS_MODE_INFRA) && (GET_BSS_ROLE(priv) == MLAN_BSS_ROLE_STA))
    {
        return MFALSE;
    }

    return MTRUE;
}

/**
 *  @brief Copy Rates
 *
 *  @param dest                 A pointer to Dest Buf
 *  @param pos		        The position for copy
 *  @param src		        A pointer to Src Buf
 *  @param len                  The len of Src Buf
 *
 *  @return 	   	        Number of Rates copied
 */
INLINE
static t_u32 wlan_copy_rates(t_u8 *dest, t_u32 pos, t_u8 *src, int len)
{
    int i;

    for (i = 0; i < len && src[i]; i++, pos++)
    {
        if (pos >= sizeof(WLAN_802_11_RATES))
        {
            break;
        }
        dest[pos] = src[i];
    }

    return pos;
}

/**
 *  @brief strlen
 *
 *  @param str		        A pointer to string
 *
 *  @return 	   	        Length of string
 */
INLINE
static t_u32 wlan_strlen(const t_s8 *str)
{
    t_u32 i;

    for (i = 0; str[i] != '\0'; i++)
    {
    }
    return i;
}

/**
 *  @brief iscdigit
 *
 *  @param chr                  A char
 *
 *  @return                     Non zero if chr is a hex, else 0
 */
INLINE
static t_u32 wlan_isxdigit(t_u8 chr)
{
    return ((chr <= 'f' && chr >= 'a') || (chr <= 'F' && chr >= 'A') || (chr <= '9' && chr >= '0'));
}

/**
 *  @brief isspace
 *
 *  @param                       A chr
 *
 *  @return                      Non zero if chr is space etc, else 0
 */
INLINE
static t_u32 wlan_isspace(t_u8 chr)
{
    return (chr <= ' ' && (chr == ' ' || (chr <= 13 && chr >= 9)));
}

/** delay unit */
typedef enum _delay_unit
{
    USEC,
    MSEC,
    SEC,
} t_delay_unit;

/** delay function wrapper */
#define wlan_delay(p, n) wlan_delay_func(p, n, SEC)
/** delay function wrapper */
#define wlan_mdelay(p, n) wlan_delay_func(p, n, MSEC)
/** delay function wrapper */
#define wlan_udelay(p, n) wlan_delay_func(p, n, USEC)

/** Function to check if any command is pending in the queue */
#define IS_COMMAND_PENDING(pmadapter)                                                    \
    ((cmd_ctrl_node *)util_peek_list(pmadapter->pmoal_handle, &pmadapter->cmd_pending_q, \
                                     pmadapter->callbacks.moal_spin_lock, pmadapter->callbacks.moal_spin_unlock))

/** Get BSS number from priv */
#define GET_BSS_NUM(priv) (priv)->bss_num
/**
 *  @brief This function returns priv based on the BSS num and BSS type
 *
 *  @param pmadapter A pointer to mlan_adapter
 *  @param bss_num   BSS number
 *  @param bss_type  BSS type
 *
 *  @return          Pointer to mlan_private
 */
INLINE
static mlan_private *wlan_get_priv_by_id(mlan_adapter *pmadapter, t_u32 bss_num, t_u32 bss_type)
{
    int i;

    for (i = 0; i < MIN(pmadapter->priv_num, MLAN_MAX_BSS_NUM); i++)
    {
        if (pmadapter->priv[i] != MNULL)
        {
            if ((pmadapter->priv[i]->bss_num == bss_num) && (pmadapter->priv[i]->bss_type == bss_type))
            {
                return (pmadapter->priv[i]);
            }
        }
    }
    return MNULL;
}

/**
 *  @brief This function returns first available priv
 *  based on the BSS role
 *
 *  @param pmadapter A pointer to mlan_adapter
 *  @param bss_role  BSS role or MLAN_BSS_ROLE_ANY
 *
 *  @return          Pointer to mlan_private
 */
INLINE
static mlan_private *wlan_get_priv(mlan_adapter *pmadapter, mlan_bss_role bss_role)
{
    int i;

    for (i = 0; i < MIN(pmadapter->priv_num, MLAN_MAX_BSS_NUM); i++)
    {
        if (pmadapter->priv[i] != MNULL)
        {
            if (bss_role == MLAN_BSS_ROLE_ANY || GET_BSS_ROLE(pmadapter->priv[i]) == bss_role)
            {
                return (pmadapter->priv[i]);
            }
        }
    }
    return MNULL;
}

/**
 *  @brief This function counts the number of occurences for a certain
 *  condition among privs.  Which privs are checked can be configured
 *  via a second condition.
 *
 *  @param pmadapter  A pointer to mlan_adapter
 *  @param count_cond Function pointer to condition to count on privs
 *  @param check_cond Function pointer to condition to decide whether priv
 *                    should be counted or not.  Use MNULL to check all privs.
 *
 *  @return          Count of privs where count_cond returned MTRUE.
 */
INLINE
static int wlan_count_priv_cond(mlan_adapter *pmadapter,
                                t_bool (*count_cond)(IN pmlan_private pmpriv),
                                t_bool (*check_cond)(IN pmlan_private pmpriv))
{
    pmlan_private pmpriv;
    int count = 0;
    t_u8 i;

    if (pmadapter == MNULL || count_cond == MNULL)
    {
        return 0;
    }

    for (i = 0; i < pmadapter->priv_num; i++)
    {
        pmpriv = pmadapter->priv[i];
        if (pmpriv != MNULL)
        {
            if ((check_cond == MNULL) || (check_cond != MNULL && check_cond(pmpriv)))
            {
                if (count_cond(pmpriv))
                {
                    count++;
                }
            }
        }
    }

    return count;
}

/**
 *  @brief This function runs a procedure on each priv.
 *  Which privs it is run on can be configured via a condition.
 *
 *  @param pmadapter  A pointer to mlan_adapter
 *  @param operation  Function pointer to produedure to operate on priv
 *  @param check_cond Function pointer to condition to decide whether priv
 *                    operated on or not.  Use MNULL to run on all privs.
 *
 *  @return           Number of privs that operation was run on.
 */
INLINE
static int wlan_do_task_on_privs(mlan_adapter *pmadapter,
                                 t_void (*operation)(IN pmlan_private pmpriv),
                                 t_bool (*check_cond)(IN pmlan_private pmpriv))
{
    pmlan_private pmpriv;
    int count = 0;
    t_u8 i;

    if (pmadapter == MNULL || operation == MNULL)
    {
        return 0;
    }

    for (i = 0; i < pmadapter->priv_num; i++)
    {
        pmpriv = pmadapter->priv[i];
        if (pmpriv != MNULL)
        {
            if ((check_cond == MNULL) || (check_cond != MNULL && check_cond(pmpriv)))
            {
                operation(pmpriv);
                count++;
            }
        }
    }

    return count;
}

/**
 *  @brief This function builds a list of privs that test for a condition
 *  This is useful if you need to do a number of operations on the same set
 *  of privs.  For one-off tasks, the above two functions might be better.
 *
 *  @param pmadapter  A pointer to mlan_adapter
 *  @param check_cond Function pointer to condition to decide whether priv
 *                    should be placed in the list.
 *  @param ppriv_list Output param.  Externally supplied array of mlan_private*
 *                    to hold priv's that test positive with check_cond.
 *                    Array size should be at least pmadapter->priv_num.
 *
 *  @return          Number of privs in ppriv_list
 *
 *  @sa              wlan_count_priv_cond
 */
INLINE
static int wlan_get_privs_by_cond(mlan_adapter *pmadapter,
                                  t_bool (*check_cond)(IN pmlan_private pmpriv),
                                  mlan_private **ppriv_list)
{
    pmlan_private pmpriv;
    int count = 0;
    t_u8 i;

    if (pmadapter == MNULL || check_cond == MNULL || ppriv_list == MNULL)
    {
        return 0;
    }

    for (i = 0; i < pmadapter->priv_num; i++)
    {
        pmpriv = pmadapter->priv[i];
        if (pmpriv != MNULL)
        {
            if (check_cond(pmpriv))
            {
                ppriv_list[count++] = pmpriv;
            }
        }
    }

    return count;
}

/**
 *  @brief This function builds a list of privs that test against two conditions
 *  This is useful if you need to do a number of operations on the same set
 *  of privs.  Can choose whether both conditions (AND) or either condition (OR)
 *  is required.
 *
 *  @param pmadapter      A pointer to mlan_adapter
 *  @param check_cond     Function pointer to condition to decide whether priv
 *                        should be placed in the list.
 *  @param check_cond_2   Function pointer to second condition to check.
 *  @param and_conditions If MTRUE, both conditions must be met (AND),
 *                        else either condition can be met (OR).
 *  @param ppriv_list     Output param.  Externally supplied array of mlan_private*
 *                        to hold priv's that test positive with check_cond.
 *                        Array size should be at least pmadapter->priv_num.
 *
 *  @return          Number of privs in ppriv_list
 *
 *  @sa              wlan_count_priv_cond, wlan_get_privs_by_cond
 */
INLINE
static int wlan_get_privs_by_two_cond(mlan_adapter *pmadapter,
                                      t_bool (*check_cond)(IN pmlan_private pmpriv),
                                      t_bool (*check_cond_2)(IN pmlan_private pmpriv),
                                      t_bool and_conditions,
                                      mlan_private **ppriv_list)
{
    pmlan_private pmpriv;
    int count = 0;
    t_u8 i;

    if (pmadapter == MNULL || check_cond == MNULL || check_cond_2 == MNULL || ppriv_list == MNULL)
    {
        return 0;
    }

    for (i = 0; i < pmadapter->priv_num; i++)
    {
        pmpriv = pmadapter->priv[i];
        if (pmpriv != MNULL)
        {
            if (and_conditions)
            {
                if (check_cond(pmpriv) && check_cond_2(pmpriv))
                {
                    ppriv_list[count++] = pmpriv;
                }
            }
            else
            {
                if (check_cond(pmpriv) || check_cond_2(pmpriv))
                {
                    ppriv_list[count++] = pmpriv;
                }
            }
        }
    }

    return count;
}

#endif /* !_MLAN_MAIN_H_ */
