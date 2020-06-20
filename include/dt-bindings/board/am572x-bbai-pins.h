/*
 * Copyright (C) 2020 Deepak Khatri <deepaklorkhatri7@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _DT_BINDINGS_BOARD_AM5729_BBAI_PINS_H
#define _DT_BINDINGS_BOARD_AM5729_BBAI_PINS_H   

#define P8_03(mode)     DRA7XX_CORE_IOPAD(0x379C, mode) /* AB8: P8.3: mmc3_dat6 */
#define P8_04(mode)     DRA7XX_CORE_IOPAD(0x37A0, mode) /* AB5: P8.4: mmc3_dat7 */
#define P8_05(mode)     DRA7XX_CORE_IOPAD(0x378C, mode) /* AC9: P8.5: mmc3_dat2 */
#define P8_06(mode)     DRA7XX_CORE_IOPAD(0x3790, mode) /* AC3: P8.6: mmc3_dat3 */
#define P8_07(mode)     DRA7XX_CORE_IOPAD(0x36EC, mode) /* G14: P8.7: mcasp1_axr14 */
#define P8_08(mode)     DRA7XX_CORE_IOPAD(0x36F0, mode) /* F14: P8.8: mcasp1_axr15 */
#define P8_09(mode)     DRA7XX_CORE_IOPAD(0x3698, mode) /* E17: P8.9: xref_clk1 */
#define P8_10(mode)     DRA7XX_CORE_IOPAD(0x36E8, mode) /* A13: P8.10: mcasp1_axr13 */
#define P8_11(mode)     DRA7XX_CORE_IOPAD(0x3510, mode) /* AH4: P8.11: vin1a_d7 */
#define P8_12(mode)     DRA7XX_CORE_IOPAD(0x350C, mode) /* AG6: P8.12: vin1a_d6 */
#define P8_13(mode)     DRA7XX_CORE_IOPAD(0x3590, mode) /* D3: P8.13: vin2a_d10 */
#define P8_14(mode)     DRA7XX_CORE_IOPAD(0x3598, mode) /* D5: P8.14: vin2a_d12 */
#define P8_15A(mode)    DRA7XX_CORE_IOPAD(0x3570, mode) /* D1: P8.15a: vin2a_d2 */
#define P8_15B(mode)    DRA7XX_CORE_IOPAD(0x35B4, mode) /* A3: P8.15b: vin2a_d19 */
#define P8_16(mode)     DRA7XX_CORE_IOPAD(0x35BC, mode) /* B4: P8.16: vin2a_d21 */
#define P8_17(mode)     DRA7XX_CORE_IOPAD(0x3624, mode) /* A7: P8.17: vout1_d18 */
#define P8_18(mode)     DRA7XX_CORE_IOPAD(0x3588, mode) /* F5: P8.18: vin2a_d8 */
#define P8_19(mode)     DRA7XX_CORE_IOPAD(0x358C, mode) /* E6: P8.19: vin2a_d9 */
#define P8_20(mode)     DRA7XX_CORE_IOPAD(0x3780, mode) /* AC4: P8.20: mmc3_cmd */
#define P8_21(mode)     DRA7XX_CORE_IOPAD(0x377C, mode) /* AD4: P8.21: mmc3_clk */
#define P8_22(mode)     DRA7XX_CORE_IOPAD(0x3798, mode) /* AD6: P8.22: mmc3_dat5 */
#define P8_23(mode)     DRA7XX_CORE_IOPAD(0x3794, mode) /* AC8: P8.23: mmc3_dat4 */
#define P8_24(mode)     DRA7XX_CORE_IOPAD(0x3788, mode) /* AC6: P8.24: mmc3_dat1 */
#define P8_25(mode)     DRA7XX_CORE_IOPAD(0x3784, mode) /* AC7: P8.25: mmc3_dat0 */
#define P8_26(mode)     DRA7XX_CORE_IOPAD(0x35B8, mode) /* B3: P8.26: vin2a_d20 */
#define P8_27A(mode)    DRA7XX_CORE_IOPAD(0x35D8, mode) /* E11: P8.27a: vout1_vsync */
#define P8_27B(mode)    DRA7XX_CORE_IOPAD(0x3628, mode) /* A8: P8.27b: vout1_d19 */
#define P8_28A(mode)    DRA7XX_CORE_IOPAD(0x35C8, mode) /* D11: P8.28a: vout1_clk */
#define P8_28B(mode)    DRA7XX_CORE_IOPAD(0x362C, mode) /* C9: P8.28b: vout1_d20 */
#define P8_29A(mode)    DRA7XX_CORE_IOPAD(0x35D4, mode) /* C11: P8.29a: vout1_hsync */
#define P8_29B(mode)    DRA7XX_CORE_IOPAD(0x3630, mode) /* A9: P8.29b: vout1_d21 */
#define P8_30A(mode)    DRA7XX_CORE_IOPAD(0x35CC, mode) /* B10: P8.30a: vout1_de */
#define P8_30B(mode)    DRA7XX_CORE_IOPAD(0x3634, mode) /* B9: P8.30b: vout1_d22 */
#define P8_31A(mode)    DRA7XX_CORE_IOPAD(0x3614, mode) /* C8: P8.31a: vout1_d14 */
#define P8_31B(mode)    DRA7XX_CORE_IOPAD(0x373C, mode) /* G16: P8.31b: mcasp4_axr0 */
#define P8_32A(mode)    DRA7XX_CORE_IOPAD(0x3618, mode) /* C7: P8.32a: vout1_d15 */
#define P8_32B(mode)    DRA7XX_CORE_IOPAD(0x3740, mode) /*     D17: P8.32b: mcasp4_axr1 */
#define P8_33A(mode)    DRA7XX_CORE_IOPAD(0x3610, mode) /* C6: P8.33a: vout1_d13 */
#define P8_33B(mode)    DRA7XX_CORE_IOPAD(0x34E8, mode) /* AF9: P8.33b: vin1a_fld0 */
#define P8_34A(mode)    DRA7XX_CORE_IOPAD(0x3608, mode) /*     D8: P8.34a: vout1_d11 */
#define P8_34B(mode)    DRA7XX_CORE_IOPAD(0x3564, mode) /* G6: P8.34b: vin2a_vsync0 */
#define P8_35A(mode)    DRA7XX_CORE_IOPAD(0x360C, mode) /* A5: P8.35a: vout1_d12 */
#define P8_35B(mode)    DRA7XX_CORE_IOPAD(0x34E4, mode) /* AD9: P8.35b: vin1a_de0 */
#define P8_36A(mode)    DRA7XX_CORE_IOPAD(0x3604, mode) /*     D7: P8.36a: vout1_d10 */
#define P8_36B(mode)    DRA7XX_CORE_IOPAD(0x3568, mode) /* F2: P8.36b: vin2a_d0 */
#define P8_37A(mode)    DRA7XX_CORE_IOPAD(0x35FC, mode) /* E8: P8.37a: vout1_d8 */
#define P8_37B(mode)    DRA7XX_CORE_IOPAD(0x3738, mode) /* A21: P8.37b: mcasp4_fsx */
#define P8_38A(mode)    DRA7XX_CORE_IOPAD(0x3600, mode) /*     D9: P8.38a: vout1_d9 */
#define P8_38B(mode)    DRA7XX_CORE_IOPAD(0x3734, mode) /* C18: P8.38b: mcasp4_aclkx */
#define P8_39(mode)     DRA7XX_CORE_IOPAD(0x35F4, mode) /* F8: P8.39: vout1_d6 */
#define P8_40(mode)     DRA7XX_CORE_IOPAD(0x35F8, mode) /* E7: P8.40: vout1_d7 */
#define P8_41(mode)     DRA7XX_CORE_IOPAD(0x35EC, mode) /* E9: P8.41: vout1_d4 */
#define P8_42(mode)     DRA7XX_CORE_IOPAD(0x35F0, mode) /* F9: P8.42: vout1_d5 */
#define P8_43(mode)     DRA7XX_CORE_IOPAD(0x35E4, mode) /* F10: P8.43: vout1_d2 */
#define P8_44(mode)     DRA7XX_CORE_IOPAD(0x35E8, mode) /* G11: P8.44: vout1_d3 */
#define P8_45A(mode)    DRA7XX_CORE_IOPAD(0x35DC, mode) /* F11: P8.45a: vout1_d0 */
#define P8_45B(mode)    DRA7XX_CORE_IOPAD(0x361C, mode) /* B7: P8.45b: vout1_d16 */
#define P8_46A(mode)    DRA7XX_CORE_IOPAD(0x35E0, mode) /* G10: P8.46a: vout1_d1 */
#define P8_46B(mode)    DRA7XX_CORE_IOPAD(0x3638, mode) /* A10: P8.46b: vout1_d23 */
#define P9_11A(mode)    DRA7XX_CORE_IOPAD(0x372C, mode) /* B19: P9.11a: mcasp3_axr0 */
#define P9_11B(mode)    DRA7XX_CORE_IOPAD(0x3620, mode) /* B8: P9.11b: vout1_d17 */
#define P9_12(mode)     DRA7XX_CORE_IOPAD(0x36AC, mode) /* B14: P9.12: mcasp1_aclkr */
#define P9_13(mode)     DRA7XX_CORE_IOPAD(0x3730, mode) /* C17: P9.13: mcasp3_axr1 */
#define P9_14(mode)     DRA7XX_CORE_IOPAD(0x35AC, mode) /* D6: P9.14: vin2a_d17 */
#define P9_15(mode)     DRA7XX_CORE_IOPAD(0x3514, mode) /* AG4: P9.15: vin1a_d8 */
#define P9_16(mode)     DRA7XX_CORE_IOPAD(0x35B0, mode) /* C5: P9.16: vin2a_d18 */
#define P9_17A(mode)    DRA7XX_CORE_IOPAD(0x37CC, mode) /* B24: P9.17a: spi2_cs0 */
#define P9_17B(mode)    DRA7XX_CORE_IOPAD(0x36B8, mode) /* F12: P9.17b: mcasp1_axr1 */
#define P9_18A(mode)    DRA7XX_CORE_IOPAD(0x37C8, mode) /* G17: P9.18a: spi2_d0 */
#define P9_18B(mode)    DRA7XX_CORE_IOPAD(0x36B4, mode) /* G12: P9.18b: mcasp1_axr0 */
#define P9_19A(mode)    DRA7XX_CORE_IOPAD(0x3440, mode) /* R6: P9.19a: gpmc_a0.i2c4_scl */
#define P9_19B(mode)    DRA7XX_CORE_IOPAD(0x357C, mode) /* F4: P9.19b: vin2a_d5.pr1_pru1_gpi2 */
#define P9_20A(mode)    DRA7XX_CORE_IOPAD(0x3444, mode) /* T9: P9.20a: gpmc_a1.i2c4_sda */
#define P9_20B(mode)    DRA7XX_CORE_IOPAD(0x3578, mode) /* D2: P9.20b: vin2a_d4.pr1_pru1_gpi1 */
#define P9_21A(mode)    DRA7XX_CORE_IOPAD(0x34F0, mode) /* AF8: P9.21a: vin1a_vsync0 */
#define P9_21B(mode)    DRA7XX_CORE_IOPAD(0x37C4, mode) /* B22: P9.21b: spi2_d1 */
#define P9_22A(mode)    DRA7XX_CORE_IOPAD(0x369C, mode) /* B26: P9.22a: xref_clk2 */
#define P9_22B(mode)    DRA7XX_CORE_IOPAD(0x37C0, mode) /* A26: P9.22b: spi2_sclk */
#define P9_23(mode)     DRA7XX_CORE_IOPAD(0x37B4, mode) /* A22: P9.23: spi1_cs1 */
#define P9_24(mode)     DRA7XX_CORE_IOPAD(0x368C, mode) /* F20: P9.24: gpio6_15 */
#define P9_25(mode)     DRA7XX_CORE_IOPAD(0x3694, mode) /* D18: P9.25: xref_clk0 */
#define P9_26A(mode)    DRA7XX_CORE_IOPAD(0x3688, mode) /* E21: P9.26a: gpio6_14 */
#define P9_26B(mode)    DRA7XX_CORE_IOPAD(0x3544, mode) /* AE2: P9.26b: vin1a_d20 */
#define P9_27A(mode)    DRA7XX_CORE_IOPAD(0x35A0, mode) /* C3: P9.27a: vin2a_d14 */
#define P9_27B(mode)    DRA7XX_CORE_IOPAD(0x36B0, mode) /* J14: P9.27b: mcasp1_fsr */
#define P9_28(mode)     DRA7XX_CORE_IOPAD(0x36E0, mode) /* A12: P9.28: mcasp1_axr11 */
#define P9_29A(mode)    DRA7XX_CORE_IOPAD(0x36D8, mode) /* A11: P9.29a: mcasp1_axr9 */
#define P9_29B(mode)    DRA7XX_CORE_IOPAD(0x36A8, mode) /* D14: P9.29b: mcasp1_fsx */
#define P9_30(mode)     DRA7XX_CORE_IOPAD(0x36DC, mode) /* B13: P9.30: mcasp1_axr10 */
#define P9_31A(mode)    DRA7XX_CORE_IOPAD(0x36D4, mode) /* B12: P9.31a: mcasp1_axr8 */
#define P9_31B(mode)    DRA7XX_CORE_IOPAD(0x36A4, mode) /* C14: P9.31b: mcasp1_aclkx */
#define P9_41A(mode)    DRA7XX_CORE_IOPAD(0x36A0, mode) /* C23: P9.41a: xref_clk3 */
#define P9_41B(mode)    DRA7XX_CORE_IOPAD(0x3580, mode) /* C1: P9.41b: vin2a_d6 */
#define P9_42A(mode)    DRA7XX_CORE_IOPAD(0x36E4, mode) /* E14: P9.42a: mcasp1_axr12 */
#define P9_42B(mode)    DRA7XX_CORE_IOPAD(0x359C, mode) /* C2: P9.42b: vin2a_d13 */

#endif