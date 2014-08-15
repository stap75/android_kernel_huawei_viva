/*
 * linux/arch/arm/mach-omap2/board-zoom2-wifi.h
 *
 * Copyright (C) 2010 Texas Instruments Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
/*============================================================================================
 *
 *�޶���ʷ
 *
 *���ⵥ��              �޸���        ����         ԭ��
 *============================================================================================
 */

#ifndef _BOARD_4430SDP_WIFI_H
#define _BOARD_4430SDP_WIFI_H

#define SDP4430_WIFI_PMENA_GPIO  54
#define SDP4430_WIFI_IRQ_GPIO    0

//#define PANDA_WIFI_PMENA_GPIO    43
extern int detect_flag;
void config_wlan_mux(void);
#endif /*_BOARD_4430SDP_WIFI_H*/
