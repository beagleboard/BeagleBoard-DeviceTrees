// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2020 Deepak Khatri <deepaklorkhatri7@gmail.com>
 * Copyright (C) 2021 Jason Kridner <jkridner@beagleboard.org>
 * See Cape Interface Spec page for more info on Bone Buses
 * https://elinux.org/Beagleboard:BeagleBone_cape_interface_spec
 */

#ifndef _DT_BINDINGS_BOARD_TDA4VM_BONE_PINS_H
#define _DT_BINDINGS_BOARD_TDA4VM_BONE_PINS_H

#define bb_device 1
#define board_soc TDA4VM

#define gpio_P8_03 &gpio
#define gpio_P8_04 &gpio
#define gpio_P8_05 &gpio
#define gpio_P8_06 &gpio
#define gpio_P8_07 &gpio
#define gpio_P8_08 &gpio
#define gpio_P8_09 &gpio
#define gpio_P8_10 &gpio
#define gpio_P8_11 &gpio
#define gpio_P8_12 &gpio
#define gpio_P8_13 &gpio
#define gpio_P8_14 &gpio
#define gpio_P8_15 &gpio
#define gpio_P8_16 &gpio
#define gpio_P8_17 &gpio
#define gpio_P8_18 &gpio
#define gpio_P8_19 &gpio
#define gpio_P8_20 &gpio
#define gpio_P8_21 &gpio
#define gpio_P8_22 &gpio
#define gpio_P8_23 &gpio
#define gpio_P8_24 &gpio
#define gpio_P8_25 &gpio
#define gpio_P8_26 &gpio
#define gpio_P8_27 &gpio
#define gpio_P8_28 &gpio
#define gpio_P8_29 &gpio
#define gpio_P8_30 &gpio
#define gpio_P8_31 &gpio
#define gpio_P8_32 &gpio
#define gpio_P8_33 &gpio
#define gpio_P8_34 &gpio
#define gpio_P8_35 &gpio
#define gpio_P8_36 &gpio
#define gpio_P8_37 &gpio
#define gpio_P8_38 &gpio
#define gpio_P8_39 &gpio
#define gpio_P8_40 &gpio
#define gpio_P8_41 &gpio
#define gpio_P8_42 &gpio
#define gpio_P8_43 &gpio
#define gpio_P8_44 &gpio
#define gpio_P8_45 &gpio
#define gpio_P8_46 &gpio
#define gpio_P9_11 &gpio
#define gpio_P9_12 &gpio
#define gpio_P9_13 &gpio
#define gpio_P9_14 &gpio
#define gpio_P9_15 &gpio
#define gpio_P9_16 &gpio
#define gpio_P9_17 &gpio
#define gpio_P9_18 &gpio
#define gpio_P9_19 &gpio
#define gpio_P9_20 &gpio
#define gpio_P9_21 &gpio
#define gpio_P9_22 &gpio
#define gpio_P9_23 &gpio
#define gpio_P9_24 &gpio
#define gpio_P9_25 &gpio
#define gpio_P9_26 &gpio
#define gpio_P9_27 &gpio
#define gpio_P9_28 &gpio
#define gpio_P9_29 &gpio
#define gpio_P9_30 &gpio
#define gpio_P9_31 &gpio
#define gpio_P9_33 &gpio
#define gpio_P9_35 &gpio
#define gpio_P9_36 &gpio
#define gpio_P9_37 &gpio
#define gpio_P9_38 &gpio
#define gpio_P9_39 &gpio
#define gpio_P9_40 &gpio
#define gpio_P9_41 &gpio
#define gpio_P9_42 &gpio

#define P8_03(mode)  J721E_IOPAD(, mode)  /* AH21 */
#define P8_04(mode)  J721E_IOPAD(, mode)  /* AC29 - BOOTMODE2 */
#define P8_05(mode)  J721E_IOPAD(, mode)  /* AH25 */
#define P8_06(mode)  J721E_IOPAD(, mode)  /* AG25 */
#define P8_07(mode)  J721E_IOPAD(, mode)  /* AD24 */
#define P8_08(mode)  J721E_IOPAD(, mode)  /* AG24 */
#define P8_09(mode)  J721E_IOPAD(, mode)  /* AE24 */
#define P8_10(mode)  J721E_IOPAD(, mode)  /* AC24 */
#define P8_11(mode)  J721E_IOPAD(, mode)  /* AB24 - BOOTMODE7 */
#define P8_12(mode)  J721E_IOPAD(, mode)  /* AH28 */
#define P8_13(mode)  J721E_IOPAD(, mode)  /* V27 */
#define P8_14(mode)  J721E_IOPAD(, mode)  /* AF27 */
#define P8_15(mode)  J721E_IOPAD(, mode)  /* AB29 */
#define P8_16(mode)  J721E_IOPAD(, mode)  /* AB28 */
#define P8_17(mode)  J721E_IOPAD(, mode)  /* AF22 */
#define P8_18(mode)  J721E_IOPAD(, mode)  /* AJ23 */
#define P8_19(mode)  J721E_IOPAD(, mode)  /* V29 */
#define P8_20(mode)  J721E_IOPAD(, mode)  /* AF26 */
#define P8_21(mode)  J721E_IOPAD(, mode)  /* AF21 */
#define P8_22(mode)  J721E_IOPAD(, mode)  /* AH23 */
#define P8_23(mode)  J721E_IOPAD(, mode)  /* AB23 */
#define P8_24(mode)  J721E_IOPAD(, mode)  /* AD20 - BOOTMODE0 */
#define P8_25(mode)  J721E_IOPAD(, mode)  /* AH26 */
#define P8_26(mode)  J721E_IOPAD(, mode)  /* AC27 */
#define P8_27(mode)  J721E_IOPAD(, mode)  /* AA28 */
#define P8_28(mode)  J721E_IOPAD(, mode)  /* Y24 */
#define P8_29(mode)  J721E_IOPAD(, mode)  /* AA25 */
#define P8_30(mode)  J721E_IOPAD(, mode)  /* AG26 */
#define P8_31A(mode) J721E_IOPAD(, mode)  /* AJ25 */
#define P8_31B(mode) J721E_IOPAD(, mode)  /* AE29 */
#define P8_32A(mode) J721E_IOPAD(, mode)  /* AG21 */
#define P8_32B(mode) J721E_IOPAD(, mode)  /* AD28 */
#define P8_33A(mode) J721E_IOPAD(, mode)  /* AH24 */
#define P8_33B(mode) J721E_IOPAD(, mode)  /* AA2 */
#define P8_34(mode)  J721E_IOPAD(, mode)  /* AD22 */
#define P8_35A(mode) J721E_IOPAD(, mode)  /* AD23 */
#define P8_35B(mode) J721E_IOPAD(, mode)  /* Y3 */
#define P8_36(mode)  J721E_IOPAD(, mode)  /* AE20 */
#define P8_37A(mode) J721E_IOPAD(, mode)  /* Y27 */
#define P8_37B(mode) J721E_IOPAD(, mode)  /* AD21 */
#define P8_38A(mode) J721E_IOPAD(, mode)  /* Y29 */
#define P8_38B(mode) J721E_IOPAD(, mode)  /* AJ20 */
#define P8_39(mode)  J721E_IOPAD(, mode)  /* AC26 */
#define P8_40(mode)  J721E_IOPAD(, mode)  /* AA24 */
#define P8_41(mode)  J721E_IOPAD(, mode)  /* AD29 */
#define P8_42(mode)  J721E_IOPAD(, mode)  /* AB27 - BOOTMODE6 */
#define P8_43(mode)  J721E_IOPAD(, mode)  /* AD27 */
#define P8_44(mode)  J721E_IOPAD(, mode)  /* AC25 */
#define P8_45(mode)  J721E_IOPAD(, mode)  /* AG29 */
#define P8_46(mode)  J721E_IOPAD(, mode)  /* Y25 - BOOTMODE3 */
#define P9_11(mode)  J721E_IOPAD(, mode)  /* AC23 */
#define P9_12(mode)  J721E_IOPAD(, mode)  /* AE27 */
#define P9_13(mode)  J721E_IOPAD(, mode)  /* AG22 */
#define P9_14(mode)  J721E_IOPAD(, mode)  /* U27 */
#define P9_15(mode)  J721E_IOPAD(, mode)  /* AD25 */
#define P9_16(mode)  J721E_IOPAD(, mode)  /* U24 */
#define P9_17A(mode) J721E_IOPAD(, mode)  /* AC21 */
#define P9_17B(mode) J721E_IOPAD(, mode)  /* AA3 */
#define P9_18A(mode) J721E_IOPAD(, mode)  /* AH22 */
#define P9_18B(mode) J721E_IOPAD(, mode)  /* Y2 */
#define P9_19A(mode) J721E_IOPAD(, mode)  /* W5 */
#define P9_19B(mode) J721E_IOPAD(, mode)  /* AF29 */
#define P9_20A(mode) J721E_IOPAD(, mode)  /* W6 */
#define P9_20B(mode) J721E_IOPAD(, mode)  /* AE25 */
#define P9_21A(mode) J721E_IOPAD(, mode)  /* AJ22 */
#define P9_21B(mode) J721E_IOPAD(, mode)  /* U28 */
#define P9_22A(mode) J721E_IOPAD(, mode)  /* AC22 */
#define P9_22B(mode) J721E_IOPAD(, mode)  /* U29 */
#define P9_23(mode)  J721E_IOPAD(, mode)  /* AG20 */
#define P9_24A(mode) J721E_IOPAD(, mode)  /* Y5 */
#define P9_24B(mode) J721E_IOPAD(, mode)  /* AJ24 */
#define P9_25A(mode) J721E_IOPAD(, mode)  /* AC4 */
#define P9_25B(mode) J721E_IOPAD(, mode)  /* W26 */
#define P9_26A(mode) J721E_IOPAD(, mode)  /* Y1 */
#define P9_26B(mode) J721E_IOPAD(, mode)  /* AF24 */
#define P9_27A(mode) J721E_IOPAD(, mode)  /* AD26 */
#define P9_27B(mode) J721E_IOPAD(, mode)  /* AB1 */
#define P9_28A(mode) J721E_IOPAD(, mode)  /* U2 */
#define P9_28B(mode) J721E_IOPAD(, mode)  /* AF28 */
#define P9_29A(mode) J721E_IOPAD(, mode)  /* V5 */
#define P9_29B(mode) J721E_IOPAD(, mode)  /* AB25 */
#define P9_30A(mode) J721E_IOPAD(, mode)  /* V6 */
#define P9_30B(mode) J721E_IOPAD(, mode)  /* AE28 */
#define P9_31A(mode) J721E_IOPAD(, mode)  /* U3 */
#define P9_31B(mode) J721E_IOPAD(, mode)  /* AB26 */
#define P9_33A(mode) J721E_IOPAD(, mode)  /* K24 */
#define P9_33B(mode) J721E_IOPAD(, mode)  /* AC28 */
#define P9_35A(mode) J721E_IOPAD(, mode)  /* K29 */
#define P9_35B(mode) J721E_IOPAD(, mode)  /* AH27 */
#define P9_36A(mode) J721E_IOPAD(, mode)  /* K27 */
#define P9_36B(mode) J721E_IOPAD(, mode)  /* AH29 */
#define P9_37A(mode) J721E_IOPAD(, mode)  /* K28 */
#define P9_37B(mode) J721E_IOPAD(, mode)  /* AG28 */
#define P9_38A(mode) J721E_IOPAD(, mode)  /* L28 */
#define P9_38B(mode) J721E_IOPAD(, mode)  /* AG27 */
#define P9_39A(mode) J721E_IOPAD(, mode)  /* K25 */
#define P9_39B(mode) J721E_IOPAD(, mode)  /* AJ28 */
#define P9_40A(mode) J721E_IOPAD(, mode)  /* K26 */
#define P9_40B(mode) J721E_IOPAD(, mode)  /* AA26 */
#define P9_41(mode)  J721E_IOPAD(, mode)  /* AD5 */
#define P9_42A(mode) J721E_IOPAD(, mode)  /* AC2 */
#define P9_42B(mode) J721E_IOPAD(, mode)  /* AJ21 */

#endif
