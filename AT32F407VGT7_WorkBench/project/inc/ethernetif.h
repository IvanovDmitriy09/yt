#ifndef __ETHERNETIF_H__
#define __ETHERNETIF_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "lwip/err.h"
#include "lwip/netif.h"

/* add user code begin 0 */

/* add user code end 0 */

err_t ethernetif_init(struct netif *netif);
err_t ethernetif_input(struct netif *netif);
struct netif *ethernetif_register(void);
int ethernetif_poll(void);
void lwip_set_mac_address(unsigned char* macadd);
#if !NO_SYS
void eth_rxpkt_callback(void);
#endif

/* add user code begin 1 */

/* add user code end 1 */

#ifdef __cplusplus
}
#endif

#endif
