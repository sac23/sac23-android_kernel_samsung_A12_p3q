/*
 * Copyright (c) 2020 Samsung Electronics Co., Ltd.
 *	      http://www.samsung.com/
 *
 * DDI mAFPC operation
 * Author: Samsung Display Driver Team <cj1225.jang@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __SS_DSI_MAFPC_HAB_H__
#define __SS_DSI_MAFPC_HAB_H__

#include <linux/miscdevice.h>
#include <linux/fs.h>
#include <linux/file.h>
#include "ss_dsi_mafpc_common.h"

int ss_mafpc_init_HAB(struct samsung_display_driver_data *vdd);
struct dsi_panel_cmd_set *ss_mafpc_brightness_scale_HAB(struct samsung_display_driver_data *vdd, int *level_key);

#define MAFPC_ENABLE_COMMAND_LEN_HAB 39
#define MAFPC_BRIGHTNESS_SCALE_STEP 75
#define MAFPC_BRIGHTNESS_SCALE_CMD 3

/* 0~73 for Normal, 74 for HBM */
static char brightness_scale_table[MAFPC_BRIGHTNESS_SCALE_STEP][MAFPC_BRIGHTNESS_SCALE_CMD] = {
	{0xFF, 0xFF, 0xFF},	/* 0 */
	{0xFF, 0xFF, 0xFF},	/* 1 */
	{0xFF, 0xFF, 0xFF},	/* 2 */
	{0xFF, 0xFF, 0xFF},	/* 3 */
	{0xFF, 0xFF, 0xFF},	/* 4 */
	{0xFF, 0xFF, 0xFF},	/* 5 */
	{0xFF, 0xFF, 0xFF},	/* 6 */
	{0xFF, 0xFF, 0xFF},	/* 7 */
	{0xFF, 0xFF, 0xFF},	/* 8 */
	{0xFF, 0xFF, 0xFF},	/* 9 */
	{0xFF, 0xFF, 0xFF},	/* 10 */
	{0xFF, 0xFF, 0xFF},	/* 11 */
	{0xFF, 0xFF, 0xFF},	/* 12 */
	{0xFF, 0xFF, 0xFF},	/* 13 */
	{0xFF, 0xFF, 0xFF},	/* 14 */
	{0xFF, 0xFF, 0xFF},	/* 15 */
	{0xFF, 0xFF, 0xFF},	/* 16 */
	{0xFF, 0xFF, 0xFF},	/* 17 */
	{0xFF, 0xFF, 0xFF},	/* 18 */
	{0xFF, 0xFF, 0xFF},	/* 19 */
	{0xFF, 0xFF, 0xFF},	/* 20 */
	{0xFF, 0xFF, 0xFF},	/* 21 */
	{0xFF, 0xFF, 0xFF},	/* 22 */
	{0xFF, 0xFF, 0xFF},	/* 23 */
	{0xFF, 0xFF, 0xFF},	/* 24 */
	{0xFF, 0xFF, 0xFF},	/* 25 */
	{0xFF, 0xFF, 0xFF},	/* 26 */
	{0xFF, 0xFF, 0xFF},	/* 27 */
	{0xFF, 0xFF, 0xFF},	/* 28 */
	{0xFF, 0xFF, 0xFF},	/* 29 */
	{0xFF, 0xFF, 0xFF},	/* 30 */
	{0xFF, 0xFF, 0xFF},	/* 31 */
	{0xFF, 0xFF, 0xFF},	/* 32 */
	{0xFF, 0xFF, 0xFF},	/* 33 */
	{0xFF, 0xFF, 0xFF},	/* 34 */
	{0xFF, 0xFF, 0xFF},	/* 35 */
	{0xFF, 0xFF, 0xFF},	/* 36 */
	{0xFF, 0xFF, 0xFF},	/* 37 */
	{0xFF, 0xFF, 0xFF},	/* 38 */
	{0xFF, 0xFF, 0xFF},	/* 39 */
	{0xFF, 0xFF, 0xFF},	/* 40 */
	{0xFF, 0xFF, 0xFF},	/* 41 */
	{0xFF, 0xFF, 0xFF},	/* 42 */
	{0xFF, 0xFF, 0xFF},	/* 43 */
	{0xFF, 0xFF, 0xFF},	/* 44 */
	{0xFF, 0xFF, 0xFF},	/* 45 */
	{0xFF, 0xFF, 0xFF},	/* 46 */
	{0xFF, 0xFF, 0xFF},	/* 47 */
	{0xFF, 0xFF, 0xFF},	/* 48 */
	{0xFF, 0xFF, 0xFF},	/* 49 */
	{0xFF, 0xFF, 0xFF},	/* 50 */
	{0xFF, 0xFF, 0xFF},	/* 51 */
	{0xFF, 0xFF, 0xFF},	/* 52 */
	{0xFF, 0xFF, 0xFF},	/* 53 */
	{0xFF, 0xFF, 0xFF},	/* 54 */
	{0xFF, 0xFF, 0xFF},	/* 55 */
	{0xFF, 0xFF, 0xFF},	/* 56 */
	{0xFF, 0xFF, 0xFF},	/* 57 */
	{0xFF, 0xFF, 0xFF},	/* 58 */
	{0xFF, 0xFF, 0xFF},	/* 59 */
	{0xFF, 0xFF, 0xFF},	/* 60 */
	{0xFF, 0xFF, 0xFF},	/* 61 */
	{0xFF, 0xFF, 0xFF},	/* 62 */
	{0xFF, 0xFF, 0xFF},	/* 63 */
	{0xFF, 0xFF, 0xFF},	/* 64 */
	{0xFF, 0xFF, 0xFF},	/* 65 */
	{0xFF, 0xFF, 0xFF},	/* 66 */
	{0xFF, 0xFF, 0xFF},	/* 67 */
	{0xFF, 0xFF, 0xFF},	/* 68 */
	{0xFF, 0xFF, 0xFF},	/* 69 */
	{0xFF, 0xFF, 0xFF},	/* 70 */
	{0xFF, 0xFF, 0xFF},	/* 71 */
	{0xFF, 0xFF, 0xFF},	/* 72 */
	{0xFF, 0xFF, 0xFF},	/* 73 */
	{0xFF, 0xFF, 0xFF},	/* 74 for HBM*/
};

#endif /* __SELF_DISPLAY_HAB_H__ */
