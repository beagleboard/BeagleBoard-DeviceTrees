/*
 * Copyright (C) 2020 Deepak Khatri <deepaklorkhatri7@gmail.com>
 *
 * This program is free software you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _DT_BINDINGS_BOARD_AM335X_BBB_PINS_H
#define _DT_BINDINGS_BOARD_AM335X_BBB_PINS_H

#define P8_03(mode)     AM33XX_IOPAD(0x0818, mode)  /* gpmc_ad6 */
#define P8_04(mode)     AM33XX_IOPAD(0x081c, mode)  /* gpmc_ad7 */
#define P8_05(mode)     AM33XX_IOPAD(0x0808, mode)  /* gpmc_ad2 */
#define P8_06(mode)     AM33XX_IOPAD(0x080c, mode)  /* gpmc_ad3 */
#define P8_07(mode)     AM33XX_IOPAD(0x0890, mode)  /* gpmc_advn_ale */
#define P8_08(mode)     AM33XX_IOPAD(0x0894, mode)  /* gpmc_oen_ren */
#define P8_09(mode)     AM33XX_IOPAD(0x089c, mode)  /* gpmc_be0n_cle */
#define P8_10(mode)     AM33XX_IOPAD(0x0898, mode)  /* gpmc_wen */
#define P8_11(mode)     AM33XX_IOPAD(0x0834, mode)  /* gpmc_ad13 */
#define P8_12(mode)     AM33XX_IOPAD(0x0830, mode)  /* gpmc_ad12 */
#define P8_13(mode)     AM33XX_IOPAD(0x0824, mode)  /* gpmc_ad9 */
#define P8_14(mode)     AM33XX_IOPAD(0x0828, mode)  /* gpmc_ad10 */
#define P8_15(mode)     AM33XX_IOPAD(0x083c, mode)  /* gpmc_ad15 */
#define P8_16(mode)     AM33XX_IOPAD(0x0838, mode)  /* gpmc_ad14 */
#define P8_17(mode)     AM33XX_IOPAD(0x082c, mode)  /* gpmc_ad11 */
#define P8_18(mode)     AM33XX_IOPAD(0x088c, mode)  /* gpmc_clk */
#define P8_19(mode)     AM33XX_IOPAD(0x0820, mode)  /* gpmc_ad8 */
#define P8_20(mode)     AM33XX_IOPAD(0x0884, mode)  /* gpmc_csn2 */
#define P8_21(mode)     AM33XX_IOPAD(0x0880, mode)  /* gpmc_csn1 */
#define P8_22(mode)     AM33XX_IOPAD(0x0814, mode)  /* gpmc_ad5 */
#define P8_23(mode)     AM33XX_IOPAD(0x0810, mode)  /* gpmc_ad4 */
#define P8_24(mode)     AM33XX_IOPAD(0x0804, mode)  /* gpmc_ad1 */
#define P8_25(mode)     AM33XX_IOPAD(0x0800, mode)  /* gpmc_ad0 */
#define P8_26(mode)     AM33XX_IOPAD(0x087c, mode)  /* gpmc_csn0 */
#define P8_27(mode)     AM33XX_IOPAD(0x08e0, mode)  /* lcd_vsync */
#define P8_28(mode)     AM33XX_IOPAD(0x08e8, mode)  /* lcd_pclk */
#define P8_29(mode)     AM33XX_IOPAD(0x08e4, mode)  /* lcd_hsync */
#define P8_30(mode)     AM33XX_IOPAD(0x08ec, mode)  /* lcd_ac_bias_en */
#define P8_31(mode)     AM33XX_IOPAD(0x08d8, mode)  /* lcd_data14 */
#define P8_32(mode)     AM33XX_IOPAD(0x08dc, mode)  /* lcd_data15 */
#define P8_33(mode)     AM33XX_IOPAD(0x08d4, mode)  /* lcd_data13 */
#define P8_34(mode)     AM33XX_IOPAD(0x08cc, mode)  /* lcd_data11 */
#define P8_35(mode)     AM33XX_IOPAD(0x08d0, mode)  /* lcd_data12 */
#define P8_36(mode)     AM33XX_IOPAD(0x08c8, mode)  /* lcd_data10 */
#define P8_37(mode)     AM33XX_IOPAD(0x08c0, mode)  /* lcd_data8 */
#define P8_38(mode)     AM33XX_IOPAD(0x08c4, mode)  /* lcd_data9 */
#define P8_39(mode)     AM33XX_IOPAD(0x08b8, mode)  /* lcd_data6 */
#define P8_40(mode)     AM33XX_IOPAD(0x08bc, mode)  /* lcd_data7 */
#define P8_41(mode)     AM33XX_IOPAD(0x08b0, mode)  /* lcd_data4 */
#define P8_42(mode)     AM33XX_IOPAD(0x08b4, mode)  /* lcd_data5 */
#define P8_43(mode)     AM33XX_IOPAD(0x08a8, mode)  /* lcd_data2 */
#define P8_44(mode)     AM33XX_IOPAD(0x08ac, mode)  /* lcd_data3 */
#define P8_45(mode)     AM33XX_IOPAD(0x08a0, mode)  /* lcd_data0 */
#define P8_46(mode)     AM33XX_IOPAD(0x08a4, mode)  /* lcd_data1 */
#define P9_11(mode)     AM33XX_IOPAD(0x0870, mode)  /* gpmc_wait0 */
#define P9_12(mode)     AM33XX_IOPAD(0x0878, mode)  /* gpmc_be1n */
#define P9_13(mode)     AM33XX_IOPAD(0x0874, mode) 	/* gpmc_wpn */
#define P9_14(mode)     AM33XX_IOPAD(0x0848, mode)  /* gpmc_a2 */
#define P9_15(mode)     AM33XX_IOPAD(0x0840, mode)  /* gpmc_a0 */
#define P9_16(mode)     AM33XX_IOPAD(0x084c, mode)  /* gpmc_a3 */
#define P9_17(mode)     AM33XX_IOPAD(0x095c, mode)  /* spi0_cs0 */
#define P9_18(mode)     AM33XX_IOPAD(0x0958, mode)  /* spi0_d1 */
#define P9_19(mode)     AM33XX_IOPAD(0x097c, mode)  /* uart1_rtsn */
#define P9_20(mode)     AM33XX_IOPAD(0x0978, mode)  /* uart1_ctsn */
#define P9_21(mode)     AM33XX_IOPAD(0x0954, mode)  /* spi0_d0 */
#define P9_22(mode)     AM33XX_IOPAD(0x0950, mode) 	/* spi0_sclk */
#define P9_23(mode)     AM33XX_IOPAD(0x0844, mode)  /* gpmc_a1 */
#define P9_24(mode)     AM33XX_IOPAD(0x0984, mode)  /* uart1_txd */
#define P9_25(mode)     AM33XX_IOPAD(0x09ac, mode)  /* mcasp0_ahclkx */
#define P9_26(mode)     AM33XX_IOPAD(0x0980, mode)  /* uart1_rxd */
#define P9_27(mode)     AM33XX_IOPAD(0x09a4, mode)  /* mcasp0_fsr */
#define P9_28(mode)     AM33XX_IOPAD(0x099c, mode)  /* mcasp0_ahclkr */
#define P9_29(mode)     AM33XX_IOPAD(0x0994, mode)  /* mcasp0_fsx */
#define P9_30(mode)     AM33XX_IOPAD(0x0998, mode)  /* mcasp0_axr0 */
#define P9_31(mode)     AM33XX_IOPAD(0x0990, mode)  /* mcasp0_aclkx */
#define P9_41A(mode)    AM33XX_IOPAD(0x09b4, mode) /* xdma_event_intr1 */
#define P9_41B(mode)    AM33XX_IOPAD(0x09a8, mode) /* mcasp0_axr1 */
#define P9_42A(mode)    AM33XX_IOPAD(0x0964, mode) /* P0_in_PWM0_out */
#define P9_42B(mode)    AM33XX_IOPAD(0x09a0, mode) /* mcasp0_aclkr */

#endif