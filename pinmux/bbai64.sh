#!/bin/bash

source $(dirname "$0")/lib/pinmux.sh

file="bbai64"

echo "" >${file}-pinmux.dts
echo "" >${file}-a-bone-pins.h
echo "" >${file}-b-bone-pins.h
echo "" >${file}-bone-pins.h

echo "/* macro: BONE_PIN( <pin>, <mode_name>, <register_value_macro(s)> */">${file}.dts
echo "#define BONE_PIN(XX,ZZ,QQ) \\">>${file}.dts
echo "	XX##_##ZZ##_pin: pinmux_##XX##_##ZZ##_pin { pinctrl-single,pins = < QQ >; };">>${file}.dts
echo "">>${file}.dts
echo "	/* Full P8/P9 header mode definitions */">>${file}.dts
echo "	/* P8_01 - GND */">>${file}.dts
echo "	/* P8_02 - GND */">>${file}.dts
echo "">>${file}.dts

default_mode="7"
pcbpin="P8_03"  ; ball="AH21" ; gpio_index="6" ; peripheral="gpio" ; sch="AH21_MCAN6_TX" ; find_ball_digital
pcbpin="P8_04"  ; ball="AC29" ; gpio_index="4" ; peripheral="gpio" ; sch="AC29_SYS_BOOTMODE2" ; find_ball_digital
pcbpin="P8_05"  ; ball="AH25" ; gpio_index="6" ; peripheral="gpio" ; sch="AH25_MCAN7_TX" ; find_ball_digital
pcbpin="P8_06"  ; ball="AG25" ; gpio_index="6" ; peripheral="gpio" ; sch="AG25_MCAN7_RX" ; find_ball_digital
pcbpin="P8_07"  ; ball="AD24" ; gpio_index="6" ; peripheral="gpio" ; sch="AD24_MCAN5_RX" ; find_ball_digital
pcbpin="P8_08"  ; ball="AG24" ; gpio_index="6" ; peripheral="gpio" ; sch="AG24_MCAN5_TX" ; find_ball_digital
pcbpin="P8_09"  ; ball="AE24" ; gpio_index="6" ; peripheral="gpio" ; sch="AE24_MCAN6_RX" ; find_ball_digital

pcbpin="P8_10"  ; ball="AC24" ; gpio_index="6" ; peripheral="gpio" ; sch="AC24_MCAN6_TX" ; find_ball_digital
pcbpin="P8_11"  ; ball="AB24" ; gpio_index="5" ; peripheral="gpio" ; sch="AB24_SYS_BOOTMODE7" ; find_ball_digital
pcbpin="P8_12"  ; ball="AH28" ; gpio_index="5" ; peripheral="gpio" ; sch="AH28_PRG0_PWM0_A2" ; find_ball_digital
pcbpin="P8_13"  ; ball="V27"  ; gpio_index="6" ; peripheral="gpio" ; sch="V27_EHRPWM0_B" ; find_ball_digital
pcbpin="P8_14"  ; ball="AF27" ; gpio_index="5" ; peripheral="gpio" ; sch="AF27_PRG0_PWM1_A0" ; find_ball_digital
pcbpin="P8_15"  ; ball="AB29" ; gpio_index="5" ; peripheral="gpio" ; sch="AB29_PRG0_ECAP0_IN_APWM_OUT" ; find_ball_digital
pcbpin="P8_16"  ; ball="AB28" ; gpio_index="4" ; peripheral="gpio" ; sch="AB28_PRG0_PWM0_TZ_OUT" ; find_ball_digital
pcbpin="P8_17"  ; ball="AF22" ; gpio_index="6" ; peripheral="gpio" ; sch="AF22_PRG1_PWM2_A0" ; find_ball_digital
pcbpin="P8_18"  ; ball="AJ23" ; gpio_index="6" ; peripheral="gpio" ; sch="AJ23_PRG1_PWM3_A2" ; find_ball_digital
pcbpin="P8_19"  ; ball="V29"  ; gpio_index="6" ; peripheral="gpio" ; sch="V29_EHRPWM0_A" ; find_ball_digital

pcbpin="P8_20"  ; ball="AF26" ; gpio_index="5" ; peripheral="gpio" ; sch="AF26_PRG0_PWM1_B0" ; find_ball_digital
pcbpin="P8_21"  ; ball="AF21" ; gpio_index="6" ; peripheral="gpio" ; sch="AF21_MCAN8_TX" ; find_ball_digital
pcbpin="P8_22"  ; ball="AH23" ; gpio_index="6" ; peripheral="gpio" ; sch="AH23_UART2_RXD" ; find_ball_digital
pcbpin="P8_23"  ; ball="AB23" ; gpio_index="6" ; peripheral="gpio" ; sch="AB23_MCAN8_RX" ; find_ball_digital
pcbpin="P8_24"  ; ball="AD20" ; gpio_index="4" ; peripheral="gpio" ; sch="AD20_SYS_BOOTMODE0" ; find_ball_digital
pcbpin="P8_25"  ; ball="AH26" ; gpio_index="6" ; peripheral="gpio" ; sch="AH26_PRG1_PRU1_GPO14" ; find_ball_digital
pcbpin="P8_26"  ; ball="AC27" ; gpio_index="4" ; peripheral="gpio" ; sch="AC27_PRG0_PWM2_A1" ; find_ball_digital
pcbpin="P8_27"  ; ball="AA28" ; gpio_index="4" ; peripheral="gpio" ; sch="AA28_PRG0_PRU1_GPO8" ; find_ball_digital
pcbpin="P8_28"  ; ball="Y24"  ; gpio_index="5" ; peripheral="gpio" ; sch="Y24_PRG0_UART0_RXD" ; find_ball_digital
pcbpin="P8_29"  ; ball="AA25" ; gpio_index="5" ; peripheral="gpio" ; sch="AA25_PRG0_UART0_TXD" ; find_ball_digital

pcbpin="P8_30"  ; ball="AG26" ; gpio_index="5" ; peripheral="gpio" ; sch="AG26_PRG0_PRU1_GPO11" ; find_ball_digital
pcbpin="P8_31A" ; ball="AJ25" ; gpio_index="5" ; peripheral="gpio" ; sch="AJ25_AE29" ; find_ball_digital
pcbpin="P8_31B" ; ball="AE29" ; gpio_index="5" ; peripheral="gpio" ; sch="AJ25_AE29" ; find_ball_digital
pcbpin="P8_32A" ; ball="AG21" ; gpio_index="4" ; peripheral="gpio" ; sch="AG21_AD28" ; find_ball_digital
pcbpin="P8_32B" ; ball="AD28" ; gpio_index="5" ; peripheral="gpio" ; sch="AG21_AD28" ; find_ball_digital
pcbpin="P8_33A" ; ball="AH24" ; gpio_index="6" ; peripheral="gpio" ; sch="AH24_AA2"  ; find_ball_digital
pcbpin="P8_33B" ; ball="AA2"  ; gpio_index="2" ; peripheral="gpio" ; sch="AH24_AA2"  ; find_ball_digital
pcbpin="P8_34"  ; ball="AD22" ; gpio_index="7" ; peripheral="gpio" ; sch="AD22_UART2_TXD" ; find_ball_digital
pcbpin="P8_35A" ; ball="AD23" ; gpio_index="5" ; peripheral="gpio" ; sch="AD23_Y3"   ; find_ball_digital
pcbpin="P8_35B" ; ball="Y3"   ; gpio_index="4" ; peripheral="gpio" ; sch="AD23_Y3"   ; find_ball_digital
pcbpin="P8_36"  ; ball="AE20" ; gpio_index="6" ; peripheral="gpio" ; sch="AE20_MCAN4_TX" ; find_ball_digital
pcbpin="P8_37A" ; ball="Y27"  ; gpio_index="5" ; peripheral="gpio" ; sch="Y27_AD21"  ; find_ball_digital
pcbpin="P8_37B" ; ball="AD21" ; gpio_index="6" ; peripheral="gpio" ; sch="Y27_AD21"  ; find_ball_digital
pcbpin="P8_38A" ; ball="AJ20" ; gpio_index="5" ; peripheral="gpio" ; sch="Y29_AJ20"  ; find_ball_digital
pcbpin="P8_38B" ; ball="Y29"  ; gpio_index="6" ; peripheral="gpio" ; sch="Y29_AJ20"  ; find_ball_digital
pcbpin="P8_39"  ; ball="AC26" ; gpio_index="5" ; peripheral="gpio" ; sch="AC26_PRG0_PRU1_GPO6" ; find_ball_digital

pcbpin="P8_40"  ; ball="AA24" ; gpio_index="5" ; peripheral="gpio" ; sch="AA24_PRG0_PRU1_GPO7" ; find_ball_digital
pcbpin="P8_41"  ; ball="AD29" ; gpio_index="6" ; peripheral="gpio" ; sch="AD29_PRG0_PRU1_GPO4" ; find_ball_digital
pcbpin="P8_42"  ; ball="AB27" ; gpio_index="2" ; peripheral="gpio" ; sch="AB27_SYS_BOOTMODE6" ; find_ball_digital
pcbpin="P8_43"  ; ball="AD27" ; gpio_index="6" ; peripheral="gpio" ; sch="AD27_PRG0_PRU1_GPO2" ; find_ball_digital
pcbpin="P8_44"  ; ball="AC25" ; gpio_index="5" ; peripheral="gpio" ; sch="AC25_PRG0_PRU1_GPO3" ; find_ball_digital
pcbpin="P8_45"  ; ball="AG29" ; gpio_index="5" ; peripheral="gpio" ; sch="AG29_PRG0_PRU1_GPO16" ; find_ball_digital
pcbpin="P8_46"  ; ball="Y25"  ; gpio_index="5" ; peripheral="gpio" ; sch="Y25_SYS_BOOTMODE3" ; find_ball_digital

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

pcbpin="P9_11"  ; ball="AC23" ; gpio_index="6" ; peripheral="gpio" ; sch="AC23_UART0_RXD" ; find_ball_digital
pcbpin="P9_12"  ; ball="AE27" ; gpio_index="6" ; peripheral="gpio" ; sch="AE27_MCASP0_ACLKR" ; find_ball_digital
pcbpin="P9_13"  ; ball="AG22" ; gpio_index="6" ; peripheral="gpio" ; sch="AG22_UART0_TXD" ; find_ball_digital
pcbpin="P9_14"  ; ball="U27"  ; gpio_index="6" ; peripheral="gpio" ; sch="U27_EHRPWM2_A" ; find_ball_digital
pcbpin="P9_15"  ; ball="AD25" ; gpio_index="6" ; peripheral="gpio" ; sch="AD25_PRG0_PRU0_GPO4" ; find_ball_digital
pcbpin="P9_16"  ; ball="U24"  ; gpio_index="6" ; peripheral="gpio" ; sch="U24_EHRPWM2_B" ; find_ball_digital
pcbpin="P9_17A" ; ball="AC21" ; gpio_index="6" ; peripheral="gpio" ; sch="AC21_AA3" ; find_ball_digital
pcbpin="P9_17B" ; ball="AA3"  ; gpio_index="2" ; peripheral="gpio" ; sch="AC21_AA3" ; find_ball_digital
pcbpin="P9_18A" ; ball="AH22" ; gpio_index="7" ; peripheral="gpio" ; sch="AH22_Y2"  ; find_ball_digital
pcbpin="P9_18B" ; ball="Y2"   ; gpio_index="2" ; peripheral="gpio" ; sch="AH22_Y2"  ; find_ball_digital
pcbpin="P9_19A" ; ball="W5"   ; gpio_index="2" ; peripheral="gpio" ; sch="W5_AF29"  ; find_ball_digital
pcbpin="P9_19B" ; ball="AF29" ; gpio_index="5" ; peripheral="gpio" ; sch="W5_AF29"  ; find_ball_digital

pcbpin="P9_20A" ; ball="W6"   ; gpio_index="2" ; peripheral="gpio" ; sch="W6_AE25"  ; find_ball_digital
pcbpin="P9_20B" ; ball="AE25" ; gpio_index="5" ; peripheral="gpio" ; sch="W6_AE25"  ; find_ball_digital
pcbpin="P9_21A" ; ball="AJ22" ; gpio_index="7" ; peripheral="gpio" ; sch="AJ22_U28" ; find_ball_digital
pcbpin="P9_21B" ; ball="U28"  ; gpio_index="6" ; peripheral="gpio" ; sch="AJ22_U28" ; find_ball_digital
pcbpin="P9_22A" ; ball="AC22" ; gpio_index="7" ; peripheral="gpio" ; sch="AC22_U29" ; find_ball_digital
pcbpin="P9_22B" ; ball="U29"  ; gpio_index="6" ; peripheral="gpio" ; sch="AC22_U29" ; find_ball_digital
pcbpin="P9_23"  ; ball="AG20" ; gpio_index="6" ; peripheral="gpio" ; sch="AG20_SPI6_CS1" ; find_ball_digital
pcbpin="P9_24A" ; ball="Y5"   ; gpio_index="4" ; peripheral="gpio" ; sch="Y5_AJ24"  ; find_ball_digital
pcbpin="P9_24B" ; ball="AJ24" ; gpio_index="6" ; peripheral="gpio" ; sch="Y5_AJ24"  ; find_ball_digital
pcbpin="P9_25A" ; ball="AC4"  ; gpio_index="4" ; peripheral="gpio" ; sch="AC4_W26"  ; find_ball_digital
pcbpin="P9_25B" ; ball="W26"  ; gpio_index="5" ; peripheral="gpio" ; sch="AC4_W26"  ; find_ball_digital
pcbpin="P9_26A" ; ball="Y1"   ; gpio_index="4" ; peripheral="gpio" ; sch="Y1_AF24"  ; find_ball_digital
pcbpin="P9_26B" ; ball="AF24" ; gpio_index="6" ; peripheral="gpio" ; sch="Y1_AF24"  ; find_ball_digital
pcbpin="P9_27A" ; ball="AD26" ; gpio_index="6" ; peripheral="gpio" ; sch="AD26_AB1" ; find_ball_digital
pcbpin="P9_27B" ; ball="AB1"  ; gpio_index="6" ; peripheral="gpio" ; sch="AD26_AB1" ; find_ball_digital
pcbpin="P9_28A" ; ball="U2"   ; gpio_index="6" ; peripheral="gpio" ; sch="U2_AF28"  ; find_ball_digital
pcbpin="P9_28B" ; ball="AF28" ; gpio_index="6" ; peripheral="gpio" ; sch="U2_AF28"  ; find_ball_digital
pcbpin="P9_29A" ; ball="V5"   ; gpio_index="4" ; peripheral="gpio" ; sch="V5_AB25"  ; find_ball_digital
pcbpin="P9_29B" ; ball="AB25" ; gpio_index="7" ; peripheral="gpio" ; sch="V5_AB25"  ; find_ball_digital

pcbpin="P9_30A" ; ball="V6"   ; gpio_index="4" ; peripheral="gpio" ; sch="V6_AE28"  ; find_ball_digital
pcbpin="P9_30B" ; ball="AE28" ; gpio_index="6" ; peripheral="gpio" ; sch="V6_AE28"  ; find_ball_digital
pcbpin="P9_31A" ; ball="U3"   ; gpio_index="3" ; peripheral="gpio" ; sch="U3_AB26"  ; find_ball_digital
pcbpin="P9_31B" ; ball="AB26" ; gpio_index="7" ; peripheral="gpio" ; sch="U3_AB26"  ; find_ball_digital

echo "	/* P9_32 - ADC_REF_OUT*/">>${file}.dts
echo "">>${file}.dts

pcbpin="P9_33A" ; ball="K24"  ; gpio_index="1" ; peripheral="gpio" ; sch="K24_AC28" find_ball_analog
pcbpin="P9_33B" ; ball="AC28" ; gpio_index="6" ; peripheral="gpio" ; sch="K24_AC28" find_ball_digital

echo "	/* P9_34 - ADC_GND */">>${file}.dts
echo "">>${file}.dts

pcbpin="P9_35A" ; ball="K29"  ; gpio_index="1" ; peripheral="gpio" ; sch="K29_AH27" ; find_ball_analog
pcbpin="P9_35B" ; ball="AH27" ; gpio_index="5" ; peripheral="gpio" ; sch="K29_AH27" ; find_ball_digital

pcbpin="P9_36A" ; ball="K27"  ; gpio_index="1" ; peripheral="gpio" ; sch="K27_AH29" ; find_ball_analog
pcbpin="P9_36B" ; ball="AH29" ; gpio_index="5" ; peripheral="gpio" ; sch="K27_AH29" ; find_ball_digital

pcbpin="P9_37A" ; ball="K28"  ; gpio_index="1" ; peripheral="gpio" ; sch="K28_AG28" ; find_ball_analog
pcbpin="P9_37B" ; ball="AG28" ; gpio_index="5" ; peripheral="gpio" ; sch="K28_AG28" ; find_ball_digital

pcbpin="P9_38A" ; ball="L28"  ; gpio_index="1" ; peripheral="gpio" ; sch="L28_AG27" ; find_ball_analog
pcbpin="P9_38B" ; ball="AG27" ; gpio_index="5" ; peripheral="gpio" ; sch="L28_AG27" ; find_ball_digital

pcbpin="P9_39A" ; ball="K25"  ; gpio_index="1" ; peripheral="gpio" ; sch="K25_AJ28" ; find_ball_analog
pcbpin="P9_39B" ; ball="AJ28" ; gpio_index="5" ; peripheral="gpio" ; sch="K25_AJ28" ; find_ball_digital

pcbpin="P9_40A" ; ball="K26"  ; gpio_index="1" ; peripheral="gpio" ; sch="K26_AA26" ; find_ball_analog
pcbpin="P9_40B" ; ball="AA26" ; gpio_index="6" ; peripheral="gpio" ; sch="K26_AA26" ; find_ball_digital

pcbpin="P9_41"  ; ball="AD5"  ; gpio_index="4" ; peripheral="gpio" ; sch="AD5_EQEP0_I" ; find_ball_digital

pcbpin="P9_42A" ; ball="AC2"  ; gpio_index="6" ; peripheral="gpio" ; sch="AC2_AJ21" ; find_ball_digital
pcbpin="P9_42B" ; ball="AJ21" ; gpio_index="6" ; peripheral="gpio" ; sch="AC2_AJ21" ; find_ball_digital

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
