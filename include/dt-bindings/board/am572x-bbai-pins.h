/*
 * Copyright (C) 2020 Deepak Khatri <deepaklorkhatri7@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _DT_BINDINGS_BOARD_AM5729_BBAI_PINS_H
#define _DT_BINDINGS_BOARD_AM5729_BBAI_PINS_H

#define P8_03(mode) DRA7XX_CORE_IOPAD(0x379C, mode)  /* AB8: P8.3: mmc3_dat6 */
#define P8_04(mode) DRA7XX_CORE_IOPAD(0x37A0, mode)  /* AB5: P8.4: mmc3_dat7 */
#define P8_05(mode) DRA7XX_CORE_IOPAD(0x378C, mode)  /* AC9: P8.5: mmc3_dat2 */
#define P8_06(mode) DRA7XX_CORE_IOPAD(0x3790, mode)  /* AC3: P8.6: mmc3_dat3 */
#define P8_07(mode) DRA7XX_CORE_IOPAD(0x36EC, mode)  /* G14: P8.7: mcasp1_axr14 */
#define P8_08(mode) DRA7XX_CORE_IOPAD(0x36F0, mode)  /* F14: P8.8: mcasp1_axr15 */
#define P8_09(mode) DRA7XX_CORE_IOPAD(0x3698, mode)  /* E17: P8.9: xref_clk1 */
#define P8_10(mode) DRA7XX_CORE_IOPAD(0x36E8, mode)  /* A13: P8.10: mcasp1_axr13 */
#define P8_11(mode) DRA7XX_CORE_IOPAD(0x3510, mode)  /* AH4: P8.11: vin1a_d7 */
#define P8_12(mode) DRA7XX_CORE_IOPAD(0x350C, mode)  /* AG6: P8.12: vin1a_d6 */
#define P8_13(mode) DRA7XX_CORE_IOPAD(0x3590, mode)  /* D3: P8.13: vin2a_d10 */
#define P8_14(mode) DRA7XX_CORE_IOPAD(0x3598, mode)  /* D5: P8.14: vin2a_d12 */
#define P8_15A(mode) DRA7XX_CORE_IOPAD(0x3570, mode) /* D1: P8.15a: vin2a_d2 */
#define P8_15B(mode) DRA7XX_CORE_IOPAD(0x35B4, mode) /* A3: P8.15b: vin2a_d19 */
#define P8_16(mode) DRA7XX_CORE_IOPAD(0x35BC, mode)  /* B4: P8.16: vin2a_d21 */
#define P8_17(mode) DRA7XX_CORE_IOPAD(0x3624, mode)  /* A7: P8.17: vout1_d18 */
#define P8_18(mode) DRA7XX_CORE_IOPAD(0x3588, mode)  /* F5: P8.18: vin2a_d8 */
#define P8_19(mode) DRA7XX_CORE_IOPAD(0x358C, mode)  /* E6: P8.19: vin2a_d9 */
#define P8_20(mode) DRA7XX_CORE_IOPAD(0x3780, mode)  /* AC4: P8.20: mmc3_cmd */
#define P8_21(mode) DRA7XX_CORE_IOPAD(0x377C, mode)  /* AD4: P8.21: mmc3_clk */
#define P8_22(mode) DRA7XX_CORE_IOPAD(0x3798, mode)  /* AD6: P8.22: mmc3_dat5 */
#define P8_23(mode) DRA7XX_CORE_IOPAD(0x3794, mode)  /* AC8: P8.23: mmc3_dat4 */
#define P8_24(mode) DRA7XX_CORE_IOPAD(0x3788, mode)  /* AC6: P8.24: mmc3_dat1 */
#define P8_25(mode) DRA7XX_CORE_IOPAD(0x3784, mode)  /* AC7: P8.25: mmc3_dat0 */
#define P8_26(mode) DRA7XX_CORE_IOPAD(0x35B8, mode)  /* B3: P8.26: vin2a_d20 */
#define P8_27A(mode) DRA7XX_CORE_IOPAD(0x35D8, mode) /* E11: P8.27a: vout1_vsync */
#define P8_27B(mode) DRA7XX_CORE_IOPAD(0x3628, mode) /* A8: P8.27b: vout1_d19 */
#define P8_28A(mode) DRA7XX_CORE_IOPAD(0x35C8, mode) /* D11: P8.28a: vout1_clk */
#define P8_28B(mode) DRA7XX_CORE_IOPAD(0x362C, mode) /* C9: P8.28b: vout1_d20 */
#define P8_29A(mode) DRA7XX_CORE_IOPAD(0x35D4, mode) /* C11: P8.29a: vout1_hsync */
#define P8_29B(mode) DRA7XX_CORE_IOPAD(0x3630, mode) /* A9: P8.29b: vout1_d21 */
#define P8_30A(mode) DRA7XX_CORE_IOPAD(0x35CC, mode) /* B10: P8.30a: vout1_de */
#define P8_30B(mode) DRA7XX_CORE_IOPAD(0x3634, mode) /* B9: P8.30b: vout1_d22 */
#define P8_31A(mode) DRA7XX_CORE_IOPAD(0x3614, mode) /* C8: P8.31a: vout1_d14 */
#define P8_31B(mode) DRA7XX_CORE_IOPAD(0x373C, mode) /* G16: P8.31b: mcasp4_axr0 */
#define P8_32A(mode) DRA7XX_CORE_IOPAD(0x3618, mode) /* C7: P8.32a: vout1_d15 */
#define P8_32B(mode) DRA7XX_CORE_IOPAD(0x3740, mode) /* D17: P8.32b: mcasp4_axr1 */
#define P8_33A(mode) DRA7XX_CORE_IOPAD(0x3610, mode) /* C6: P8.33a: vout1_d13 */
#define P8_33B(mode) DRA7XX_CORE_IOPAD(0x34E8, mode) /* AF9: P8.33b: vin1a_fld0 */
#define P8_34A(mode) DRA7XX_CORE_IOPAD(0x3608, mode) /* D8: P8.34a: vout1_d11 */
#define P8_34B(mode) DRA7XX_CORE_IOPAD(0x3564, mode) /* G6: P8.34b: vin2a_vsync0 */
#define P8_35A(mode) DRA7XX_CORE_IOPAD(0x360C, mode) /* A5: P8.35a: vout1_d12 */
#define P8_35B(mode) DRA7XX_CORE_IOPAD(0x34E4, mode) /* AD9: P8.35b: vin1a_de0 */
#define P8_36A(mode) DRA7XX_CORE_IOPAD(0x3604, mode) /* D7: P8.36a: vout1_d10 */
#define P8_36B(mode) DRA7XX_CORE_IOPAD(0x3568, mode) /* F2: P8.36b: vin2a_d0 */
#define P8_37A(mode) DRA7XX_CORE_IOPAD(0x35FC, mode) /* E8: P8.37a: vout1_d8 */
#define P8_37B(mode) DRA7XX_CORE_IOPAD(0x3738, mode) /* A21: P8.37b: mcasp4_fsx */
#define P8_38A(mode) DRA7XX_CORE_IOPAD(0x3600, mode) /* D9: P8.38a: vout1_d9 */
#define P8_38B(mode) DRA7XX_CORE_IOPAD(0x3734, mode) /* C18: P8.38b: mcasp4_aclkx */
#define P8_39(mode) DRA7XX_CORE_IOPAD(0x35F4, mode)  /* F8: P8.39: vout1_d6 */
#define P8_40(mode) DRA7XX_CORE_IOPAD(0x35F8, mode)  /* E7: P8.40: vout1_d7 */
#define P8_41(mode) DRA7XX_CORE_IOPAD(0x35EC, mode)  /* E9: P8.41: vout1_d4 */
#define P8_42(mode) DRA7XX_CORE_IOPAD(0x35F0, mode)  /* F9: P8.42: vout1_d5 */
#define P8_43(mode) DRA7XX_CORE_IOPAD(0x35E4, mode)  /* F10: P8.43: vout1_d2 */
#define P8_44(mode) DRA7XX_CORE_IOPAD(0x35E8, mode)  /* G11: P8.44: vout1_d3 */
#define P8_45A(mode) DRA7XX_CORE_IOPAD(0x35DC, mode) /* F11: P8.45a: vout1_d0 */
#define P8_45B(mode) DRA7XX_CORE_IOPAD(0x361C, mode) /* B7: P8.45b: vout1_d16 */
#define P8_46A(mode) DRA7XX_CORE_IOPAD(0x35E0, mode) /* G10: P8.46a: vout1_d1 */
#define P8_46B(mode) DRA7XX_CORE_IOPAD(0x3638, mode) /* A10: P8.46b: vout1_d23 */
#define P9_11A(mode) DRA7XX_CORE_IOPAD(0x372C, mode) /* B19: P9.11a: mcasp3_axr0 */
#define P9_11B(mode) DRA7XX_CORE_IOPAD(0x3620, mode) /* B8: P9.11b: vout1_d17 */
#define P9_12(mode) DRA7XX_CORE_IOPAD(0x36AC, mode)  /* B14: P9.12: mcasp1_aclkr */
#define P9_13A(mode) DRA7XX_CORE_IOPAD(0x3730, mode)  /* C17: P9.13a: mcasp3_axr1 */
#define P9_13B(mode) DRA7XX_CORE_IOPAD(0x3680, mode)  /* AB10: P9.13b: usb1_drvvbus */
#define P9_14(mode) DRA7XX_CORE_IOPAD(0x35AC, mode)  /* D6: P9.14: vin2a_d17 */
#define P9_15(mode) DRA7XX_CORE_IOPAD(0x3514, mode)  /* AG4: P9.15: vin1a_d8 */
#define P9_16(mode) DRA7XX_CORE_IOPAD(0x35B0, mode)  /* C5: P9.16: vin2a_d18 */
#define P9_17A(mode) DRA7XX_CORE_IOPAD(0x37CC, mode) /* B24: P9.17a: spi2_cs0 */
#define P9_17B(mode) DRA7XX_CORE_IOPAD(0x36B8, mode) /* F12: P9.17b: mcasp1_axr1 */
#define P9_18A(mode) DRA7XX_CORE_IOPAD(0x37C8, mode) /* G17: P9.18a: spi2_d0 */
#define P9_18B(mode) DRA7XX_CORE_IOPAD(0x36B4, mode) /* G12: P9.18b: mcasp1_axr0 */
#define P9_19A(mode) DRA7XX_CORE_IOPAD(0x3440, mode) /* R6: P9.19a: gpmc_a0.i2c4_scl */
#define P9_19B(mode) DRA7XX_CORE_IOPAD(0x357C, mode) /* F4: P9.19b: vin2a_d5.pr1_pru1_gpi2 */
#define P9_20A(mode) DRA7XX_CORE_IOPAD(0x3444, mode) /* T9: P9.20a: gpmc_a1.i2c4_sda */
#define P9_20B(mode) DRA7XX_CORE_IOPAD(0x3578, mode) /* D2: P9.20b: vin2a_d4.pr1_pru1_gpi1 */
#define P9_21A(mode) DRA7XX_CORE_IOPAD(0x34F0, mode) /* AF8: P9.21a: vin1a_vsync0 */
#define P9_21B(mode) DRA7XX_CORE_IOPAD(0x37C4, mode) /* B22: P9.21b: spi2_d1 */
#define P9_22A(mode) DRA7XX_CORE_IOPAD(0x369C, mode) /* B26: P9.22a: xref_clk2 */
#define P9_22B(mode) DRA7XX_CORE_IOPAD(0x37C0, mode) /* A26: P9.22b: spi2_sclk */
#define P9_23(mode) DRA7XX_CORE_IOPAD(0x37B4, mode)  /* A22: P9.23: spi1_cs1 */
#define P9_24(mode) DRA7XX_CORE_IOPAD(0x368C, mode)  /* F20: P9.24: gpio6_15 */
#define P9_25(mode) DRA7XX_CORE_IOPAD(0x3694, mode)  /* D18: P9.25: xref_clk0 */
#define P9_26A(mode) DRA7XX_CORE_IOPAD(0x3688, mode) /* E21: P9.26a: gpio6_14 */
#define P9_26B(mode) DRA7XX_CORE_IOPAD(0x3544, mode) /* AE2: P9.26b: vin1a_d20 */
#define P9_27A(mode) DRA7XX_CORE_IOPAD(0x35A0, mode) /* C3: P9.27a: vin2a_d14 */
#define P9_27B(mode) DRA7XX_CORE_IOPAD(0x36B0, mode) /* J14: P9.27b: mcasp1_fsr */
#define P9_28(mode) DRA7XX_CORE_IOPAD(0x36E0, mode)  /* A12: P9.28: mcasp1_axr11 */
#define P9_29A(mode) DRA7XX_CORE_IOPAD(0x36D8, mode) /* A11: P9.29a: mcasp1_axr9 */
#define P9_29B(mode) DRA7XX_CORE_IOPAD(0x36A8, mode) /* D14: P9.29b: mcasp1_fsx */
#define P9_30(mode) DRA7XX_CORE_IOPAD(0x36DC, mode)  /* B13: P9.30: mcasp1_axr10 */
#define P9_31A(mode) DRA7XX_CORE_IOPAD(0x36D4, mode) /* B12: P9.31a: mcasp1_axr8 */
#define P9_31B(mode) DRA7XX_CORE_IOPAD(0x36A4, mode) /* C14: P9.31b: mcasp1_aclkx */
#define P9_41A(mode) DRA7XX_CORE_IOPAD(0x36A0, mode) /* C23: P9.41a: xref_clk3 */
#define P9_41B(mode) DRA7XX_CORE_IOPAD(0x3580, mode) /* C1: P9.41b: vin2a_d6 */
#define P9_42A(mode) DRA7XX_CORE_IOPAD(0x36E4, mode) /* E14: P9.42a: mcasp1_axr12 */
#define P9_42B(mode) DRA7XX_CORE_IOPAD(0x359C, mode) /* C2: P9.42b: vin2a_d13 */


/********************************/
/* BBAI P8 Header pinmux macros */
/********************************/
/* P8_01               		GND */
/* P8_02               		GND */

/* P8_03  (ball AB8) gpio1_24 */
#define P8_03_DEFAULT       P8_03( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	    /* mmc3_dat6.gpio1_24 */
#define P8_03_GPIO          P8_03( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				/* mmc3_dat6.gpio1_24 */
#define P8_03_GPIO_PU       P8_03( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		/* mmc3_dat6.gpio1_24 */
#define P8_03_GPIO_PD       P8_03( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	    /* mmc3_dat6.gpio1_24 */
#define P8_03_GPIO_INPUT    P8_03( PIN_INPUT | MUX_MODE14)							/* mmc3_dat6.gpio1_24 */

/* P8_04  (ball AB5) gpio1_25 */
#define P8_04_DEFAULT       P8_04( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)		/* mmc3_dat7.gpio1_25 */
#define P8_04_GPIO          P8_04( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				/* mmc3_dat7.gpio1_25 */
#define P8_04_GPIO_PU       P8_04( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		/* mmc3_dat7.gpio1_25 */
#define P8_04_GPIO_PD       P8_04( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)		/* mmc3_dat7.gpio1_25 */
#define P8_04_GPIO_INPUT    P8_04( PIN_INPUT | MUX_MODE14)							/* mmc3_dat7.gpio1_25 */

/* P8_05  (ball AC9) gpio7_1 */
#define P8_05_DEFAULT       P8_05( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)		/* mmc3_dat2.gpio7_1 */
#define P8_05_GPIO          P8_05( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				/* mmc3_dat2.gpio7_1 */
#define P8_05_GPIO_PU       P8_05( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		/* mmc3_dat2.gpio7_1 */
#define P8_05_GPIO_PD       P8_05( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)		/* mmc3_dat2.gpio7_1 */
#define P8_05_GPIO_INPUT    P8_05( PIN_INPUT | MUX_MODE14)							/* mmc3_dat2.gpio7_1 */

/* P8_06  (ball AC3) gpio7_2 */
#define P8_06_DEFAULT       P8_06( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)		/* mmc3_dat3.gpio7_2 */
#define P8_06_GPIO          P8_06( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				/* mmc3_dat3.gpio7_2 */
#define P8_06_GPIO_PU       P8_06( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		/* mmc3_dat3.gpio7_2 */
#define P8_06_GPIO_PD       P8_06( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)		/* mmc3_dat3.gpio7_2 */
#define P8_06_GPIO_INPUT    P8_06( PIN_INPUT | MUX_MODE14)							/* mmc3_dat3.gpio7_2 */

/* P8_07  (ball G14) gpio6_5*/
#define P8_07_DEFAULT       P8_07( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		/* mcasp1_axr14.gpio6_5 */
#define P8_07_GPIO          P8_07( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				/* mcasp1_axr14.gpio6_5 */
#define P8_07_GPIO_PU       P8_07( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		/* mcasp1_axr14.gpio6_5 */
#define P8_07_GPIO_PD       P8_07( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)		/* mcasp1_axr14.gpio6_5 */
#define P8_07_GPIO_INPUT    P8_07( PIN_INPUT | MUX_MODE14)							/* mcasp1_axr14.gpio6_5 */
#define P8_07_TIMER 		P8_07( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE10)		/* mcasp1_axr14.timer11 */

/* P8_08  (ball F14) gpio6_6 */
#define P8_08_DEFAULT       P8_08( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		/* mcasp1_axr15.gpio6_6 */
#define P8_08_GPIO          P8_08( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				/* mcasp1_axr15.gpio6_6 */
#define P8_08_GPIO_PU       P8_08( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		/* mcasp1_axr15.gpio6_6 */
#define P8_08_GPIO_PD       P8_08( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)		/* mcasp1_axr15.gpio6_6 */
#define P8_08_GPIO_INPUT    P8_08( PIN_INPUT | MUX_MODE14)							/* mcasp1_axr15.gpio6_6 */
#define P8_08_TIMER 		P8_08( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE10)		/* mcasp1_axr15.timer12 */

/* P8_09  (ball E17) gpio6_18 */
#define P8_09_DEFAULT       P8_09( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		/* xref_clk1.gpio6_18 */
#define P8_09_GPIO          P8_09( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				/* xref_clk1.gpio6_18 */
#define P8_09_GPIO_PU       P8_09( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		/* xref_clk1.gpio6_18 */
#define P8_09_GPIO_PD       P8_09( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)		/* xref_clk1.gpio6_18 */
#define P8_09_GPIO_INPUT    P8_09( PIN_INPUT | MUX_MODE14)							/* xref_clk1.gpio6_18 */
#define P8_09_TIMER    		P8_09( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE10)		/* xref_clk1.timer14 */

/* P8_10  (ball A13) gpio6_4 */
#define P8_10_DEFAULT       P8_10( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		/*	mcasp1_axr13.gpio6_4 */
#define P8_10_GPIO          P8_10( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				/*	mcasp1_axr13.gpio6_4 */
#define P8_10_GPIO_PU       P8_10( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		/*	mcasp1_axr13.gpio6_4 */
#define P8_10_GPIO_PD       P8_10( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)		/*	mcasp1_axr13.gpio6_4 */
#define P8_10_GPIO_INPUT    P8_10( PIN_INPUT | MUX_MODE14)							/*	mcasp1_axr13.gpio6_4 */
#define P8_10_TIMER    		P8_10( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE10)		/*	mcasp1_axr13.timer10 */

/* P8_11  (ball AH4) gpio3_11 */
#define P8_11_DEFAULT		P8_11( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vin1a_d7.gpio3_11 */
#define P8_11_GPIO 			P8_11( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* vin1a_d7.gpio3_11 */
#define P8_11_GPIO_PU		P8_11( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* vin1a_d7.gpio3_11 */
#define P8_11_GPIO_PD 		P8_11( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vin1a_d7.gpio3_11 */
#define P8_11_GPIO_INPUT 	P8_11( PIN_INPUT | MUX_MODE14) 							/* vin1a_d7.gpio3_11 */
#define P8_11_QEP 			P8_11( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE10) 		/* vin1a_d7.eQEP2B_in */
#define P8_11_PRUOUT 		P8_11( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13) 	/* vin1a_d7.pr1_pru0_gpo4 */

/* P8_12  (ball AG6) gpio3_10 */
#define P8_12_DEFAULT		P8_12( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vin1a_d6.gpio3_10 */
#define P8_12_GPIO			P8_12( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* vin1a_d6.gpio3_10 */
#define P8_12_GPIO_PU		P8_12( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* vin1a_d6.gpio3_10 */
#define P8_12_GPIO_PD		P8_12( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vin1a_d6.gpio3_10 */
#define P8_12_GPIO_INPUT	P8_12( PIN_INPUT | MUX_MODE14) 							/* vin1a_d6.gpio3_10 */
#define P8_12_QEP			P8_12( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE10) 		/* vin1a_d6.eQEP2A_in */
#define P8_12_TIMER			P8_12( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13) 	/* vin1a_d6.pr1_pru0_gpo3 */

/* P8_13  (ball  D3) gpio4_11 */
#define P8_13_DEFAULT		P8_13( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vin2a_d10.gpio4_11 */
#define P8_13_GPIO			P8_13( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* vin2a_d10.gpio4_11 */
#define P8_13_GPIO_PU		P8_13( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* vin2a_d10.gpio4_11 */
#define P8_13_GPIO_PD		P8_13( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vin2a_d10.gpio4_11 */
#define P8_13_GPIO_INPUT	P8_13( PIN_INPUT | MUX_MODE14) 							/* vin2a_d10.gpio4_11 */
#define P8_13_PWM			P8_13( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE10) 	/* vin2a_d10.ehrpwm2B */

/* P8_14  (ball  D5) gpio4_13*/
#define P8_14_DEFAULT		P8_14( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vin2a_d12.gpio4_13 */
#define P8_14_GPIO			P8_14( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* vin2a_d12.gpio4_13 */
#define P8_14_GPIO_PU		P8_14( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* vin2a_d12.gpio4_13 */
#define P8_14_GPIO_PD		P8_14( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vin2a_d12.gpio4_13 */
#define P8_14_GPIO_INPUT	P8_14( PIN_INPUT | MUX_MODE14) 							/* vin2a_d12.gpio4_13 */
#define P8_14_PWM			P8_14( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE10) 	/* vin2a_d12.eCAP2_in_PWM2_out */

/* P8_15 (ball  D1) gpio4_3 & (ball  A3) gpio4_27*/
#define P8_15_DEFAULT		P8_15A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_15B( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d2.gpio4_3, vin2a_d19.off */
#define P8_15_GPIO			P8_15A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P8_15B( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d2.gpio4_3, vin2a_d19.off */
#define P8_15_GPIO_PU		P8_15A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P8_15B( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d2.gpio4_3, vin2a_d19.off */
#define P8_15_GPIO_PD		P8_15A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_15B( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d2.gpio4_3, vin2a_d19.off */
#define P8_15_GPIO_INPUT	P8_15A( PIN_INPUT | MUX_MODE14)							P8_15B( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d2.gpio4_3,  vin2a_d19.off */
#define P8_15_PRU_ECAP		P8_15A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE11)	P8_15B( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d2.pr1_ecap0_ecap_capin_apwm_o, vin2a_d19.off */
#define P8_15_PRUIN			P8_15B( PIN_INPUT | MUX_MODE12)							P8_15A( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d19.pr1_pru1_gpi16, vin2a_d2.off */

/* P8_16  (ball  B4) gpio4_29 */
#define P8_16_DEFAULT		P8_16( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vin2a_d21.gpio4_29 */
#define P8_16_GPIO			P8_16( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* vin2a_d21.gpio4_29 */
#define P8_16_GPIO_PU		P8_16( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* vin2a_d21.gpio4_29 */
#define P8_16_GPIO_PD		P8_16( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vin2a_d21.gpio4_29 */
#define P8_16_GPIO_INPUT	P8_16( PIN_INPUT | MUX_MODE14) 							/* vin2a_d21.gpio4_29 */
#define P8_16_PRUIN			P8_16( PIN_INPUT | MUX_MODE12) 							/* vin2a_d21.pr1_pru1_gpi18 */

/* P8_17  (ball  A7) gpio8_18 */
#define P8_17_DEFAULT		P8_17( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vout1_d18.gpio8_18 */
#define P8_17_GPIO			P8_17( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* vout1_d18.gpio8_18 */
#define P8_17_GPIO_PU		P8_17( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* vout1_d18.gpio8_18 */
#define P8_17_GPIO_PD		P8_17( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vout1_d18.gpio8_18 */
#define P8_17_GPIO_INPUT	P8_17( PIN_INPUT | MUX_MODE14) 							/* vout1_d18.gpio8_18 */

/* P8_18  (ball  F5) gpio4_9 */
#define P8_18_DEFAULT		P8_18( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vin2a_d8.gpio4_9 */
#define P8_18_GPIO			P8_18( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* vin2a_d8.gpio4_9 */
#define P8_18_GPIO_PU		P8_18( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* vin2a_d8.gpio4_9 */
#define P8_18_GPIO_PD		P8_18( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vin2a_d8.gpio4_9 */
#define P8_18_GPIO_INPUT	P8_18( PIN_INPUT | MUX_MODE14) 							/* vin2a_d8.gpio4_9 */
#define P8_18_QEP			P8_18( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE10) 		/* vin2a_d8.eQEP2_strobe */

/* P8_19  (ball  E6) gpio4_10 */
#define P8_19_DEFAULT		P8_19( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vin2a_d9.gpio4_10 */
#define P8_19_GPIO			P8_19( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* vin2a_d9.gpio4_10 */
#define P8_19_GPIO_PU		P8_19( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* vin2a_d9.gpio4_10 */
#define P8_19_GPIO_PD		P8_19( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vin2a_d9.gpio4_10 */
#define P8_19_GPIO_INPUT	P8_19( PIN_INPUT | MUX_MODE14) 							/* vin2a_d9.gpio4_10 */
#define P8_19_PWM			P8_19( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE10) 	/* vin2a_d9.ehrpwm2A */

/* P8_20  (ball AC4) gpio6_30 */
#define P8_20_DEFAULT		P8_20( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* mmc3_cmd.gpio6_30 */
#define P8_20_GPIO			P8_20( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* mmc3_cmd.gpio6_30 */
#define P8_20_GPIO_PU		P8_20( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* mmc3_cmd.gpio6_30 */
#define P8_20_GPIO_PD		P8_20( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* mmc3_cmd.gpio6_30 */
#define P8_20_GPIO_INPUT	P8_20( PIN_INPUT | MUX_MODE14) 							/* mmc3_cmd.gpio6_30 */
#define P8_20_PRUOUT		P8_20( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13) 	/* mmc3_cmd.pr2_pru0_gpo3 */
#define P8_20_PRUIN			P8_20( PIN_INPUT | MUX_MODE12) 							/* mmc3_cmd.pr2_pru0_gpi3 */

/* P8_21  (ball AD4) gpio6_29 */
#define P8_21_DEFAULT		P8_21( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* mmc3_clk.gpio6_29 */
#define P8_21_GPIO			P8_21( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* mmc3_clk.gpio6_29 */
#define P8_21_GPIO_PU		P8_21( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* mmc3_clk.gpio6_29 */
#define P8_21_GPIO_PD		P8_21( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* mmc3_clk.gpio6_29 */
#define P8_21_GPIO_INPUT	P8_21( PIN_INPUT | MUX_MODE14) 							/* mmc3_clk.gpio6_29 */
#define P8_21_PRUOUT		P8_21( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13) 	/* mmc3_clk.pr2_pru0_gpo2 */
#define P8_21_PRUIN			P8_21( PIN_INPUT | MUX_MODE12) 							/* mmc3_clk.pr2_pru0_gpi2 */

/* P8_22  (ball AD6) gpio1_23 */
#define P8_22_DEFAULT		P8_22( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* mmc3_dat5.gpio1_23 */
#define P8_22_GPIO			P8_22( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* mmc3_dat5.gpio1_23 */
#define P8_22_GPIO_PU		P8_22( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* mmc3_dat5.gpio1_23 */
#define P8_22_GPIO_PD		P8_22( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* mmc3_dat5.gpio1_23 */
#define P8_22_GPIO_INPUT	P8_22( PIN_INPUT | MUX_MODE14) 							/* mmc3_dat5.gpio1_23 */

/* P8_23  (ball AC8) gpio1_22 */
#define P8_23_DEFAULT		P8_23( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* mmc3_dat4.gpio1_22 */
#define P8_23_GPIO			P8_23( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* mmc3_dat4.gpio1_22 */
#define P8_23_GPIO_PU		P8_23( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* mmc3_dat4.gpio1_22 */
#define P8_23_GPIO_PD		P8_23( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* mmc3_dat4.gpio1_22 */
#define P8_23_GPIO_INPUT	P8_23( PIN_INPUT | MUX_MODE14) 							/* mmc3_dat4.gpio1_22 */

/* P8_24  (ball AC6) gpio7_0 */
#define P8_24_DEFAULT		P8_24( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* mmc3_dat1.gpio7_0 */
#define P8_24_GPIO			P8_24( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* mmc3_dat1.gpio7_0 */
#define P8_24_GPIO_PU		P8_24( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* mmc3_dat1.gpio7_0 */
#define P8_24_GPIO_PD		P8_24( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* mmc3_dat1.gpio7_0 */
#define P8_24_GPIO_INPUT	P8_24( PIN_INPUT | MUX_MODE14) 							/* mmc3_dat1.gpio7_0 */

/* P8_25  (ball AC7) gpio6_31 */
#define P8_25_DEFAULT		P8_25( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* mmc3_dat0.gpio6_31 */
#define P8_25_GPIO			P8_25( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* mmc3_dat0.gpio6_31 */
#define P8_25_GPIO_PU		P8_25( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* mmc3_dat0.gpio6_31 */
#define P8_25_GPIO_PD		P8_25( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* mmc3_dat0.gpio6_31 */
#define P8_25_GPIO_INPUT	P8_25( PIN_INPUT | MUX_MODE14) 							/* mmc3_dat0.gpio6_31 */

/* P8_26  (ball  B3) gpio4_28 */
#define P8_26_DEFAULT		P8_26( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* vin2a_d20.gpio4_28 */
#define P8_26_GPIO			P8_26( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* vin2a_d20.gpio4_28 */
#define P8_26_GPIO_PU		P8_26( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* vin2a_d20.gpio4_28 */
#define P8_26_GPIO_PD		P8_26( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vin2a_d20.gpio4_28 */
#define P8_26_GPIO_INPUT	P8_26( PIN_INPUT | MUX_MODE14) 							/* vin2a_d20.gpio4_28 */

/* P8_27 (ball E11) gpio4_23 & (ball  A8) gpio8_19 */
#define P8_27_DEFAULT		P8_27A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_27B( PIN_OUTPUT | MUX_MODE15)	/* vout1_vsync.gpio4_23, vout1_d19.off */
#define P8_27_GPIO			P8_27A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P8_27B( PIN_OUTPUT | MUX_MODE15)	/* vout1_vsync.gpio4_23, vout1_d19.off */
#define P8_27_GPIO_PU		P8_27A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P8_27B( PIN_OUTPUT | MUX_MODE15)	/* vout1_vsync.gpio4_23, vout1_d19.off */
#define P8_27_GPIO_PD		P8_27A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_27B( PIN_OUTPUT | MUX_MODE15)	/* vout1_vsync.gpio4_23, vout1_d19.off */
#define P8_27_GPIO_INPUT	P8_27A( PIN_INPUT | MUX_MODE14)							P8_27B( PIN_OUTPUT | MUX_MODE15)	/* vout1_vsync.gpio4_23, vout1_d19.off */
#define P8_27_PRUOUT		P8_27B( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13)	P8_27A( PIN_OUTPUT | MUX_MODE15)	/* vout1_d19.pr2_pru0_gpo16, vout1_vsync.off */
#define P8_27_PRUIN			P8_27B( PIN_INPUT | MUX_MODE12)							P8_27A( PIN_OUTPUT | MUX_MODE15)	/* vout1_d19.pr2_pru0_gpi16, vout1_vsync.off */

/* P8_28 (ball D11) gpio4_19 & (ball  C9) gpio8_20 */
#define P8_28A_DEFAULT		P8_28A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_28B( PIN_OUTPUT | MUX_MODE15)	/* vout1_clk.gpio4_19, vout1_d20.off */
#define P8_28A_GPIO			P8_28A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P8_28B( PIN_OUTPUT | MUX_MODE15)	/* vout1_clk.gpio4_19, vout1_d20.off */
#define P8_28A_GPIO_PU		P8_28A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P8_28B( PIN_OUTPUT | MUX_MODE15)	/* vout1_clk.gpio4_19, vout1_d20.off */
#define P8_28A_GPIO_PD		P8_28A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_28B( PIN_OUTPUT | MUX_MODE15)	/* vout1_clk.gpio4_19, vout1_d20.off */
#define P8_28A_GPIO_INPUT	P8_28A( PIN_INPUT | MUX_MODE14)							P8_28B( PIN_OUTPUT | MUX_MODE15)	/* vout1_clk.gpio4_19, vout1_d20.off */
#define P8_28A_PRUOUT		P8_28B( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13)	P8_28A( PIN_OUTPUT | MUX_MODE15)	/* vout1_d20.pr2_pru0_gpo17, vout1_clk.off */
#define P8_28A_PRUIN		P8_28B( PIN_INPUT | MUX_MODE12)							P8_28A( PIN_OUTPUT | MUX_MODE15)	/* vout1_d20.pr2_pru0_gpi17, vout1_clk.off */

/* P8_29 (ball C11) gpio4_22 & (ball  A9) gpio8_21*/
#define P8_29_DEFAULT		P8_29A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_29B( PIN_OUTPUT | MUX_MODE15)	/* vout1_hsync.gpio4_22, vout1_d21.off */
#define P8_29_GPIO			P8_29A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P8_29B( PIN_OUTPUT | MUX_MODE15)	/* vout1_hsync.gpio4_22, vout1_d21.off */
#define P8_29_GPIO_PU		P8_29A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P8_29B( PIN_OUTPUT | MUX_MODE15)	/* vout1_hsync.gpio4_22, vout1_d21.off */
#define P8_29_GPIO_PD		P8_29A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_29B( PIN_OUTPUT | MUX_MODE15)	/* vout1_hsync.gpio4_22, vout1_d21.off */
#define P8_29_GPIO_INPUT	P8_29A( PIN_INPUT | MUX_MODE14)							P8_29B( PIN_OUTPUT | MUX_MODE15)	/* vout1_hsync.gpio4_22, vout1_d21.off */
#define P8_29_PRUOUT		P8_29B( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13)	P8_29A( PIN_OUTPUT | MUX_MODE15)	/* vout1_d21.pr2_pru0_gpo18, vout1_hsync.off */
#define P8_29_PRUIN			P8_29B( PIN_INPUT | MUX_MODE12)							P8_29A( PIN_OUTPUT | MUX_MODE15)	/* vout1_d21.pr2_pru0_gpi18, vout1_hsync.off */

/* P8_30 (ball B10) gpio4_20 & (ball  B9) gpio8_22 */
#define P8_30_DEFAULT		P8_30A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_30B( PIN_OUTPUT | MUX_MODE15)	/* vout1_de.gpio4_20, vout1_d22.off */
#define P8_30_GPIO			P8_30A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P8_30B( PIN_OUTPUT | MUX_MODE15)	/* vout1_de.gpio4_20, vout1_d22.off */
#define P8_30_GPIO_PU		P8_30A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P8_30B( PIN_OUTPUT | MUX_MODE15)	/* vout1_de.gpio4_20, vout1_d22.off */
#define P8_30_GPIO_PD		P8_30A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_30B( PIN_OUTPUT | MUX_MODE15)	/* vout1_de.gpio4_20, vout1_d22.off */
#define P8_30_GPIO_INPUT	P8_30A( PIN_INPUT | MUX_MODE14)							P8_30B( PIN_OUTPUT | MUX_MODE15)	/* vout1_de.gpio4_20, vout1_d22.off */
#define P8_30_PRUOUT		P8_30B( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13)	P8_30A( PIN_OUTPUT | MUX_MODE15)	/* vout1_d22.pr2_pru0_gpo19, vout1_de.off */
#define P8_30_PRUIN			P8_30B( PIN_INPUT | MUX_MODE12)							P8_30A( PIN_OUTPUT | MUX_MODE15)	/* vout1_d22.pr2_pru0_gpi19, vout1_de.off */

/* P8_31 (ball  C8) gpio8_14 & (ball G16) */
#define P8_31_DEFAULT		P8_31A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_31B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d14.gpio8_14, mcasp4_axr0.off */
#define P8_31_GPIO			P8_31A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P8_31B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d14.gpio8_14, mcasp4_axr0.off */
#define P8_31_GPIO_PU		P8_31A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P8_31B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d14.gpio8_14, mcasp4_axr0.off */
#define P8_31_GPIO_PD		P8_31A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_31B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d14.gpio8_14, mcasp4_axr0.off */
#define P8_31_GPIO_INPUT	P8_31A( PIN_INPUT | MUX_MODE14)							P8_31B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d14.gpio8_14, mcasp4_axr0.off */
#define P8_31_UART			P8_31B( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE4)		P8_31A( PIN_OUTPUT | MUX_MODE15)	/* mcasp4_axr0.uart4_rxd,vout1_d14.off */

/* P8_32 (ball  C7) gpio8_15 & (ball D17) */
#define P8_32_DEFAULT		P8_32A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_32B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d15.gpio8_15, mcasp4_axr1.off */
#define P8_32_GPIO			P8_32A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P8_32B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d15.gpio8_15, mcasp4_axr1.off */
#define P8_32_GPIO_PU		P8_32A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P8_32B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d15.gpio8_15, mcasp4_axr1.off */
#define P8_32_GPIO_PD		P8_32A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_32B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d15.gpio8_15, mcasp4_axr1.off */
#define P8_32_GPIO_INPUT	P8_32A( PIN_INPUT | MUX_MODE14)							P8_32B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d15.gpio8_15, mcasp4_axr1.off */
#define P8_32_UART			P8_32B( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE4)		P8_32A( PIN_OUTPUT | MUX_MODE15)	/* mcasp4_axr1.uart4_txd, vout1_d15.off */

/* P8_33 (ball  C6) gpio8_13 & (ball AF9) gpio3_1 */
#define P8_33_DEFAULT		P8_33A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_33B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d13.gpio8_13, vin1a_fld0.off */
#define P8_33_GPIO			P8_33A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P8_33B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d13.gpio8_13, vin1a_fld0.off */
#define P8_33_GPIO_PU		P8_33A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P8_33B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d13.gpio8_13, vin1a_fld0.off */
#define P8_33_GPIO_PD		P8_33A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_33B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d13.gpio8_13, vin1a_fld0.off */
#define P8_33_GPIO_INPUT	P8_33A( PIN_INPUT | MUX_MODE14)							P8_33B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d13.gpio8_13, vin1a_fld0.off */
#define P8_33_QEP			P8_33B( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE10)		P8_33A( PIN_OUTPUT | MUX_MODE15)	/* vin1a_fld0.eQEP1B_in, vout1_d13.off */

/* P8_34 (ball  D8) gpio8_11 & (ball  G6) gpio4_0 */
#define P8_34_DEFAULT		P8_34A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_34B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d11.gpio8_11, vin2a_vsync0.off */
#define P8_34_GPIO			P8_34A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P8_34B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d11.gpio8_11, vin2a_vsync0.off */
#define P8_34_GPIO_PU		P8_34A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P8_34B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d11.gpio8_11, vin2a_vsync0.off */
#define P8_34_GPIO_PD		P8_34A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_34B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d11.gpio8_11, vin2a_vsync0.off */
#define P8_34_GPIO_INPUT	P8_34A( PIN_INPUT | MUX_MODE14)							P8_34B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d11.gpio8_11, vin2a_vsync0.off */
#define P8_34_PWM			P8_34B( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE10)	P8_34A( PIN_OUTPUT | MUX_MODE15)	/* vin2a_vsync0.ehrpwm1A, vout1_d11.off */

/* P8_35 (ball  A5) gpio8_12 & (ball AD9) gpio3_0 */
#define P8_35_DEFAULT		P8_35A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_35B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d12.gpio8_12, vin1a_de0.off */
#define P8_35_GPIO			P8_35A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P8_35B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d12.gpio8_12, vin1a_de0.off */
#define P8_35_GPIO_PU		P8_35A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P8_35B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d12.gpio8_12, vin1a_de0.off */
#define P8_35_GPIO_PD		P8_35A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_35B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d12.gpio8_12, vin1a_de0.off */
#define P8_35_GPIO_INPUT	P8_35A( PIN_INPUT | MUX_MODE14)							P8_35B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d12.gpio8_12, vin1a_de0.off */
#define P8_35_QEP			P8_35B( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE10)		P8_35A( PIN_OUTPUT | MUX_MODE15)	/* vin1a_de0.eQEP1A_in, vout1_d12.off */

/* P8_36 (ball  D7) gpio8_10 & (ball  F2) gpio4_1*/
#define P8_36_DEFAULT		P8_36A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_36B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d10.gpio8_10, vin2a_d0.off */
#define P8_36_GPIO			P8_36A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P8_36B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d10.gpio8_10, vin2a_d0.off */
#define P8_36_GPIO_PU		P8_36A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P8_36B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d10.gpio8_10, vin2a_d0.off */
#define P8_36_GPIO_PD		P8_36A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_36B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d10.gpio8_10, vin2a_d0.off */
#define P8_36_GPIO_INPUT	P8_36A( PIN_INPUT | MUX_MODE14)							P8_36B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d10.gpio8_10, vin2a_d0.off */
#define P8_36_PWM			P8_36B( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE10)	P8_36A( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d0.ehrpwm1B, vout1_d10.off */

/* P8_37 (ball  E8) gpio8_8 & (ball A21)*/
#define P8_37_DEFAULT		P8_37A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_37B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d8.gpio8_8, mcasp4_fsx.off */
#define P8_37_GPIO			P8_37A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P8_37B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d8.gpio8_8, mcasp4_fsx.off */
#define P8_37_GPIO_PU		P8_37A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P8_37B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d8.gpio8_8, mcasp4_fsx.off */
#define P8_37_GPIO_PD		P8_37A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_37B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d8.gpio8_8, mcasp4_fsx.off */
#define P8_37_GPIO_INPUT	P8_37A( PIN_INPUT | MUX_MODE14)							P8_37B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d8.gpio8_8, mcasp4_fsx.off */
#define P8_37_UART			P8_37B( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE3)		P8_37A( PIN_OUTPUT | MUX_MODE15)	/* mcasp4_fsx.uart8_txd. vout1_d8.off */

/* P8_38a (ball  D9) gpio8_9 */
#define P8_38_DEFAULT		P8_38A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_38B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d9.gpio8_9, mcasp4_aclkx.off */
#define P8_38_GPIO			P8_38A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P8_38B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d9.gpio8_9, mcasp4_aclkx.off */
#define P8_38_GPIO_PU		P8_38A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P8_38B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d9.gpio8_9, mcasp4_aclkx.off */
#define P8_38_GPIO_PD		P8_38A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_38B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d9.gpio8_9, mcasp4_aclkx.off */
#define P8_38_GPIO_INPUT	P8_38A( PIN_INPUT | MUX_MODE14)							P8_38B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d9.gpio8_9, mcasp4_aclkx.off */
#define P8_38_UART			P8_38B( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE3)		P8_38A( PIN_OUTPUT | MUX_MODE15)	/* mcasp4_aclkx.uart8_rxd,  vout1_d9.off */

/* P8_39  (ball  F8) gpio8_6 */
#define P8_39_DEFAULT		P8_39( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vout1_d6.gpio8_6 */
#define P8_39_GPIO			P8_39( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* vout1_d6.gpio8_6 */
#define P8_39_GPIO_PU		P8_39( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* vout1_d6.gpio8_6 */
#define P8_39_GPIO_PD		P8_39( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vout1_d6.gpio8_6 */
#define P8_39_GPIO_INPUT	P8_39( PIN_INPUT | MUX_MODE14) 							/* vout1_d6.gpio8_6 */
#define P8_39_PRUOUT		P8_39( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13) 	/* vout1_d6.pr2_pru0_gpo3 */
#define P8_39_PRUIN			P8_39( PIN_INPUT | MUX_MODE12) 							/* vout1_d6.pr2_pru0_gpi3 */

/* P8_40  (ball  E7) gpio8_7 */
#define P8_40_DEFAULT		P8_40( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vout1_d7.gpio8_7 */
#define P8_40_GPIO			P8_40( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* vout1_d7.gpio8_7 */
#define P8_40_GPIO_PU		P8_40( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* vout1_d7.gpio8_7 */
#define P8_40_GPIO_PD		P8_40( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vout1_d7.gpio8_7 */
#define P8_40_GPIO_INPUT	P8_40( PIN_INPUT | MUX_MODE14) 							/* vout1_d7.gpio8_7 */
#define P8_40_PRUOUT		P8_40( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13) 	/* vout1_d7.pr2_pru0_gpo4 */
#define P8_40_PRUIN			P8_40( PIN_INPUT | MUX_MODE12) 							/* vout1_d7.pr2_pru0_gpi4 */

/* P8_41  (ball  E9) gpio8_4 */
#define P8_41_DEFAULT		P8_41( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vout1_d4.gpio8_4 */
#define P8_41_GPIO			P8_41( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* vout1_d4.gpio8_4 */
#define P8_41_GPIO_PU		P8_41( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* vout1_d4.gpio8_4 */
#define P8_41_GPIO_PD		P8_41( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vout1_d4.gpio8_4 */
#define P8_41_GPIO_INPUT	P8_41( PIN_INPUT | MUX_MODE14) 							/* vout1_d4.gpio8_4 */
#define P8_41_PRUOUT		P8_41( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13) 	/* vout1_d4.pr2_pru0_gpo1 */
#define P8_41_PRUIN			P8_41( PIN_INPUT | MUX_MODE12) 							/* vout1_d4.pr2_pru0_gpi1 */

/* P8_42  (ball  F9) gpio8_5 */
#define P8_42_DEFAULT		P8_42( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vout1_d5.gpio8_5 */
#define P8_42_GPIO			P8_42( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* vout1_d5.gpio8_5 */
#define P8_42_GPIO_PU		P8_42( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* vout1_d5.gpio8_5 */
#define P8_42_GPIO_PD		P8_42( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vout1_d5.gpio8_5 */
#define P8_42_GPIO_INPUT	P8_42( PIN_INPUT | MUX_MODE14) 							/* vout1_d5.gpio8_5 */
#define P8_42_PRUOUT		P8_42( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13) 	/* vout1_d5.pr2_pru0_gpo2 */
#define P8_42_PRUIN			P8_42( PIN_INPUT | MUX_MODE12) 							/* vout1_d5.pr2_pru0_gpi2 */

/* P8_43  (ball F10) gpio8_2 */
#define P8_43_DEFAULT		P8_43( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vout1_d2.gpio8_2 */
#define P8_43_GPIO			P8_43( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* vout1_d2.gpio8_2 */
#define P8_43_GPIO_PU		P8_43( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* vout1_d2.gpio8_2 */
#define P8_43_GPIO_PD		P8_43( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vout1_d2.gpio8_2 */
#define P8_43_GPIO_INPUT	P8_43( PIN_INPUT | MUX_MODE14) 							/* vout1_d2.gpio8_2 */
#define P8_43_PRUOUT		P8_43( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13) 	/* vout1_d2.pr2_pru1_gpo20 */
#define P8_43_PRUIN			P8_43( PIN_INPUT | MUX_MODE12) 							/* vout1_d2.pr2_pru1_gpi20 */

/* P8_44  (ball G11) gpio8_3 */
#define P8_44_DEFAULT		P8_44( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vout1_d3.gpio8_3 */
#define P8_44_GPIO			P8_44( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* vout1_d3.gpio8_3 */
#define P8_44_GPIO_PU		P8_44( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* vout1_d3.gpio8_3 */
#define P8_44_GPIO_PD		P8_44( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vout1_d3.gpio8_3 */
#define P8_44_GPIO_INPUT	P8_44( PIN_INPUT | MUX_MODE14) 							/* vout1_d3.gpio8_3 */
#define P8_44_PRUOUT		P8_44( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13) 	/* vout1_d3.pr2_pru0_gpo0 */
#define P8_44_PRUIN			P8_44( PIN_INPUT | MUX_MODE12) 							/* vout1_d3.pr2_pru0_gpi0 */

/* P8_45 (ball F11) gpio8_0 & (ball  B7) gpio8_16*/
#define P8_45_DEFAULT		P8_45A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_45B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d0.gpio8_0, vout1_d16.off */
#define P8_45_GPIO			P8_45A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P8_45B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d0.gpio8_0, vout1_d16.off */
#define P8_45_GPIO_PU		P8_45A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P8_45B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d0.gpio8_0, vout1_d16.off */
#define P8_45_GPIO_PD		P8_45A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_45B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d0.gpio8_0, vout1_d16.off */
#define P8_45_GPIO_INPUT	P8_45A( PIN_INPUT | MUX_MODE14)							P8_45B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d0.gpio8_0, vout1_d16.off */
#define P8_45_PRUOUT		P8_45B( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13)	P8_45A( PIN_OUTPUT | MUX_MODE15)	/* vout1_d16.pr2_pru0_gpo13, vout1_d0.off */
#define P8_45_PRUIN			P8_45B( PIN_INPUT | MUX_MODE12)							P8_45A( PIN_OUTPUT | MUX_MODE15)	/* vout1_d16.pr2_pru0_gpi13, vout1_d0.off */

/* P8_46a (ball G10) gpio8_1 & (ball A10) gpio8_23*/
#define P8_46_DEFAULT		P8_46A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_46B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d1.gpio8_1, vout1_d23.off */
#define P8_46_GPIO			P8_46A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P8_46B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d1.gpio8_1, vout1_d23.off */
#define P8_46_GPIO_PU		P8_46A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P8_46B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d1.gpio8_1, vout1_d23.off */
#define P8_46_GPIO_PD		P8_46A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P8_46B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d1.gpio8_1, vout1_d23.off */
#define P8_46_GPIO_INPUT	P8_46A( PIN_INPUT | MUX_MODE14)							P8_46B( PIN_OUTPUT | MUX_MODE15)	/* vout1_d1.gpio8_1, vout1_d23.off */
#define P8_46_PRUOUT		P8_46B( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13)	P8_46A( PIN_OUTPUT | MUX_MODE15)	/* vout1_d23.pr2_pru0_gpo20, vout1_d1.off */
#define P8_46_PRUIN			P8_46B( PIN_INPUT | MUX_MODE12)							P8_46A( PIN_OUTPUT | MUX_MODE15)	/* vout1_d23.pr2_pru0_gpi20, vout1_d1.off */

/********************************/
/* BBAI P9 Header pinmux macros */
/********************************/
/* P9_01                	GND */
/* P9_02                	GND */
/* P9_03                	3V3 */
/* P9_04                	3V3 */
/* P9_05                 VDD_5V */
/* P9_06                 VDD_5V */
/* P9_07                 SYS_5V */
/* P9_08                 SYS_5V */
/* P9_09                PWR_BUT */
/* P9_10                   RSTn */

/* P9_11 (ball B19) & (ball  B8) gpio8_17*/
#define P9_11_UART			P9_11A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE4)		P9_11B( PIN_OUTPUT | MUX_MODE15)	/* mcasp3_axr0.uart5_rxd, vout1_d17.off */
#define P9_11_DEFAULT		P9_11B( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P9_11A( PIN_OUTPUT | MUX_MODE15)	/* vout1_d17.gpio8_17, mcasp3_axr0.off */	
#define P9_11_GPIO			P9_11B( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P9_11A( PIN_OUTPUT | MUX_MODE15)	/* vout1_d17.gpio8_17, mcasp3_axr0.off */		
#define P9_11_GPIO_PU		P9_11B( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P9_11A( PIN_OUTPUT | MUX_MODE15)	/* vout1_d17.gpio8_17, mcasp3_axr0.off */	
#define P9_11_GPIO_PD		P9_11B( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P9_11A( PIN_OUTPUT | MUX_MODE15)	/* vout1_d17.gpio8_17, mcasp3_axr0.off */	
#define P9_11_GPIO_INPUT	P9_11B( PIN_INPUT | MUX_MODE14)							P9_11A( PIN_OUTPUT | MUX_MODE15)	/* vout1_d17.gpio8_17, mcasp3_axr0.off */

/* P9_12  (ball B14) gpio5_0 */
#define P9_12_DEFAULT		P9_12( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* mcasp1_aclkr.gpio5_0 */	
#define P9_12_GPIO			P9_12( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* mcasp1_aclkr.gpio5_0 */		
#define P9_12_GPIO_PU		P9_12( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* mcasp1_aclkr.gpio5_0 */	
#define P9_12_GPIO_PD		P9_12( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* mcasp1_aclkr.gpio5_0 */	
#define P9_12_GPIO_INPUT	P9_12( PIN_INPUT | MUX_MODE14) 							/* mcasp1_aclkr.gpio5_0 */

/* P9_13 (ball C17) & (ball AB10) gpio6_12*/
#define P9_13_UART			P9_13A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE4)		P9_13B( PIN_OUTPUT | MUX_MODE15)	/* mcasp3_axr1.uart5_txd, usb1_drvvbus.off */
#define P9_13_DEFAULT		P9_13B( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P9_13A( PIN_OUTPUT | MUX_MODE15)	/* usb1_drvvbus.gpio6_12, mcasp3_axr1.off */	
#define P9_13_GPIO			P9_13B( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P9_13A( PIN_OUTPUT | MUX_MODE15)	/* usb1_drvvbus.gpio6_12, mcasp3_axr1.off */		
#define P9_13_GPIO_PU		P9_13B( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P9_13A( PIN_OUTPUT | MUX_MODE15)	/* usb1_drvvbus.gpio6_12, mcasp3_axr1.off */	
#define P9_13_GPIO_PD		P9_13B( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P9_13A( PIN_OUTPUT | MUX_MODE15)	/* usb1_drvvbus.gpio6_12, mcasp3_axr1.off */	
#define P9_13_GPIO_INPUT	P9_13B( PIN_INPUT | MUX_MODE14)							P9_13A( PIN_OUTPUT | MUX_MODE15)	/* usb1_drvvbus.gpio6_12, mcasp3_axr1.off */			

/* P9_14  (ball D6) gpio4_25 */
#define P9_14_DEFAULT		P9_14( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vin2a_d17.gpio4_25 */	
#define P9_14_GPIO			P9_14( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* vin2a_d17.gpio4_25 */		
#define P9_14_GPIO_PU		P9_14( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* vin2a_d17.gpio4_25 */	
#define P9_14_GPIO_PD		P9_14( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vin2a_d17.gpio4_25 */	
#define P9_14_GPIO_INPUT	P9_14( PIN_INPUT | MUX_MODE14) 							/* vin2a_d17.gpio4_25 */			
#define P9_14_PWM			P9_14( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE10) 	/* vin2a_d17.ehrpwm3A */

/* P9_15  (ball AG4) gpio3_12 */
#define P9_15_DEFAULT		P9_15( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vin1a_d8.gpio3_12 */	
#define P9_15_GPIO			P9_15( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* vin1a_d8.gpio3_12 */	
#define P9_15_GPIO_PU		P9_15( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* vin1a_d8.gpio3_12 */	
#define P9_15_GPIO_PD		P9_15( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vin1a_d8.gpio3_12 */	
#define P9_15_GPIO_INPUT	P9_15( PIN_INPUT | MUX_MODE14) 							/* vin1a_d8.gpio3_12 */

/* P9_16  (ball C5) gpio4_26 */
#define P9_16_DEFAULT		P9_16( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE10) 	/* vin2a_d18.gpio4_26 */	
#define P9_16_GPIO			P9_16( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* vin2a_d18.gpio4_26 */		
#define P9_16_GPIO_PU		P9_16( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* vin2a_d18.gpio4_26 */	
#define P9_16_GPIO_PD		P9_16( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* vin2a_d18.gpio4_26 */	
#define P9_16_GPIO_INPUT	P9_16( PIN_INPUT | MUX_MODE14) 							/* vin2a_d18.gpio4_26 */			
#define P9_16_PWM			P9_16( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE10) 	/* vin2a_d18.ehrpwm3B */

/* P9_17 (ball B24) gpio7_17 and (ball F12) gpio5_3*/
#define P9_17_DEFAULT		P9_17A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P9_17B( PIN_OUTPUT | MUX_MODE15)	/* spi2_cs0.gpio7_17 */	
#define P9_17_GPIO			P9_17A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P9_17B( PIN_OUTPUT | MUX_MODE15)	/* spi2_cs0.gpio7_17 */		
#define P9_17_GPIO_PU		P9_17A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P9_17B( PIN_OUTPUT | MUX_MODE15)	/* spi2_cs0.gpio7_17 */	
#define P9_17_GPIO_PD		P9_17A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P9_17B( PIN_OUTPUT | MUX_MODE15)	/* spi2_cs0.gpio7_17 */	
#define P9_17_GPIO_INPUT	P9_17A( PIN_INPUT | MUX_MODE14)							P9_17B( PIN_OUTPUT | MUX_MODE15)	/* spi2_cs0.gpio7_17 */			
#define P9_17_SPI			P9_17A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE0)		P9_17B( PIN_OUTPUT | MUX_MODE15)	/* spi2_cs0.spi2_cs0 */	
#define P9_17_I2C			P9_17B( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE10)		P9_17A( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr1.i2c5_scl */
#define P9_17_UART			P9_17B( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE3)		P9_17A( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr1.uart6_txd */	

/* P9_18 (ball G17) gpio7_16 & (ball F4) gpio4_6*/
#define P9_18_DEFAULT		P9_18A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P9_18B( PIN_OUTPUT | MUX_MODE15)	/* spi2_d0.gpio7_16, mcasp1_axr0.off */	
#define P9_18_GPIO			P9_18A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P9_18B( PIN_OUTPUT | MUX_MODE15)	/* spi2_d0.gpio7_16, mcasp1_axr0.off */		
#define P9_18_GPIO_PU		P9_18A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P9_18B( PIN_OUTPUT | MUX_MODE15)	/* spi2_d0.gpio7_16, mcasp1_axr0.off */	
#define P9_18_GPIO_PD		P9_18A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P9_18B( PIN_OUTPUT | MUX_MODE15)	/* spi2_d0.gpio7_16, mcasp1_axr0.off */	
#define P9_18_GPIO_INPUT	P9_18A( PIN_INPUT | MUX_MODE14)							P9_18B( PIN_OUTPUT | MUX_MODE15)	/* spi2_d0.gpio7_16, mcasp1_axr0.off */			
#define P9_18_SPI			P9_18A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE0)		P9_18B( PIN_OUTPUT | MUX_MODE15)	/* spi2_d0.spi2_d0, mcasp1_axr0.off */	
#define P9_18_I2C			P9_18B( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE10)		P9_18A( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr0.i2c5_sda, spi2_d0.off */
#define P9_18_UART			P9_18B( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE3)		P9_18A( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr0.uart6_rxd, spi2_d0.off */

/* P9_19 (ball R6) gpio7_3 & (ball F4) gpio4_6*/
#define P9_19_DEFAULT		P9_19A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE7)		P9_19B( PIN_OUTPUT | MUX_MODE15)	/* gpmc_a0.gpio7_3, gpmc_a0.off */	
#define P9_19_GPIO			P9_19A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P9_19B( PIN_OUTPUT | MUX_MODE15)	/* gpmc_a0.gpio7_3, gpmc_a0.off */		
#define P9_19_GPIO_PU		P9_19A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P9_19B( PIN_OUTPUT | MUX_MODE15)	/* gpmc_a0.gpio7_3, gpmc_a0.off */	
#define P9_19_GPIO_PD		P9_19A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P9_19B( PIN_OUTPUT | MUX_MODE15)	/* gpmc_a0.gpio7_3, gpmc_a0.off */	
#define P9_19_GPIO_INPUT	P9_19A( PIN_INPUT | MUX_MODE14)							P9_19B( PIN_OUTPUT | MUX_MODE15)	/* gpmc_a0.gpio7_3, gpmc_a0.off */	
#define P9_19_I2C			P9_19A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE7)		P9_19B( PIN_OUTPUT | MUX_MODE15)	/* gpmc_a0.i2c4_scl, gpmc_a0.off */	
#define P9_19_QEP			P9_19B( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE10)		P9_19A( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d5.eQEP2A_in, gpmc_a0.off */	

/* P9_20 (ball T9) gpio7_4 & (ball D2) gpio4_5*/
#define P9_20_DEFAULT		P9_20A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE7)		P9_20B( PIN_OUTPUT | MUX_MODE15)	/* gpmc_a1.gpio7_4, vin2a_d4.off */		
#define P9_20_GPIO			P9_20A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P9_20B( PIN_OUTPUT | MUX_MODE15)	/* gpmc_a1.gpio7_4, vin2a_d4.off */		
#define P9_20_GPIO_PU		P9_20A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P9_20B( PIN_OUTPUT | MUX_MODE15)	/* gpmc_a1.gpio7_4, vin2a_d4.off */	
#define P9_20_GPIO_PD		P9_20A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P9_20B( PIN_OUTPUT | MUX_MODE15)	/* gpmc_a1.gpio7_4, vin2a_d4.off */	
#define P9_20_GPIO_INPUT	P9_20A( PIN_INPUT | MUX_MODE14)							P9_20B( PIN_OUTPUT | MUX_MODE15)	/* gpmc_a1.gpio7_4, vin2a_d4.off */			
#define P9_20_I2C			P9_20A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE7)		P9_20B( PIN_OUTPUT | MUX_MODE15)	/* gpmc_a1.i2c4_sda, vin2a_d4.off */	
#define P9_20_PRUOUT		P9_20B( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13)	P9_20A( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d4.pr1_pru1_gpo1, gpmc_a1.off */	
#define P9_20_PRUIN			P9_20B( PIN_INPUT | MUX_MODE12)							P9_20A( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d4.pr1_pru1_gpi1, gpmc_a1.off */

/* P9_21 (ball AF8) gpio3_3 & (ball B22) gpio7_15*/
#define P9_21_DEFAULT		P9_21A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P9_21B( PIN_OUTPUT | MUX_MODE15)	/* vin1a_vsync0.gpio3_3,spi2_d1.off */	
#define P9_21_GPIO			P9_21A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P9_21B( PIN_OUTPUT | MUX_MODE15)	/* vin1a_vsync0.gpio3_3,spi2_d1.off */		
#define P9_21_GPIO_PU		P9_21A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P9_21B( PIN_OUTPUT | MUX_MODE15)	/* vin1a_vsync0.gpio3_3,spi2_d1.off */	
#define P9_21_GPIO_PD		P9_21A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P9_21B( PIN_OUTPUT | MUX_MODE15)	/* vin1a_vsync0.gpio3_3,spi2_d1.off */	
#define P9_21_GPIO_INPUT	P9_21A( PIN_INPUT | MUX_MODE14)							P9_21B( PIN_OUTPUT | MUX_MODE15)	/* vin1a_vsync0.gpio3_3,spi2_d1.off */		
#define P9_21_QEP			P9_21A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE10)		P9_21B( PIN_OUTPUT | MUX_MODE15)	/* vin1a_vsync0.eQEP1_strobe,spi2_d1.off */	
#define P9_21_SPI			P9_21B( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE0)		P9_21A( PIN_OUTPUT | MUX_MODE15)	/* spi2_d1.spi2_d1, vin1a_vsync0.off */	
#define P9_21_UART			P9_21B( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE1)		P9_21A( PIN_OUTPUT | MUX_MODE15)	/* spi2_d1.uart3_txd, vin1a_vsync0.off */

/* P9_22 (ball B26) gpio6_19 & ball A26) gpio7_14*/
#define P9_22_DEFAULT		P9_22A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P9_22B( PIN_OUTPUT | MUX_MODE15)	/* xref_clk2.gpio6_19, spi2_sclk.off */	
#define P9_22_GPIO			P9_22A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P9_22B( PIN_OUTPUT | MUX_MODE15)	/* xref_clk2.gpio6_19, spi2_sclk.off */		
#define P9_22_GPIO_PU		P9_22A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P9_22B( PIN_OUTPUT | MUX_MODE15)	/* xref_clk2.gpio6_19, spi2_sclk.off */	
#define P9_22_GPIO_PD		P9_22A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P9_22B( PIN_OUTPUT | MUX_MODE15)	/* xref_clk2.gpio6_19, spi2_sclk.off */	
#define P9_22_GPIO_INPUT	P9_22A( PIN_INPUT | MUX_MODE14)							P9_22B( PIN_OUTPUT | MUX_MODE15)	/* xref_clk2.gpio6_19, spi2_sclk.off */		
#define P9_22_SPI			P9_22B( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE0)		P9_22A( PIN_OUTPUT | MUX_MODE15)	/* spi2_sclk.spi2_sclk, xref_clk2.off */	
#define P9_22_UART			P9_22B( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE1)		P9_22A( PIN_OUTPUT | MUX_MODE15)	/* spi2_sclk.uart3_rxd, xref_clk2.off */

/* P9_23  (ball A22) gpio7_11 */
#define P9_23_DEFAULT		P9_23( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* spi1_cs1.gpio7_11 */	
#define P9_23_GPIO			P9_23( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* spi1_cs1.gpio7_11 */		
#define P9_23_GPIO_PU		P9_23( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* spi1_cs1.gpio7_11 */	
#define P9_23_GPIO_PD		P9_23( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* spi1_cs1.gpio7_11 */	
#define P9_23_GPIO_INPUT	P9_23( PIN_INPUT | MUX_MODE14) 							/* spi1_cs1.gpio7_11 */

/* P9_24  (ball F20) gpio6_15*/
#define P9_24_DEFAULT		P9_24( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* gpio6_15.gpio6_15 */	
#define P9_24_GPIO			P9_24( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* gpio6_15.gpio6_15 */		
#define P9_24_GPIO_PU		P9_24( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* gpio6_15.gpio6_15 */	
#define P9_24_GPIO_PD		P9_24( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* gpio6_15.gpio6_15 */	
#define P9_24_GPIO_INPUT	P9_24( PIN_INPUT | MUX_MODE14) 							/* gpio6_15.gpio6_15 */			
#define P9_24_UART			P9_24( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE3) 		/* gpio6_15.uart10_txd */	
#define P9_24_CAN			P9_24( PIN_INPUT_PULLUP | MUX_MODE2) 					/* gpio6_15.dcan2_rx  */		
#define P9_24_I2C			P9_24( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE9) 		/* gpio6_15.i2c3_scl */

/* P9_25  (ball D18) gpio6_17 */
#define P9_25_DEFAULT		P9_25( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* xref_clk0.gpio6_17 */	
#define P9_25_GPIO			P9_25( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* xref_clk0.gpio6_17 */		
#define P9_25_GPIO_PU		P9_25( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* xref_clk0.gpio6_17 */	
#define P9_25_GPIO_PD		P9_25( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* xref_clk0.gpio6_17 */	
#define P9_25_GPIO_INPUT	P9_25( PIN_INPUT | MUX_MODE14) 							/* xref_clk0.gpio6_17 */
#define P9_25_PRUOUT		P9_25( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13) 	/* xref_clk0.pr2_pru1_gpo5 */
#define P9_25_PRUIN			P9_25( PIN_INPUT | MUX_MODE12) 							/* xref_clk0.pr2_pru1_gpi5 */

/* P9_26 (ball E21) gpio6_14 & (ball AE2) gpio3_24 */
#define P9_26_DEFAULT		P9_26A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P9_26B( PIN_OUTPUT | MUX_MODE15)	/* gpio6_14.gpio6_14, vin1a_d20.off */	
#define P9_26_GPIO			P9_26A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P9_26B( PIN_OUTPUT | MUX_MODE15)	/* gpio6_14.gpio6_14, vin1a_d20.off */		
#define P9_26_GPIO_PU		P9_26A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P9_26B( PIN_OUTPUT | MUX_MODE15)	/* gpio6_14.gpio6_14, vin1a_d20.off */	
#define P9_26_GPIO_PD		P9_26A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P9_26B( PIN_OUTPUT | MUX_MODE15)	/* gpio6_14.gpio6_14, vin1a_d20.off */	
#define P9_26_GPIO_INPUT	P9_26A( PIN_INPUT | MUX_MODE14)							P9_26B( PIN_OUTPUT | MUX_MODE15)	/* gpio6_14.gpio6_14, vin1a_d20.off */			
#define P9_26_UART			P9_26A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE3)		P9_26B( PIN_OUTPUT | MUX_MODE15)	/* gpio6_14.uart10_rxd, vin1a_d20.off */	
#define P9_26_CAN			P9_26A( PIN_OUTPUT_PULLUP | MUX_MODE2)					P9_26B( PIN_OUTPUT | MUX_MODE15)	/* gpio6_14.dcan2_tx, vin1a_d20.off */		
#define P9_26_I2C			P9_26A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE9)		P9_26B( PIN_OUTPUT | MUX_MODE15)	/* gpio6_14.i2c3_sda, vin1a_d20.off */
#define P9_26_PRUOUT		P9_26B( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13)	P9_26A( PIN_OUTPUT | MUX_MODE15)	/* vin1a_d20.pr1_pru0_gpo17, gpio6_14.off */
#define P9_26_PRUIN			P9_26B( PIN_INPUT | MUX_MODE12)							P9_26A( PIN_OUTPUT | MUX_MODE15)	/* vin1a_d20.pr1_pru0_gpi17, gpio6_14.off */

/* P9_27 (ball C3) gpio4_15 & (ball J14) gpio5_1*/
#define P9_27_DEFAULT		P9_27A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P9_27B( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d14.gpio4_15, mcasp1_fsr.off */	
#define P9_27_GPIO			P9_27A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P9_27B( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d14.gpio4_15, mcasp1_fsr.off */						
#define P9_27_GPIO_PU		P9_27A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P9_27B( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d14.gpio4_15, mcasp1_fsr.off */	
#define P9_27_GPIO_PD		P9_27A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P9_27B( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d14.gpio4_15, mcasp1_fsr.off */	
#define P9_27_GPIO_INPUT	P9_27A( PIN_INPUT | MUX_MODE14)							P9_27B( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d14.gpio4_15, mcasp1_fsr.off */			
#define P9_27_QEP			P9_27A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE10)		P9_27B( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d14.eQEP3B_in, mcasp1_fsr.off */	
#define P9_27_PRUOUT		P9_27A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13)	P9_27B( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d14.pr1_pru1_gpo11, mcasp1_fsr.off */	
#define P9_27_PRUIN			P9_27A( PIN_INPUT | MUX_MODE12)							P9_27B( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d14.pr1_pru1_gpi11, mcasp1_fsr.off */	

/* P9_28  (ball A12) gpio4_17 */
#define P9_28_DEFAULT		P9_28( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* mcasp1_axr11.gpio4_17 */	
#define P9_28_GPIO			P9_28( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* mcasp1_axr11.gpio4_17 */		
#define P9_28_GPIO_PU		P9_28( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* mcasp1_axr11.gpio4_17 */	
#define P9_28_GPIO_PD		P9_28( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* mcasp1_axr11.gpio4_17 */	
#define P9_28_GPIO_INPUT	P9_28( PIN_INPUT | MUX_MODE14) 							/* mcasp1_axr11.gpio4_17 */			
#define P9_28_SPI			P9_28( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE3) 		/* mcasp1_axr11.spi3_cs0 */	
#define P9_28_PRUOUT		P9_28( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13) 	/* mcasp1_axr11.pr2_pru1_gpo13 */	
#define P9_28_PRUIN			P9_28( PIN_INPUT | MUX_MODE12) 							/* mcasp1_axr11.pr2_pru1_gpi13 */

/* P9_29 (ball A11) gpio5_11 & (ball D14) gpio7_30*/
#define P9_29_DEFAULT		P9_29A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P9_29B( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr9.gpio5_11, mcasp1_fsx.off */	
#define P9_29_GPIO			P9_29A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P9_29B( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr9.gpio5_11, mcasp1_fsx.off */		
#define P9_29_GPIO_PU		P9_29A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P9_29B( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr9.gpio5_11, mcasp1_fsx.off */	
#define P9_29_GPIO_PD		P9_29A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P9_29B( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr9.gpio5_11, mcasp1_fsx.off */	
#define P9_29_GPIO_INPUT	P9_29A( PIN_INPUT | MUX_MODE14)							P9_29B( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr9.gpio5_11, mcasp1_fsx.off */
#define P9_29_SPI			P9_29A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE3)		P9_29B( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr9.spi3_d1, mcasp1_fsx.off */	
#define P9_29_PRUOUT		P9_29A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13)	P9_29B( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr9.pr2_pru1_gpo11, mcasp1_fsx.off */	
#define P9_29_PRUIN			P9_29A( PIN_INPUT | MUX_MODE12)							P9_29B( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr9.pr2_pru1_gpi11, mcasp1_fsx.off */

/* P9_30  (ball B13) gpio5_12*/
#define P9_30_DEFAULT		P9_30( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* mcasp1_axr10.gpio5_12 */	
#define P9_30_GPIO			P9_30( PIN_OUTPUT | INPUT_EN | MUX_MODE14) 				/* mcasp1_axr10.gpio5_12 */		
#define P9_30_GPIO_PU		P9_30( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14) 		/* mcasp1_axr10.gpio5_12 */	
#define P9_30_GPIO_PD		P9_30( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14) 	/* mcasp1_axr10.gpio5_12 */	
#define P9_30_GPIO_INPUT	P9_30( PIN_INPUT | MUX_MODE14) 							/* mcasp1_axr10.gpio5_12 */			
#define P9_30_SPI			P9_30( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE3) 		/* mcasp1_axr10.spi3_d0 */	
#define P9_30_PRUOUT		P9_30( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13) 	/* mcasp1_axr10.pr2_pru1_gpo12 */	
#define P9_30_PRUIN			P9_30( PIN_INPUT | MUX_MODE12) 							/* mcasp1_axr10.pr2_pru1_gpi12 */	

/* P9_31 (ball B12) gpio5_10 & (ball C14) gpio7_31*/
#define P9_31_DEFAULT		P9_31A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P9_31B( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr8.gpio5_10, mcasp1_aclkx.off */	
#define P9_31_GPIO			P9_31A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P9_31B( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr8.gpio5_10, mcasp1_aclkx.off */		
#define P9_31_GPIO_PU		P9_31A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P9_31B( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr8.gpio5_10, mcasp1_aclkx.off */	
#define P9_31_GPIO_PD		P9_31A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P9_31B( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr8.gpio5_10, mcasp1_aclkx.off */	
#define P9_31_GPIO_INPUT	P9_31A( PIN_INPUT | MUX_MODE14)							P9_31B( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr8.gpio5_10, mcasp1_aclkx.off */
#define P9_31_SPI			P9_31A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE3)		P9_31B( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr8.spi3_sclk, mcasp1_aclkx.off */	
#define P9_31_PRUOUT		P9_31A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13)	P9_31B( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr8.pr2_pru1_gpo10, mcasp1_aclkx.off */	
#define P9_31_PRUIN			P9_31A( PIN_INPUT | MUX_MODE12)							P9_31B( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr8.pr2_pru1_gpi10, mcasp1_aclkx.off */

/* P9_32                	VADC */
/* P9_33 	  				AIN4 */
/* P9_34                	AGND */
/* P9_35 					AIN6 */
/* P9_36 					AIN5 */
/* P9_37  					AIN2 */
/* P9_38  					AIN3 */
/* P9_39  					AIN0 */
/* P9_40   					AIN1 */

/* P9_41 (ball C23) gpio6_20 & (ball C1) gpio4_7*/
#define P9_41_DEFAULT		P9_41A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P9_41B( PIN_OUTPUT | MUX_MODE15)	/* xref_clk3.gpio6_20, vin2a_d6.off */	
#define P9_41_GPIO			P9_41A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P9_41B( PIN_OUTPUT | MUX_MODE15)	/* xref_clk3.gpio6_20, vin2a_d6.off */		
#define P9_41_GPIO_PU		P9_41A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P9_41B( PIN_OUTPUT | MUX_MODE15)	/* xref_clk3.gpio6_20, vin2a_d6.off */	
#define P9_41_GPIO_PD		P9_41A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P9_41B( PIN_OUTPUT | MUX_MODE15)	/* xref_clk3.gpio6_20, vin2a_d6.off */	
#define P9_41_GPIO_INPUT	P9_41A( PIN_INPUT | MUX_MODE14)							P9_41B( PIN_OUTPUT | MUX_MODE15)	/* xref_clk3.gpio6_20, vin2a_d6.off */
#define P9_41_PRUOUT		P9_41B( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13)	P9_41A( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d6.pr1_pru1_gpo3, xref_clk3.off */
#define P9_41_PRUIN			P9_41B( PIN_INPUT | MUX_MODE12)							P9_41A( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d6.pr1_pru1_gpi3, xref_clk3.off */

/* P9_42 (ball E14) gpio4_18 & (ball C2) gpio4_14*/
#define P9_42_DEFAULT		P9_42A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P9_42B( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr12.gpio4_18, vin2a_d13.off */	
#define P9_42_GPIO			P9_42A( PIN_OUTPUT | INPUT_EN | MUX_MODE14)				P9_42B( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr12.gpio4_18, vin2a_d13.off */		
#define P9_42_GPIO_PU		P9_42A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE14)		P9_42B( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr12.gpio4_18, vin2a_d13.off */	
#define P9_42_GPIO_PD		P9_42A( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE14)	P9_42B( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr12.gpio4_18, vin2a_d13.off */	
#define P9_42_GPIO_INPUT	P9_42A( PIN_INPUT | MUX_MODE14)							P9_42B( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr12.gpio4_18, vin2a_d13.off */			
#define P9_42_SPI			P9_42A( PIN_OUTPUT_PULLUP | INPUT_EN | MUX_MODE3)		P9_42B( PIN_OUTPUT | MUX_MODE15)	/* mcasp1_axr12.spi3_cs1, vin2a_d13.off */	
#define P9_42_PRUOUT		P9_42B( PIN_OUTPUT_PULLDOWN | INPUT_EN | MUX_MODE13)	P9_42A( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d13.pr1_pru1_gpo10, mcasp1_axr12.off */
#define P9_42_PRUIN			P9_42B( PIN_INPUT | MUX_MODE12)							P9_42A( PIN_OUTPUT | MUX_MODE15)	/* vin2a_d13.pr1_pru1_gpi10, mcasp1_axr12.off */

/* P9_43                GND */
/* P9_44                GND */
/* P9_45                GND */
/* P9_46                GND */

#endif