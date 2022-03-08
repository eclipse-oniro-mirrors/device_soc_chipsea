/*
 * Copyright (c) 2021 Chipsea Technologies (Shenzhen) Corp., Ltd. All rights reserved.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef _CS1000LITE_IOMUX_H_
#define _CS1000LITE_IOMUX_H_

#include "chip.h"

/* ================================================================================ */
/* ================                CS1000LITE_IOMUX               ================ */
/* ================================================================================ */
#define REG_CS1000LITE_IOMUX_BASE 0x50012000

typedef struct {
  __IO uint32_t GPCFG[16];      /* 0x000: GPIO Config 0 ~ 15 */
  __IO uint32_t AGPCFG[16];     /* 0x040: AGPIO Config 0 ~ 15 */
} HWP_CS1000LITE_IOMUX_T;

static HWP_CS1000LITE_IOMUX_T * const cs1000liteIomux = ((HWP_CS1000LITE_IOMUX_T *)REG_CS1000LITE_IOMUX_BASE);


//pad_gpio_cfg_reg
#define CS1000LITE_IOMUX_PAD_GPIO_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_GPIO_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_GPIO_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_GPIO_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_GPIO_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_GPIO_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_GPIO_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_GPIO_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_GPIO_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_GPIO_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_SEL_SHIFT (0)

//pad_gpio_0_cfg_reg
#define CS1000LITE_IOMUX_PAD_GPIO_0_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_GPIO_0_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_GPIO_0_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_GPIO_0_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_GPIO_0_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_GPIO_0_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_GPIO_0_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_GPIO_0_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_GPIO_0_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_GPIO_0_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_0_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_0_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_GPIO_0_SEL_FUN_PSI_SCL_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_0_SEL_FUN_GPIO_0_SEL (1<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_0_SEL_FUN_A_UART1_RX_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_0_SEL_FUN_KEYOUT_0_SEL (3<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_0_SEL_FUN_GPIO_9_SEL (4<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_0_SEL_FUN_SPI_DI_1_SEL (5<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_0_SEL_FUN_PMIC_TPORTS0_SEL (6<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_0_SEL_FUN_A_TPORTS0_SEL (7<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_0_SEL_FUN_A_TPORTS9_SEL (8<<0)

//pad_gpio_1_cfg_reg
#define CS1000LITE_IOMUX_PAD_GPIO_1_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_GPIO_1_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_GPIO_1_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_GPIO_1_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_GPIO_1_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_GPIO_1_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_GPIO_1_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_GPIO_1_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_GPIO_1_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_GPIO_1_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_1_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_1_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_GPIO_1_SEL_FUN_PSI_SDA_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_1_SEL_FUN_GPIO_1_SEL (1<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_1_SEL_FUN_A_UART1_TX_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_1_SEL_FUN_KEYOUT_1_SEL (3<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_1_SEL_FUN_GPIO_10_SEL (4<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_1_SEL_FUN_SPI_CS_0_SEL (5<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_1_SEL_FUN_PMIC_TPORTS1_SEL (6<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_1_SEL_FUN_A_TPORTS1_SEL (7<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_1_SEL_FUN_A_TPORTS10_SEL (8<<0)

//pad_gpio_2_cfg_reg
#define CS1000LITE_IOMUX_PAD_GPIO_2_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_GPIO_2_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_GPIO_2_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_GPIO_2_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_GPIO_2_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_GPIO_2_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_GPIO_2_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_GPIO_2_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_GPIO_2_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_GPIO_2_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_2_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_2_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_GPIO_2_SEL_FUN_GPIO_2_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_2_SEL_FUN_A_UART1_RX_SEL (1<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_2_SEL_FUN_SPI_CLK_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_2_SEL_FUN_KEYOUT_2_SEL (3<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_2_SEL_FUN_GPIO_11_SEL (4<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_2_SEL_FUN_SPI_DIO_0_SEL (5<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_2_SEL_FUN_PMIC_TPORTS2_SEL (6<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_2_SEL_FUN_A_TPORTS2_SEL (7<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_2_SEL_FUN_PWM_1_SEL (8<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_2_SEL_FUN_A_DFT_JTAG_TCK_SEL (9<<0)

//pad_gpio_3_cfg_reg
#define CS1000LITE_IOMUX_PAD_GPIO_3_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_GPIO_3_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_GPIO_3_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_GPIO_3_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_GPIO_3_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_GPIO_3_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_GPIO_3_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_GPIO_3_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_GPIO_3_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_GPIO_3_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_3_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_3_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_GPIO_3_SEL_FUN_GPIO_3_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_3_SEL_FUN_A_UART1_TX_SEL (1<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_3_SEL_FUN_SPI_CS_0_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_3_SEL_FUN_PWM_0_SEL (3<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_3_SEL_FUN_GPIO_12_SEL (4<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_3_SEL_FUN_SPI_CLK_SEL (5<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_3_SEL_FUN_PMIC_TPORTS3_SEL (6<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_3_SEL_FUN_A_TPORTS3_SEL (7<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_3_SEL_FUN_A_TPORTS12_SEL (8<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_3_SEL_FUN_A_DFT_JTAG_TRST_SEL (9<<0)

//pad_gpio_4_cfg_reg
#define CS1000LITE_IOMUX_PAD_GPIO_4_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_GPIO_4_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_GPIO_4_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_GPIO_4_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_GPIO_4_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_GPIO_4_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_GPIO_4_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_GPIO_4_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_GPIO_4_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_GPIO_4_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_4_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_4_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_GPIO_4_SEL_FUN_GPIO_4_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_4_SEL_FUN_A_UART1_CTS_SEL (1<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_4_SEL_FUN_SPI_DIO_0_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_4_SEL_FUN_PWM_1_SEL (3<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_4_SEL_FUN_I2CM_SCL_SEL (4<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_4_SEL_FUN_SPI_CS_1_SEL (5<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_4_SEL_FUN_PMIC_TPORTS4_SEL (6<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_4_SEL_FUN_A_TPORTS4_SEL (7<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_4_SEL_FUN_PMIC_TPORTS9_SEL (8<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_4_SEL_FUN_A_DFT_JTAG_TDO_SEL (9<<0)

//pad_gpio_5_cfg_reg
#define CS1000LITE_IOMUX_PAD_GPIO_5_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_GPIO_5_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_GPIO_5_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_GPIO_5_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_GPIO_5_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_GPIO_5_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_GPIO_5_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_GPIO_5_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_GPIO_5_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_GPIO_5_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_5_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_5_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_GPIO_5_SEL_FUN_GPIO_5_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_5_SEL_FUN_A_UART1_RTS_SEL (1<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_5_SEL_FUN_SPI_DI_1_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_5_SEL_FUN_PWM_2_SEL (3<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_5_SEL_FUN_I2CM_SDA_SEL (4<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_5_SEL_FUN_KEYOUT_0_SEL (5<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_5_SEL_FUN_PMIC_TPORTS5_SEL (6<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_5_SEL_FUN_A_TPORTS5_SEL (7<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_5_SEL_FUN_PMIC_TPORTS10_SEL (8<<0)

//pad_gpio_6_cfg_reg
#define CS1000LITE_IOMUX_PAD_GPIO_6_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_GPIO_6_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_GPIO_6_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_GPIO_6_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_GPIO_6_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_GPIO_6_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_GPIO_6_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_GPIO_6_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_GPIO_6_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_GPIO_6_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_6_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_6_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_GPIO_6_SEL_FUN_GPIO_6_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_6_SEL_FUN_A_UART0_RX_SEL (1<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_6_SEL_FUN_SPI_CS_1_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_6_SEL_FUN_I2CM_SCL_SEL (3<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_6_SEL_FUN_KEYIN_0_SEL (4<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_6_SEL_FUN_KEYOUT_1_SEL (5<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_6_SEL_FUN_PMIC_TPORTS6_SEL (6<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_6_SEL_FUN_A_TPORTS6_SEL (7<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_6_SEL_FUN_PMIC_TPORTS11_SEL (8<<0)

//pad_gpio_7_cfg_reg
#define CS1000LITE_IOMUX_PAD_GPIO_7_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_GPIO_7_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_GPIO_7_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_GPIO_7_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_GPIO_7_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_GPIO_7_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_GPIO_7_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_GPIO_7_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_GPIO_7_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_GPIO_7_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_7_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_7_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_GPIO_7_SEL_FUN_GPIO_7_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_7_SEL_FUN_A_UART0_TX_SEL (1<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_7_SEL_FUN_I2CM_SCL_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_7_SEL_FUN_I2CM_SDA_SEL (3<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_7_SEL_FUN_KEYIN_1_SEL (4<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_7_SEL_FUN_KEYOUT_2_SEL (5<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_7_SEL_FUN_PMIC_TPORTS7_SEL (6<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_7_SEL_FUN_A_TPORTS7_SEL (7<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_7_SEL_FUN_PMIC_TPORTS12_SEL (8<<0)

//pad_gpio_8_cfg_reg
#define CS1000LITE_IOMUX_PAD_GPIO_8_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_GPIO_8_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_GPIO_8_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_GPIO_8_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_GPIO_8_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_GPIO_8_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_GPIO_8_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_GPIO_8_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_GPIO_8_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_GPIO_8_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_8_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_8_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_GPIO_8_SEL_FUN_GPIO_8_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_8_SEL_FUN_CODEC_MCLK_SEL (1<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_8_SEL_FUN_I2CM_SDA_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_8_SEL_FUN_A_UART0_RX_SEL (3<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_8_SEL_FUN_SPI_DI_1_SEL (4<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_8_SEL_FUN_I2CM_SCL_SEL (5<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_8_SEL_FUN_PMIC_TPORTS8_SEL (6<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_8_SEL_FUN_A_TPORTS8_SEL (7<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_8_SEL_FUN_PMIC_TPORTS0_SEL (8<<0)

//pad_gpio_9_cfg_reg
#define CS1000LITE_IOMUX_PAD_GPIO_9_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_GPIO_9_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_GPIO_9_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_GPIO_9_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_GPIO_9_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_GPIO_9_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_GPIO_9_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_GPIO_9_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_GPIO_9_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_GPIO_9_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_9_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_9_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_GPIO_9_SEL_FUN_GPIO_9_SEL (0<<0)

//pad_gpio_10_cfg_reg
#define CS1000LITE_IOMUX_PAD_GPIO_10_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_GPIO_10_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_GPIO_10_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_GPIO_10_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_GPIO_10_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_GPIO_10_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_GPIO_10_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_GPIO_10_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_GPIO_10_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_GPIO_10_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_10_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_10_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_GPIO_10_SEL_FUN_GPIO_10_SEL (0<<0)

//pad_gpio_11_cfg_reg
#define CS1000LITE_IOMUX_PAD_GPIO_11_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_GPIO_11_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_GPIO_11_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_GPIO_11_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_GPIO_11_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_GPIO_11_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_GPIO_11_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_GPIO_11_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_GPIO_11_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_GPIO_11_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_11_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_11_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_GPIO_11_SEL_FUN_GPIO_11_SEL (0<<0)

//pad_gpio_12_cfg_reg
#define CS1000LITE_IOMUX_PAD_GPIO_12_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_GPIO_12_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_GPIO_12_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_GPIO_12_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_GPIO_12_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_GPIO_12_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_GPIO_12_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_GPIO_12_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_GPIO_12_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_GPIO_12_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_12_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_12_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_GPIO_12_SEL_FUN_GPIO_12_SEL (0<<0)

//pad_gpio_13_cfg_reg
#define CS1000LITE_IOMUX_PAD_GPIO_13_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_GPIO_13_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_GPIO_13_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_GPIO_13_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_GPIO_13_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_GPIO_13_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_GPIO_13_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_GPIO_13_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_GPIO_13_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_GPIO_13_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_13_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_13_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_GPIO_13_SEL_FUN_GPIO_13_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_13_SEL_FUN_PWM_3_SEL (1<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_13_SEL_FUN_KEYIN_0_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_13_SEL_FUN_A_UART0_TX_SEL (3<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_13_SEL_FUN_SPI_DIO_0_SEL (4<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_13_SEL_FUN_I2CM_SDA_SEL (5<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_13_SEL_FUN_PMIC_TPORTS13_SEL (6<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_13_SEL_FUN_A_TPORTS13_SEL (7<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_13_SEL_FUN_A_TPORTS0_SEL (8<<0)

//pad_gpio_14_cfg_reg
#define CS1000LITE_IOMUX_PAD_GPIO_14_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_GPIO_14_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_GPIO_14_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_GPIO_14_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_GPIO_14_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_GPIO_14_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_GPIO_14_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_GPIO_14_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_GPIO_14_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_GPIO_14_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_14_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_14_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_GPIO_14_SEL_FUN_GPIO_14_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_14_SEL_FUN_PWM_4_SEL (1<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_14_SEL_FUN_KEYIN_1_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_14_SEL_FUN_KEYOUT_0_SEL (3<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_14_SEL_FUN_SPI_CLK_SEL (4<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_14_SEL_FUN_PWM_0_SEL (5<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_14_SEL_FUN_PMIC_TPORTS14_SEL (6<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_14_SEL_FUN_A_TPORTS14_SEL (7<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_14_SEL_FUN_A_TPORTS11_SEL (8<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_14_SEL_FUN_A_DFT_JTAG_TMS_SEL (9<<0)

//pad_gpio_15_cfg_reg
#define CS1000LITE_IOMUX_PAD_GPIO_15_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_GPIO_15_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_GPIO_15_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_GPIO_15_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_GPIO_15_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_GPIO_15_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_GPIO_15_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_GPIO_15_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_GPIO_15_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_GPIO_15_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_15_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_15_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_GPIO_15_SEL_FUN_GPIO_15_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_15_SEL_FUN_PWM_5_SEL (1<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_15_SEL_FUN_KEYIN_2_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_15_SEL_FUN_KEYOUT_1_SEL (3<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_15_SEL_FUN_SPI_CS_0_SEL (4<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_15_SEL_FUN_PWM_1_SEL (5<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_15_SEL_FUN_PMIC_TPORTS15_SEL (6<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_15_SEL_FUN_A_TPORTS15_SEL (7<<0)
#define CS1000LITE_IOMUX_PAD_GPIO_15_SEL_FUN_A_DFT_JTAG_TDI_SEL (9<<0)

//pad_agpio_cfg_reg
#define CS1000LITE_IOMUX_PAD_AGPIO_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_AGPIO_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_AGPIO_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_AGPIO_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_AGPIO_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_AGPIO_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_AGPIO_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_AGPIO_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_AGPIO_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_AGPIO_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_SEL_SHIFT (0)

//pad_agpio_0_cfg_reg
#define CS1000LITE_IOMUX_PAD_AGPIO_0_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_AGPIO_0_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_AGPIO_0_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_AGPIO_0_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_AGPIO_0_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_AGPIO_0_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_AGPIO_0_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_AGPIO_0_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_AGPIO_0_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_AGPIO_0_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_0_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_0_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_AGPIO_0_SEL_FUN_ULPI_CLK_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_0_SEL_FUN_TPORTS0_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_0_SEL_FUN_DFT_JTAG_TCK_SEL (3<<0)

//pad_agpio_1_cfg_reg
#define CS1000LITE_IOMUX_PAD_AGPIO_1_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_AGPIO_1_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_AGPIO_1_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_AGPIO_1_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_AGPIO_1_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_AGPIO_1_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_AGPIO_1_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_AGPIO_1_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_AGPIO_1_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_AGPIO_1_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_1_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_1_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_AGPIO_1_SEL_FUN_ULPI_STP_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_1_SEL_FUN_TPORTS1_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_1_SEL_FUN_DFT_JTAG_TRST_SEL (3<<0)

//pad_agpio_2_cfg_reg
#define CS1000LITE_IOMUX_PAD_AGPIO_2_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_AGPIO_2_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_AGPIO_2_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_AGPIO_2_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_AGPIO_2_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_AGPIO_2_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_AGPIO_2_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_AGPIO_2_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_AGPIO_2_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_AGPIO_2_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_2_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_2_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_AGPIO_2_SEL_FUN_ULPI_DIR_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_2_SEL_FUN_TPORTS2_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_2_SEL_FUN_DFT_JTAG_TMS_SEL (3<<0)

//pad_agpio_3_cfg_reg
#define CS1000LITE_IOMUX_PAD_AGPIO_3_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_AGPIO_3_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_AGPIO_3_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_AGPIO_3_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_AGPIO_3_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_AGPIO_3_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_AGPIO_3_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_AGPIO_3_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_AGPIO_3_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_AGPIO_3_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_3_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_3_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_AGPIO_3_SEL_FUN_ULPI_NXT_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_3_SEL_FUN_TPORTS3_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_3_SEL_FUN_DFT_JTAG_TDI_SEL (3<<0)

//pad_agpio_4_cfg_reg
#define CS1000LITE_IOMUX_PAD_AGPIO_4_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_AGPIO_4_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_AGPIO_4_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_AGPIO_4_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_AGPIO_4_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_AGPIO_4_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_AGPIO_4_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_AGPIO_4_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_AGPIO_4_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_AGPIO_4_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_4_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_4_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_AGPIO_4_SEL_FUN_ULPI_DATA0_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_4_SEL_FUN_TPORTS4_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_4_SEL_FUN_DFT_JTAG_TDO_SEL (3<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_4_SEL_FUN_DFT_JTAG_TCK_SEL (5<<0)

//pad_agpio_5_cfg_reg
#define CS1000LITE_IOMUX_PAD_AGPIO_5_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_AGPIO_5_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_AGPIO_5_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_AGPIO_5_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_AGPIO_5_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_AGPIO_5_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_AGPIO_5_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_AGPIO_5_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_AGPIO_5_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_AGPIO_5_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_5_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_5_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_AGPIO_5_SEL_FUN_ULPI_DATA1_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_5_SEL_FUN_TPORTS5_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_5_SEL_FUN_DFT_JTAG_TRST_SEL (5<<0)

//pad_agpio_6_cfg_reg
#define CS1000LITE_IOMUX_PAD_AGPIO_6_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_AGPIO_6_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_AGPIO_6_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_AGPIO_6_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_AGPIO_6_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_AGPIO_6_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_AGPIO_6_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_AGPIO_6_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_AGPIO_6_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_AGPIO_6_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_6_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_6_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_AGPIO_6_SEL_FUN_ULPI_DATA2_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_6_SEL_FUN_TPORTS6_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_6_SEL_FUN_DFT_JTAG_TMS_SEL (5<<0)

//pad_agpio_7_cfg_reg
#define CS1000LITE_IOMUX_PAD_AGPIO_7_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_AGPIO_7_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_AGPIO_7_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_AGPIO_7_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_AGPIO_7_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_AGPIO_7_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_AGPIO_7_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_AGPIO_7_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_AGPIO_7_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_AGPIO_7_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_7_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_7_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_AGPIO_7_SEL_FUN_ULPI_DATA3_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_7_SEL_FUN_TPORTS7_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_7_SEL_FUN_CODEC_MCLK_SEL (3<<0)

//pad_agpio_8_cfg_reg
#define CS1000LITE_IOMUX_PAD_AGPIO_8_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_AGPIO_8_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_AGPIO_8_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_AGPIO_8_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_AGPIO_8_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_AGPIO_8_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_AGPIO_8_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_AGPIO_8_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_AGPIO_8_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_AGPIO_8_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_8_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_8_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_AGPIO_8_SEL_FUN_ULPI_DATA4_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_8_SEL_FUN_TPORTS8_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_8_SEL_FUN_CODEC_MCLK_SEL (4<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_8_SEL_FUN_DFT_JTAG_TDI_SEL (5<<0)

//pad_agpio_9_cfg_reg
#define CS1000LITE_IOMUX_PAD_AGPIO_9_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_AGPIO_9_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_AGPIO_9_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_AGPIO_9_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_AGPIO_9_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_AGPIO_9_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_AGPIO_9_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_AGPIO_9_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_AGPIO_9_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_AGPIO_9_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_9_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_9_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_AGPIO_9_SEL_FUN_ULPI_DATA5_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_9_SEL_FUN_PSI_SCL_SEL (1<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_9_SEL_FUN_TPORTS9_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_9_SEL_FUN_DFT_JTAG_TDO_SEL (5<<0)

//pad_agpio_10_cfg_reg
#define CS1000LITE_IOMUX_PAD_AGPIO_10_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_AGPIO_10_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_AGPIO_10_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_AGPIO_10_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_AGPIO_10_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_AGPIO_10_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_AGPIO_10_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_AGPIO_10_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_AGPIO_10_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_AGPIO_10_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_10_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_10_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_AGPIO_10_SEL_FUN_ULPI_DATA6_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_10_SEL_FUN_PSI_SDA_SEL (1<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_10_SEL_FUN_TPORTS10_SEL (2<<0)

//pad_agpio_11_cfg_reg
#define CS1000LITE_IOMUX_PAD_AGPIO_11_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_AGPIO_11_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_AGPIO_11_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_AGPIO_11_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_AGPIO_11_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_AGPIO_11_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_AGPIO_11_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_AGPIO_11_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_AGPIO_11_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_AGPIO_11_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_11_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_11_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_AGPIO_11_SEL_FUN_ULPI_DATA7_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_11_SEL_FUN_TPORTS11_SEL (2<<0)

//pad_agpio_12_cfg_reg
#define CS1000LITE_IOMUX_PAD_AGPIO_12_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_AGPIO_12_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_AGPIO_12_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_AGPIO_12_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_AGPIO_12_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_AGPIO_12_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_AGPIO_12_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_AGPIO_12_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_AGPIO_12_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_AGPIO_12_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_12_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_12_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_AGPIO_12_SEL_FUN_UART1_CTS_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_12_SEL_FUN_UART0_RX_SEL (1<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_12_SEL_FUN_TPORTS12_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_12_SEL_FUN_PSI_SCL_SEL (4<<0)

//pad_agpio_13_cfg_reg
#define CS1000LITE_IOMUX_PAD_AGPIO_13_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_AGPIO_13_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_AGPIO_13_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_AGPIO_13_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_AGPIO_13_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_AGPIO_13_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_AGPIO_13_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_AGPIO_13_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_AGPIO_13_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_AGPIO_13_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_13_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_13_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_AGPIO_13_SEL_FUN_UART1_RTS_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_13_SEL_FUN_UART0_TX_SEL (1<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_13_SEL_FUN_TPORTS13_SEL (2<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_13_SEL_FUN_PSI_SDA_SEL (4<<0)

//pad_agpio_14_cfg_reg
#define CS1000LITE_IOMUX_PAD_AGPIO_14_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_AGPIO_14_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_AGPIO_14_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_AGPIO_14_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_AGPIO_14_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_AGPIO_14_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_AGPIO_14_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_AGPIO_14_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_AGPIO_14_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_AGPIO_14_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_14_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_14_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_AGPIO_14_SEL_FUN_UART1_RX_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_14_SEL_FUN_PSI_SCL_SEL (1<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_14_SEL_FUN_TPORTS14_SEL (2<<0)

//pad_agpio_15_cfg_reg
#define CS1000LITE_IOMUX_PAD_AGPIO_15_OEN_FRC (1<<28)
#define CS1000LITE_IOMUX_PAD_AGPIO_15_OUT_FRC (1<<24)
#define CS1000LITE_IOMUX_PAD_AGPIO_15_OUT_REG (1<<20)
#define CS1000LITE_IOMUX_PAD_AGPIO_15_DRV_STRENGTH(n) (((n)&3)<<18)
#define CS1000LITE_IOMUX_PAD_AGPIO_15_OEN_REG (1<<17)
#define CS1000LITE_IOMUX_PAD_AGPIO_15_PULL_FRC (1<<16)
#define CS1000LITE_IOMUX_PAD_AGPIO_15_PULL_UP (1<<9)
#define CS1000LITE_IOMUX_PAD_AGPIO_15_PULL_DN (1<<8)
#define CS1000LITE_IOMUX_PAD_AGPIO_15_ANA(n) (((n)&15)<<4)
#define CS1000LITE_IOMUX_PAD_AGPIO_15_SEL(n) (((n)&15)<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_15_SEL_MASK (15<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_15_SEL_SHIFT (0)
#define CS1000LITE_IOMUX_PAD_AGPIO_15_SEL_FUN_UART1_TX_SEL (0<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_15_SEL_FUN_PSI_SDA_SEL (1<<0)
#define CS1000LITE_IOMUX_PAD_AGPIO_15_SEL_FUN_TPORTS15_SEL (2<<0)

#endif /* _CS1000LITE_IOMUX_H_ */
