/* add user code begin Header */
/**
  **************************************************************************
  * @file     lwipopts.h
  * @brief    This file overrides LwIP stack default configuration
  *                      done in opt.h file.
  **************************************************************************
  *                       Copyright notice & Disclaimer
  *
  * The software Board Support Package (BSP) that is made available to
  * download from Artery official website is the copyrighted work of Artery.
  * Artery authorizes customers to use, copy, and distribute the BSP
  * software and its related documentation for the purpose of design and
  * development in conjunction with Artery microcontrollers. Use of the
  * software is governed by this copyright notice and the following disclaimer.
  *
  * THIS SOFTWARE IS PROVIDED ON "AS IS" BASIS WITHOUT WARRANTIES,
  * GUARANTEES OR REPRESENTATIONS OF ANY KIND. ARTERY EXPRESSLY DISCLAIMS,
  * TO THE FULLEST EXTENT PERMITTED BY LAW, ALL EXPRESS, IMPLIED OR
  * STATUTORY OR OTHER WARRANTIES, GUARANTEES OR REPRESENTATIONS,
  * INCLUDING BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY,
  * FITNESS FOR A PARTICULAR PURPOSE, OR NON-INFRINGEMENT.
  *
  **************************************************************************
  */
/* add user code end Header */

/* Define to prevent recursive inclusion --------------------------------------*/
#ifndef __LWIPOPTS__H__
#define __LWIPOPTS__H__

/*-----------------------------------------------------------------------------*/
/* Current version of LwIP supported by Work Bench: 2.1.2 */
/*-----------------------------------------------------------------------------*/

/* add user code begin 0 */

/* add user code end 0 */

#ifdef __cplusplus
 extern "C" {
#endif

/* Parameters (not defined in opt.h) ---------------------*/
/* Parameters set in AT32 Work Bench -*/
/*----- WITH_RTOS disabled -----*/
#define WITH_RTOS                       0
/*----- CHECKSUM_BY_HARDWARE enabled -----*/
#define CHECKSUM_BY_HARDWARE            1

#define LWIP_PROVIDE_ERRNO

/*-----------------------------------------------------------------------------*/
/* LwIP Stack Parameters (modified compared to initialization value in opt.h) -*/
/* Parameters set in AT32 Work Bench -*/

/*----- Default value in opt.h for NO_SYS: 0 -----*/
#define NO_SYS                          1
/*----- Default value in opt.h for SYS_LIGHTWEIGHT_PROT: 1 -----*/
#define SYS_LIGHTWEIGHT_PROT            0
/*----- Default value in opt.h for MEM_ALIGNMENT: 1 -----*/
#define MEM_ALIGNMENT                   4
/*----- Default value in opt.h for MEMP_NUM_SYS_TIMEOUT: (LWIP_TCP + IP_REASSEMBLY + LWIP_ARP + (2*LWIP_DHCP) + LWIP_AUTOIP + LWIP_IGMP + LWIP_DNS + PPP_NUM_TIMEOUTS + (LWIP_IPV6 * (1 + LWIP_IPV6_REASS + LWIP_IPV6_MLD))) -----*/
#define MEMP_NUM_SYS_TIMEOUT            5
/*----- Default value for LWIP_SUPPORT_CUSTOM_PBUF: 1 -----*/
#define LWIP_SUPPORT_CUSTOM_PBUF        1
/*----- Default value in opt.h for LWIP_RAW: 1 -----*/
#define LWIP_RAW                        0
/*----- Default value in opt.h for DNS_DOES_NAME_CHECK: 0 -----*/
#define DNS_DOES_NAME_CHECK             1
/*----- Default value in opt.h for LWIP_NETIF_LINK_CALLBACK: 0 -----*/
#define LWIP_NETIF_LINK_CALLBACK        1
/*----- Default value in opt.h for LWIP_NETCONN: 1 -----*/
#define LWIP_NETCONN                    0
/*----- Default value in opt.h for LWIP_SOCKET: 1 -----*/
#define LWIP_SOCKET                     0
/*----- Default value in opt.h for LWIP_COMPAT_SOCKETS: 1 -----*/
#define LWIP_COMPAT_SOCKETS             0
/*----- Default value in opt.h for LWIP_POSIX_SOCKETS_IO_NAMES: 1 -----*/
#define LWIP_POSIX_SOCKETS_IO_NAMES     0
/*----- Default value in opt.h for RECV_BUFSIZE_DEFAULT: INT_MAX -----*/
#define RECV_BUFSIZE_DEFAULT            2000000000
/*----- Default value in opt.h for LWIP_SOCKET_SELECT: 1 -----*/
#define LWIP_SOCKET_SELECT              0
/*----- Default value in opt.h for LWIP_SOCKET_POLL: 1 -----*/
#define LWIP_SOCKET_POLL                0
/*----- Default value in ppp_opts.h for VJ_SUPPORT: 1 -----*/
#define VJ_SUPPORT                      0
/*----- Default value in ppp_opts.h for EAP_DEFTIMEOUT: 6 -----*/
#define EAP_DEFTIMEOUT                  0
/*----- Default value in ppp_opts.h for EAP_DEFTRANSMITS: 10 -----*/
#define EAP_DEFTRANSMITS                0
/*----- Default value in ppp_opts.h for PPPOL2TP_DEFMRU: 1450 -----*/
#define PPPOL2TP_DEFMRU                 0
/*----- Default value in snmp_opts.h for LWIP_SNMP: 1 -----*/
#define LWIP_SNMP                       0
/*----- Default value in snmp_opts.h for LWIP_SNMP_CONFIGURE_VERSIONS: 1 -----*/
#define LWIP_SNMP_CONFIGURE_VERSIONS    0
/*----- Default value in opt.h for LWIP_STATS: 1 -----*/
#define LWIP_STATS                      0
/*----- Default value in snmp_opts.h for SNMP_MIB_DEBUG: LWIP_DBG_ON -----*/
#define SNMP_MIB_DEBUG                  LWIP_DBG_OFF

/*-----------------------------------------------------------------------------*/

/* add user code begin 1 */

/* add user code end 1 */

#ifdef __cplusplus
}
#endif
#endif /*__LWIPOPTS__H__ */
