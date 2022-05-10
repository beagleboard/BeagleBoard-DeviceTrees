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

#define gpio_P8_03 &main_gpio0 20 /* AH21 */
#define gpio_P8_04 &main_gpio0 48 /* AC29 */
#define gpio_P8_05 &main_gpio0 33 /* AH25 */
#define gpio_P8_06 &main_gpio0 34 /* AG25 */
#define gpio_P8_07 &main_gpio0 15 /* AD24 */
#define gpio_P8_08 &main_gpio0 14 /* AG24 */
#define gpio_P8_09 &main_gpio0 17 /* AE24 */
#define gpio_P8_10 &main_gpio0 16
#define gpio_P8_11 &main_gpio0 60 /* AB24 */
#define gpio_P8_12 &main_gpio0 59
#define gpio_P8_13 &main_gpio0 89 /* V27 */
#define gpio_P8_14 &main_gpio0 75
#define gpio_P8_15 &main_gpio0 61 /* AB29 */
#define gpio_P8_16 &main_gpio0 62
#define gpio_P8_17 &main_gpio0 3  /* AF22 */
#define gpio_P8_18 &main_gpio0 4
#define gpio_P8_19 &main_gpio0 88 /* V29 */
#define gpio_P8_20 &main_gpio0 76
#define gpio_P8_21 &main_gpio0 30 /* AF21 */
#define gpio_P8_22 &main_gpio0 5
#define gpio_P8_23 &main_gpio0 31 /* AB23 */
#define gpio_P8_24 &main_gpio0 6
#define gpio_P8_25 &main_gpio0 35 /* AH26 */
#define gpio_P8_26 &main_gpio0 51
#define gpio_P8_27 &main_gpio0 71 /* AA28 */
#define gpio_P8_28 &main_gpio0 72
#define gpio_P8_29 &main_gpio0 73 /* AA25 */
#define gpio_P8_30 &main_gpio0 74
#define gpio_P8_31A &main_gpio0 32 /* AJ25 */
#define gpio_P8_31B &main_gpio0 63 /* AE29 */
#define gpio_P8_31 gpio_P8_31A
#define gpio_P8_32 &main_gpio0 26 /* TODO: A/B */
#define gpio_P8_33A &main_gpio0 25 /* AH24 */
#define gpio_P8_33B &main_gpio0 110 /* AA2 */
#define gpio_P8_33 gpio_P8_33A
#define gpio_P8_34 &main_gpio0 7
#define gpio_P8_35A &main_gpio0 24 /* AD23 */
#define gpio_P8_35B &main_gpio0 116 /* Y3 */
#define gpio_P8_35 gpio_P8_35A
#define gpio_P8_36 &main_gpio0 8
#define gpio_P8_37A &main_gpio0 106 /* Y27 */
#define gpio_P8_37B &main_gpio0 11 /* AD21 */
#define gpio_P8_37 gpio_P8_37A
#define gpio_P8_38 &main_gpio0 105
#define gpio_P8_39 &main_gpio0 69 /* AC26 */
#define gpio_P8_40 &main_gpio0 70
#define gpio_P8_41 &main_gpio0 67 /* AD29 */
#define gpio_P8_42 &main_gpio0 68
#define gpio_P8_43 &main_gpio0 65 /* AD27 */
#define gpio_P8_44 &main_gpio0 66
#define gpio_P8_45 &main_gpio0 79 /* AG29 */
#define gpio_P8_46 &main_gpio0 80
#define gpio_P9_11 &main_gpio0 1
#define gpio_P9_12 &main_gpio0 45
#define gpio_P9_13 &main_gpio0 2
#define gpio_P9_14 &main_gpio0 93
#define gpio_P9_15 &main_gpio0 47
#define gpio_P9_16 &main_gpio0 94
#define gpio_P9_17 &main_gpio0 28
#define gpio_P9_17A &main_gpio0 28
#define gpio_P9_17B &main_gpio0 115
#define gpio_P9_18 &main_gpio0 40
#define gpio_P9_18A &main_gpio0 40
#define gpio_P9_18B &main_gpio0 120
#define gpio_P9_19 &main_gpio0 78
#define gpio_P9_19A &main_gpio1 1
#define gpio_P9_19B &main_gpio0 78
#define gpio_P9_20 &main_gpio0 77
#define gpio_P9_20A &main_gpio1 2
#define gpio_P9_20B &main_gpio0 77
#define gpio_P9_21 &main_gpio0 39
#define gpio_P9_21A &main_gpio0 39
#define gpio_P9_21B &main_gpio0 90
#define gpio_P9_22 &main_gpio0 38
#define gpio_P9_22A &main_gpio0 38
#define gpio_P9_22B &main_gpio0 91
#define gpio_P9_23 &main_gpio0 10
#define gpio_P9_24 &main_gpio0 13
#define gpio_P9_24A &main_gpio0 119
#define gpio_P9_24B &main_gpio0 13
#define gpio_P9_25 &main_gpio0 127
#define gpio_P9_25A &main_gpio0 127
#define gpio_P9_25B &main_gpio0 104
#define gpio_P9_26 &main_gpio0 12
#define gpio_P9_26A &main_gpio0 118
#define gpio_P9_26B &main_gpio0 12
#define gpio_P9_27 &main_gpio0 46
#define gpio_P9_27A &main_gpio0 46
#define gpio_P9_27B &main_gpio0 127
#define gpio_P9_28A &main_gpio1 11
#define gpio_P9_28B &main_gpio0 43
#define gpio_P9_28 gpio_P9_28A
#define gpio_P9_29A &main_gpio1 14
#define gpio_P9_29B &main_gpio0 53
#define gpio_P9_29 gpio_P9_29B
#define gpio_P9_30A &main_gpio1 13
#define gpio_P9_30B &main_gpio0 44
#define gpio_P9_30 gpio_P9_30B
#define gpio_P9_31A &main_gpio1 12
#define gpio_P9_31B &main_gpio0 52
#define gpio_P9_31 gpio_P9_31B
#define gpio_P9_33 &main_gpio0 50
#define gpio_P9_35 &main_gpio0 55
#define gpio_P9_36 &main_gpio0 56
#define gpio_P9_37 &main_gpio0 57
#define gpio_P9_38 &main_gpio0 58
#define gpio_P9_39 &main_gpio0 54
#define gpio_P9_40 &main_gpio0 81
#define gpio_P9_41 &main_gpio1 0
#define gpio_P9_42 &main_gpio0 123

#define PIN2PAD(pin, mode, mux) J721E_IOPAD(J721E_PIN_##pin, mode, mux)
#define PIN2WPAD(pin, mode, mux) J721E_WKUP_IOPAD(J721E_PIN_##pin, mode, mux)

#define P8_03(mode, mux)  PIN2PAD(AH21, mode, mux)
#define P8_04(mode, mux)  PIN2PAD(AC29, mode, mux) /* BOOTMODE2 */
#define P8_05(mode, mux)  PIN2PAD(AH25, mode, mux)
#define P8_06(mode, mux)  PIN2PAD(AG25, mode, mux)
#define P8_07(mode, mux)  PIN2PAD(AD24, mode, mux)
#define P8_08(mode, mux)  PIN2PAD(AG24, mode, mux)
#define P8_09(mode, mux)  PIN2PAD(AE24, mode, mux)
#define P8_10(mode, mux)  PIN2PAD(AC24, mode, mux)
#define P8_11(mode, mux)  PIN2PAD(AB24, mode, mux) /* BOOTMODE7 */
#define P8_12(mode, mux)  PIN2PAD(AH28, mode, mux)
#define P8_13(mode, mux)  PIN2PAD(V27, mode, mux)
#define P8_14(mode, mux)  PIN2PAD(AF27, mode, mux)
#define P8_15(mode, mux)  PIN2PAD(AB29, mode, mux)
#define P8_16(mode, mux)  PIN2PAD(AB28, mode, mux)
#define P8_17(mode, mux)  PIN2PAD(AF22, mode, mux)
#define P8_18(mode, mux)  PIN2PAD(AJ23, mode, mux)
#define P8_19(mode, mux)  PIN2PAD(V29, mode, mux)
#define P8_20(mode, mux)  PIN2PAD(AF26, mode, mux)
#define P8_21(mode, mux)  PIN2PAD(AF21, mode, mux)
#define P8_22(mode, mux)  PIN2PAD(AH23, mode, mux)
#define P8_23(mode, mux)  PIN2PAD(AB23, mode, mux)
#define P8_24(mode, mux)  PIN2PAD(AD20, mode, mux) /* BOOTMODE0 */
#define P8_25(mode, mux)  PIN2PAD(AH26, mode, mux)
#define P8_26(mode, mux)  PIN2PAD(AC27, mode, mux)
#define P8_27(mode, mux)  PIN2PAD(AA28, mode, mux)
#define P8_28(mode, mux)  PIN2PAD(Y24 , mode, mux)
#define P8_29(mode, mux)  PIN2PAD(AA25, mode, mux)
#define P8_30(mode, mux)  PIN2PAD(AG26, mode, mux)
#define P8_31A(mode, mux) PIN2PAD(AJ25, mode, mux)
#define P8_31B(mode, mux) PIN2PAD(AE29, mode, mux)
#define P8_32A(mode, mux) PIN2PAD(AG21, mode, mux)
#define P8_32B(mode, mux) PIN2PAD(AD28, mode, mux)
#define P8_33A(mode, mux) PIN2PAD(AH24, mode, mux)
#define P8_33B(mode, mux) PIN2PAD(AA2, mode, mux)
#define P8_34(mode, mux)  PIN2PAD(AD22, mode, mux)
#define P8_35A(mode, mux) PIN2PAD(AD23, mode, mux)
#define P8_35B(mode, mux) PIN2PAD(Y3, mode, mux)
#define P8_36(mode, mux)  PIN2PAD(AE20, mode, mux)
#define P8_37A(mode, mux) PIN2PAD(AD21, mode, mux)
#define P8_37B(mode, mux) PIN2PAD(Y27, mode, mux)
#define P8_38A(mode, mux) PIN2PAD(AJ20, mode, mux)
#define P8_38B(mode, mux) PIN2PAD(Y29, mode, mux)
#define P8_39(mode, mux)  PIN2PAD(AC26, mode, mux)
#define P8_40(mode, mux)  PIN2PAD(AA24, mode, mux)
#define P8_41(mode, mux)  PIN2PAD(AD29, mode, mux)
#define P8_42(mode, mux)  PIN2PAD(AB27, mode, mux) /* BOOTMODE6 */
#define P8_43(mode, mux)  PIN2PAD(AD27, mode, mux)
#define P8_44(mode, mux)  PIN2PAD(AC25, mode, mux)
#define P8_45(mode, mux)  PIN2PAD(AG29, mode, mux)
#define P8_46(mode, mux)  PIN2PAD(Y25, mode, mux) /* BOOTMODE3 */
#define P9_11(mode, mux)  PIN2PAD(AC23, mode, mux)
#define P9_12(mode, mux)  PIN2PAD(AE27, mode, mux)
#define P9_13(mode, mux)  PIN2PAD(AG22, mode, mux)
#define P9_14(mode, mux)  PIN2PAD(U27, mode, mux)
#define P9_15(mode, mux)  PIN2PAD(AD25, mode, mux)
#define P9_16(mode, mux)  PIN2PAD(U24, mode, mux)
#define P9_17A(mode, mux) PIN2PAD(AC21, mode, mux)
#define P9_17B(mode, mux) PIN2PAD(AA3, mode, mux)
#define P9_18A(mode, mux) PIN2PAD(AH22, mode, mux)
#define P9_18B(mode, mux) PIN2PAD(Y2, mode, mux)
#define P9_19A(mode, mux) PIN2PAD(W5, mode, mux)
#define P9_19B(mode, mux) PIN2PAD(AF29, mode, mux)
#define P9_20A(mode, mux) PIN2PAD(W6, mode, mux)
#define P9_20B(mode, mux) PIN2PAD(AE25, mode, mux)
#define P9_21A(mode, mux) PIN2PAD(AJ22, mode, mux)
#define P9_21B(mode, mux) PIN2PAD(U28, mode, mux)
#define P9_22A(mode, mux) PIN2PAD(AC22, mode, mux) /* BOOTMODE1 */
#define P9_22B(mode, mux) PIN2PAD(U29, mode, mux)
#define P9_23(mode, mux)  PIN2PAD(AG20, mode, mux)
#define P9_24A(mode, mux) PIN2PAD(Y5, mode, mux)
#define P9_24B(mode, mux) PIN2PAD(AJ24, mode, mux)
#define P9_25A(mode, mux) PIN2PAD(AC4, mode, mux)
#define P9_25B(mode, mux) PIN2PAD(W26, mode, mux)
#define P9_26A(mode, mux) PIN2PAD(Y1, mode, mux)
#define P9_26B(mode, mux) PIN2PAD(AF24, mode, mux)
#define P9_27A(mode, mux) PIN2PAD(AD26, mode, mux)
#define P9_27B(mode, mux) PIN2PAD(AB1, mode, mux)
#define P9_28A(mode, mux) PIN2PAD(U2, mode, mux)
#define P9_28B(mode, mux) PIN2PAD(AF28, mode, mux)
#define P9_29A(mode, mux) PIN2PAD(V5, mode, mux)
#define P9_29B(mode, mux) PIN2PAD(AB25, mode, mux)
#define P9_30A(mode, mux) PIN2PAD(V6, mode, mux)
#define P9_30B(mode, mux) PIN2PAD(AE28, mode, mux)
#define P9_31A(mode, mux) PIN2PAD(U3, mode, mux)
#define P9_31B(mode, mux) PIN2PAD(AB26, mode, mux)
#define P9_33A(mode, mux) PIN2WPAD(K24, mode, mux)
#define P9_33B(mode, mux) PIN2PAD(AC28, mode, mux)
#define P9_35A(mode, mux) PIN2WPAD(K29, mode, mux)
#define P9_35B(mode, mux) PIN2PAD(AH27, mode, mux)
#define P9_36A(mode, mux) PIN2WPAD(K27, mode, mux)
#define P9_36B(mode, mux) PIN2PAD(AH29, mode, mux)
#define P9_37A(mode, mux) PIN2WPAD(K28, mode, mux)
#define P9_37B(mode, mux) PIN2PAD(AG28, mode, mux)
#define P9_38A(mode, mux) PIN2WPAD(L28, mode, mux)
#define P9_38B(mode, mux) PIN2PAD(AG27, mode, mux)
#define P9_39A(mode, mux) PIN2WPAD(K25, mode, mux)
#define P9_39B(mode, mux) PIN2PAD(AJ28, mode, mux)
#define P9_40A(mode, mux) PIN2WPAD(K26, mode, mux)
#define P9_40B(mode, mux) PIN2PAD(AA26, mode, mux)
#define P9_41(mode, mux)  PIN2PAD(AD5, mode, mux)
#define P9_42A(mode, mux) PIN2PAD(AC2, mode, mux)
#define P9_42B(mode, mux) PIN2PAD(AJ21, mode, mux)

#endif
