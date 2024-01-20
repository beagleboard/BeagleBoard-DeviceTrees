#!/bin/bash

source $(dirname "$0")/lib/pinmux.sh

file="bbai64"

echo "" >${file}-pinmux.dts
echo "" >${file}-a-bone-pins.h
echo "" >${file}-b-bone-pins.h
echo "" >${file}-bone-pins.h
echo "" >${file}-pins.txt

echo "/* macro: BONE_PIN( <pin>, <mode_name>, <register_value_macro(s)> */" >${file}.dts
echo "#define BONE_PIN(XX,ZZ,QQ) \\" >>${file}.dts
echo "	XX##_##ZZ##_pin: pinmux_##XX##_##ZZ##_pin { pinctrl-single,pins = < QQ >; };" >>${file}.dts
echo "" >>${file}.dts

echo "	/* I2C : https://elinux.org/Beagleboard:BeagleBone_cape_interface_spec#I2C */" >>${file}.dts
echo "	/* i2c6 P9.17 P9.18 */" >>${file}.dts
echo "	/* i2c2 P9.19 P9.20 */" >>${file}.dts
echo "	/* i2c4 P9.24 P9.26 */" >>${file}.dts
echo "" >>${file}.dts

echo "	/* CAN : https://elinux.org/Beagleboard:BeagleBone_cape_interface_spec#CAN */" >>${file}.dts
echo "	/* mcan0 P9.20 P9.19 */" >>${file}.dts
echo "	/* mcan4 P9.26 P9.24 */" >>${file}.dts
echo "	/* mcan5 P8.08 P8.07 */" >>${file}.dts
echo "" >>${file}.dts

echo "	/* SPI : https://elinux.org/Beagleboard:BeagleBone_cape_interface_spec#SPI */" >>${file}.dts
echo "	/* spi6 P9.18 P9.21 P9.22 P9.16 P9.23 */" >>${file}.dts
echo "	/* spi7 P9.30 P9.29 P9.31 P9.29 P9.42 */" >>${file}.dts
echo "" >>${file}.dts

echo "	/* UART : https://elinux.org/Beagleboard:BeagleBone_cape_interface_spec#UART */" >>${file}.dts
echo "	/* uart0 P9.13 P9.11 */" >>${file}.dts
echo "	/* uart2 P9.24 P9.22 */" >>${file}.dts
echo "	/* uart5 P8.37 P8.38 P8.32 P8.31 */" >>${file}.dts
echo "" >>${file}.dts

echo "	/* PWM: https://elinux.org/Beagleboard:BeagleBone_cape_interface_spec#PWM */" >>${file}.dts
echo "	/* ehrpwm1 P9.22 P9.21 */" >>${file}.dts
echo "	/* ehrpwm2 P9.14 P9.16 */" >>${file}.dts
echo "	/* ehrpwm0 P8.19 P8.13 */" >>${file}.dts
echo "" >>${file}.dts

echo "	/* Full P8/P9 header mode definitions */" >>${file}.dts
echo "	/* P8_01 - GND */" >>${file}.dts
echo "	/* P8_02 - GND */" >>${file}.dts
echo "" >>${file}.dts

default="GPIO0"
label="P8_03" ; ball="AH21" ; sch="AH21_MCAN6_TX"               ; find_pin
label="P8_04" ; ball="AC29" ; sch="AC29_SYS_BOOTMODE2"          ; find_pin
label="P8_05" ; ball="AH25" ; sch="AH25_MCAN7_TX"               ; find_pin
label="P8_06" ; ball="AG25" ; sch="AG25_MCAN7_RX"               ; find_pin
label="P8_07" ; ball="AD24" ; sch="AD24_MCAN5_RX"               ; find_pin
label="P8_08" ; ball="AG24" ; sch="AG24_MCAN5_TX"               ; find_pin
label="P8_09" ; ball="AE24" ; sch="AE24_MCAN6_RX"               ; find_pin

label="P8_10" ; ball="AC24" ; sch="AC24_MCAN6_TX"               ; find_pin
label="P8_11" ; ball="AB24" ; sch="AB24_SYS_BOOTMODE7"          ; find_pin
label="P8_12" ; ball="AH28" ; sch="AH28_PRG0_PWM0_A2"           ; find_pin
label="P8_13" ; ball="V27"  ; sch="V27_EHRPWM0_B"               ; find_pin
label="P8_14" ; ball="AF27" ; sch="AF27_PRG0_PWM1_A0"           ; find_pin
label="P8_15" ; ball="AB29" ; sch="AB29_PRG0_ECAP0_IN_APWM_OUT" ; find_pin
label="P8_16" ; ball="AB28" ; sch="AB28_PRG0_PWM0_TZ_OUT"       ; find_pin
label="P8_17" ; ball="AF22" ; sch="AF22_PRG1_PWM2_A0"           ; find_pin
label="P8_18" ; ball="AJ23" ; sch="AJ23_PRG1_PWM3_A2"           ; find_pin
label="P8_19" ; ball="V29"  ; sch="V29_EHRPWM0_A"               ; find_pin

label="P8_20" ; ball="AF26" ; sch="AF26_PRG0_PWM1_B0"           ; find_pin
label="P8_21" ; ball="AF21" ; sch="AF21_MCAN8_TX"               ; find_pin
label="P8_22" ; ball="AH23" ; sch="AH23_UART2_RXD"              ; find_pin
label="P8_23" ; ball="AB23" ; sch="AB23_MCAN8_RX"               ; find_pin
label="P8_24" ; ball="AD20" ; sch="AD20_SYS_BOOTMODE0"          ; find_pin
label="P8_25" ; ball="AH26" ; sch="AH26_PRG1_PRU1_GPO14"        ; find_pin
label="P8_26" ; ball="AC27" ; sch="AC27_PRG0_PWM2_A1"           ; find_pin
label="P8_27" ; ball="AA28" ; sch="AA28_PRG0_PRU1_GPO8"         ; find_pin
label="P8_28" ; ball="Y24"  ; sch="Y24_PRG0_UART0_RXD"          ; find_pin
label="P8_29" ; ball="AA25" ; sch="AA25_PRG0_UART0_TXD"         ; find_pin

label="P8_30" ; ball="AG26" ; sch="AG26_PRG0_PRU1_GPO11"        ; find_pin
label="P8_31" ; ball_a="AJ25" ; ball_b="AE29" ; sch="AJ25_AE29" ; find_shared_pin
label="P8_32" ; ball_a="AG21" ; ball_b="AD28" ; sch="AG21_AD28" ; find_shared_pin
label="P8_33" ; ball_a="AH24" ; ball_b="AA2"  ; sch="AH24_AA2"  ; find_shared_pin
label="P8_34" ; ball="AD22" ; sch="AD22_UART2_TXD"              ; find_pin
label="P8_35" ; ball_a="AD23" ; ball_b="Y3"   ; sch="AD23_Y3"   ; find_shared_pin
label="P8_36" ; ball="AE20" ; sch="AE20_MCAN4_TX"               ; find_pin
label="P8_37" ; ball_a="Y27"  ; ball_b="AD21" ; sch="Y27_AD21"  ; find_shared_pin
label="P8_38" ; ball_a="AJ20" ; ball_b="Y29"  ; sch="Y29_AJ20"  ; find_shared_pin
label="P8_39" ; ball="AC26" ; sch="AC26_PRG0_PRU1_GPO6"         ; find_pin

label="P8_40" ; ball="AA24" ; sch="AA24_PRG0_PRU1_GPO7"         ; find_pin
label="P8_41" ; ball="AD29" ; sch="AD29_PRG0_PRU1_GPO4"         ; find_pin
label="P8_42" ; ball="AB27" ; sch="AB27_SYS_BOOTMODE6"          ; find_pin
label="P8_43" ; ball="AD27" ; sch="AD27_PRG0_PRU1_GPO2"         ; find_pin
label="P8_44" ; ball="AC25" ; sch="AC25_PRG0_PRU1_GPO3"         ; find_pin
label="P8_45" ; ball="AG29" ; sch="AG29_PRG0_PRU1_GPO16"        ; find_pin
label="P8_46" ; ball="Y25"  ; sch="Y25_SYS_BOOTMODE3"           ; find_pin

echo "	/* P9_01 - GND */">>${file}.dts
echo "	/* P9_02 - GND */">>${file}.dts
echo "	/* P9_03 - VOUT_3V3 */">>${file}.dts
echo "	/* P9_04 - VOUT_3V3 */">>${file}.dts
echo "	/* P9_05 - VIN */">>${file}.dts
echo "	/* P9_06 - VIN */">>${file}.dts
echo "	/* P9_07 - VOUT_SYS */">>${file}.dts
echo "	/* P9_08 - VOUT_SYS */">>${file}.dts
echo "	/* P9_09 - RESET# */">>${file}.dts
echo "	/* P9_10 - POWER# */">>${file}.dts
echo "">>${file}.dts

label="P9_11" ; ball="AC23" ; sch="AC23_UART0_RXD"              ; find_pin
label="P9_12" ; ball="AE27" ; sch="AE27_MCASP0_ACLKR"           ; find_pin
label="P9_13" ; ball="AG22" ; sch="AG22_UART0_TXD"              ; find_pin
label="P9_14" ; ball="U27"  ; sch="U27_EHRPWM2_A"               ; find_pin
label="P9_15" ; ball="AD25" ; sch="AD25_PRG0_PRU0_GPO4"         ; find_pin
label="P9_16" ; ball="U24"  ; sch="U24_EHRPWM2_B"               ; find_pin
label="P9_17" ; ball_a="AC21" ; ball_b="AA3" ; sch="AC21_AA3"   ; find_shared_pin
label="P9_18" ; ball_a="AH22" ; ball_b="Y2"  ; sch="AH22_Y2"    ; find_shared_pin
default="GPIO1"
label="P9_19" ; ball_a="W5" ; ball_b="AF29"  ; sch="W5_AF29"    ; find_shared_pin
default="GPIO0"

label="P9_20" ; ball_a="W6" ; ball_b="AE25"  ; sch="W6_AE25"    ; find_shared_pin
label="P9_21" ; ball_a="AJ22" ; ball_b="U28" ; sch="AJ22_U28"   ; find_shared_pin
label="P9_22" ; ball_a="AC22" ; ball_b="U29" ; sch="AC22_U29"   ; find_shared_pin
label="P9_23" ; ball="AG20" ; sch="AG20_SPI6_CS1"               ; find_pin
label="P9_24" ; ball_a="Y5" ; ball_b="AJ24"  ; sch="Y5_AJ24"    ; find_shared_pin
label="P9_25" ; ball_a="AC4" ; ball_b="W26"  ; sch="AC4_W26"    ; find_shared_pin
label="P9_26" ; ball_a="Y1" ; ball_b="AF24"  ; sch="Y1_AF24"    ; find_shared_pin
label="P9_27" ; ball_a="AD26" ; ball_b="AB1" ; sch="AD26_AB1"   ; find_shared_pin
default="GPIO1"
label="P9_28" ; ball_a="U2" ; ball_b="AF28"  ; sch="U2_AF28"    ; find_shared_pin
label="P9_29" ; ball_a="V5" ; ball_b="AB25"  ; sch="V5_AB25"    ; find_shared_pin

label="P9_30" ; ball_a="V6" ; ball_b="AE28"  ; sch="V6_AE28"    ; find_shared_pin
label="P9_31" ; ball_a="U3" ; ball_b="AB26"  ; sch="U3_AB26"    ; find_shared_pin

echo "	/* P9_32 - ADC_REF_OUT */">>${file}.dts
echo "">>${file}.dts

default="GPIO0"
label="P9_33" ; ball_a="K24" ; ball_b="AC28" ; sch="K24_AC28"   ; find_shared_pin

echo "	/* P9_34 - ADC_GND */">>${file}.dts
echo "">>${file}.dts

label="P9_35" ; ball_a="K29" ; ball_b="AH27" ; sch="K29_AH27"   ; find_shared_pin
label="P9_36" ; ball_a="K27" ; ball_b="AH29" ; sch="K27_AH29"   ; find_shared_pin
label="P9_37" ; ball_a="K28" ; ball_b="AG28" ; sch="K28_AG28"   ; find_shared_pin
label="P9_38" ; ball_a="L28" ; ball_b="AG27" ; sch="L28_AG27"   ; find_shared_pin
label="P9_39" ; ball_a="K25" ; ball_b="AJ28" ; sch="K25_AJ28"   ; find_shared_pin

label="P9_40" ; ball_a="K26" ; ball_b="AA26" ; sch="K26_AA26"   ; find_shared_pin
default="GPIO1"
label="P9_41" ; ball="AD5" ; sch="AD5_EQEP0_I"                  ; find_pin
default="GPIO0"
label="P9_42" ; ball_a="AC2" ; ball_b="AJ21" ; sch="AC2_AJ21"   ; find_shared_pin

echo "	/* P9_43 - GND */">>${file}.dts
echo "	/* P9_44 - GND */">>${file}.dts
echo "	/* P9_45 - GND */">>${file}.dts
echo "	/* P9_46 - GND */">>${file}.dts

msg="" ; echo_both

cat ${file}-pinmux.dts >> ${file}.dts

rm -rf ${file}-pinmux.dts || true

cat ${file}-a-bone-pins.h >> ${file}-bone-pins.h
cat ${file}-b-bone-pins.h >> ${file}-bone-pins.h

rm -rf ${file}-a-bone-pins.h || true
rm -rf ${file}-b-bone-pins.h || true
