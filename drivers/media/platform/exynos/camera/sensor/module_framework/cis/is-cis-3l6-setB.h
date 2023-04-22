/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2022 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_3L6_SET_B_H
#define IS_CIS_3L6_SET_B_H

#include "is-cis.h"
#include "is-cis-3l6.h"

/*
File used: 3L6_EVT1_Ver_1.8.xlsx
version : 1.8
MIPI clck : 1126 MHz
ext clk : 26 MHz
*/

#define EXT_CLK_Mhz (26)

const u32 sensor_3l6_setfile_B_Global[] = {
	0x306A, 0x2F4C, 0x02,
	0x306C, 0xCA01, 0x02,
	0x307A, 0x0D20, 0x02,
	0x309E, 0x002D, 0x02,
	0x3072, 0x0013, 0x02,
	0x3074, 0x0977, 0x02,
	0x3076, 0x9411, 0x02,
	0x3024, 0x0016, 0x02,
	0x3002, 0x0E00, 0x02,
	0x3006, 0x1000, 0x02,
	0x300A, 0x0C00, 0x02,
	0x3018, 0xC500, 0x02,
	0x303A, 0x0204, 0x02,
	0x3266, 0x0001, 0x02,
	0x38DA, 0x000A, 0x02,
	0x38DC, 0x000B, 0x02,
	0x38D6, 0x000A, 0x02,
	0x3070, 0x3D00, 0x02,
	0x3084, 0x1314, 0x02,
	0x3086, 0x0CE7, 0x02,
	0x3004, 0x0800, 0x02,
	0x3C08, 0xFFFF, 0x02,	// Master mode disable
};

const u32 sensor_3l6_setfile_B_4128x3096_30fps[] = {
	//mode change   Single Still Capture (4:3)
	0x314A, 0x5F00, 0x02,
	0x3064, 0xFFCF, 0x02,
	0x3066, 0x7E00, 0x02,
	0x309C, 0x0640, 0x02,
	0x380C, 0x001A, 0x02,
	0x32B2, 0x0000, 0x02,
	0x32B4, 0x0000, 0x02,
	0x32B6, 0x0000, 0x02,
	0x32B8, 0x0000, 0x02,
	0x3090, 0x8800, 0x02,
	0x3238, 0x000C, 0x02,
	0x0100, 0x0000, 0x02,
	0x0344, 0x0030, 0x02,
	0x0348, 0x104F, 0x02,
	0x0346, 0x0014, 0x02,
	0x034A, 0x0C2B, 0x02,
	0x034C, 0x1020, 0x02,
	0x034E, 0x0C18, 0x02,
	0x0202, 0x03DE, 0x02,
	0x3400, 0x0000, 0x02,
	0x3402, 0x4E42, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0304, 0x0003, 0x02,
	0x0306, 0x0053, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x005C, 0x02,
	0x3C16, 0x0000, 0x02,
	0x0342, 0x1320, 0x02,
	0x0340, 0x0CC1, 0x02,
	0x0900, 0x0000, 0x02,
	0x0386, 0x0001, 0x02,
	0x3452, 0x0000, 0x02,
	0x345A, 0x0000, 0x02,
	0x345C, 0x0000, 0x02,
	0x345E, 0x0000, 0x02,
	0x3460, 0x0000, 0x02,
	0x38C4, 0x0009, 0x02,
	0x38D8, 0x002A, 0x02,
	0x38DA, 0x000A, 0x02,
	0x38DC, 0x000B, 0x02,
	0x38C2, 0x000A, 0x02,
	0x38C0, 0x000F, 0x02,
	0x38D6, 0x000A, 0x02,
	0x38D4, 0x0009, 0x02,
	0x38B0, 0x000F, 0x02,
	0x3932, 0x1000, 0x02,
	0x0820, 0x04AC, 0x02,
	0x3C34, 0x0008, 0x02,
	0x3C36, 0x2800, 0x02,
	0x3C38, 0x0028, 0x02,
	0x393E, 0x4000, 0x02,
	0x3892, 0x3600, 0x02,
	0x3C1E, 0x0100, 0x02,
};

const u32 sensor_3l6_setfile_B_4128x2324_30fps[] = {
	//mode change Single Still Capture (16:9)
	0x314A, 0x5F00, 0x02,
	0x3064, 0xFFCF, 0x02,
	0x3066, 0x7E00, 0x02,
	0x309C, 0x0640, 0x02,
	0x380C, 0x001A, 0x02,
	0x32B2, 0x0000, 0x02,
	0x32B4, 0x0000, 0x02,
	0x32B6, 0x0000, 0x02,
	0x32B8, 0x0000, 0x02,
	0x3090, 0x8800, 0x02,
	0x3238, 0x000C, 0x02,
	0x0100, 0x0000, 0x02,
	0x0344, 0x0030, 0x02,
	0x0348, 0x104F, 0x02,
	0x0346, 0x0196, 0x02,
	0x034A, 0x0AA9, 0x02,
	0x034C, 0x1020, 0x02,
	0x034E, 0x0914, 0x02,
	0x0202, 0x03DE, 0x02,
	0x3400, 0x0000, 0x02,
	0x3402, 0x4E42, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0304, 0x0003, 0x02,
	0x0306, 0x0053, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x005C, 0x02,
	0x3C16, 0x0000, 0x02,
	0x0342, 0x1320, 0x02,
	0x0340, 0x0CC1, 0x02,
	0x0900, 0x0000, 0x02,
	0x0386, 0x0001, 0x02,
	0x3452, 0x0000, 0x02,
	0x345A, 0x0000, 0x02,
	0x345C, 0x0000, 0x02,
	0x345E, 0x0000, 0x02,
	0x3460, 0x0000, 0x02,
	0x38C4, 0x0009, 0x02,
	0x38D8, 0x002A, 0x02,
	0x38DA, 0x000A, 0x02,
	0x38DC, 0x000B, 0x02,
	0x38C2, 0x000A, 0x02,
	0x38C0, 0x000F, 0x02,
	0x38D6, 0x000A, 0x02,
	0x38D4, 0x0009, 0x02,
	0x38B0, 0x000F, 0x02,
	0x3932, 0x1000, 0x02,
	0x0820, 0x04AC, 0x02,
	0x3C34, 0x0008, 0x02,
	0x3C36, 0x2800, 0x02,
	0x3C38, 0x0028, 0x02,
	0x393E, 0x4000, 0x02,
	0x3892, 0x3600, 0x02,
	0x3C1E, 0x0100, 0x02,
};

const u32 sensor_3l6_setfile_B_3408x2556_30fps[] = {
	//mode change Single Still Capture (16:9)
	0x314A, 0x5F00, 0x02,
	0x3064, 0xFFCF, 0x02,
	0x3066, 0x7E00, 0x02,
	0x309C, 0x0640, 0x02,
	0x380C, 0x007A, 0x02,
	0x32B2, 0x0000, 0x02,
	0x32B4, 0x0000, 0x02,
	0x32B6, 0x0000, 0x02,
	0x32B8, 0x0000, 0x02,
	0x3090, 0x8800, 0x02,
	0x3238, 0x000C, 0x02,
	0x0100, 0x0000, 0x02,
	0x0344, 0x0198, 0x02,
	0x0348, 0x0EE7, 0x02,
	0x0346, 0x0122, 0x02,
	0x034A, 0x0B1D, 0x02,
	0x034C, 0x0D50, 0x02,
	0x034E, 0x09FC, 0x02,
	0x0202, 0x03DE, 0x02,
	0x3400, 0x0000, 0x02,
	0x3402, 0x4E42, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0304, 0x0003, 0x02,
	0x0306, 0x0053, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x005C, 0x02,
	0x3C16, 0x0000, 0x02,
	0x0342, 0x1320, 0x02,
	0x0340, 0x0CC1, 0x02,
	0x0900, 0x0000, 0x02,
	0x0386, 0x0001, 0x02,
	0x3452, 0x0000, 0x02,
	0x345A, 0x0000, 0x02,
	0x345C, 0x0000, 0x02,
	0x345E, 0x0000, 0x02,
	0x3460, 0x0000, 0x02,
	0x38C4, 0x0009, 0x02,
	0x38D8, 0x002A, 0x02,
	0x38DA, 0x000A, 0x02,
	0x38DC, 0x000B, 0x02,
	0x38C2, 0x000A, 0x02,
	0x38C0, 0x000F, 0x02,
	0x38D6, 0x000A, 0x02,
	0x38D4, 0x0009, 0x02,
	0x38B0, 0x000F, 0x02,
	0x3932, 0x1000, 0x02,
	0x0820, 0x04AC, 0x02,
	0x3C34, 0x0008, 0x02,
	0x3C36, 0x2800, 0x02,
	0x3C38, 0x0028, 0x02,
	0x393E, 0x4000, 0x02,
	0x3892, 0x3600, 0x02,
	0x3C1E, 0x0100, 0x02,
};

const u32 sensor_3l6_setfile_B_3408x1916_30fps[] = {
	//mode change Single Still Capture (16:9)
	0x314A, 0x5F00, 0x02,
	0x3064, 0xFFCF, 0x02,
	0x3066, 0x7E00, 0x02,
	0x309C, 0x0640, 0x02,
	0x380C, 0x007A, 0x02,
	0x32B2, 0x0000, 0x02,
	0x32B4, 0x0000, 0x02,
	0x32B6, 0x0000, 0x02,
	0x32B8, 0x0000, 0x02,
	0x3090, 0x8800, 0x02,
	0x3238, 0x000C, 0x02,
	0x0100, 0x0000, 0x02,
	0x0344, 0x0198, 0x02,
	0x0348, 0x0EE7, 0x02,
	0x0346, 0x0262, 0x02,
	0x034A, 0x09DD, 0x02,
	0x034C, 0x0D50, 0x02,
	0x034E, 0x077C, 0x02,
	0x0202, 0x03DE, 0x02,
	0x3400, 0x0000, 0x02,
	0x3402, 0x4E42, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0304, 0x0003, 0x02,
	0x0306, 0x0053, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x005C, 0x02,
	0x3C16, 0x0000, 0x02,
	0x0342, 0x1320, 0x02,
	0x0340, 0x0CC1, 0x02,
	0x0900, 0x0000, 0x02,
	0x0386, 0x0001, 0x02,
	0x3452, 0x0000, 0x02,
	0x345A, 0x0000, 0x02,
	0x345C, 0x0000, 0x02,
	0x345E, 0x0000, 0x02,
	0x3460, 0x0000, 0x02,
	0x38C4, 0x0009, 0x02,
	0x38D8, 0x002A, 0x02,
	0x38DA, 0x000A, 0x02,
	0x38DC, 0x000B, 0x02,
	0x38C2, 0x000A, 0x02,
	0x38C0, 0x000F, 0x02,
	0x38D6, 0x000A, 0x02,
	0x38D4, 0x0009, 0x02,
	0x38B0, 0x000F, 0x02,
	0x3932, 0x1000, 0x02,
	0x0820, 0x04AC, 0x02,
	0x3C34, 0x0008, 0x02,
	0x3C36, 0x2800, 0x02,
	0x3C38, 0x0028, 0x02,
	0x393E, 0x4000, 0x02,
	0x3892, 0x3600, 0x02,
	0x3C1E, 0x0100, 0x02,

};

const u32 sensor_3l6_setfile_B_1028x772_120fps[] = {
	/*mode change	FAST AE (4:3) */
	0x314A, 0x5F00, 0x02,
	0x3064, 0xFFCF, 0x02,
	0x3066, 0x7E00, 0x02,
	0x309C, 0x0640, 0x02,
	0x380C, 0x0046, 0x02,
	0x32B2, 0x0006, 0x02,
	0x32B4, 0x0006, 0x02,
	0x32B6, 0x0006, 0x02,
	0x32B8, 0x0006, 0x02,
	0x3090, 0x8000, 0x02,
	0x3238, 0x000A, 0x02,
	0x0100, 0x0000, 0x02,
	0x0344, 0x0038, 0x02,
	0x0348, 0x1047, 0x02,
	0x0346, 0x0018, 0x02,
	0x034A, 0x0C27, 0x02,
	0x034C, 0x0404, 0x02,
	0x034E, 0x0304, 0x02,
	0x0202, 0x0329, 0x02,
	0x3400, 0x0000, 0x02,
	0x3402, 0x4E46, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0304, 0x0003, 0x02,
	0x0306, 0x0053, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x005C, 0x02,
	0x3C16, 0x0000, 0x02,
	0x0342, 0x1320, 0x02,
	0x0340, 0x0330, 0x02,
	0x0900, 0x0144, 0x02,
	0x0386, 0x0007, 0x02,
	0x3452, 0x0000, 0x02,
	0x345A, 0x0000, 0x02,
	0x345C, 0x0000, 0x02,
	0x345E, 0x0000, 0x02,
	0x3460, 0x0000, 0x02,
	0x38C4, 0x0009, 0x02,
	0x38D8, 0x002A, 0x02,
	0x38DA, 0x000A, 0x02,
	0x38DC, 0x000B, 0x02,
	0x38C2, 0x000A, 0x02,
	0x38C0, 0x000F, 0x02,
	0x38D6, 0x000A, 0x02,
	0x38D4, 0x0009, 0x02,
	0x38B0, 0x000F, 0x02,
	0x3932, 0x1000, 0x02,
	0x0820, 0x04AC, 0x02,
	0x3C34, 0x0008, 0x02,
	0x3C36, 0x2800, 0x02,
	0x3C38, 0x0028, 0x02,
	0x393E, 0x4000, 0x02,
	0x3892, 0x3600, 0x02,
	0x3C1E, 0x0100, 0x02,

};

const u32 sensor_3l6_setfile_B_2064x1548_30fps[] = {
	/*mode change	VT call (4:3) */
	0x314A, 0x5F00, 0x02,
	0x3064, 0xFFCF, 0x02,
	0x3066, 0x7E00, 0x02,
	0x309C, 0x0640, 0x02,
	0x380C, 0x004A, 0x02,
	0x32B2, 0x0000, 0x02,
	0x32B4, 0x0000, 0x02,
	0x32B6, 0x0000, 0x02,
	0x32B8, 0x0000, 0x02,
	0x3090, 0x8800, 0x02,
	0x3238, 0x000C, 0x02,
	0x0100, 0x0000, 0x02,
	0x0344, 0x0030, 0x02,
	0x0348, 0x104F, 0x02,
	0x0346, 0x0014, 0x02,
	0x034A, 0x0C2B, 0x02,
	0x034C, 0x0810, 0x02,
	0x034E, 0x060C, 0x02,
	0x0202, 0x03DE, 0x02,
	0x3400, 0x0000, 0x02,
	0x3402, 0x4E42, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0304, 0x0003, 0x02,
	0x0306, 0x0053, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x005C, 0x02,
	0x3C16, 0x0000, 0x02,
	0x0342, 0x1320, 0x02,
	0x0340, 0x0CC1, 0x02,
	0x0900, 0x0122, 0x02,
	0x0386, 0x0003, 0x02,
	0x3452, 0x0000, 0x02,
	0x345A, 0x0000, 0x02,
	0x345C, 0x0000, 0x02,
	0x345E, 0x0000, 0x02,
	0x3460, 0x0000, 0x02,
	0x38C4, 0x0009, 0x02,
	0x38D8, 0x002A, 0x02,
	0x38DA, 0x000A, 0x02,
	0x38DC, 0x000B, 0x02,
	0x38C2, 0x000A, 0x02,
	0x38C0, 0x000F, 0x02,
	0x38D6, 0x000A, 0x02,
	0x38D4, 0x0009, 0x02,
	0x38B0, 0x000F, 0x02,
	0x3932, 0x1000, 0x02,
	0x0820, 0x04AC, 0x02,
	0x3C34, 0x0008, 0x02,
	0x3C36, 0x2800, 0x02,
	0x3C38, 0x0028, 0x02,
	0x393E, 0x4000, 0x02,
	0x3892, 0x3600, 0x02,
	0x3C1E, 0x0100, 0x02,
};

const u32 sensor_3l6_setfile_B_2064x1160_30fps[] = {
	/*mode change	VT call (16:9) */
	0x314A, 0x5F00, 0x02,
	0x3064, 0xFFCF, 0x02,
	0x3066, 0x7E00, 0x02,
	0x309C, 0x0640, 0x02,
	0x380C, 0x004A, 0x02,
	0x32B2, 0x0000, 0x02,
	0x32B4, 0x0000, 0x02,
	0x32B6, 0x0000, 0x02,
	0x32B8, 0x0000, 0x02,
	0x3090, 0x8800, 0x02,
	0x3238, 0x000C, 0x02,
	0x0100, 0x0000, 0x02,
	0x0344, 0x0030, 0x02,
	0x0348, 0x104F, 0x02,
	0x0346, 0x0198, 0x02,
	0x034A, 0x0AA7, 0x02,
	0x034C, 0x0810, 0x02,
	0x034E, 0x0488, 0x02,
	0x0202, 0x03DE, 0x02,
	0x3400, 0x0000, 0x02,
	0x3402, 0x4E42, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0304, 0x0003, 0x02,
	0x0306, 0x0053, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x005C, 0x02,
	0x3C16, 0x0000, 0x02,
	0x0342, 0x1320, 0x02,
	0x0340, 0x0CC1, 0x02,
	0x0900, 0x0122, 0x02,
	0x0386, 0x0003, 0x02,
	0x3452, 0x0000, 0x02,
	0x345A, 0x0000, 0x02,
	0x345C, 0x0000, 0x02,
	0x345E, 0x0000, 0x02,
	0x3460, 0x0000, 0x02,
	0x38C4, 0x0009, 0x02,
	0x38D8, 0x002A, 0x02,
	0x38DA, 0x000A, 0x02,
	0x38DC, 0x000B, 0x02,
	0x38C2, 0x000A, 0x02,
	0x38C0, 0x000F, 0x02,
	0x38D6, 0x000A, 0x02,
	0x38D4, 0x0009, 0x02,
	0x38B0, 0x000F, 0x02,
	0x3932, 0x1000, 0x02,
	0x0820, 0x04AC, 0x02,
	0x3C34, 0x0008, 0x02,
	0x3C36, 0x2800, 0x02,
	0x3C38, 0x0028, 0x02,
	0x393E, 0x4000, 0x02,
	0x3892, 0x3600, 0x02,
	0x3C1E, 0x0100, 0x02,
};

const u32 sensor_3l6_setfile_B_1696x1272_30fps[] = {
	/*mode change	VT call crop (4:3) */
	0x314A, 0x5F00, 0x02,
	0x3064, 0xFFCF, 0x02,
	0x3066, 0x7E00, 0x02,
	0x309C, 0x0640, 0x02,
	0x380C, 0x004A, 0x02,
	0x32B2, 0x0000, 0x02,
	0x32B4, 0x0000, 0x02,
	0x32B6, 0x0000, 0x02,
	0x32B8, 0x0000, 0x02,
	0x3090, 0x8800, 0x02,
	0x3238, 0x000C, 0x02,
	0x0100, 0x0000, 0x02,
	0x0344, 0x01A0, 0x02,
	0x0348, 0x0EDF, 0x02,
	0x0346, 0x0128, 0x02,
	0x034A, 0x0B17, 0x02,
	0x034C, 0x06A0, 0x02,
	0x034E, 0x04F8, 0x02,
	0x0202, 0x03DE, 0x02,
	0x3400, 0x0000, 0x02,
	0x3402, 0x4E42, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0304, 0x0003, 0x02,
	0x0306, 0x0053, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x005C, 0x02,
	0x3C16, 0x0000, 0x02,
	0x0342, 0x1320, 0x02,
	0x0340, 0x0CC1, 0x02,
	0x0900, 0x0122, 0x02,
	0x0386, 0x0003, 0x02,
	0x3452, 0x0000, 0x02,
	0x345A, 0x0000, 0x02,
	0x345C, 0x0000, 0x02,
	0x345E, 0x0000, 0x02,
	0x3460, 0x0000, 0x02,
	0x38C4, 0x0009, 0x02,
	0x38D8, 0x002A, 0x02,
	0x38DA, 0x000A, 0x02,
	0x38DC, 0x000B, 0x02,
	0x38C2, 0x000A, 0x02,
	0x38C0, 0x000F, 0x02,
	0x38D6, 0x000A, 0x02,
	0x38D4, 0x0009, 0x02,
	0x38B0, 0x000F, 0x02,
	0x3932, 0x1000, 0x02,
	0x0820, 0x04AC, 0x02,
	0x3C34, 0x0008, 0x02,
	0x3C36, 0x2800, 0x02,
	0x3C38, 0x0028, 0x02,
	0x393E, 0x4000, 0x02,
	0x3892, 0x3600, 0x02,
	0x3C1E, 0x0100, 0x02,
};

const u32 sensor_3l6_setfile_B_1856x1044_30fps[] = {
	/*mode change	VT call crop (16:9) */
	0x314A, 0x5F00, 0x02,
	0x3064, 0xFFCF, 0x02,
	0x3066, 0x7E00, 0x02,
	0x309C, 0x0640, 0x02,
	0x380C, 0x004A, 0x02,
	0x32B2, 0x0000, 0x02,
	0x32B4, 0x0000, 0x02,
	0x32B6, 0x0000, 0x02,
	0x32B8, 0x0000, 0x02,
	0x3090, 0x8800, 0x02,
	0x3238, 0x000C, 0x02,
	0x0100, 0x0000, 0x02,
	0x0344, 0x0100, 0x02,
	0x0348, 0x0F7F, 0x02,
	0x0346, 0x020C, 0x02,
	0x034A, 0x0A33, 0x02,
	0x034C, 0x0740, 0x02,
	0x034E, 0x0414, 0x02,
	0x0202, 0x03DE, 0x02,
	0x3400, 0x0000, 0x02,
	0x3402, 0x4E42, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0304, 0x0003, 0x02,
	0x0306, 0x0053, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x005C, 0x02,
	0x3C16, 0x0000, 0x02,
	0x0342, 0x1320, 0x02,
	0x0340, 0x0CC1, 0x02,
	0x0900, 0x0122, 0x02,
	0x0386, 0x0003, 0x02,
	0x3452, 0x0000, 0x02,
	0x345A, 0x0000, 0x02,
	0x345C, 0x0000, 0x02,
	0x345E, 0x0000, 0x02,
	0x3460, 0x0000, 0x02,
	0x38C4, 0x0009, 0x02,
	0x38D8, 0x002A, 0x02,
	0x38DA, 0x000A, 0x02,
	0x38DC, 0x000B, 0x02,
	0x38C2, 0x000A, 0x02,
	0x38C0, 0x000F, 0x02,
	0x38D6, 0x000A, 0x02,
	0x38D4, 0x0009, 0x02,
	0x38B0, 0x000F, 0x02,
	0x3932, 0x1000, 0x02,
	0x0820, 0x04AC, 0x02,
	0x3C34, 0x0008, 0x02,
	0x3C36, 0x2800, 0x02,
	0x3C38, 0x0028, 0x02,
	0x393E, 0x4000, 0x02,
	0x3892, 0x3600, 0x02,
	0x3C1E, 0x0100, 0x02,
};

const struct sensor_pll_info_compact sensor_3l6_pllinfo_B_4128x3096_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000,                  /* mipi_datarate = OPSYCK */
	480000000,                   /* pclk = VTPXCK of Clock Information */
	0x0CC1, /* frame_length_lines	(0x0341) */
	0x1320, /* line_length_pck	(0x0343) */

};

const struct sensor_pll_info_compact sensor_3l6_pllinfo_B_4128x2324_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000,                  /* mipi_datarate = OPSYCK */
	480000000,                   /* pclk = VTPXCK of Clock Information */
	0x0CC1, /* frame_length_lines	(0x0341) */
	0x1320, /* line_length_pck	(0x0343) */

};

const struct sensor_pll_info_compact sensor_3l6_pllinfo_B_3408x2556_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000,                  /* mipi_datarate = OPSYCK */
	480000000,                   /* pclk = VTPXCK of Clock Information */
	0x0CC1, /* frame_length_lines	(0x0341) */
	0x1320, /* line_length_pck	(0x0343) */
};

const struct sensor_pll_info_compact sensor_3l6_pllinfo_B_3408x1916_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000,                  /* mipi_datarate = OPSYCK */
	480000000,                   /* pclk = VTPXCK of Clock Information */
	0x0CC1, /* frame_length_lines	(0x0341) */
	0x1320, /* line_length_pck	(0x0343) */
};

const struct sensor_pll_info_compact sensor_3l6_pllinfo_B_1028x772_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000,                  /* mipi_datarate = OPSYCK */
	480000000,                   /* pclk = VTPXCK of Clock Information */
	0x0330, /* frame_length_lines	(0x0341) */
	0x1320, /* line_length_pck	(0x0343) */
};

const struct sensor_pll_info_compact sensor_3l6_pllinfo_B_2064x1548_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000,                  /* mipi_datarate = OPSYCK */
	480000000,                   /* pclk = VTPXCK of Clock Information */
	0x0CC1, /* frame_length_lines	(0x0341) */
	0x1320, /* line_length_pck	(0x0343) */
};

const struct sensor_pll_info_compact sensor_3l6_pllinfo_B_2064x1160_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000,                  /* mipi_datarate = OPSYCK */
	480000000,                   /* pclk = VTPXCK of Clock Information */
	0x0CC1, /* frame_length_lines	(0x0341) */
	0x1320, /* line_length_pck	(0x0343) */
};

const struct sensor_pll_info_compact sensor_3l6_pllinfo_B_1696x1272_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000,                  /* mipi_datarate = OPSYCK */
	480000000,                   /* pclk = VTPXCK of Clock Information */
	0x0CC1, /* frame_length_lines	(0x0341) */
	0x1320, /* line_length_pck	(0x0343) */
};

const struct sensor_pll_info_compact sensor_3l6_pllinfo_B_1856x1044_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000,                  /* mipi_datarate = OPSYCK */
	480000000,                   /* pclk = VTPXCK of Clock Information */
	0x0CC1, /* frame_length_lines	(0x0341) */
	0x1320, /* line_length_pck	(0x0343) */
};

static const u32 *sensor_3l6_setfiles_B[] = {
	sensor_3l6_setfile_B_4128x3096_30fps,
	sensor_3l6_setfile_B_4128x2324_30fps,
	sensor_3l6_setfile_B_3408x2556_30fps,
	sensor_3l6_setfile_B_3408x1916_30fps,
	sensor_3l6_setfile_B_1028x772_120fps,
	sensor_3l6_setfile_B_2064x1548_30fps,
	sensor_3l6_setfile_B_2064x1160_30fps,
	sensor_3l6_setfile_B_1696x1272_30fps,
	sensor_3l6_setfile_B_1856x1044_30fps,
};

static const u32 sensor_3l6_setfile_B_sizes[] = {
	sizeof(sensor_3l6_setfile_B_4128x3096_30fps) / sizeof(sensor_3l6_setfile_B_4128x3096_30fps[0]),
	sizeof(sensor_3l6_setfile_B_4128x2324_30fps) / sizeof(sensor_3l6_setfile_B_4128x2324_30fps[0]),
	sizeof(sensor_3l6_setfile_B_3408x2556_30fps) / sizeof(sensor_3l6_setfile_B_3408x2556_30fps[0]),
	sizeof(sensor_3l6_setfile_B_3408x1916_30fps) / sizeof(sensor_3l6_setfile_B_3408x1916_30fps[0]),
	sizeof(sensor_3l6_setfile_B_1028x772_120fps) / sizeof(sensor_3l6_setfile_B_1028x772_120fps[0]),
	sizeof(sensor_3l6_setfile_B_2064x1548_30fps) / sizeof(sensor_3l6_setfile_B_2064x1548_30fps[0]),
	sizeof(sensor_3l6_setfile_B_2064x1160_30fps) / sizeof(sensor_3l6_setfile_B_2064x1160_30fps[0]),
	sizeof(sensor_3l6_setfile_B_1696x1272_30fps) / sizeof(sensor_3l6_setfile_B_1696x1272_30fps[0]),
	sizeof(sensor_3l6_setfile_B_1856x1044_30fps) / sizeof(sensor_3l6_setfile_B_1856x1044_30fps[0]),
};

static const struct sensor_pll_info_compact *sensor_3l6_pllinfos_B[] = {
	&sensor_3l6_pllinfo_B_4128x3096_30fps,
	&sensor_3l6_pllinfo_B_4128x2324_30fps,
	&sensor_3l6_pllinfo_B_3408x2556_30fps,
	&sensor_3l6_pllinfo_B_3408x1916_30fps,
	&sensor_3l6_pllinfo_B_1028x772_120fps,
	&sensor_3l6_pllinfo_B_2064x1548_30fps,
	&sensor_3l6_pllinfo_B_2064x1160_30fps,
	&sensor_3l6_pllinfo_B_1696x1272_30fps,
	&sensor_3l6_pllinfo_B_1856x1044_30fps,
};

static const struct sensor_cis_info sensor_3l6_info_B = {
	.name = "3L6",
	.version = "3L6_EVT1_12M_Ver_0.4",
	.max_width = 4000,
	.max_height = 3000,
	.min_analog_gain = 0x20,
	.min_digital_gain = 0x100,
	.fine_integration_time = 0x0,
};

#endif
