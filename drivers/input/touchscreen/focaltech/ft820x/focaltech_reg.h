/*
 *
 * FocalTech TouchScreen driver.
 *
 * Copyright (c) 2012-2021, FocalTech Systems, Ltd., all rights reserved.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _FOCALTECH_REG_H
#define _FOCALTECH_REG_H

#define FTS_CMD_START1				0x55
#define FTS_CMD_START2				0xAA
#define FTS_CMD_START_DELAY			12
#define FTS_CMD_READ_ID 			0x90
#define FTS_CMD_READ_ID_LEN			4
#define FTS_CMD_READ_ID_LEN_INCELL		1
#define FTS_CMD_READ_FW_CONF			0xA8
/*register address*/
#define FTS_REG_INT_CNT 			0x8F
#define FTS_REG_FLOW_WORK_CNT			0x91
#define FTS_REG_WORKMODE			0x00
#define FTS_REG_WORKMODE_FACTORY_VALUE		0x40
#define FTS_REG_WORKMODE_WORK_VALUE		0x00
#define FTS_REG_ESDCHECK_DISABLE		0x8D
#define FTS_REG_CHIP_ID 			0xA3
#define FTS_REG_CHIP_ID2			0x9F
#define FTS_REG_POWER_MODE			0xA5
#define FTS_REG_POWER_MODE_SLEEP		0x03
#define FTS_REG_POWER_MODE_SCAN_OFF		0x04
#define FTS_REG_FW_VER				0xA6
#define FTS_REG_VENDOR_ID			0xA8
#define FTS_REG_LCD_BUSY_NUM			0xAB
#define FTS_REG_FACE_DEC_MODE_EN		0xB0
#define FTS_REG_FACTORY_MODE_DETACH_FLAG	0xB4
#define FTS_REG_FACE_DEC_MODE_STATUS		0x01
#define FTS_REG_IDE_PARA_VER_ID 		0xB5
#define FTS_REG_IDE_PARA_STATUS 		0xB6
#define FTS_REG_GLOVE_MODE_EN			0xC0
#define FTS_REG_COVER_MODE_EN			0xC1
#define FTS_REG_SEC_IC_NAME			0xC3
#define FTS_REG_SEC_PROJECT_NAME		0xC4
#define FTS_REG_SEC_MODULE_ID			0xC5
#define FTS_REG_SEC_FW_VERSION			0xC6
#define FTS_REG_SEC_CHIP_NAME_H			0xC7
#define FTS_REG_SEC_CHIP_NAME_L			0xC8
#define FTS_REG_TX_NUM				0xC9
#define FTS_REG_RX_NUM				0xCA
#define FTS_REG_CRC_H				0xCB
#define FTS_REG_CRC_L				0xCC
#define FTS_REG_CRC_REVERT_H			0xCD
#define FTS_REG_CRC_REVERT_L			0xCE
#define FTS_REG_CHARGER_MODE_EN 		0x8B
#define FTS_REG_GESTURE_EN			0xD0
#define FTS_REG_GESTURE_OUTPUT_ADDRESS		0xD3
#define FTS_REG_MODULE_ID			0xE3
#define FTS_REG_LIC_VER 			0xE4
#define FTS_REG_ESD_SATURATE			0xED

#define FTS_REG_BANK_MODE			0x60
#define FTS_REG_GAME_MODE			0x94
#define FTS_REG_NOTE_MODE			0x95
#define FTS_REG_SIP_MODE			0x96
#define FTS_REG_SENSITIVITY_MODE		0x98
#define FTS_REG_SENSITIVITY_VALUE		0x61
#define FTS_REG_SNR_NON_TOUCHED_TEST		0x99
#define FTS_REG_SNR_TOUCHED_TEST		0x9A
#define FTS_REG_SNR_TEST_STATUS			0x9B
#define FTS_REG_SNR_FRAME_COUNT_H		0x9C
#define FTS_REG_SNR_FRAME_COUNT_L		0x9D
#define FTS_REG_SNR_TEST_RESULT1		0x46
#define FTS_REG_SNR_TEST_RESULT2		0x61
#define FTS_REG_DEAD_ZONE_ENABLE		0x9E

#define FTS_REG_GRIP_MODE			0x8C
#define FTS_REG_GRIP_PORTRAIT_MODE		0x61
#define FTS_REG_GRIP_PORTRAIT_GRIP_ZONE		0x62
#define FTS_REG_GRIP_PORTRAIT_REJECT_UPPER	0x63
#define FTS_REG_GRIP_PORTRAIT_REJECT_LOWER	0x64
#define FTS_REG_GRIP_PORTRAIT_REJECT_Y_H	0x65
#define FTS_REG_GRIP_PORTRAIT_REJECT_Y_L	0x66
#define FTS_REG_GRIP_LANDSCAPE_MODE		0x67
#define FTS_REG_GRIP_LANDSCAPE_ENABLE		0x68
#define FTS_REG_GRIP_LANDSCAPE_GRIP_ZONE	0x69
#define FTS_REG_GRIP_LANDSCAPE_REJECT_ZONE	0x6A
#define FTS_REG_GRIP_LANDSCAPE_REJECT_TOP	0x6B
#define FTS_REG_GRIP_LANDSCAPE_REJECT_BOTTOM	0x6C
#define FTS_REG_GRIP_LANDSCAPE_GRIP_TOP		0x6D
#define FTS_REG_GRIP_LANDSCAPE_GRIP_BOTTOM	0x6E
#define FTS_REG_EDGE_HANDLER			0x71
#define FTS_REG_EDGE_HANDLER_DIRECTION		0x72
#define FTS_REG_EDGE_HANDLER_UPPER_H		0x73
#define FTS_REG_EDGE_HANDLER_UPPER_L		0x74
#define FTS_REG_EDGE_HANDLER_LOWER_H		0x75
#define FTS_REG_EDGE_HANDLER_LOWER_L		0x76

#define FTS_CMD_RESET				0x07
#define FTS_ROMBOOT_CMD_SET_PRAM_ADDR		0xAD
#define FTS_ROMBOOT_CMD_SET_PRAM_ADDR_LEN	4
#define FTS_ROMBOOT_CMD_WRITE			0xAE
#define FTS_ROMBOOT_CMD_START_APP		0x08
#define FTS_DELAY_PRAMBOOT_START		100
#define FTS_ROMBOOT_CMD_ECC			0xCC
#define FTS_PRAM_SADDR				0x000000
#define FTS_DRAM_SADDR				0xD00000

#define FTS_CMD_READ				0x03
#define FTS_CMD_READ_DELAY			1
#define FTS_CMD_READ_LEN			4
#define FTS_CMD_READ_LEN_SPI			6
#define FTS_CMD_FLASH_TYPE			0x05
#define FTS_CMD_FLASH_MODE			0x09
#define FLASH_MODE_WRITE_FLASH_VALUE		0x0A
#define FLASH_MODE_UPGRADE_VALUE		0x0B
#define FLASH_MODE_LIC_VALUE			0x0C
#define FLASH_MODE_PARAM_VALUE			0x0D
#define FTS_CMD_ERASE_APP			0x61
#define FTS_REASE_APP_DELAY			1350
#define FTS_ERASE_SECTOR_DELAY			60
#define FTS_RETRIES_REASE			50
#define FTS_RETRIES_DELAY_REASE 		400
#define FTS_CMD_FLASH_STATUS			0x6A
#define FTS_CMD_FLASH_STATUS_LEN		2
#define FTS_CMD_FLASH_STATUS_NOP		0x0000
#define FTS_CMD_FLASH_STATUS_ECC_OK		0xF055
#define FTS_CMD_FLASH_STATUS_ERASE_OK		0xF0AA
#define FTS_CMD_FLASH_STATUS_WRITE_OK		0x1000
#define FTS_CMD_ECC_INIT			0x64
#define FTS_CMD_ECC_CAL 			0x65
#define FTS_CMD_ECC_CAL_LEN			7
#define FTS_RETRIES_ECC_CAL			10
#define FTS_RETRIES_DELAY_ECC_CAL		50
#define FTS_CMD_ECC_READ			0x66
#define FTS_CMD_DATA_LEN			0xB0
#define FTS_CMD_APP_DATA_LEN_INCELL		0x7A
#define FTS_CMD_DATA_LEN_LEN			4
#define FTS_CMD_SET_WFLASH_ADDR 		0xAB
#define FTS_CMD_SET_RFLASH_ADDR 		0xAC
#define FTS_LEN_SET_ADDR			4
#define FTS_CMD_WRITE				0xBF
#define FTS_RETRIES_WRITE			100
#define FTS_RETRIES_DELAY_WRITE 		1
#define FTS_CMD_WRITE_LEN			6
#define FTS_DELAY_READ_ID			20
#define FTS_DELAY_UPGRADE_RESET 		80
#define PRAMBOOT_MIN_SIZE			0x120
#define PRAMBOOT_MAX_SIZE			(64*1024)
#define FTS_FLASH_PACKET_LENGTH 		32	/* max=128 */
#define FTS_MAX_LEN_ECC_CALC			0xFFFE /* must be even */
#define FTS_MIN_LEN				0x120
#define FTS_MAX_LEN_FILE			(256 * 1024)
#define FTS_MAX_LEN_APP 			(64 * 1024)
#define FTS_MAX_LEN_SECTOR			(4 * 1024)
#define FTS_CONIFG_VENDORID_OFF 		0x04
#define FTS_CONIFG_MODULEID_OFF 		0x1E
#define FTS_CONIFG_PROJECTID_OFF		0x20
#define FTS_APPINFO_OFF 			0x100
#define FTS_APPINFO_APPLEN_OFF			0x00
#define FTS_APPINFO_APPLEN2_OFF 		0x12
#define FTS_REG_UPGRADE 			0xFC
#define FTS_REG_UPGRADE2			0xBC
#define FTS_UPGRADE_AA				0xAA
#define FTS_UPGRADE_55				0x55
#define FTS_DELAY_UPGRADE_AA			10
#define FTS_UPGRADE_LOOP			30
#define FTS_HEADER_LEN				32
#define FTS_FW_BIN_FILEPATH			"/sdcard/"
#define FTS_FW_IDE_SIG				"IDE_"
#define FTS_FW_IDE_SIG_LEN			4
#define MAX_MODULE_VENDOR_NAME_LEN		16

#define FTS_ROMBOOT_CMD_ECC_NEW_LEN		7
#define FTS_ECC_FINISH_TIMEOUT			100
#define FTS_ROMBOOT_CMD_ECC_FINISH		0xCE
#define FTS_ROMBOOT_CMD_ECC_FINISH_OK_A5	0xA5
#define FTS_ROMBOOT_CMD_ECC_FINISH_OK_00	0x00
#define FTS_ROMBOOT_CMD_ECC_READ		0xCD
#define AL2_FCS_COEF				((1 << 15) + (1 << 10) + (1 << 3))

#define FTS_APP_INFO_OFFSET			0x100
#define FTS_APP_VER_INFO_OFFSET			0x1A0


/* factory test register */

#define TX_NUM_MAX				60
#define RX_NUM_MAX				100
#define SC_NUM_MAX				((TX_NUM_MAX) + (RX_NUM_MAX))
#define NUM_MAX_SC				(144)
#define KEY_NUM_MAX				6
#define TEST_ITEM_COUNT_MAX			32
#define TEST_ITEM_NAME_MAX			32
#define TEST_SHORT_RES_MAX			0xFFFF

#define ENTER_WORK_FACTORY_RETRIES		5

#define START_SCAN_RETRIES_INCELL		20
#define START_SCAN_RETRIES_DELAY_INCELL 	16
#define FACTORY_TEST_RETRY			100
#define FACTORY_TEST_DELAY			20
#define FACTORY_TEST_RETRY_DELAY		100

#define DEVICE_MODE_ADDR			0x00
#define REG_FW_VERSION				0xA6
#define REG_VA_TOUCH_THR			0x80
#define REG_VKEY_TOUCH_THR			0x82

#define FACTORY_REG_LINE_ADDR			0x01
#define FACTORY_REG_RAWADDR_SET			0xAD
#define FACTORY_REG_CHX_NUM			0x02
#define FACTORY_REG_CHY_NUM			0x03
#define FACTORY_REG_CLB 			0x04
#define FACTORY_REG_CLB_START			0x04
#define FACTORY_REG_CLB_DONE			0x02
#define FACTORY_REG_DATA_SELECT 		0x06
#define FACTORY_REG_RAWBUF_SELECT		0x09
#define FACTORY_REG_KEY_CBWIDTH 		0x0B
#define FACTORY_REG_PARAM_UPDATE_STATE		0x0E
#define FACTORY_REG_SHORT_TEST_EN		0x0F
#define FACTORY_REG_SHORT_TEST_STATE		0x10
#define FACTORY_REG_LCD_NOISE_START		0x11
#define FACTORY_REG_LCD_NOISE_FRAME		0x12
#define FACTORY_REG_LCD_NOISE_TEST_STATE	0x13
#define FACTORY_REG_LCD_NOISE_TTHR		0x14
#define FACTORY_REG_OPEN_START			0x15
#define FACTORY_REG_OPEN_STATE			0x16
#define FACTORY_REG_OPEN_ADDR			0xCF
#define FACTORY_REG_OPEN_IDLE			0x03
#define FACTORY_REG_OPEN_BUSY			0x01
#define FACTORY_REG_CB_ADDR_H			0x18
#define FACTORY_REG_CB_ADDR_L			0x19
#define FACTORY_REG_ORDER_ADDR_H		0x1A
#define FACTORY_REG_ORDER_ADDR_L		0x1B
#define FACTORY_REG_LCD_NOISE_STATE		0x1E
#define FACTORY_REG_KEYSHORT_EN 		0x2E
#define FACTORY_REG_KEYSHORT_STATE		0x2F

#define FACTORY_REG_LEFT_KEY			0x1E
#define FACTORY_REG_RIGHT_KEY			0x1F
#define FACTORY_REG_OPEN_REG20			0x20
#define FACTORY_REG_OPEN_REG21			0x21
#define FACTORY_REG_OPEN_REG22			0x22
#define FACTORY_REG_OPEN_REG23			0x23
#define FACTORY_REG_OPEN_REG2E			0x2E
#define FACTORY_REG_OPEN_REG86			0x86
#define FACTORY_REG_K1				0x31
#define FACTORY_REG_K2				0x32
#define FACTORY_REG_RAWDATA_ADDR		0x6A
#define FACTORY_REG_ORDER_ADDR			0x6C
#define FACTORY_REG_CB_ADDR			0x6E
#define FACTORY_REG_SHORT_ADDR			0x89
#define FACTORY_REG_RAWDATA_TEST_EN		0x9E
#define FACTORY_REG_CB_TEST_EN			0x9F
#define FACTORY_REG_OPEN_TEST_EN		0xA0
#define FACTORY_REG_START_SCAN			0xC0
#define FACTORY_REG_RAWDATA_TARGET		0xCA

/* mc_sc */
#define FACTORY_REG_FRE_LIST			0x0A
#define FACTORY_REG_DATA_TYPE			0x5B
#define FACTORY_REG_NORMALIZE			0x16
#define FACTORY_REG_RAWDATA_ADDR_MC_SC		0x36
#define FACTORY_REG_PATTERN			0x53
#define FACTORY_REG_NOMAPPING			0x54
#define FACTORY_REG_CHX_NUM_NOMAP		0x55
#define FACTORY_REG_CHY_NUM_NOMAP		0x56
#define FACTORY_REG_WC_SEL			0x09
#define FACTORY_REG_HC_SEL			0x0F
#define FACTORY_REG_MC_SC_MODE			0x44
#define FACTORY_REG_MC_SC_CB_ADDR_OFF		0x45
#define FACTORY_REG_MC_SC_CB_H_ADDR_OFF 	0x49
#define FACTORY_REG_MC_SC_CB_ADDR		0x4E
#define FACTROY_REG_SHORT_TEST_EN		0x07
#define FACTROY_REG_SHORT_CA			0x01
#define FACTROY_REG_SHORT_CC			0x02
#define FACTROY_REG_SHORT_CG			0x03
#define FACTROY_REG_SHORT_OFFSET		0x04
#define FACTROY_REG_SHORT_AB_CH 		0x58
#define FACTROY_REG_SHORT_RES_LEVEL		0x5A
#define FACTORY_REG_SHORT_ADDR_MC		0xF4
#define FACTORY_REG_FIR 			0xFB

#define FACTROY_REG_SHORT2_TEST_EN		0xC0
#define FACTROY_REG_SHORT2_CA			0x01
#define FACTROY_REG_SHORT2_CC			0x02
#define FACTROY_REG_SHORT2_CG			0x03
#define FACTROY_REG_SHORT2_OFFSET		0x04
#define FACTROY_REG_SHORT2_RES_LEVEL		0xC1
#define FACTROY_REG_SHORT2_DEALY		0xC2
#define FACTROY_REG_SHORT2_TEST_STATE		0xC3
#define FACTORY_REG_SHORT2_ADDR_MC		0xC4
#define FACTROY_REG_SHORT2_AB_CH		0xC6

/* sc */
#define FACTORY_REG_SCAN_ADDR2			0x08
#define FACTORY_REG_CH_NUM_SC			0x0A
#define FACTORY_REG_KEY_NUM_SC			0x0B
#define FACTORY_REG_SC_CB_ADDR_OFF		0x33
#define FACTORY_REG_SC_CB_ADDR			0x39
#define FACTORY_REG_RAWDATA_SADDR_SC		0x34
#define FACTORY_REG_RAWDATA_ADDR_SC		0x35
#define FACTORY_REG_CB_SEL			0x41
#define FACTORY_REG_FMODE			0xAE

#define TEST_RETVAL_00				0x00
#define TEST_RETVAL_AA				0xAA

#define FTS_MAX_SORT_SC 			32768
#define FTS_MIN_SORT_SC 			0

#endif /* _FOCALTECH_REG_H */
