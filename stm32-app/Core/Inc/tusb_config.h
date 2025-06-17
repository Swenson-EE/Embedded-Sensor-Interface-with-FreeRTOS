/*
 * tusb_config.h
 *
 *  Created on: Jun 16, 2025
 *      Author: Tyler Swenson
 */

#ifndef TUSB_CONFIG_H_
#define TUSB_CONFIG_H_



#ifdef __cplusplus
	extern "C" {
#endif /* __cplusplus */


#define CFG_TUSB_MCU OPT_MCU_STM32L4
#define CFG_TUSB_OS  OPT_OS_NONE

#define CFG_TUSB_RHPORT0_MODE OPT_MODE_DEVICE
#define CFG_TUSB_RHPORT0_SPEED OPT_MODE_FULL_SPEED

#define CFG_TUD_ENDPOINT0_SIZE 64

#define CFG_TUD_CDC 1

#define CFG_TUD_CDC_RX_BUFSIZE 64
#define CFG_TUD_CDC_TX_BUFSIZE 64
#define CFG_TUD_CDC_EP_BUFSIZE 64



#ifdef __cplusplus
	}
#endif /* __cplusplus */

#endif /* TUSB_CONFIG_H_ */
