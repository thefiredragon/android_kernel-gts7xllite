/* SPDX-License-Identifier: GPL-2.0 */
/*  Himax Android Driver Sample Code for QCT platform
 *
 *  Copyright (C) 2019 Himax Corporation.
 *
 *  This software is licensed under the terms of the GNU General Public
 *  License version 2,  as published by the Free Software Foundation,  and
 *  may be copied,  distributed,  and modified under those terms.
 *
 *  This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 */

#ifndef HIMAX_PLATFORM_H
#define HIMAX_PLATFORM_H

#include <linux/delay.h>
#include <linux/fs.h>
#include <linux/gpio.h>
#include <linux/types.h>
#include <linux/spi/spi.h>
#include <linux/interrupt.h>
#include <linux/reboot.h>
#if defined(CONFIG_HMX_DB)
	#include <linux/regulator/consumer.h>
#endif

#define HIMAX_I2C_RETRY_TIMES 3

#define HIMAX_LOG_TAG "[HXTP]"

#if defined(CONFIG_TOUCHSCREEN_HIMAX_DEBUG)
#define D(x...) pr_debug("[HXTP] " x)
#if defined(CONFIG_TOUCHSCREEN_HIMAX_SPI)
#define I(x...) input_info(true, &private_ts->spi->dev, "[HXTP] " x)
#define E(x...) input_err(true, &private_ts->spi->dev, "[HXTP] " x)
#define RI(x...) input_raw_info(true, &private_ts->spi->dev, "[HXTP] " x)
#else
#define I(x...) pr_info("[HXTP] " x)
#define E(x...) pr_err("[HXTP][ERROR] " x)
#define RI(x...) pr_info("[HXTP] " x)
#endif
#define KI(x...) pr_info("[HXTP] " x)
#define W(x...) pr_warn("[HXTP][WARNING] " x)
#define KE(x...) pr_err("[HXTP][ERROR] " x)
#define DIF(x...) \
do { \
	if (debug_flag) \
		pr_debug("[HXTP][DEBUG] " x) \
	} while (0)
#else
#define D(x...)
#define I(x...)
#define W(x...)
#define E(x...)
#define DIF(x...)
#define RI(x...)
#endif

#if defined(CONFIG_HMX_DB)
	/* Analog voltage @2.7 V */
	#define HX_VTG_MIN_UV	2700000
	#define HX_VTG_MAX_UV	3300000
	#define HX_ACTIVE_LOAD_UA	15000
	#define HX_LPM_LOAD_UA	10
	/* Digital voltage @1.8 V */
	#define HX_VTG_DIG_MIN_UV	1800000
	#define HX_VTG_DIG_MAX_UV	1800000
	#define HX_ACTIVE_LOAD_DIG_UA	10000
	#define HX_LPM_LOAD_DIG_UA	10

	#define HX_I2C_VTG_MIN_UV	1800000
	#define HX_I2C_VTG_MAX_UV	1800000
	#define HX_I2C_LOAD_UA	10000
	#define HX_I2C_LPM_LOAD_UA	10
#endif

#define HIMAX_common_NAME	"himax_tp"
#define HIMAX_I2C_ADDR	0x48
#define INPUT_DEV_NAME	"himax-touchscreen"

struct himax_i2c_platform_data {
	int abs_x_min;
	int abs_x_max;
	int abs_x_fuzz;
	int abs_y_min;
	int abs_y_max;
	int abs_y_fuzz;
	int abs_pressure_min;
	int abs_pressure_max;
	int abs_pressure_fuzz;
	int abs_width_min;
	int abs_width_max;
	int screenWidth;
	int screenHeight;
	u32 area_indicator;
	u32 area_navigation;
	u32 area_edge;
	uint8_t fw_version;
	uint8_t tw_id;
	uint8_t powerOff3V3;
	uint8_t cable_config[2];
	uint8_t protocol_type;
	int gpio_irq;
	int gpio_reset;
	int gpio_3v3_en;
	int gpio_vendor_check;
	int gpio_pon;
	int (*power)(int on);
	void (*reset)(void);
	struct himax_virtual_key *virtual_key;
	struct kobject *vk_obj;
	struct kobj_attribute *vk2Use;
	int hx_config_size;
	bool support_aot;
	bool enable_sysinput_enabled;
	bool support_dex;
	bool notify_tsp_esd;

	const char *panel_buck_en;
	const char *panel_buck_en2;
	const char *panel_ldo_en;
	const char *panel_reset;

	const char *i_CTPM_firmware_name;
	const char *proj_name;

#if defined(CONFIG_HMX_DB)
	bool	i2c_pull_up;
	bool	digital_pwr_regulator;
	int reset_gpio;
	u32 reset_gpio_flags;
	int irq_gpio;
	u32 irq_gpio_flags;
	struct regulator *vcc_ana; /* For Dragon Board */
	struct regulator *vcc_dig; /* For Dragon Board */
	struct regulator *vcc_i2c; /* For Dragon Board */

#endif

	int (*suspend)(struct device *dev);
	int (*resume)(struct device *dev);
};


extern struct himax_ic_data *ic_data;
extern struct himax_ts_data *private_ts;
int himax_chip_common_init(void);
void himax_chip_common_deinit(void);

extern void himax_ts_work(struct himax_ts_data *ts);
enum hrtimer_restart himax_ts_timer_func(struct hrtimer *timer);
extern int himax_bus_read(uint8_t command, uint8_t *data, uint32_t length, uint8_t toRetry);
extern int himax_bus_write(uint8_t command, uint8_t *data, uint32_t length, uint8_t toRetry);
extern int himax_bus_write_command(uint8_t command, uint8_t toRetry);
extern int himax_bus_master_write(uint8_t *data, uint32_t length, uint8_t toRetry);
extern void himax_int_enable(int enable);
extern int himax_ts_register_interrupt(void);
int himax_ts_unregister_interrupt(void);
extern uint8_t himax_int_gpio_read(int pinnum);

extern int himax_gpio_power_config(struct himax_i2c_platform_data *pdata);
void himax_gpio_power_deconfig(struct himax_i2c_platform_data *pdata);

#if defined(CONFIG_DRM)
	extern int drm_notifier_callback(struct notifier_block *self, unsigned long event, void *data);
#elif defined(CONFIG_FB)
	extern int fb_notifier_callback(struct notifier_block *self, unsigned long event, void *data);
#endif
#ifndef CONFIG_DISPLAY_SAMSUNG
extern unsigned int lcdtype;
#endif
#endif
