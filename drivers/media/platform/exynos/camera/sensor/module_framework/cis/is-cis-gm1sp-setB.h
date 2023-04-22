/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2018 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_GM1SP_SET_B_H
#define IS_CIS_GM1SP_SET_B_H

#include "is-cis.h"
#include "is-cis-gm1sp.h"

const u32 sensor_gm1sp_setfile_B_Global[] = {
	0x6028, 0x4000, 0x2,
	0x0000, 0x0005, 0x2,
	0x0000, 0x08D1, 0x2,
	0x6010, 0x0001, 0x2,
	IXC_MODE_DELAY, 3000, 0x00,
	0x6214, 0x7971, 0x2,
	0x6218, 0x7150, 0x2,
	0x0A02, 0x0074, 0x2,
	0x6028, 0x2000, 0x2,
	0x602A, 0x3F5C, 0x2,
	0x6F12, 0x0000, 0x2,
	0x6F12, 0x0000, 0x2,
	0x6F12, 0x0549, 0x2,
	0x6F12, 0x0448, 0x2,
	0x6F12, 0x054A, 0x2,
	0x6F12, 0xC1F8, 0x2,
	0x6F12, 0x5005, 0x2,
	0x6F12, 0x101A, 0x2,
	0x6F12, 0xA1F8, 0x2,
	0x6F12, 0x5405, 0x2,
	0x6F12, 0x00F0, 0x2,
	0x6F12, 0xD9B8, 0x2,
	0x6F12, 0x2000, 0x2,
	0x6F12, 0x41DC, 0x2,
	0x6F12, 0x2000, 0x2,
	0x6F12, 0x2E30, 0x2,
	0x6F12, 0x2000, 0x2,
	0x6F12, 0x6E00, 0x2,
	0x6F12, 0x2DE9, 0x2,
	0x6F12, 0xFF5F, 0x2,
	0x6F12, 0x7448, 0x2,
	0x6F12, 0x8B46, 0x2,
	0x6F12, 0x1746, 0x2,
	0x6F12, 0x0068, 0x2,
	0x6F12, 0x9A46, 0x2,
	0x6F12, 0x4FEA, 0x2,
	0x6F12, 0x1049, 0x2,
	0x6F12, 0x80B2, 0x2,
	0x6F12, 0x8046, 0x2,
	0x6F12, 0x0146, 0x2,
	0x6F12, 0x0022, 0x2,
	0x6F12, 0x4846, 0x2,
	0x6F12, 0x00F0, 0x2,
	0x6F12, 0xECF8, 0x2,
	0x6F12, 0x6E4D, 0x2,
	0x6F12, 0x95F8, 0x2,
	0x6F12, 0x6D00, 0x2,
	0x6F12, 0x0228, 0x2,
	0x6F12, 0x35D0, 0x2,
	0x6F12, 0x0224, 0x2,
	0x6F12, 0x6C4E, 0x2,
	0x6F12, 0x5346, 0x2,
	0x6F12, 0xB6F8, 0x2,
	0x6F12, 0xB802, 0x2,
	0x6F12, 0xB0FB, 0x2,
	0x6F12, 0xF4F0, 0x2,
	0x6F12, 0xA6F8, 0x2,
	0x6F12, 0xB802, 0x2,
	0x6F12, 0xD5F8, 0x2,
	0x6F12, 0x1411, 0x2,
	0x6F12, 0x06F5, 0x2,
	0x6F12, 0x2E76, 0x2,
	0x6F12, 0x6143, 0x2,
	0x6F12, 0xC5F8, 0x2,
	0x6F12, 0x1411, 0x2,
	0x6F12, 0xB5F8, 0x2,
	0x6F12, 0x8C11, 0x2,
	0x6F12, 0x411A, 0x2,
	0x6F12, 0x89B2, 0x2,
	0x6F12, 0x25F8, 0x2,
	0x6F12, 0x981B, 0x2,
	0x6F12, 0x35F8, 0x2,
	0x6F12, 0x142C, 0x2,
	0x6F12, 0x6243, 0x2,
	0x6F12, 0x521E, 0x2,
	0x6F12, 0x00FB, 0x2,
	0x6F12, 0x0210, 0x2,
	0x6F12, 0xB5F8, 0x2,
	0x6F12, 0xF210, 0x2,
	0x6F12, 0x07FB, 0x2,
	0x6F12, 0x04F2, 0x2,
	0x6F12, 0x0844, 0x2,
	0x6F12, 0xC5F8, 0x2,
	0x6F12, 0xF800, 0x2,
	0x6F12, 0x5946, 0x2,
	0x6F12, 0x0098, 0x2,
	0x6F12, 0x00F0, 0x2,
	0x6F12, 0xC5F8, 0x2,
	0x6F12, 0x3088, 0x2,
	0x6F12, 0x4146, 0x2,
	0x6F12, 0x6043, 0x2,
	0x6F12, 0x3080, 0x2,
	0x6F12, 0xE86F, 0x2,
	0x6F12, 0x0122, 0x2,
	0x6F12, 0xB0FB, 0x2,
	0x6F12, 0xF4F0, 0x2,
	0x6F12, 0xE867, 0x2,
	0x6F12, 0x04B0, 0x2,
	0x6F12, 0x4846, 0x2,
	0x6F12, 0xBDE8, 0x2,
	0x6F12, 0xF05F, 0x2,
	0x6F12, 0x00F0, 0x2,
	0x6F12, 0xB1B8, 0x2,
	0x6F12, 0x0124, 0x2,
	0x6F12, 0xC8E7, 0x2,
	0x6F12, 0x2DE9, 0x2,
	0x6F12, 0xF041, 0x2,
	0x6F12, 0x8046, 0x2,
	0x6F12, 0x4D48, 0x2,
	0x6F12, 0x0022, 0x2,
	0x6F12, 0x4168, 0x2,
	0x6F12, 0x0D0C, 0x2,
	0x6F12, 0x8EB2, 0x2,
	0x6F12, 0x3146, 0x2,
	0x6F12, 0x2846, 0x2,
	0x6F12, 0x00F0, 0x2,
	0x6F12, 0xA3F8, 0x2,
	0x6F12, 0x4C4C, 0x2,
	0x6F12, 0x4A4F, 0x2,
	0x6F12, 0x2078, 0x2,
	0x6F12, 0x97F8, 0x2,
	0x6F12, 0x8B12, 0x2,
	0x6F12, 0x10FB, 0x2,
	0x6F12, 0x01F0, 0x2,
	0x6F12, 0x2070, 0x2,
	0x6F12, 0x4046, 0x2,
	0x6F12, 0x00F0, 0x2,
	0x6F12, 0xA2F8, 0x2,
	0x6F12, 0x2078, 0x2,
	0x6F12, 0x97F8, 0x2,
	0x6F12, 0x8B12, 0x2,
	0x6F12, 0x0122, 0x2,
	0x6F12, 0xB0FB, 0x2,
	0x6F12, 0xF1F0, 0x2,
	0x6F12, 0x2070, 0x2,
	0x6F12, 0x3146, 0x2,
	0x6F12, 0x2846, 0x2,
	0x6F12, 0xBDE8, 0x2,
	0x6F12, 0xF041, 0x2,
	0x6F12, 0x00F0, 0x2,
	0x6F12, 0x8BB8, 0x2,
	0x6F12, 0x2DE9, 0x2,
	0x6F12, 0xFF47, 0x2,
	0x6F12, 0x8146, 0x2,
	0x6F12, 0x3B48, 0x2,
	0x6F12, 0x1746, 0x2,
	0x6F12, 0x8846, 0x2,
	0x6F12, 0x8068, 0x2,
	0x6F12, 0x1C46, 0x2,
	0x6F12, 0x85B2, 0x2,
	0x6F12, 0x060C, 0x2,
	0x6F12, 0x0022, 0x2,
	0x6F12, 0x2946, 0x2,
	0x6F12, 0x3046, 0x2,
	0x6F12, 0x00F0, 0x2,
	0x6F12, 0x7CF8, 0x2,
	0x6F12, 0x2346, 0x2,
	0x6F12, 0x3A46, 0x2,
	0x6F12, 0x4146, 0x2,
	0x6F12, 0x4846, 0x2,
	0x6F12, 0x00F0, 0x2,
	0x6F12, 0x85F8, 0x2,
	0x6F12, 0x364A, 0x2,
	0x6F12, 0x9088, 0x2,
	0x6F12, 0xF0B3, 0x2,
	0x6F12, 0x3348, 0x2,
	0x6F12, 0x90F8, 0x2,
	0x6F12, 0xBA10, 0x2,
	0x6F12, 0xD1B3, 0x2,
	0x6F12, 0xD0F8, 0x2,
	0x6F12, 0x2801, 0x2,
	0x6F12, 0x1168, 0x2,
	0x6F12, 0x8842, 0x2,
	0x6F12, 0x00D3, 0x2,
	0x6F12, 0x0846, 0x2,
	0x6F12, 0x010A, 0x2,
	0x6F12, 0xB1FA, 0x2,
	0x6F12, 0x81F0, 0x2,
	0x6F12, 0xC0F1, 0x2,
	0x6F12, 0x1700, 0x2,
	0x6F12, 0xC140, 0x2,
	0x6F12, 0x02EB, 0x2,
	0x6F12, 0x4000, 0x2,
	0x6F12, 0xC9B2, 0x2,
	0x6F12, 0x0389, 0x2,
	0x6F12, 0xC288, 0x2,
	0x6F12, 0x9B1A, 0x2,
	0x6F12, 0x4B43, 0x2,
	0x6F12, 0x8033, 0x2,
	0x6F12, 0x02EB, 0x2,
	0x6F12, 0x2322, 0x2,
	0x6F12, 0x0092, 0x2,
	0x6F12, 0x438A, 0x2,
	0x6F12, 0x028A, 0x2,
	0x6F12, 0x9B1A, 0x2,
	0x6F12, 0x4B43, 0x2,
	0x6F12, 0x8033, 0x2,
	0x6F12, 0x02EB, 0x2,
	0x6F12, 0x2322, 0x2,
	0x6F12, 0x0192, 0x2,
	0x6F12, 0x838B, 0x2,
	0x6F12, 0x428B, 0x2,
	0x6F12, 0x9B1A, 0x2,
	0x6F12, 0x4B43, 0x2,
	0x6F12, 0x8033, 0x2,
	0x6F12, 0x02EB, 0x2,
	0x6F12, 0x2322, 0x2,
	0x6F12, 0x0292, 0x2,
	0x6F12, 0xC28C, 0x2,
	0x6F12, 0x808C, 0x2,
	0x6F12, 0x121A, 0x2,
	0x6F12, 0x4A43, 0x2,
	0x6F12, 0x8032, 0x2,
	0x6F12, 0x00EB, 0x2,
	0x6F12, 0x2220, 0x2,
	0x6F12, 0x0390, 0x2,
	0x6F12, 0x0022, 0x2,
	0x6F12, 0x6846, 0x2,
	0x6F12, 0x54F8, 0x2,
	0x6F12, 0x2210, 0x2,
	0x6F12, 0x50F8, 0x2,
	0x6F12, 0x2230, 0x2,
	0x6F12, 0x5943, 0x2,
	0x6F12, 0x090B, 0x2,
	0x6F12, 0x44F8, 0x2,
	0x6F12, 0x2210, 0x2,
	0x6F12, 0x521C, 0x2,
	0x6F12, 0x00E0, 0x2,
	0x6F12, 0x01E0, 0x2,
	0x6F12, 0x042A, 0x2,
	0x6F12, 0xF2D3, 0x2,
	0x6F12, 0x04B0, 0x2,
	0x6F12, 0x2946, 0x2,
	0x6F12, 0x3046, 0x2,
	0x6F12, 0xBDE8, 0x2,
	0x6F12, 0xF047, 0x2,
	0x6F12, 0x0122, 0x2,
	0x6F12, 0x00F0, 0x2,
	0x6F12, 0x29B8, 0x2,
	0x6F12, 0x10B5, 0x2,
	0x6F12, 0x0022, 0x2,
	0x6F12, 0xAFF2, 0x2,
	0x6F12, 0xAB11, 0x2,
	0x6F12, 0x0F48, 0x2,
	0x6F12, 0x00F0, 0x2,
	0x6F12, 0x36F8, 0x2,
	0x6F12, 0x084C, 0x2,
	0x6F12, 0x0122, 0x2,
	0x6F12, 0xAFF2, 0x2,
	0x6F12, 0x2111, 0x2,
	0x6F12, 0x2060, 0x2,
	0x6F12, 0x0C48, 0x2,
	0x6F12, 0x00F0, 0x2,
	0x6F12, 0x2EF8, 0x2,
	0x6F12, 0x0022, 0x2,
	0x6F12, 0xAFF2, 0x2,
	0x6F12, 0xE501, 0x2,
	0x6F12, 0x6060, 0x2,
	0x6F12, 0x0948, 0x2,
	0x6F12, 0x00F0, 0x2,
	0x6F12, 0x27F8, 0x2,
	0x6F12, 0xA060, 0x2,
	0x6F12, 0x10BD, 0x2,
	0x6F12, 0x0000, 0x2,
	0x6F12, 0x2000, 0x2,
	0x6F12, 0x41D0, 0x2,
	0x6F12, 0x2000, 0x2,
	0x6F12, 0x2C30, 0x2,
	0x6F12, 0x2000, 0x2,
	0x6F12, 0x2E30, 0x2,
	0x6F12, 0x2000, 0x2,
	0x6F12, 0x2580, 0x2,
	0x6F12, 0x2000, 0x2,
	0x6F12, 0x6000, 0x2,
	0x6F12, 0x0000, 0x2,
	0x6F12, 0x24A7, 0x2,
	0x6F12, 0x0001, 0x2,
	0x6F12, 0x1AF3, 0x2,
	0x6F12, 0x0001, 0x2,
	0x6F12, 0x09BD, 0x2,
	0x6F12, 0x4AF6, 0x2,
	0x6F12, 0x293C, 0x2,
	0x6F12, 0xC0F2, 0x2,
	0x6F12, 0x000C, 0x2,
	0x6F12, 0x6047, 0x2,
	0x6F12, 0x42F2, 0x2,
	0x6F12, 0xA74C, 0x2,
	0x6F12, 0xC0F2, 0x2,
	0x6F12, 0x000C, 0x2,
	0x6F12, 0x6047, 0x2,
	0x6F12, 0x41F6, 0x2,
	0x6F12, 0xF32C, 0x2,
	0x6F12, 0xC0F2, 0x2,
	0x6F12, 0x010C, 0x2,
	0x6F12, 0x6047, 0x2,
	0x6F12, 0x40F6, 0x2,
	0x6F12, 0xBD1C, 0x2,
	0x6F12, 0xC0F2, 0x2,
	0x6F12, 0x010C, 0x2,
	0x6F12, 0x6047, 0x2,
	0x6F12, 0x4BF2, 0x2,
	0x6F12, 0xAB4C, 0x2,
	0x6F12, 0xC0F2, 0x2,
	0x6F12, 0x000C, 0x2,
	0x6F12, 0x6047, 0x2,
	0x6F12, 0x0000, 0x2,
	0x6F12, 0x0000, 0x2,
	0x6F12, 0x0000, 0x2,
	0x6F12, 0x08D1, 0x2,
	0x6F12, 0x0068, 0x2,
	0x6F12, 0x0000, 0x2,
	0x6F12, 0x0007, 0x2,
};

/*
 * [Mode Information]
 *	0: [MCLK:26,Width:4000,Height:3000,Format:MIPI_RAW10,mipi_lane:4,mipi_datarate:1152,pvi_pclk_inverse:0]
 */

/* Tail off, PDC on */
const u32 sensor_gm1sp_setfile_B_4000x3000_30fps[] = {
	0x6028, 0x4000, 0x2,
	0x6214, 0x7971, 0x2,
	0x6218, 0x7150, 0x2,
	0x0344, 0x0008, 0x2,
	0x0346, 0x0008, 0x2,
	0x0348, 0x0FA7, 0x2,
	0x034A, 0x0BBF, 0x2,
	0x034C, 0x0FA0, 0x2,
	0x034E, 0x0BB8, 0x2,
	0x0350, 0x0000, 0x2,
	0x0352, 0x0000, 0x2,
	0x0340, 0x0C84, 0x2,
	0x0342, 0x13A0, 0x2,
	0x0900, 0x0111, 0x2,
	0x0380, 0x0001, 0x2,
	0x0382, 0x0001, 0x2,
	0x0384, 0x0001, 0x2,
	0x0386, 0x0001, 0x2,
	0x0404, 0x1000, 0x2,
	0x0402, 0x1010, 0x2,
	0x0136, 0x1A00, 0x2,
	0x0304, 0x0006, 0x2,
	0x030C, 0x0000, 0x2,
	0x0306, 0x00DF, 0x2,
	0x0302, 0x0001, 0x2,
	0x0300, 0x0008, 0x2,
	0x030E, 0x0003, 0x2,
	0x0312, 0x0001, 0x2,
	0x0310, 0x0085, 0x2,
	0x6028, 0x2000, 0x2,
	0x602A, 0x1492, 0x2,
	0x6F12, 0x0078, 0x2,
	0x602A, 0x0E4E, 0x2,
	0x6F12, 0x007A, 0x2,
	0x6028, 0x4000, 0x2,
	0x0118, 0x0004, 0x2,
	0x021E, 0x0000, 0x2,
	0x6028, 0x2000, 0x2,
	0x602A, 0x2126, 0x2,
	0x6F12, 0x0100, 0x2,
	0x602A, 0x1168, 0x2,
	0x6F12, 0x0020, 0x2,
	0x602A, 0x2DB6, 0x2,
	0x6F12, 0x0001, 0x2,
	0x602A, 0x1668, 0x2,
	0x6F12, 0xF0F0, 0x2,
	0x602A, 0x166A, 0x2,
	0x6F12, 0xF0F0, 0x2,
	0x602A, 0x118A, 0x2,
	0x6F12, 0x0802, 0x2,
	0x602A, 0x151E, 0x2,
	0x6F12, 0x0001, 0x2,
	0x602A, 0x217E, 0x2,
	0x6F12, 0x0001, 0x2,
	0x602A, 0x1520, 0x2,
	0x6F12, 0x0008, 0x2,
	0x602A, 0x2522, 0x2,
	0x6F12, 0x0804, 0x2,
	0x602A, 0x2524, 0x2,
	0x6F12, 0x0400, 0x2,
	0x602A, 0x2568, 0x2,
	0x6F12, 0x5500, 0x2,
	0x602A, 0x2588, 0x2,
	0x6F12, 0x1111, 0x2,
	0x602A, 0x258C, 0x2,
	0x6F12, 0x1111, 0x2,
	0x602A, 0x25A6, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x252C, 0x2,
	0x6F12, 0x0601, 0x2,
	0x602A, 0x252E, 0x2,
	0x6F12, 0x0605, 0x2,
	0x602A, 0x25A8, 0x2,
	0x6F12, 0x1100, 0x2,
	0x602A, 0x25AC, 0x2,
	0x6F12, 0x0011, 0x2,
	0x602A, 0x25B0, 0x2,
	0x6F12, 0x1100, 0x2,
	0x602A, 0x25B4, 0x2,
	0x6F12, 0x0011, 0x2,
	0x602A, 0x15A4, 0x2,
	0x6F12, 0x0141, 0x2,
	0x602A, 0x15A6, 0x2,
	0x6F12, 0x0545, 0x2,
	0x602A, 0x15A8, 0x2,
	0x6F12, 0x0649, 0x2,
	0x602A, 0x15AA, 0x2,
	0x6F12, 0x024D, 0x2,
	0x602A, 0x15AC, 0x2,
	0x6F12, 0x0151, 0x2,
	0x602A, 0x15AE, 0x2,
	0x6F12, 0x0555, 0x2,
	0x602A, 0x15B0, 0x2,
	0x6F12, 0x0659, 0x2,
	0x602A, 0x15B2, 0x2,
	0x6F12, 0x025D, 0x2,
	0x602A, 0x15B4, 0x2,
	0x6F12, 0x0161, 0x2,
	0x602A, 0x15B6, 0x2,
	0x6F12, 0x0565, 0x2,
	0x602A, 0x15B8, 0x2,
	0x6F12, 0x0669, 0x2,
	0x602A, 0x15BA, 0x2,
	0x6F12, 0x026D, 0x2,
	0x602A, 0x15BC, 0x2,
	0x6F12, 0x0171, 0x2,
	0x602A, 0x15BE, 0x2,
	0x6F12, 0x0575, 0x2,
	0x602A, 0x15C0, 0x2,
	0x6F12, 0x0679, 0x2,
	0x602A, 0x15C2, 0x2,
	0x6F12, 0x027D, 0x2,
	0x602A, 0x15C4, 0x2,
	0x6F12, 0x0141, 0x2,
	0x602A, 0x15C6, 0x2,
	0x6F12, 0x0545, 0x2,
	0x602A, 0x15C8, 0x2,
	0x6F12, 0x0649, 0x2,
	0x602A, 0x15CA, 0x2,
	0x6F12, 0x024D, 0x2,
	0x602A, 0x15CC, 0x2,
	0x6F12, 0x0151, 0x2,
	0x602A, 0x15CE, 0x2,
	0x6F12, 0x0555, 0x2,
	0x602A, 0x15D0, 0x2,
	0x6F12, 0x0659, 0x2,
	0x602A, 0x15D2, 0x2,
	0x6F12, 0x025D, 0x2,
	0x602A, 0x15D4, 0x2,
	0x6F12, 0x0161, 0x2,
	0x602A, 0x15D6, 0x2,
	0x6F12, 0x0565, 0x2,
	0x602A, 0x15D8, 0x2,
	0x6F12, 0x0669, 0x2,
	0x602A, 0x15DA, 0x2,
	0x6F12, 0x026D, 0x2,
	0x602A, 0x15DC, 0x2,
	0x6F12, 0x0171, 0x2,
	0x602A, 0x15DE, 0x2,
	0x6F12, 0x0575, 0x2,
	0x602A, 0x15E0, 0x2,
	0x6F12, 0x0679, 0x2,
	0x602A, 0x15E2, 0x2,
	0x6F12, 0x027D, 0x2,
	0x602A, 0x1A50, 0x2,
	0x6F12, 0x0001, 0x2,
	0x602A, 0x1A54, 0x2,
	0x6F12, 0x0100, 0x2,
	0x6028, 0x4000, 0x2,
	0x0D00, 0x0101, 0x2, /* PDC on */
	0x0D02, 0x0001, 0x2, /* Tail off */
	0x0114, 0x0300, 0x2,
	0x0202, 0x0010, 0x2,
	0x0226, 0x0010, 0x2,
	0x0204, 0x0020, 0x2,
	0x0B06, 0x0101, 0x2,
	0x6028, 0x2000, 0x2,
	0x602A, 0x107A, 0x2,
	0x6F12, 0x1D00, 0x2,
	0x602A, 0x1074, 0x2,
	0x6F12, 0x1D00, 0x2,
	0x602A, 0x0E7C, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1120, 0x2,
	0x6F12, 0x0200, 0x2,
	0x602A, 0x1122, 0x2,
	0x6F12, 0x0028, 0x2,
	0x602A, 0x1128, 0x2,
	0x6F12, 0x0604, 0x2,
	0x602A, 0x1AC0, 0x2,
	0x6F12, 0x0200, 0x2,
	0x602A, 0x1AC2, 0x2,
	0x6F12, 0x0002, 0x2,
	0x602A, 0x1494, 0x2,
	0x6F12, 0x3D68, 0x2,
	0x602A, 0x1498, 0x2,
	0x6F12, 0xF10D, 0x2,
	0x602A, 0x1488, 0x2,
	0x6F12, 0x0F04, 0x2,
	0x602A, 0x148A, 0x2,
	0x6F12, 0x170B, 0x2,
	0x602A, 0x150E, 0x2,
	0x6F12, 0x00C2, 0x2,
	0x602A, 0x1510, 0x2,
	0x6F12, 0xC0AF, 0x2,
	0x602A, 0x1512, 0x2,
	0x6F12, 0x00A0, 0x2,
	0x602A, 0x1486, 0x2,
	0x6F12, 0x1430, 0x2,
	0x602A, 0x1490, 0x2,
	0x6F12, 0x4D09, 0x2,
	0x602A, 0x149E, 0x2,
	0x6F12, 0x01C4, 0x2,
	0x602A, 0x11CC, 0x2,
	0x6F12, 0x0008, 0x2,
	0x602A, 0x11CE, 0x2,
	0x6F12, 0x000B, 0x2,
	0x602A, 0x11D0, 0x2,
	0x6F12, 0x0003, 0x2,
	0x602A, 0x11DA, 0x2,
	0x6F12, 0x0012, 0x2,
	0x602A, 0x11E6, 0x2,
	0x6F12, 0x002A, 0x2,
	0x602A, 0x125E, 0x2,
	0x6F12, 0x0048, 0x2,
	0x602A, 0x11F4, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x11F8, 0x2,
	0x6F12, 0x0016, 0x2,
	0x6028, 0x4000, 0x2,
	0xF444, 0x05BF, 0x2,
	0xF44A, 0x0008, 0x2,
	0xF44E, 0x0012, 0x2,
	0xF46E, 0x40C0, 0x2,
	0xF470, 0x7809, 0x2,
	0x6028, 0x2000, 0x2,
	0x602A, 0x1CAA, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CAC, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CAE, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CB0, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CB2, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CB4, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CB6, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CB8, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CBA, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CBC, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CBE, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CC0, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CC2, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CC4, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CC6, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CC8, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x6000, 0x2,
	0x6F12, 0x000F, 0x2,
	0x602A, 0x6002, 0x2,
	0x6F12, 0xFFFF, 0x2,
	0x602A, 0x6004, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x6006, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6008, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x600A, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x600C, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x600E, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6010, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6012, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6014, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6016, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6018, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x601A, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x601C, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x601E, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6020, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6022, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6024, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6026, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6028, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x602A, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x602C, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x1144, 0x2,
	0x6F12, 0x0100, 0x2,
	0x602A, 0x1146, 0x2,
	0x6F12, 0x1B00, 0x2,
	0x6028, 0x4000, 0x2,
};

/* Tail off, PDC on */
const u32 sensor_gm1sp_setfile_B_2000x1124_60fps[] = {
	0x6028, 0x4000, 0x2,
	0x6214, 0x7971, 0x2,
	0x6218, 0x7150, 0x2,
	0x0344, 0x0008, 0x2,
	0x0346, 0x0180, 0x2,
	0x0348, 0x0FA7, 0x2,
	0x034A, 0x0A47, 0x2,
	0x034C, 0x07D0, 0x2,
	0x034E, 0x0464, 0x2,
	0x0350, 0x0000, 0x2,
	0x0352, 0x0000, 0x2,
	0x0340, 0x063C, 0x2,
	0x0342, 0x13A0, 0x2,
	0x0900, 0x0112, 0x2,
	0x0380, 0x0001, 0x2,
	0x0382, 0x0001, 0x2,
	0x0384, 0x0001, 0x2,
	0x0386, 0x0003, 0x2,
	0x0404, 0x2000, 0x2,
	0x0402, 0x1010, 0x2,
	0x0136, 0x1A00, 0x2,
	0x0304, 0x0006, 0x2,
	0x030C, 0x0000, 0x2,
	0x0306, 0x00DF, 0x2,
	0x0302, 0x0001, 0x2,
	0x0300, 0x0008, 0x2,
	0x030E, 0x0003, 0x2,
	0x0312, 0x0001, 0x2,
	0x0310, 0x0085, 0x2,
	0x6028, 0x2000, 0x2,
	0x602A, 0x1492, 0x2,
	0x6F12, 0x0078, 0x2,
	0x602A, 0x0E4E, 0x2,
	0x6F12, 0x007A, 0x2,
	0x6028, 0x4000, 0x2,
	0x0118, 0x0004, 0x2,
	0x021E, 0x0000, 0x2,
	0x6028, 0x2000, 0x2,
	0x602A, 0x2126, 0x2,
	0x6F12, 0x0100, 0x2,
	0x602A, 0x1168, 0x2,
	0x6F12, 0x0020, 0x2,
	0x602A, 0x2DB6, 0x2,
	0x6F12, 0x0001, 0x2,
	0x602A, 0x1668, 0x2,
	0x6F12, 0xFF00, 0x2,
	0x602A, 0x166A, 0x2,
	0x6F12, 0xFF00, 0x2,
	0x602A, 0x118A, 0x2,
	0x6F12, 0x0802, 0x2,
	0x602A, 0x151E, 0x2,
	0x6F12, 0x0002, 0x2,
	0x602A, 0x217E, 0x2,
	0x6F12, 0x0001, 0x2,
	0x602A, 0x1520, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x2522, 0x2,
	0x6F12, 0x1004, 0x2,
	0x602A, 0x2524, 0x2,
	0x6F12, 0x0200, 0x2,
	0x602A, 0x2568, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x2588, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x258C, 0x2,
	0x6F12, 0x1111, 0x2,
	0x602A, 0x25A6, 0x2,
	0x6F12, 0x0001, 0x2,
	0x602A, 0x252C, 0x2,
	0x6F12, 0x7801, 0x2,
	0x602A, 0x252E, 0x2,
	0x6F12, 0x7805, 0x2,
	0x602A, 0x25A8, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x25AC, 0x2,
	0x6F12, 0x1111, 0x2,
	0x602A, 0x25B0, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x25B4, 0x2,
	0x6F12, 0x1111, 0x2,
	0x602A, 0x15A4, 0x2,
	0x6F12, 0x0641, 0x2,
	0x602A, 0x15A6, 0x2,
	0x6F12, 0x0145, 0x2,
	0x602A, 0x15A8, 0x2,
	0x6F12, 0x0149, 0x2,
	0x602A, 0x15AA, 0x2,
	0x6F12, 0x064D, 0x2,
	0x602A, 0x15AC, 0x2,
	0x6F12, 0x0651, 0x2,
	0x602A, 0x15AE, 0x2,
	0x6F12, 0x0155, 0x2,
	0x602A, 0x15B0, 0x2,
	0x6F12, 0x0159, 0x2,
	0x602A, 0x15B2, 0x2,
	0x6F12, 0x065D, 0x2,
	0x602A, 0x15B4, 0x2,
	0x6F12, 0x0661, 0x2,
	0x602A, 0x15B6, 0x2,
	0x6F12, 0x0165, 0x2,
	0x602A, 0x15B8, 0x2,
	0x6F12, 0x0169, 0x2,
	0x602A, 0x15BA, 0x2,
	0x6F12, 0x066D, 0x2,
	0x602A, 0x15BC, 0x2,
	0x6F12, 0x0671, 0x2,
	0x602A, 0x15BE, 0x2,
	0x6F12, 0x0175, 0x2,
	0x602A, 0x15C0, 0x2,
	0x6F12, 0x0179, 0x2,
	0x602A, 0x15C2, 0x2,
	0x6F12, 0x067D, 0x2,
	0x602A, 0x15C4, 0x2,
	0x6F12, 0x0641, 0x2,
	0x602A, 0x15C6, 0x2,
	0x6F12, 0x0145, 0x2,
	0x602A, 0x15C8, 0x2,
	0x6F12, 0x0149, 0x2,
	0x602A, 0x15CA, 0x2,
	0x6F12, 0x064D, 0x2,
	0x602A, 0x15CC, 0x2,
	0x6F12, 0x0651, 0x2,
	0x602A, 0x15CE, 0x2,
	0x6F12, 0x0155, 0x2,
	0x602A, 0x15D0, 0x2,
	0x6F12, 0x0159, 0x2,
	0x602A, 0x15D2, 0x2,
	0x6F12, 0x065D, 0x2,
	0x602A, 0x15D4, 0x2,
	0x6F12, 0x0661, 0x2,
	0x602A, 0x15D6, 0x2,
	0x6F12, 0x0165, 0x2,
	0x602A, 0x15D8, 0x2,
	0x6F12, 0x0169, 0x2,
	0x602A, 0x15DA, 0x2,
	0x6F12, 0x066D, 0x2,
	0x602A, 0x15DC, 0x2,
	0x6F12, 0x0671, 0x2,
	0x602A, 0x15DE, 0x2,
	0x6F12, 0x0175, 0x2,
	0x602A, 0x15E0, 0x2,
	0x6F12, 0x0179, 0x2,
	0x602A, 0x15E2, 0x2,
	0x6F12, 0x067D, 0x2,
	0x602A, 0x1A50, 0x2,
	0x6F12, 0x0004, 0x2,
	0x602A, 0x1A54, 0x2,
	0x6F12, 0x0100, 0x2,
	0x6028, 0x4000, 0x2,
	0x0D00, 0x0101, 0x2, /* PDC on */
	0x0D02, 0x0001, 0x2, /* Tail off */
	0x0114, 0x0300, 0x2,
	0x0202, 0x0010, 0x2,
	0x0226, 0x0010, 0x2,
	0x0204, 0x0020, 0x2,
	0x0B06, 0x0101, 0x2,
	0x6028, 0x2000, 0x2,
	0x602A, 0x107A, 0x2,
	0x6F12, 0x1D00, 0x2,
	0x602A, 0x1074, 0x2,
	0x6F12, 0x1D00, 0x2,
	0x602A, 0x0E7C, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1120, 0x2,
	0x6F12, 0x0200, 0x2,
	0x602A, 0x1122, 0x2,
	0x6F12, 0x0078, 0x2,
	0x602A, 0x1128, 0x2,
	0x6F12, 0x0604, 0x2,
	0x602A, 0x1AC0, 0x2,
	0x6F12, 0x0200, 0x2,
	0x602A, 0x1AC2, 0x2,
	0x6F12, 0x0002, 0x2,
	0x602A, 0x1494, 0x2,
	0x6F12, 0x3D68, 0x2,
	0x602A, 0x1498, 0x2,
	0x6F12, 0xF10D, 0x2,
	0x602A, 0x1488, 0x2,
	0x6F12, 0x0F04, 0x2,
	0x602A, 0x148A, 0x2,
	0x6F12, 0x0F0B, 0x2,
	0x602A, 0x150E, 0x2,
	0x6F12, 0x00C2, 0x2,
	0x602A, 0x1510, 0x2,
	0x6F12, 0xC0AF, 0x2,
	0x602A, 0x1512, 0x2,
	0x6F12, 0x0080, 0x2,
	0x602A, 0x1486, 0x2,
	0x6F12, 0x1430, 0x2,
	0x602A, 0x1490, 0x2,
	0x6F12, 0x4D09, 0x2,
	0x602A, 0x149E, 0x2,
	0x6F12, 0x01C4, 0x2,
	0x602A, 0x11CC, 0x2,
	0x6F12, 0x0008, 0x2,
	0x602A, 0x11CE, 0x2,
	0x6F12, 0x000B, 0x2,
	0x602A, 0x11D0, 0x2,
	0x6F12, 0x0003, 0x2,
	0x602A, 0x11DA, 0x2,
	0x6F12, 0x0012, 0x2,
	0x602A, 0x11E6, 0x2,
	0x6F12, 0x002A, 0x2,
	0x602A, 0x125E, 0x2,
	0x6F12, 0x0048, 0x2,
	0x602A, 0x11F4, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x11F8, 0x2,
	0x6F12, 0x0016, 0x2,
	0x6028, 0x4000, 0x2,
	0xF444, 0x05BF, 0x2,
	0xF44A, 0x0008, 0x2,
	0xF44E, 0x0012, 0x2,
	0xF46E, 0x74C0, 0x2,
	0xF470, 0x2809, 0x2,
	0x6028, 0x2000, 0x2,
	0x602A, 0x1CAA, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CAC, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CAE, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CB0, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CB2, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CB4, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CB6, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CB8, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CBA, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CBC, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CBE, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CC0, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CC2, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CC4, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CC6, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CC8, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x6000, 0x2,
	0x6F12, 0x000F, 0x2,
	0x602A, 0x6002, 0x2,
	0x6F12, 0xFFFF, 0x2,
	0x602A, 0x6004, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x6006, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6008, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x600A, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x600C, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x600E, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6010, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6012, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6014, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6016, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6018, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x601A, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x601C, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x601E, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6020, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6022, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6024, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6026, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6028, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x602A, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x602C, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x1144, 0x2,
	0x6F12, 0x0100, 0x2,
	0x602A, 0x1146, 0x2,
	0x6F12, 0x1B00, 0x2,
	0x6028, 0x4000, 0x2,
};

/* Tail off, PDC on */
const u32 sensor_gm1sp_setfile_B_2000x1124_120fps[] = {
	0x6028, 0x4000, 0x2,
	0x6214, 0x7971, 0x2,
	0x6218, 0x7150, 0x2,
	0x0344, 0x0008, 0x2,
	0x0346, 0x0180, 0x2,
	0x0348, 0x0FA7, 0x2,
	0x034A, 0x0A47, 0x2,
	0x034C, 0x07D0, 0x2,
	0x034E, 0x0464, 0x2,
	0x0350, 0x0000, 0x2,
	0x0352, 0x0000, 0x2,
	0x0340, 0x0642, 0x2,
	0x0342, 0x09D0, 0x2,
	0x0900, 0x0122, 0x2,
	0x0380, 0x0001, 0x2,
	0x0382, 0x0003, 0x2,
	0x0384, 0x0001, 0x2,
	0x0386, 0x0003, 0x2,
	0x0404, 0x1000, 0x2,
	0x0402, 0x1010, 0x2,
	0x0136, 0x1A00, 0x2,
	0x0304, 0x0006, 0x2,
	0x030C, 0x0000, 0x2,
	0x0306, 0x00DF, 0x2,
	0x0302, 0x0001, 0x2,
	0x0300, 0x0008, 0x2,
	0x030E, 0x0003, 0x2,
	0x0312, 0x0001, 0x2,
	0x0310, 0x008A, 0x2,
	0x6028, 0x2000, 0x2,
	0x602A, 0x1492, 0x2,
	0x6F12, 0x0078, 0x2,
	0x602A, 0x0E4E, 0x2,
	0x6F12, 0x0069, 0x2,
	0x6028, 0x4000, 0x2,
	0x0118, 0x0004, 0x2,
	0x021E, 0x0000, 0x2,
	0x6028, 0x2000, 0x2,
	0x602A, 0x2126, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1168, 0x2,
	0x6F12, 0x0020, 0x2,
	0x602A, 0x2DB6, 0x2,
	0x6F12, 0x0001, 0x2,
	0x602A, 0x1668, 0x2,
	0x6F12, 0xFF00, 0x2,
	0x602A, 0x166A, 0x2,
	0x6F12, 0xFF00, 0x2,
	0x602A, 0x118A, 0x2,
	0x6F12, 0x0402, 0x2,
	0x602A, 0x151E, 0x2,
	0x6F12, 0x0002, 0x2,
	0x602A, 0x217E, 0x2,
	0x6F12, 0x0001, 0x2,
	0x602A, 0x1520, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x2522, 0x2,
	0x6F12, 0x1004, 0x2,
	0x602A, 0x2524, 0x2,
	0x6F12, 0x0200, 0x2,
	0x602A, 0x2568, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x2588, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x258C, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x25A6, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x252C, 0x2,
	0x6F12, 0x0601, 0x2,
	0x602A, 0x252E, 0x2,
	0x6F12, 0x0605, 0x2,
	0x602A, 0x25A8, 0x2,
	0x6F12, 0x1100, 0x2,
	0x602A, 0x25AC, 0x2,
	0x6F12, 0x0011, 0x2,
	0x602A, 0x25B0, 0x2,
	0x6F12, 0x1100, 0x2,
	0x602A, 0x25B4, 0x2,
	0x6F12, 0x0011, 0x2,
	0x602A, 0x15A4, 0x2,
	0x6F12, 0x0641, 0x2,
	0x602A, 0x15A6, 0x2,
	0x6F12, 0x0145, 0x2,
	0x602A, 0x15A8, 0x2,
	0x6F12, 0x0149, 0x2,
	0x602A, 0x15AA, 0x2,
	0x6F12, 0x064D, 0x2,
	0x602A, 0x15AC, 0x2,
	0x6F12, 0x0651, 0x2,
	0x602A, 0x15AE, 0x2,
	0x6F12, 0x0155, 0x2,
	0x602A, 0x15B0, 0x2,
	0x6F12, 0x0159, 0x2,
	0x602A, 0x15B2, 0x2,
	0x6F12, 0x065D, 0x2,
	0x602A, 0x15B4, 0x2,
	0x6F12, 0x0661, 0x2,
	0x602A, 0x15B6, 0x2,
	0x6F12, 0x0165, 0x2,
	0x602A, 0x15B8, 0x2,
	0x6F12, 0x0169, 0x2,
	0x602A, 0x15BA, 0x2,
	0x6F12, 0x066D, 0x2,
	0x602A, 0x15BC, 0x2,
	0x6F12, 0x0671, 0x2,
	0x602A, 0x15BE, 0x2,
	0x6F12, 0x0175, 0x2,
	0x602A, 0x15C0, 0x2,
	0x6F12, 0x0179, 0x2,
	0x602A, 0x15C2, 0x2,
	0x6F12, 0x067D, 0x2,
	0x602A, 0x15C4, 0x2,
	0x6F12, 0x0641, 0x2,
	0x602A, 0x15C6, 0x2,
	0x6F12, 0x0145, 0x2,
	0x602A, 0x15C8, 0x2,
	0x6F12, 0x0149, 0x2,
	0x602A, 0x15CA, 0x2,
	0x6F12, 0x064D, 0x2,
	0x602A, 0x15CC, 0x2,
	0x6F12, 0x0651, 0x2,
	0x602A, 0x15CE, 0x2,
	0x6F12, 0x0155, 0x2,
	0x602A, 0x15D0, 0x2,
	0x6F12, 0x0159, 0x2,
	0x602A, 0x15D2, 0x2,
	0x6F12, 0x065D, 0x2,
	0x602A, 0x15D4, 0x2,
	0x6F12, 0x0661, 0x2,
	0x602A, 0x15D6, 0x2,
	0x6F12, 0x0165, 0x2,
	0x602A, 0x15D8, 0x2,
	0x6F12, 0x0169, 0x2,
	0x602A, 0x15DA, 0x2,
	0x6F12, 0x066D, 0x2,
	0x602A, 0x15DC, 0x2,
	0x6F12, 0x0671, 0x2,
	0x602A, 0x15DE, 0x2,
	0x6F12, 0x0175, 0x2,
	0x602A, 0x15E0, 0x2,
	0x6F12, 0x0179, 0x2,
	0x602A, 0x15E2, 0x2,
	0x6F12, 0x067D, 0x2,
	0x602A, 0x1A50, 0x2,
	0x6F12, 0x0001, 0x2,
	0x602A, 0x1A54, 0x2,
	0x6F12, 0x0100, 0x2,
	0x6028, 0x4000, 0x2,
	0x0D00, 0x0101, 0x2, /* PDC on */
	0x0D02, 0x0001, 0x2, /* Tail off */
	0x0114, 0x0300, 0x2,
	0x0202, 0x0010, 0x2,
	0x0226, 0x0010, 0x2,
	0x0204, 0x0020, 0x2,
	0x0B06, 0x0101, 0x2,
	0x6028, 0x2000, 0x2,
	0x602A, 0x107A, 0x2,
	0x6F12, 0x1D00, 0x2,
	0x602A, 0x1074, 0x2,
	0x6F12, 0x1D00, 0x2,
	0x602A, 0x0E7C, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1120, 0x2,
	0x6F12, 0x0200, 0x2,
	0x602A, 0x1122, 0x2,
	0x6F12, 0x0078, 0x2,
	0x602A, 0x1128, 0x2,
	0x6F12, 0x0604, 0x2,
	0x602A, 0x1AC0, 0x2,
	0x6F12, 0x0200, 0x2,
	0x602A, 0x1AC2, 0x2,
	0x6F12, 0x0002, 0x2,
	0x602A, 0x1494, 0x2,
	0x6F12, 0x3D68, 0x2,
	0x602A, 0x1498, 0x2,
	0x6F12, 0xF10D, 0x2,
	0x602A, 0x1488, 0x2,
	0x6F12, 0x0904, 0x2,
	0x602A, 0x148A, 0x2,
	0x6F12, 0x170B, 0x2,
	0x602A, 0x150E, 0x2,
	0x6F12, 0x00C2, 0x2,
	0x602A, 0x1510, 0x2,
	0x6F12, 0xC0AF, 0x2,
	0x602A, 0x1512, 0x2,
	0x6F12, 0x0080, 0x2,
	0x602A, 0x1486, 0x2,
	0x6F12, 0x1430, 0x2,
	0x602A, 0x1490, 0x2,
	0x6F12, 0x4D09, 0x2,
	0x602A, 0x149E, 0x2,
	0x6F12, 0x01C4, 0x2,
	0x602A, 0x11CC, 0x2,
	0x6F12, 0x0008, 0x2,
	0x602A, 0x11CE, 0x2,
	0x6F12, 0x000B, 0x2,
	0x602A, 0x11D0, 0x2,
	0x6F12, 0x0003, 0x2,
	0x602A, 0x11DA, 0x2,
	0x6F12, 0x0012, 0x2,
	0x602A, 0x11E6, 0x2,
	0x6F12, 0x002A, 0x2,
	0x602A, 0x125E, 0x2,
	0x6F12, 0x0048, 0x2,
	0x602A, 0x11F4, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x11F8, 0x2,
	0x6F12, 0x0016, 0x2,
	0x6028, 0x4000, 0x2,
	0xF444, 0x05BF, 0x2,
	0xF44A, 0x0008, 0x2,
	0xF44E, 0x0012, 0x2,
	0xF46E, 0x90C0, 0x2,
	0xF470, 0x2809, 0x2,
	0x6028, 0x2000, 0x2,
	0x602A, 0x1CAA, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CAC, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CAE, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CB0, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CB2, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CB4, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CB6, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CB8, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CBA, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CBC, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CBE, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CC0, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CC2, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CC4, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CC6, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CC8, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x6000, 0x2,
	0x6F12, 0x000F, 0x2,
	0x602A, 0x6002, 0x2,
	0x6F12, 0xFFFF, 0x2,
	0x602A, 0x6004, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x6006, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6008, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x600A, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x600C, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x600E, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6010, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6012, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6014, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6016, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6018, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x601A, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x601C, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x601E, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6020, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6022, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6024, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6026, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6028, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x602A, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x602C, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x1144, 0x2,
	0x6F12, 0x0100, 0x2,
	0x602A, 0x1146, 0x2,
	0x6F12, 0x1B00, 0x2,
	0x6028, 0x4000, 0x2,
};

/* Tail off, PDC off */
const u32 sensor_gm1sp_setfile_B_1280x720_240fps[] = {
	0x6028, 0x4000, 0x2,
	0x6214, 0x7971, 0x2,
	0x6218, 0x7150, 0x2,
	0x0344, 0x0058, 0x2,
	0x0346, 0x01AC, 0x2,
	0x0348, 0x0F57, 0x2,
	0x034A, 0x0A1B, 0x2,
	0x034C, 0x0500, 0x2,
	0x034E, 0x02D0, 0x2,
	0x0350, 0x0000, 0x2,
	0x0352, 0x0000, 0x2,
	0x0340, 0x0334, 0x2,
	0x0342, 0x0990, 0x2,
	0x0900, 0x0123, 0x2,
	0x0380, 0x0001, 0x2,
	0x0382, 0x0002, 0x2,
	0x0384, 0x0001, 0x2,
	0x0386, 0x0005, 0x2,
	0x0404, 0x1000, 0x2,
	0x0402, 0x1810, 0x2,
	0x0136, 0x1A00, 0x2,
	0x0304, 0x0006, 0x2,
	0x030C, 0x0000, 0x2,
	0x0306, 0x00DF, 0x2,
	0x0302, 0x0001, 0x2,
	0x0300, 0x0008, 0x2,
	0x030E, 0x0003, 0x2,
	0x0312, 0x0001, 0x2,
	0x0310, 0x0058, 0x2,
	0x6028, 0x2000, 0x2,
	0x602A, 0x1492, 0x2,
	0x6F12, 0x0078, 0x2,
	0x602A, 0x0E4E, 0x2,
	0x6F12, 0xFFFF, 0x2,
	0x6028, 0x4000, 0x2,
	0x0118, 0x0104, 0x2,
	0x021E, 0x0000, 0x2,
	0x6028, 0x2000, 0x2,
	0x602A, 0x2126, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1168, 0x2,
	0x6F12, 0x0020, 0x2,
	0x602A, 0x2DB6, 0x2,
	0x6F12, 0x0001, 0x2,
	0x602A, 0x1668, 0x2,
	0x6F12, 0xF0F0, 0x2,
	0x602A, 0x166A, 0x2,
	0x6F12, 0xF0F0, 0x2,
	0x602A, 0x118A, 0x2,
	0x6F12, 0x0802, 0x2,
	0x602A, 0x151E, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x217E, 0x2,
	0x6F12, 0x0001, 0x2,
	0x602A, 0x1520, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x2522, 0x2,
	0x6F12, 0x0804, 0x2,
	0x602A, 0x2524, 0x2,
	0x6F12, 0x0400, 0x2,
	0x602A, 0x2568, 0x2,
	0x6F12, 0x5500, 0x2,
	0x602A, 0x2588, 0x2,
	0x6F12, 0x1111, 0x2,
	0x602A, 0x258C, 0x2,
	0x6F12, 0x1111, 0x2,
	0x602A, 0x25A6, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x252C, 0x2,
	0x6F12, 0x0601, 0x2,
	0x602A, 0x252E, 0x2,
	0x6F12, 0x0605, 0x2,
	0x602A, 0x25A8, 0x2,
	0x6F12, 0x1100, 0x2,
	0x602A, 0x25AC, 0x2,
	0x6F12, 0x0011, 0x2,
	0x602A, 0x25B0, 0x2,
	0x6F12, 0x1100, 0x2,
	0x602A, 0x25B4, 0x2,
	0x6F12, 0x0011, 0x2,
	0x602A, 0x15A4, 0x2,
	0x6F12, 0x0141, 0x2,
	0x602A, 0x15A6, 0x2,
	0x6F12, 0x0545, 0x2,
	0x602A, 0x15A8, 0x2,
	0x6F12, 0x0649, 0x2,
	0x602A, 0x15AA, 0x2,
	0x6F12, 0x024D, 0x2,
	0x602A, 0x15AC, 0x2,
	0x6F12, 0x0151, 0x2,
	0x602A, 0x15AE, 0x2,
	0x6F12, 0x0555, 0x2,
	0x602A, 0x15B0, 0x2,
	0x6F12, 0x0659, 0x2,
	0x602A, 0x15B2, 0x2,
	0x6F12, 0x025D, 0x2,
	0x602A, 0x15B4, 0x2,
	0x6F12, 0x0161, 0x2,
	0x602A, 0x15B6, 0x2,
	0x6F12, 0x0565, 0x2,
	0x602A, 0x15B8, 0x2,
	0x6F12, 0x0669, 0x2,
	0x602A, 0x15BA, 0x2,
	0x6F12, 0x026D, 0x2,
	0x602A, 0x15BC, 0x2,
	0x6F12, 0x0171, 0x2,
	0x602A, 0x15BE, 0x2,
	0x6F12, 0x0575, 0x2,
	0x602A, 0x15C0, 0x2,
	0x6F12, 0x0679, 0x2,
	0x602A, 0x15C2, 0x2,
	0x6F12, 0x027D, 0x2,
	0x602A, 0x15C4, 0x2,
	0x6F12, 0x0141, 0x2,
	0x602A, 0x15C6, 0x2,
	0x6F12, 0x0545, 0x2,
	0x602A, 0x15C8, 0x2,
	0x6F12, 0x0649, 0x2,
	0x602A, 0x15CA, 0x2,
	0x6F12, 0x024D, 0x2,
	0x602A, 0x15CC, 0x2,
	0x6F12, 0x0151, 0x2,
	0x602A, 0x15CE, 0x2,
	0x6F12, 0x0555, 0x2,
	0x602A, 0x15D0, 0x2,
	0x6F12, 0x0659, 0x2,
	0x602A, 0x15D2, 0x2,
	0x6F12, 0x025D, 0x2,
	0x602A, 0x15D4, 0x2,
	0x6F12, 0x0161, 0x2,
	0x602A, 0x15D6, 0x2,
	0x6F12, 0x0565, 0x2,
	0x602A, 0x15D8, 0x2,
	0x6F12, 0x0669, 0x2,
	0x602A, 0x15DA, 0x2,
	0x6F12, 0x026D, 0x2,
	0x602A, 0x15DC, 0x2,
	0x6F12, 0x0171, 0x2,
	0x602A, 0x15DE, 0x2,
	0x6F12, 0x0575, 0x2,
	0x602A, 0x15E0, 0x2,
	0x6F12, 0x0679, 0x2,
	0x602A, 0x15E2, 0x2,
	0x6F12, 0x027D, 0x2,
	0x602A, 0x1A50, 0x2,
	0x6F12, 0x0001, 0x2,
	0x602A, 0x1A54, 0x2,
	0x6F12, 0x0100, 0x2,
	0x6028, 0x4000, 0x2,
	0x0D00, 0x0100, 0x2,
	0x0D02, 0x0001, 0x2,
	0x0114, 0x0300, 0x2,
	0x0202, 0x0010, 0x2,
	0x0226, 0x0010, 0x2,
	0x0204, 0x0020, 0x2,
	0x0B06, 0x0101, 0x2,
	0x6028, 0x2000, 0x2,
	0x602A, 0x107A, 0x2,
	0x6F12, 0x1D00, 0x2,
	0x602A, 0x1074, 0x2,
	0x6F12, 0x1D00, 0x2,
	0x602A, 0x0E7C, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1120, 0x2,
	0x6F12, 0x0200, 0x2,
	0x602A, 0x1122, 0x2,
	0x6F12, 0x0028, 0x2,
	0x602A, 0x1128, 0x2,
	0x6F12, 0x0604, 0x2,
	0x602A, 0x1AC0, 0x2,
	0x6F12, 0x0200, 0x2,
	0x602A, 0x1AC2, 0x2,
	0x6F12, 0x0002, 0x2,
	0x602A, 0x1494, 0x2,
	0x6F12, 0x3D68, 0x2,
	0x602A, 0x1498, 0x2,
	0x6F12, 0xF10D, 0x2,
	0x602A, 0x1488, 0x2,
	0x6F12, 0x0904, 0x2,
	0x602A, 0x148A, 0x2,
	0x6F12, 0x170B, 0x2,
	0x602A, 0x150E, 0x2,
	0x6F12, 0x00C2, 0x2,
	0x602A, 0x1510, 0x2,
	0x6F12, 0xC0AF, 0x2,
	0x602A, 0x1512, 0x2,
	0x6F12, 0x0080, 0x2,
	0x602A, 0x1486, 0x2,
	0x6F12, 0x1430, 0x2,
	0x602A, 0x1490, 0x2,
	0x6F12, 0x4D09, 0x2,
	0x602A, 0x149E, 0x2,
	0x6F12, 0x01C4, 0x2,
	0x602A, 0x11CC, 0x2,
	0x6F12, 0x0008, 0x2,
	0x602A, 0x11CE, 0x2,
	0x6F12, 0x000B, 0x2,
	0x602A, 0x11D0, 0x2,
	0x6F12, 0x0003, 0x2,
	0x602A, 0x11DA, 0x2,
	0x6F12, 0x0012, 0x2,
	0x602A, 0x11E6, 0x2,
	0x6F12, 0x002A, 0x2,
	0x602A, 0x125E, 0x2,
	0x6F12, 0x0048, 0x2,
	0x602A, 0x11F4, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x11F8, 0x2,
	0x6F12, 0x0016, 0x2,
	0x6028, 0x4000, 0x2,
	0xF444, 0x05BF, 0x2,
	0xF44A, 0x0008, 0x2,
	0xF44E, 0x0012, 0x2,
	0xF46E, 0x6CC0, 0x2,
	0xF470, 0x7809, 0x2,
	0x6028, 0x2000, 0x2,
	0x602A, 0x1CAA, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CAC, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CAE, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CB0, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CB2, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CB4, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CB6, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CB8, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CBA, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CBC, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CBE, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CC0, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CC2, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CC4, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CC6, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x1CC8, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x6000, 0x2,
	0x6F12, 0x000F, 0x2,
	0x602A, 0x6002, 0x2,
	0x6F12, 0xFFFF, 0x2,
	0x602A, 0x6004, 0x2,
	0x6F12, 0x0000, 0x2,
	0x602A, 0x6006, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6008, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x600A, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x600C, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x600E, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6010, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6012, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6014, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6016, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6018, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x601A, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x601C, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x601E, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6020, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6022, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6024, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6026, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x6028, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x602A, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x602C, 0x2,
	0x6F12, 0x1000, 0x2,
	0x602A, 0x1144, 0x2,
	0x6F12, 0x0100, 0x2,
	0x602A, 0x1146, 0x2,
	0x6F12, 0x1B00, 0x2,
	0x6028, 0x4000, 0x2,
};

const struct sensor_pll_info_compact sensor_gm1sp_pllinfo_B_4000x3000_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1152670000ULL, /* mipi_datarate */
	483170000ULL,	/* pclk  = VT pix CLK (this value is different by cis) */
	0x0C84, /* frame_length_lines	(0x0340) */
	0x13A0, /* line_length_pck	(0x0342) */
};

const struct sensor_pll_info_compact sensor_gm1sp_pllinfo_B_2000x1124_60fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1152670000ULL, /* mipi_datarate */
	483170000ULL,	/* pclk  = VT pix CLK (this value is different by cis) */
	0x063C, /* frame_length_lines	(0x0340) */
	0x13A0, /* line_length_pck	(0x0342) */
};

const struct sensor_pll_info_compact sensor_gm1sp_pllinfo_B_2000x1124_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1196000000ULL, /* mipi_datarate */
	483170000ULL,	/* pclk  = VT pix CLK (this value is different by cis) */
	0x0642, /* frame_length_lines	(0x0340) */
	0x09D0, /* line_length_pck	(0x0342) */
};

const struct sensor_pll_info_compact sensor_gm1sp_pllinfo_B_1280x720_240fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	763000000ULL, /* mipi_datarate */
	483170000ULL,	/* pclk  = VT pix CLK (this value is different by cis) */
	0x0334, /* frame_length_lines	(0x0340) */
	0x0990, /* line_length_pck	(0x0342) */
};

static const u32 *sensor_gm1sp_setfiles_B[] = {
	sensor_gm1sp_setfile_B_4000x3000_30fps,
	sensor_gm1sp_setfile_B_2000x1124_60fps,
	sensor_gm1sp_setfile_B_2000x1124_120fps,
	sensor_gm1sp_setfile_B_1280x720_240fps,
};

static const u32 sensor_gm1sp_setfile_B_sizes[] = {
	ARRAY_SIZE(sensor_gm1sp_setfile_B_4000x3000_30fps),
	ARRAY_SIZE(sensor_gm1sp_setfile_B_2000x1124_60fps),
	ARRAY_SIZE(sensor_gm1sp_setfile_B_2000x1124_120fps),
	ARRAY_SIZE(sensor_gm1sp_setfile_B_1280x720_240fps),
};

static const struct sensor_pll_info_compact *sensor_gm1sp_pllinfos_B[] = {
	&sensor_gm1sp_pllinfo_B_4000x3000_30fps,
	&sensor_gm1sp_pllinfo_B_2000x1124_60fps,
	&sensor_gm1sp_pllinfo_B_2000x1124_120fps,
	&sensor_gm1sp_pllinfo_B_1280x720_240fps,
};
#endif
