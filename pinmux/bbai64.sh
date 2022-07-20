#!/bin/bash

source $(dirname "$0")/lib/pinmux.sh

file="bbai64"

echo "" > ${file}.dts
echo "" >${file}-pinmux.dts
echo "" >${file}-gpio.dts
echo "" >${file}_config-pin.txt
echo "" >${file}-a-bone-pins.h
echo "" >${file}-b-bone-pins.h
echo "" >${file}-bone-pins.h

#BeagleBone Black
gpio_index="7"

#pcbpin="P9_42" ; ball="C18" ; find_ball
#exit 2

msg="	/************************/" ; echo_both
msg="	/* P8 Header */" ; echo_both
msg="	/************************/" ; echo_both
msg="" ; echo_both

pcbpin="P8_01" ; label_pin="gnd" ; label_info="GND" ; echo_label
pcbpin="P8_02" ; label_pin="gnd" ; label_info="GND" ; echo_label

msg="" ; echo_both

gpio_index="2"
pcbpin="P8_03" ; ball="R9" ; default_mode="7" ; cp_default="emmc" ; use_name="emmc" ; cp_default="emmc" ; find_ball

msg="" ; echo_both

cat ${file}-pinmux.dts >> ${file}.dts

echo "	cape-universal {" >> ${file}.dts
echo "		compatible = \"gpio-of-helper\";" >> ${file}.dts
echo "		status = \"okay\";" >> ${file}.dts
echo "		pinctrl-names = \"default\";" >> ${file}.dts
echo "		pinctrl-0 = <>;" >> ${file}.dts

cat ${file}-gpio.dts >> ${file}.dts

echo "	};" >> ${file}.dts
echo "};" >> ${file}.dts

rm -rf ${file}-pinmux.dts || true
rm -rf ${file}-gpio.dts || true

cat ${file}-a-bone-pins.h >> ${file}-bone-pins.h
cat ${file}-b-bone-pins.h >> ${file}-bone-pins.h

rm -rf ${file}-a-bone-pins.h || true
rm -rf ${file}-b-bone-pins.h || true
