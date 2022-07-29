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

#define BONE_GPIO(pin) BALL_GPIO(BONE_BALL(pin))
#define BALL_GPIO(ball) gpio_##ball
#define gpio_P8_03 &main_gpio0 20   /* AH21 */
#define gpio_P8_04 &main_gpio0 48   /* AC29 */
#define gpio_P8_05 &main_gpio0 33   /* AH25 */
#define gpio_P8_06 &main_gpio0 34   /* AG25 */
#define gpio_P8_07 &main_gpio0 15   /* AD24 */
#define gpio_P8_08 &main_gpio0 14   /* AG24 */
#define gpio_P8_09 &main_gpio0 17   /* AE24 */
#define gpio_P8_10 &main_gpio0 16   /* AC24 */
#define gpio_P8_11 &main_gpio0 60   /* AB24 */
#define gpio_P8_12 &main_gpio0 59   /* AH28 */
#define gpio_P8_13 &main_gpio0 89   /* V27 */
#define gpio_P8_14 &main_gpio0 75   /* AF27 */
#define gpio_P8_15 &main_gpio0 61   /* AB29 */
#define gpio_P8_16 &main_gpio0 62   /* AB28 */
#define gpio_P8_17 &main_gpio0 3    /* AF22 */
#define gpio_P8_18 &main_gpio0 4    /* AJ23 */
#define gpio_P8_19 &main_gpio0 88   /* V29 */
#define gpio_P8_20 &main_gpio0 76   /* AF26 */
#define gpio_P8_21 &main_gpio0 30   /* AF21 */
#define gpio_P8_22 &main_gpio0 5    /* AH23 */
#define gpio_P8_23 &main_gpio0 31   /* AB23 */
#define gpio_P8_24 &main_gpio0 6    /* AD20 */
#define gpio_P8_25 &main_gpio0 35   /* AH26 */
#define gpio_P8_26 &main_gpio0 51   /* AC27 */
#define gpio_P8_27 &main_gpio0 71   /* AA28 */
#define gpio_P8_28 &main_gpio0 72   /* Y24 */
#define gpio_P8_29 &main_gpio0 73   /* AA25 */
#define gpio_P8_30 &main_gpio0 74   /* AG26 */
#define gpio_P8_31A &main_gpio0 32  /* AJ25 */
#define gpio_P8_31B &main_gpio0 63  /* AE29 */
#define gpio_P8_31 gpio_P8_31A
#define gpio_P8_32A &main_gpio0 26  /* AG21 */
#define gpio_P8_32B &main_gpio0 64  /* AD28 */
#define gpio_P8_32 gpio_P8_32A
#define gpio_P8_33A &main_gpio0 25  /* AH24 */
#define gpio_P8_33B &main_gpio0 110 /* AA2 */
#define gpio_P8_33 gpio_P8_33A
#define gpio_P8_34 &main_gpio0 7    /* AD22 */
#define gpio_P8_35A &main_gpio0 24  /* AD23 */
#define gpio_P8_35B &main_gpio0 116 /* Y3 */
#define gpio_P8_35 gpio_P8_35A
#define gpio_P8_36 &main_gpio0 8    /* AE20 */
#define gpio_P8_37A &main_gpio0 106 /* Y27 */
#define gpio_P8_37B &main_gpio0 11  /* AD21 */
#define gpio_P8_37 gpio_P8_37A
#define gpio_P8_38A &main_gpio0 9   /* AJ20 */
#define gpio_P8_38B &main_gpio0 105 /* Y29 */
#define gpio_P8_38 gpio_P8_38B
#define gpio_P8_39 &main_gpio0 69   /* AC26 */
#define gpio_P8_40 &main_gpio0 70   /* AA24 */
#define gpio_P8_41 &main_gpio0 67   /* AD29 */
#define gpio_P8_42 &main_gpio0 68   /* AB27 */
#define gpio_P8_43 &main_gpio0 65   /* AD27 */
#define gpio_P8_44 &main_gpio0 66   /* AC25 */
#define gpio_P8_45 &main_gpio0 79   /* AG29 */
#define gpio_P8_46 &main_gpio0 80   /* Y25 */
#define gpio_P9_11 &main_gpio0 1    /* AC23 */
#define gpio_P9_12 &main_gpio0 45   /* AE27 */
#define gpio_P9_13 &main_gpio0 2    /* AG22 */
#define gpio_P9_14 &main_gpio0 93   /* U27 */
#define gpio_P9_15 &main_gpio0 47   /* AD25 */
#define gpio_P9_16 &main_gpio0 94   /* U24 */
#define gpio_P9_17A &main_gpio0 28  /* AC21 */
#define gpio_P9_17B &main_gpio0 115 /* AA3 */
#define gpio_P9_17 gpio_P9_17A
#define gpio_P9_18A &main_gpio0 40  /* AH22 */
#define gpio_P9_18B &main_gpio0 120 /* Y2 */
#define gpio_P9_18 gpio_P9_18A
#define gpio_P9_19A &main_gpio1 1   /* W5 */
#define gpio_P9_19B &main_gpio0 78  /* AF29 */
#define gpio_P9_19 gpio_P9_19B
#define gpio_P9_20A &main_gpio1 2
#define gpio_P9_20B &main_gpio0 77
#define gpio_P9_20 gpio_P9_20B
#define gpio_P9_21A &main_gpio0 39
#define gpio_P9_21B &main_gpio0 90
#define gpio_P9_21 &main_gpio0 39
#define gpio_P9_22A &main_gpio0 38
#define gpio_P9_22B &main_gpio0 91
#define gpio_P9_22 &main_gpio0 38
#define gpio_P9_23 &main_gpio0 10
#define gpio_P9_24A &main_gpio0 119
#define gpio_P9_24B &main_gpio0 13
#define gpio_P9_24 &main_gpio0 13
#define gpio_P9_25A &main_gpio0 127
#define gpio_P9_25B &main_gpio0 104
#define gpio_P9_25 &main_gpio0 127
#define gpio_P9_26A &main_gpio0 118
#define gpio_P9_26B &main_gpio0 12
#define gpio_P9_26 &main_gpio0 12
#define gpio_P9_27A &main_gpio0 46
#define gpio_P9_27B &main_gpio0 127
#define gpio_P9_27 &main_gpio0 46
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

#define P8_03_BALL  AH21
#define P8_04_BALL  AC29
#define BALL_AC29_BOOTMODE 2
#define P8_05_BALL  AH25
#define P8_06_BALL  AG25
#define P8_07_BALL  AD24
#define P8_08_BALL  AG24
#define P8_09_BALL  AE24
#define P8_10_BALL  AC24
#define P8_11_BALL  AB24
#define BALL_AB24_BOOTMODE 7
#define P8_12_BALL  AH28
#define P8_13_BALL  V27
#define P8_14_BALL  AF27
#define P8_15_BALL  AB29
#define P8_16_BALL  AB28
#define P8_17_BALL  AF22
#define P8_18_BALL  AJ23
#define P8_19_BALL  V29
#define P8_20_BALL  AF26
#define P8_21_BALL  AF21
#define P8_22_BALL  AH23
#define P8_23_BALL  AB23
#define P8_24_BALL  AD20
#define BALL_AD20_BOOTMODE 0
#define P8_25_BALL  AH26
#define P8_26_BALL  AC27
#define P8_27_BALL  AA28
#define P8_28_BALL  Y24
#define P8_29_BALL  AA25
#define P8_30_BALL  AG26
#define P8_31A_BALL AJ25
#define P8_31B_BALL AE29
#define P8_32A_BALL AG21
#define P8_32B_BALL AD28
#define P8_33A_BALL AH24
#define P8_33B_BALL AA2
#define P8_34_BALL  AD22
#define P8_35A_BALL AD23
#define P8_35B_BALL Y3
#define P8_36_BALL  AE20
#define P8_37A_BALL AD21
#define P8_37B_BALL Y27
#define P8_38A_BALL AJ20
#define P8_38B_BALL Y29
#define P8_39_BALL  AC26
#define P8_40_BALL  AA24
#define P8_41_BALL  AD29
#define P8_42_BALL  AB27
#define BALL_AB27_BOOTMODE 6
#define P8_43_BALL  AD27
#define P8_44_BALL  AC25
#define P8_45_BALL  AG29
#define P8_46_BALL  Y25
#define BALL_Y25_BOOTMODE  3
#define P9_11_BALL  AC23
#define P9_12_BALL  AE27
#define P9_13_BALL  AG22
#define P9_14_BALL  U27
#define P9_15_BALL  AD25
#define P9_16_BALL  U24
#define P9_17A_BALL AC21
#define P9_17B_BALL AA3
#define P9_18A_BALL AH22
#define P9_18B_BALL Y2
#define P9_19A_BALL W5
#define P9_19B_BALL AF29
#define P9_20A_BALL W6
#define P9_20B_BALL AE25
#define P9_21A_BALL AJ22
#define P9_21B_BALL U28
#define P9_22A_BALL AC22
#define BALL_AC22_BOOTMODE 1
#define P9_22B_BALL U29
#define P9_23_BALL  AG20
#define P9_24A_BALL Y5
#define P9_24B_BALL AJ24
#define P9_25A_BALL AC4
#define P9_25B_BALL W26
#define P9_26A_BALL Y1
#define P9_26B_BALL AF24
#define P9_27A_BALL AD26
#define P9_27B_BALL AB1
#define P9_28A_BALL U2
#define P9_28B_BALL AF28
#define P9_29A_BALL V5
#define P9_29B_BALL AB25
#define P9_30A_BALL V6
#define P9_30B_BALL AE28
#define P9_31A_BALL U3
#define P9_31B_BALL AB26
#define P9_33A_BALL K24
#define BALL_K24_WKUP WKUP_
#define P9_33B_BALL AC28
#define P9_35A_BALL K29
#define BALL_K29_WKUP WKUP_
#define P9_35B_BALL AH27
#define P9_36A_BALL K27
#define BALL_K27_WKUP WKUP_
#define P9_36B_BALL AH29
#define P9_37A_BALL K28
#define BALL_K28_WKUP WKUP_
#define P9_37B_BALL AG28
#define P9_38A_BALL L28
#define BALL_L28_WKUP WKUP_
#define P9_38B_BALL AG27
#define P9_39A_BALL K25
#define BALL_K25_WKUP WKUP_
#define P9_39B_BALL AJ28
#define P9_40A_BALL K26
#define BALL_K26_WKUP WKUP_
#define P9_40B_BALL AA26
#define P9_41_BALL  AD5
#define P9_42A_BALL AC2
#define P9_42B_BALL AJ21

#define BONE_BALL(pin) pin##_BALL
#define BONE_WKUP(pin) defined(BALL_ ## BONE_BALL(pin) ## _WKUP) && BALL_ ## BONE_BALL(pin) ## _WKUP
#define BALL_IOPAD(ball, wkup, mode, mux) J721E_##wkup##IOPAD(J721E_PIN_##ball, mode, mux)
#define BONE_IOPAD(pin, mode, mux) BALL_IOPAD(BONE_BALL(pin), BONE_WKUP(pin), mode, mux)

#endif
