/* add user code begin Header */
/**
  **************************************************************************
  * @file     wk_lwip.c
  * @brief    network connection configuration
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

/* Includes ------------------------------------------------------------------*/
#include "wk_emac.h"
#include "lwip/memp.h"
#include "lwip/tcp.h"
#include "lwip/priv/tcp_priv.h"
#include "lwip/udp.h"
#include "netif/etharp.h"
#include "lwip/dhcp.h"
#include "lwip/init.h"
#include "ethernetif.h"
#include "netif.h"
#include "stdio.h"
#include "timeouts.h"
#include "wk_system.h"
#include "lwip/tcpip.h"
#include "lwip/sio.h"

/* add user code begin 0 */

/* add user code end 0 */

/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
#define MAC_ADDR_LENGTH                  (6)
#define ADDR_LENGTH                      (4)
#define SYSTEMTICK_PERIOD_MS             1

/* add user code begin 1 */

/* add user code end 1 */

/* Private variables ---------------------------------------------------------*/
int errno;
uint32_t link_timer;
volatile uint32_t local_time;
struct netif netif;
#if !LWIP_DHCP
static uint8_t local_ip[ADDR_LENGTH] = {192,168,0,2};
static uint8_t local_gw[ADDR_LENGTH] = {192,168,0,1};
static uint8_t local_mask[ADDR_LENGTH] = {255,255,255,0};
#endif
extern u32_t lwip_sys_now;

/* add user code begin 2 */

/* add user code end 2 */

#if !NO_SYS
void ethernetif_set_link(void const *argument);
TaskHandle_t link_handler;

void eth_link_thread(void *pvParameters)
{
/* add user code begin eth_link_thread 0 */

/* add user code end eth_link_thread 0 */
  while(1)
  {
    ethernetif_set_link(pvParameters);
    vTaskDelay(500);
  }
}
/* add user code begin 3 */

/* add user code end 3 */
#endif

/**
  * @brief  updates the link states
  * @param  none
  * @retval link state 0: disconnect, 1: connection
  */
uint16_t link_update(void)
{
/* add user code begin link_update 0 */

/* add user code end link_update 0 */

  uint16_t link_data, link_state;
  if(emac_phy_register_read(PHY_ADDRESS, PHY_STATUS_REG, &link_data) == ERROR)
  {
    return ERROR;
  }
  
  link_state = (link_data & PHY_LINKED_STATUS_BIT)>>2;

/* add user code begin link_update 1 */

/* add user code end link_update 1 */

  return link_state;
}

/**
  * @brief  this function sets the netif link status.
  * @param  netif: the network interface
  * @retval none
  */  
void ethernetif_set_link(void const *argument)
{
/* add user code begin ethernetif_set_link 0 */

/* add user code end ethernetif_set_link 0 */

  uint16_t regvalue = 0;
  struct netif *netif = (struct netif *)argument;
  
  /* Read PHY_BSR*/
  regvalue = link_update();

  /* Check whether the netif link down and the PHY link is up */
  if(!netif_is_link_up(netif) && (regvalue))
  {
    /* network cable is connected */ 
    netif_set_link_up(netif);        
  }
  else if(netif_is_link_up(netif) && (!regvalue))
  {
    /* network cable is dis-connected */
    netif_set_link_down(netif);
  }

/* add user code begin ethernetif_set_link 1 */

/* add user code end ethernetif_set_link 1 */
}

/**
  * @brief  This function notify user about link status changement.
  * @param  netif: the network interface
  * @retval None
  */
void ethernetif_notify_conn_changed(struct netif *netif)
{
  /* NOTE : This is function could be implemented in user file 
            when the callback is needed,
  */

/* add user code begin ethernetif_notify_conn_changed 0 */

/* add user code end ethernetif_notify_conn_changed 0 */

  if (netif_is_link_up(netif)) {
    netif_set_up(netif);

#if LWIP_DHCP
    /*  Creates a new DHCP client for this interface on the first call.
    Note: you must call dhcp_fine_tmr() and dhcp_coarse_tmr() at
    the predefined regular intervals after starting the client.
    You can peek in the netif->dhcp struct for the actual DHCP status.*/
    dhcp_start(netif);
#endif
  }
  else
    netif_set_down(netif);

/* add user code begin ethernetif_notify_conn_changed 1 */

/* add user code end ethernetif_notify_conn_changed 1 */
}

/**
  * @brief  Link callback function, this function is called on change of link status
  *         to update low level driver configuration.
* @param  netif: The network interface
  * @retval None
  */
void ethernetif_update_config(struct netif *netif)
{
  if(netif_is_link_up(netif))
  {
/* add user code begin ethernetif_update_config 0 */
    wk_emac_speed_config(mac_control_para.auto_nego, mac_control_para.duplex_mode, mac_control_para.fast_ethernet_speed);
    
    wk_delay_ms(300);
    /* enable mac and dma transmission and reception */
    emac_start();
/* add user code end ethernetif_update_config 0 */
  }
  else
  {
/* add user code begin ethernetif_update_config 1 */
    /* disable mac and dma transmission and reception */
    emac_stop(); 
/* add user code end ethernetif_update_config 1 */
  }

  ethernetif_notify_conn_changed(netif);
}

/**
  * @brief  called when a frame is received
  * @param  none
  * @retval none
  */
void lwip_pkt_handle(void)
{
/* add user code begin pkt_handle 0 */

/* add user code end pkt_handle 0 */

  /* Read a received packet from the Ethernet buffers and send it to the lwIP for handling */
  ethernetif_input(&netif);

/* add user code begin pkt_handle 1 */

/* add user code end pkt_handle 1 */
}

/**
  * @brief  this function is receive handler.
  * @param  none
  * @retval none
  */
void lwip_rx_loop_handler(void)
{
/* add user code begin rx_loop_handler 0 */

/* add user code end rx_loop_handler 0 */

  /* handles all the received frames */
  lwip_pkt_handle();

/* add user code begin rx_loop_handler 1 */

/* add user code end rx_loop_handler 1 */
}

/**
  * @brief  updates the system local time
  * @param  none
  * @retval none
  */
void wk_time_user_handler(void)
{
/* add user code begin time_user_handler 0 */

/* add user code end time_user_handler 0 */

  local_time += SYSTEMTICK_PERIOD_MS;
  lwip_sys_now += SYSTEMTICK_PERIOD_MS;

/* add user code begin time_user_handler 1 */

/* add user code end time_user_handler 1 */
}

/**
  * @brief  lwip periodic tasks
  * @param  localtime the current localtime value
  * @retval none
  */
void lwip_periodic_handle(volatile uint32_t localtime)
{
/* add user code begin lwip_periodic_handle 0 */

/* add user code end lwip_periodic_handle 0 */

#if LWIP_TIMERS && !LWIP_TIMERS_CUSTOM
  /* lwip timeout */
  sys_check_timeouts();
#endif

  /* link detection process every 500 ms */
  if (localtime - link_timer >= 500 || localtime < link_timer)
  {
    link_timer =  localtime;
    ethernetif_set_link(&netif);
  }

/* add user code begin lwip_periodic_handle 1 */

/* add user code end lwip_periodic_handle 1 */
}
void wk_lwip_app(void)
{
/* add user code begin lwip_app 0 */

/* add user code end lwip_app 0 */

  /* lwip receive handle */
  lwip_rx_loop_handler();
    
  /*timeout handle*/
  lwip_periodic_handle(local_time);

/* add user code begin lwip_app 1 */

/* add user code end lwip_app 1 */
}

/**
  * @brief  initializes the lwip stack
  * @param  none
  * @retval none
  */
void wk_lwip_init(void)
{
/* add user code begin lwip_init 0 */

/* add user code end lwip_init 0 */
  ip4_addr_t ipaddr;
  ip4_addr_t netmask;
  ip4_addr_t gw;

/* add user code begin lwip_init 1 */

/* add user code end lwip_init 1 */

  /* Initialize the LwIP stack */
#if !NO_SYS
  tcpip_init(NULL, NULL);
#else
  lwip_init();
#endif
#if LWIP_DHCP
  ipaddr.addr = 0;
  netmask.addr = 0;
  gw.addr = 0;

#else
  IP4_ADDR(&ipaddr, local_ip[0], local_ip[1], local_ip[2], local_ip[3]);
  IP4_ADDR(&netmask, local_mask[0], local_mask[1], local_mask[2], local_mask[3]);
  IP4_ADDR(&gw, local_gw[0], local_gw[1], local_gw[2], local_gw[3]);
#endif

  lwip_set_mac_address(macaddr);

  /* - netif_add(struct netif *netif, struct ip_addr *ipaddr,
            struct ip_addr *netmask, struct ip_addr *gw,
            void *state, err_t (* init)(struct netif *netif),
            err_t (* input)(struct pbuf *p, struct netif *netif))

   Adds your network interface to the netif_list. Allocate a struct
  netif and pass a pointer to this structure as the first argument.
  Give pointers to cleared ip_addr structures when using DHCP,
  or fill them with sane numbers otherwise. The state pointer may be NULL.

  The init function pointer must point to a initialization function for
  your ethernet netif interface. The following code illustrates it's use.*/

  if(netif_add(&netif, &ipaddr, &netmask, &gw, NULL, &ethernetif_init, &netif_input) == NULL)
  {
    while(1);
  }

  /*  Registers the default network interface.*/
  netif_set_default(&netif);

  /*  When the netif is fully configured this function must be called.*/
  netif_set_up(&netif);

#if LWIP_NETIF_LINK_CALLBACK
  /* Set the link callback function, this function is called on change of link status*/
  netif_set_link_callback(&netif, ethernetif_update_config);
#endif
#if !NO_SYS
   sys_thread_new((const char*)"eth_link_thread", eth_link_thread, (void*)&netif, 512, 6);
#endif

/* add user code begin lwip_init 2 */

/* add user code end lwip_init 2 */
}

/**
 * Opens a serial device for communication.
 *
 * @param devnum device number
 * @return handle to serial device if successful, NULL otherwise
 */
sio_fd_t sio_open(u8_t devnum)
{
  sio_fd_t sd;

/* add user code begin sio_open */
  sd = 0; // dummy code
/* add user code end sio_open */

  return sd;
}

/**
 * Sends a single character to the serial device.
 *
 * @param c character to send
 * @param fd serial device handle
 *
 * @note This function will block until the character can be sent.
 */
void sio_send(u8_t c, sio_fd_t fd)
{
/* add user code begin sio_send */
/* add user code end sio_send */
}

/**
 * Reads from the serial device.
 *
 * @param fd serial device handle
 * @param data pointer to data buffer for receiving
 * @param len maximum length (in bytes) of data to receive
 * @return number of bytes actually received - may be 0 if aborted by sio_read_abort
 *
 * @note This function will block until data can be received. The blocking
 * can be cancelled by calling sio_read_abort().
 */
u32_t sio_read(sio_fd_t fd, u8_t *data, u32_t len)
{
  u32_t recved_bytes;

/* add user code begin sio_read */
  recved_bytes = 0; // dummy code
/* add user code end sio_read */
  return recved_bytes;
}

/**
 * Tries to read from the serial device. Same as sio_read but returns
 * immediately if no data is available and never blocks.
 *
 * @param fd serial device handle
 * @param data pointer to data buffer for receiving
 * @param len maximum length (in bytes) of data to receive
 * @return number of bytes actually received
 */
u32_t sio_tryread(sio_fd_t fd, u8_t *data, u32_t len)
{
  u32_t recved_bytes;

/* add user code begin sio_tryread */
  recved_bytes = 0; // dummy code
/* add user code end sio_tryread */
  return recved_bytes;
}
