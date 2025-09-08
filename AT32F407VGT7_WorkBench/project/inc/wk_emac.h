/* add user code begin Header */
/**
  **************************************************************************
  * @file     wk_emac.h
  * @brief    header file of work bench config
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

/* define to prevent recursive inclusion -----------------------------------*/
#ifndef __WK_EMAC_H
#define __WK_EMAC_H

#ifdef __cplusplus
extern "C" {
#endif

/* includes -----------------------------------------------------------------------*/
#include "at32f403a_407_wk_config.h"

/* private includes -------------------------------------------------------------*/
/* add user code begin private includes */

/* add user code end private includes */

/* exported types -------------------------------------------------------------*/
/* add user code begin exported types */

/* add user code end exported types */

/* exported constants --------------------------------------------------------*/
/* add user code begin exported constants */

/* add user code end exported constants */

/* exported macro ------------------------------------------------------------*/
/* add user code begin exported macro */

/* add user code end exported macro */

/* exported functions ------------------------------------------------------- */

#define YT8512                         
#define PHY_ADDRESS                      (29)       /*!< relative to at32 board */
#define PHY_CONTROL_REG                  (0x0)       /*!< basic mode control register */
#define PHY_STATUS_REG                   (0x1)       /*!< basic mode status register */
#define PHY_SPECIFIED_CS_REG             (0x11)       /*!< specified configuration and status register */
/* phy control register */
#define PHY_AUTO_NEGOTIATION_BIT         (0x1000)     /*!< enable auto negotiation */
#define PHY_LOOPBACK_BIT                 (0x4000)     /*!< enable loopback */
#define PHY_RESET_BIT                    (0x8000)     /*!< reset phy */
/* phy status register */
#define PHY_LINKED_STATUS_BIT            (0x0004)     /*!< link status */
#define PHY_NEGO_COMPLETE_BIT            (0x0020)     /*!< auto negotiation complete */

#define PHY_DUPLEX_MODE                  (0x2000)     /*!< full duplex mode */
#define PHY_SPEED_MODE                   (0x4000)     /*!< 10 mbps */

  /* init emac phy function. */
  error_status wk_emac_phy_init(emac_auto_negotiation_type nego, emac_duplex_type mode, emac_speed_type speed);
  error_status wk_emac_speed_config(emac_auto_negotiation_type nego, emac_duplex_type mode, emac_speed_type speed);
   /* init emac function. */
  error_status wk_emac_init(void);

/* add user code begin exported functions */

/* add user code end exported functions */

#ifdef __cplusplus
}
#endif

#endif
