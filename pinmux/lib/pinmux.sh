#!/bin/bash

#cat J721E_DRA829_TDA4VM_AM752x.json | jq '.devicePins'
#cat J721E_DRA829_TDA4VM_AM752x.json | jq '.useCases'
#cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin[202] .devicePinID'

echo_both () {
#	echo "$msg"
	echo "$msg" >> ${file}.dts
}

echo_label () {
	msg="	/* ${pcbpin}                ${label_info} */" ; echo_both ; msg="" ; echo_both
}

echo_label_analog () {
	msg="	/* ${pcbpin} (${ball})  ${label_info} */" ; echo_both ; msg="" ; echo_both
}

get_json_pkg () {
	###Offline: https://www.ti.com/tool/download/SYSCONFIG/1.14.0.2667
	#wfile="sysconfig-1.14.0_2667-setup.run"
	#dl_file="https://dr-download.ti.com/software-development/ide-configuration-compiler-or-debugger/MD-nsUM6f7Vvb/1.14.0.2667/sysconfig-1.14.0_2667-setup.run"

	###Offline: https://www.ti.com/tool/download/SYSCONFIG/1.15.0.2826
	wfile="sysconfig-1.15.0_2826-setup.run"
	dl_file="https://dr-download.ti.com/software-development/ide-configuration-compiler-or-debugger/MD-nsUM6f7Vvb/1.15.0.2826/sysconfig-1.15.0_2826-setup.run"

	if [ -d ./tmp/ ] ; then
		rm -rf ./tmp/ || true
	fi
	wget -c ${dl_file}
	chmod +x ${wfile}
	mkdir tmp
	./${wfile} --unattendedmodeui none --mode unattended --prefix ./tmp
	cp -v ./tmp/dist/deviceData/J721E_DRA829_TDA4VM_AM752x/J721E_DRA829_TDA4VM_AM752x.json ./
	rm -rf ./tmp/ || true
	rm -rf ${wfile} || true
}

get_name_mode () {
	#echo "debug-${ball} [cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID}' .pinModeInfo['$number'] .signalName']"
	#cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID}' .pinModeInfo['$number'] .signalName' | sed 's/\"//g' | sed 's/\[/_/g' | sed 's/\]//g' || true
	#echo "debug------------------------------------------"

	name=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID}' .pinModeInfo['$number'] .signalName' | sed 's/\"//g' | sed 's/\[/_/g' | sed 's/\]//g' | awk '{print tolower($0)}' || true)
	mode=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID}' .pinModeInfo['$number'] .mode' | sed 's/\"//g' | awk '{print tolower($0)}' || true)
	ioDir=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID}' .pinModeInfo['$number'] .ioDir' | sed 's/\"//g' || true)
	#echo "debug: get_name_mode; name=${name}; mode=${mode}; ioDir=${ioDir}"
}

get_name_mode_a () {
	name_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .pinModeInfo['$number_a'] .signalName' | sed 's/\"//g' | sed 's/\[/_/g' | sed 's/\]//g' | awk '{print tolower($0)}' || true)
	mode_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .pinModeInfo['$number_a'] .mode' | sed 's/\"//g' | awk '{print tolower($0)}' || true)
	ioDir_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .pinModeInfo['$number_a'] .ioDir' | sed 's/\"//g' || true)
}

get_name_mode_b () {
	name_b=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_b}' .pinModeInfo['$number_b'] .signalName' | sed 's/\"//g' | sed 's/\[/_/g' | sed 's/\]//g' | awk '{print tolower($0)}' || true)
	mode_b=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_b}' .pinModeInfo['$number_b'] .mode' | sed 's/\"//g' | awk '{print tolower($0)}' || true)
	ioDir_b=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_b}' .pinModeInfo['$number_b'] .ioDir' | sed 's/\"//g' || true)
}

find_pin () {
	echo "##################"
	echo "${label}"
	echo "##################" >> ${file}-pins.txt
	echo "${label}" >> ${file}-pins.txt

	for number in {0..500}
	do
		compare=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .ball' | sed 's/\"//g' || true)
		if [ "x${compare}" = "x${ball}" ] ; then
			echo "debug-${ball}-${compare}-${number}"
			echo "debug-${ball}-${compare}-${number}" >> ${file}-pins.txt

			found_devicePinID_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .devicePinID' | sed 's/\"//g' || true)
			found_ball_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .ball' | sed 's/\"//g' || true)
			found_powerDomainID_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .powerDomainID' | sed 's/\"//g' || true)
			echo "devicePinID_a=${found_devicePinID_a},ball_a=${found_ball_a},powerDomainID_a=${found_powerDomainID_a}"
			echo "devicePinID_a=${found_devicePinID_a},ball_a=${found_ball_a},powerDomainID_a=${found_powerDomainID_a}" >> ${file}-pins.txt
			break;
		fi
	done

	PinID_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.devicePins .'${found_devicePinID_a}' .name' | sed 's/\"//g' || true)
	echo "name_a=${PinID_a}" >> ${file}-pins.txt

	cro_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .controlRegisterOffset' | sed 's/\"//g' || true)
	echo "controlRegisterOffset_a=${cro_a}" >> ${file}-pins.txt

	unset pupdStateDuringHHV_a
	pupdStateDuringHHV_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .pupdStateDuringHHV' | sed 's/\"//g' || true)
	echo "pupdStateDuringHHV_a=${pupdStateDuringHHV_a}" >> ${file}-pins.txt

	unset pupdStateAfterHHV_a
	pupdStateAfterHHV_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .pupdStateAfterHHV' | sed 's/\"//g' || true)
	echo "pupdStateAfterHHV_a=${pupdStateAfterHHV_a}" >> ${file}-pins.txt

	unset MCU_ADC_a
	unset got_pruout_a
	unset got_pruin_a
	unset got_uart_a
	unset got_gpio_a
	unset got_mcan_a
	unset got_i2c_a
	unset got_ehrpwm_a
	unset got_eqep_a
	unset got_spi_a
	unset got_dmtimer_a
	for number_a in {0..14}
	do
		interface_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .pinModeInfo['$number_a'] .interfaceName' | sed 's/\"//g' || true)
		compare=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .pinModeInfo['$number_a'] .interfaceName' | sed 's/\"//g' || true)
		get_name_mode_a
		echo ${label}:${interface_a}:${ball_a}:${name_a}:${mode_a}:${ioDir_a}: >> ${file}-pins.txt

		if [ "x${default}" = "x${interface_a}" ] ; then
			default_name_a=${name_a}
			default_mode_a=${mode_a}
		fi

		case "${interface_a}" in
		DMTIMER*)
			dmtimer_name_a=${name_a}
			dmtimer_mode_a=${mode_a}
			got_dmtimer_a=yes
			;;
		EHRPWM*)
			case "${name_a}" in
			ehrpwm*_a|ehrpwm*_b)
				ehrpwm_mode_a=${mode_a}
				ehrpwm_name_a=${name_a}
				got_ehrpwm_a=yes
				;;
			esac
			;;
		EQEP*)
			eqep_name_a=${name_a}
			eqep_mode_a=${mode_a}
			got_eqep_a=yes
			;;
		GPIO*)
			gpio_name_a=${name_a}
			gpio_mode_a=${mode_a}
			got_gpio_a=yes
			;;
		I2C2|I2C4|I2C6)
			i2c_name_a=${name_a}
			i2c_mode_a=${mode_a}
			got_i2c_a=yes
			;;
		MCAN0|MCAN4|MCAN5)
			case "${name_a}" in
			mcan*_rx)
				mcan_mode_a=${mode_a}
				mcan_name_a=${name_a}
				mcan_pinmux_a="PIN_INPUT"
				got_mcan_a=yes
				;;
			mcan*_tx)
				mcan_mode_a=${mode_a}
				mcan_name_a=${name_a}
				mcan_pinmux_a="PIN_OUTPUT"
				got_mcan_a=yes
				;;
			esac
			;;
		PRU_ICSSG*_PRU*)
			case "${name_a}" in
			prg*_pru*_gpo*)
				pruout_mode_a=${mode_a}
				pruout_name_a=${name_a}
				got_pruout_a=yes
				;;
			prg*_pru*_gpi*)
				pruin_mode_a=${mode_a}
				pruin_name_a=${name_a}
				got_pruin_a=yes
				;;
			esac
			;;
		SPI6|SPI7)
			spi_name_a=${name_a}
			spi_mode_a=${mode_a}
			got_spi_a=yes
			;;
		USART0|USART2|USART5)
			case "${name_a}" in
			uart*_rxd)
				uart_mode_a=${mode_a}
				uart_name_a=${name_a}
				uart_pinmux_a="PIN_INPUT"
				got_uart_a=yes
				;;
			uart*_txd)
				uart_mode_a=${mode_a}
				uart_name_a=${name_a}
				uart_pinmux_a="PIN_OUTPUT"
				got_uart_a=yes
				;;
			esac
			;;
		esac
	done

	echo "	/* ${label} (${ball}) ${PinID_a} (${gpio_name_a}) ${sch} */" >> ${file}.dts
	echo "	BONE_PIN(${label}, default,   ${label}(PIN_INPUT, ${default_mode_a}))" >> ${file}.dts

	if [ "x${got_pruout_a}" = "xyes" ] ; then
		echo "	BONE_PIN(${label}, pruout,    ${label}(PIN_OUTPUT, ${pruout_mode_a}))	/* ${pruout_name_a} */" >> ${file}.dts
	fi

	if [ "x${got_pruin_a}" = "xyes" ] ; then
		echo "	BONE_PIN(${label}, pruin,     ${label}(PIN_INPUT, ${pruin_mode_a}))		/* ${pruin_name_a} */" >> ${file}.dts
	fi

	if [ "x${got_mcan_a}" = "xyes" ] ; then
		echo "	BONE_PIN(${label}, can,       ${label}(${mcan_pinmux_a}, ${mcan_mode_a}))	/* ${mcan_name_a} */" >> ${file}.dts
	fi

	if [ "x${got_gpio_a}" = "xyes" ] ; then
		echo "	BONE_PIN(${label}, gpio,      ${label}(PIN_INPUT, ${gpio_mode_a}))" >> ${file}.dts
		echo "	BONE_PIN(${label}, gpio_pu,   ${label}(PIN_INPUT_PULLUP, ${gpio_mode_a}))" >> ${file}.dts
		echo "	BONE_PIN(${label}, gpio_pd,   ${label}(PIN_INPUT_PULLDOWN, ${gpio_mode_a}))" >> ${file}.dts
	fi

	if [ "x${got_i2c_a}" = "xyes" ] ; then
		echo "	BONE_PIN(${label}, i2c,       ${label}(PIN_INPUT_PULLUP, ${i2c_mode_a}))	/* ${i2c_name_a} */" >> ${file}.dts
	fi

	if [ "x${got_ehrpwm_a}" = "xyes" ] ; then
		echo "	BONE_PIN(${label}, pwm,       ${label}(PIN_OUTPUT, ${ehrpwm_mode_a}))	/* ${ehrpwm_name_a} */" >> ${file}.dts
	fi

	if [ "x${got_dmtimer_a}" = "xyes" ] ; then
		echo "	BONE_PIN(${label}, timer,     ${label}(PIN_OUTPUT, ${dmtimer_mode_a}))	/* ${dmtimer_name_a} */" >> ${file}.dts
	fi

	if [ "x${got_eqep_a}" = "xyes" ] ; then
		echo "	BONE_PIN(${label}, qep,       ${label}(PIN_INPUT, ${eqep_mode_a}))	/* ${eqep_name_a} */" >> ${file}.dts
	fi

	if [ "x${got_spi_a}" = "xyes" ] ; then
		echo "	BONE_PIN(${label}, spi,       ${label}(PIN_OUTPUT, ${spi_mode_a}))	/* ${spi_name_a} */" >> ${file}.dts
	fi

	if [ "x${got_uart_a}" = "xyes" ] ; then
		echo "	BONE_PIN(${label}, uart,      ${label}(${uart_pinmux_a}, ${uart_mode_a}))	/* ${uart_name_a} */" >> ${file}.dts
	fi

	echo "" >>${file}.dts

	if [ "x${got_gpio_a}" = "xyes" ] ; then
		gpio_pinmux=$(echo ${gpio_name_a} | sed 's/_/ /g')
		echo "#define gpio_${label} &main_${gpio_pinmux}	/* ${ball}: ${PinID_a} ${sch} */" >> ${file}-a-bone-pins.h
		echo "#define ${label}(mode, mux) J721E_IOPAD(${cro_a}, mode, mux)	/* ${ball}: ${PinID_a} ${sch} */" >> ${file}-b-bone-pins.h
	fi
}

find_shared_pin () {
	echo "##################"
	echo "${label}"
	echo "##################" >> ${file}-pins.txt
	echo "${label}" >> ${file}-pins.txt

	for number in {0..500}
	do
		compare=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .ball' | sed 's/\"//g' || true)
		if [ "x${compare}" = "x${ball_a}" ] ; then
			echo "debug-${ball_a}-${compare}-${number}"
			echo "debug-${ball_a}-${compare}-${number}" >> ${file}-pins.txt

			found_devicePinID_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .devicePinID' | sed 's/\"//g' || true)
			found_ball_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .ball' | sed 's/\"//g' || true)
			found_powerDomainID_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .powerDomainID' | sed 's/\"//g' || true)
			echo "devicePinID_a=${found_devicePinID_a},ball_a=${found_ball_a},powerDomainID_a=${found_powerDomainID_a}"
			echo "devicePinID_a=${found_devicePinID_a},ball_a=${found_ball_a},powerDomainID_a=${found_powerDomainID_a}" >> ${file}-pins.txt
			break;
		fi
	done

	for number in {0..500}
	do
		compare=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .ball' | sed 's/\"//g' || true)
		if [ "x${compare}" = "x${ball_b}" ] ; then
			echo "debug-${ball_b}-${compare}-${number}" >> ${file}-pins.txt

			found_devicePinID_b=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .devicePinID' | sed 's/\"//g' || true)
			found_ball_b=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .ball' | sed 's/\"//g' || true)
			found_powerDomainID_b=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .powerDomainID' | sed 's/\"//g' || true)
			echo "devicePinID_b=${found_devicePinID_b},ball_b=${found_ball_b},powerDomainID_b=${found_powerDomainID_b}" >> ${file}-pins.txt
			break;
		fi
	done

	PinID_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.devicePins .'${found_devicePinID_a}' .name' | sed 's/\"//g' || true)
	echo "name_a=${PinID_a}" >> ${file}-pins.txt

	PinID_b=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.devicePins .'${found_devicePinID_b}' .name' | sed 's/\"//g' || true)
	echo "name_b=${PinID_b}" >> ${file}-pins.txt

	cro_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .controlRegisterOffset' | sed 's/\"//g' || true)
	echo "controlRegisterOffset_a=${cro_a}" >> ${file}-pins.txt

	cro_b=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_b}' .controlRegisterOffset' | sed 's/\"//g' || true)
	echo "controlRegisterOffset_b=${cro_b}" >> ${file}-pins.txt

	unset pupdStateDuringHHV_a
	pupdStateDuringHHV_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .pupdStateDuringHHV' | sed 's/\"//g' || true)
	echo "pupdStateDuringHHV_a=${pupdStateDuringHHV_a}" >> ${file}-pins.txt

	unset pupdStateDuringHHV_b
	pupdStateDuringHHV_b=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_b}' .pupdStateDuringHHV' | sed 's/\"//g' || true)
	echo "pupdStateDuringHHV_b=${pupdStateDuringHHV_b}" >> ${file}-pins.txt

	unset pupdStateAfterHHV_a
	pupdStateAfterHHV_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .pupdStateAfterHHV' | sed 's/\"//g' || true)
	echo "pupdStateAfterHHV_a=${pupdStateAfterHHV_a}" >> ${file}-pins.txt

	unset pupdStateAfterHHV_b
	pupdStateAfterHHV_b=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_b}' .pupdStateAfterHHV' | sed 's/\"//g' || true)
	echo "pupdStateAfterHHV_b=${pupdStateAfterHHV_b}" >> ${file}-pins.txt

	unset MCU_ADC_a
	unset got_pruout_a
	unset got_pruin_a
	unset got_uart_a
	unset got_gpio_a
	unset got_mcan_a
	unset got_i2c_a
	unset got_ehrpwm_a
	unset got_eqep_a
	unset got_spi_a
	unset got_dmtimer_a
	for number_a in {0..14}
	do
		interface_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .pinModeInfo['$number_a'] .interfaceName' | sed 's/\"//g' || true)
		compare=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .pinModeInfo['$number_a'] .interfaceName' | sed 's/\"//g' || true)
		get_name_mode_a
		echo ${label}:${interface_a}:${ball_a}:${name_a}:${mode_a}:${ioDir_a}: >> ${file}-pins.txt

		if [ "x${default}" = "x${interface_a}" ] ; then
			default_name_a=${name_a}
			default_mode_a=${mode_a}
		fi

		case "${interface_a}" in
		MCU_ADC0)
			MCU_ADC_a=yes
			break;
			;;
		DMTIMER*)
			dmtimer_name_a=${name_a}
			dmtimer_mode_a=${mode_a}
			got_dmtimer_a=yes
			;;
		EHRPWM*)
			case "${name_a}" in
			ehrpwm*_a|ehrpwm*_b)
				ehrpwm_mode_a=${mode_a}
				ehrpwm_name_a=${name_a}
				got_ehrpwm_a=yes
				;;
			esac
			;;
		EQEP*)
			eqep_name_a=${name_a}
			eqep_mode_a=${mode_a}
			got_eqep_a=yes
			;;
		GPIO*)
			gpio_name_a=${name_a}
			gpio_mode_a=${mode_a}
			got_gpio_a=yes
			;;
		I2C2|I2C4|I2C6)
			i2c_name_a=${name_a}
			i2c_mode_a=${mode_a}
			got_i2c_a=yes
			;;
		MCAN0|MCAN4|MCAN5)
			case "${name_a}" in
			mcan*_rx)
				mcan_mode_a=${mode_a}
				mcan_name_a=${name_a}
				mcan_pinmux_a="PIN_INPUT"
				got_mcan_a=yes
				;;
			mcan*_tx)
				mcan_mode_a=${mode_a}
				mcan_name_a=${name_a}
				mcan_pinmux_a="PIN_OUTPUT"
				got_mcan_a=yes
				;;
			esac
			;;
		PRU_ICSSG*_PRU*)
			case "${name_a}" in
			prg*_pru*_gpo*)
				pruout_mode_a=${mode_a}
				pruout_name_a=${name_a}
				got_pruout_a=yes
				;;
			prg*_pru*_gpi*)
				pruin_mode_a=${mode_a}
				pruin_name_a=${name_a}
				got_pruin_a=yes
				;;
			esac
			;;
		SPI6|SPI7)
			spi_name_a=${name_a}
			spi_mode_a=${mode_a}
			got_spi_a=yes
			;;
		USART0|USART2|USART5)
			case "${name_a}" in
			uart*_rxd)
				uart_mode_a=${mode_a}
				uart_name_a=${name_a}
				uart_pinmux_a="PIN_INPUT"
				got_uart_a=yes
				;;
			uart*_txd)
				uart_mode_a=${mode_a}
				uart_name_a=${name_a}
				uart_pinmux_a="PIN_OUTPUT"
				got_uart_a=yes
				;;
			esac
			;;
		esac
	done

	unset MCU_ADC_b
	unset got_pruout_b
	unset got_pruin_b
	unset got_uart_b
	unset got_gpio_b
	unset got_mcan_b
	unset got_i2c_b
	unset got_ehrpwm_b
	unset got_eqep_b
	unset got_spi_b
	unset got_dmtimer_b
	for number_b in {0..14}
	do
		interface_b=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_b}' .pinModeInfo['$number_b'] .interfaceName' | sed 's/\"//g' || true)
		compare=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_b}' .pinModeInfo['$number_b'] .interfaceName' | sed 's/\"//g' || true)
		get_name_mode_b
		echo ${label}:${interface_b}:${ball_b}:${name_b}:${mode_b}:${ioDir_b}: >> ${file}-pins.txt

		if [ "x${default}" = "x${interface_b}" ] ; then
			default_name_b=${name_b}
			default_mode_b=${mode_b}
		fi

		case "${interface_b}" in
		DMTIMER*)
			dmtimer_name_b=${name_b}
			dmtimer_mode_b=${mode_b}
			got_dmtimer_b=yes
			;;
		EHRPWM*)
			case "${name_b}" in
			ehrpwm*_a|ehrpwm*_b)
				ehrpwm_mode_b=${mode_b}
				ehrpwm_name_b=${name_b}
				got_ehrpwm_b=yes
				;;
			esac
			;;
		EQEP*)
			eqep_name_b=${name_b}
			eqep_mode_b=${mode_b}
			got_eqep_b=yes
			;;
		GPIO*)
			gpio_name_b=${name_b}
			gpio_mode_b=${mode_b}
			got_gpio_b=yes
			;;
		I2C2|I2C4|I2C6)
			i2c_name_b=${name_b}
			i2c_mode_b=${mode_b}
			got_i2c_b=yes
			;;
		MCAN0|MCAN4|MCAN5)
			case "${name_b}" in
			mcan*_rx)
				mcan_mode_b=${mode_b}
				mcan_name_b=${name_b}
				mcan_pinmux_b="PIN_INPUT"
				got_mcan_b=yes
				;;
			mcan*_tx)
				mcan_mode_b=${mode_b}
				mcan_name_b=${name_b}
				mcan_pinmux_b="PIN_OUTPUT"
				got_mcan_b=yes
				;;
			esac
			;;
		PRU_ICSSG*_PRU*)
			case "${name_b}" in
			prg*_pru*_gpo*)
				pruout_mode_b=${mode_b}
				pruout_name_b=${name_b}
				got_pruout_b=yes
				;;
			prg*_pru*_gpi*)
				pruin_mode_b=${mode_b}
				pruin_name_b=${name_b}
				got_pruin_b=yes
				;;
			esac
			;;
		SPI6|SPI7)
			spi_name_b=${name_b}
			spi_mode_b=${mode_b}
			got_spi_b=yes
			;;
		USART0|USART2|USART5)
			case "${name_b}" in
			uart*_rxd)
				uart_mode_b=${mode_b}
				uart_name_b=${name_b}
				uart_pinmux_b="PIN_INPUT"
				got_uart_b=yes
				;;
			uart*_txd)
				uart_mode_b=${mode_b}
				uart_name_b=${name_b}
				uart_pinmux_b="PIN_OUTPUT"
				got_uart_b=yes
				;;
			esac
			;;
		esac
	done

	if [ "x${MCU_ADC_a}" = "xyes" ] ; then
		echo "	/* ${label} (${ball_a}/${ball_b}) ${PinID_a}/${PinID_b} (${gpio_name_b}) ${sch} */" >> ${file}.dts
		echo "	BONE_PIN(${label}, default,   ${label}B(PIN_INPUT, ${default_mode_b}))" >> ${file}.dts

		if [ "x${got_pruout_b}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, pruout,    ${label}B(PIN_OUTPUT, ${pruout_mode_b}))	/* ${pruout_name_b} */" >> ${file}.dts
		fi

		if [ "x${got_pruin_b}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, pruin,     ${label}B(PIN_INPUT, ${pruin_mode_b}))	/* ${pruin_name_b} */" >> ${file}.dts
		fi

		if [ "x${got_mcan_b}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, can,       ${label}B(${mcan_pinmux_b}, ${mcan_mode_b}))	/* ${mcan_name_b} */" >> ${file}.dts
		fi

		if [ "x${got_gpio_b}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, gpio,      ${label}B(PIN_INPUT, ${gpio_mode_b}))" >> ${file}.dts
			echo "	BONE_PIN(${label}, gpio_pu,   ${label}B(PIN_INPUT_PULLUP, ${gpio_mode_b}))" >> ${file}.dts
			echo "	BONE_PIN(${label}, gpio_pd,   ${label}B(PIN_INPUT_PULLDOWN, ${gpio_mode_b}))" >> ${file}.dts
		fi

		if [ "x${got_i2c_b}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, i2c,       ${label}B(PIN_INPUT_PULLUP, ${i2c_mode_b}))	/* ${i2c_name_b} */" >> ${file}.dts
		fi

		if [ "x${got_ehrpwm_b}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, pwm,       ${label}B(PIN_OUTPUT, ${ehrpwm_mode_b}))	/* ${ehrpwm_name_b} */" >> ${file}.dts
		fi

		if [ "x${got_dmtimer_b}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, timer,     ${label}(PIN_OUTPUT, ${dmtimer_mode_b}))	/* ${dmtimer_name_b} */" >> ${file}.dts
		fi

		if [ "x${got_eqep_b}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, qep,       ${label}B(PIN_INPUT, ${eqep_mode_b}))	/* ${eqep_name_b} */" >> ${file}.dts
		fi

		if [ "x${got_spi_b}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, spi,       ${label}B(PIN_OUTPUT, ${spi_mode_b}))	/* ${spi_name_b} */" >> ${file}.dts
		fi

		if [ "x${got_uart_b}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, uart,      ${label}B(${uart_pinmux_b}, ${uart_mode_b}))	/* ${uart_name_b} */" >> ${file}.dts
		fi

		echo "" >>${file}.dts

		if [ "x${got_gpio_b}" = "xyes" ] ; then
			gpio_pinmux=$(echo ${gpio_name_b} | sed 's/_/ /g')
			echo "#define gpio_${label}B &main_${gpio_pinmux}	/* ${ball_b}: ${PinID_b} ${sch} */" >> ${file}-a-bone-pins.h

			echo "#define ${label}A(mode, mux) J721E_WKUP_IOPAD(${cro_a}, mode, mux)	/* ${ball_a}: ${PinID_a} ${sch} */" >> ${file}-b-bone-pins.h
			echo "#define ${label}B(mode, mux) J721E_IOPAD(${cro_b}, mode, mux)	/* ${ball_b}: ${PinID_b} ${sch} */" >> ${file}-b-bone-pins.h
		fi
	else
		echo "	/* ${label} (${ball_a}/${ball_b}) ${PinID_a}/${PinID_b} (${gpio_name_a}/${gpio_name_b}) ${sch} */" >> ${file}.dts
		echo "	BONE_PIN(${label}, default,   ${label}A(PIN_INPUT, ${default_mode_a}) ${label}B(PIN_INPUT, ${default_mode_b}))" >> ${file}.dts

		if [ "x${got_pruout_a}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, pruout,    ${label}A(PIN_OUTPUT, ${pruout_mode_a}) ${label}B(PIN_INPUT, ${default_mode_b}))	/* ${pruout_name_a} */" >> ${file}.dts
		fi

		if [ "x${got_pruout_b}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, pruout,    ${label}A(PIN_INPUT, ${default_mode_a}) ${label}B(PIN_OUTPUT, ${pruout_mode_b}))	/* ${pruout_name_b} */" >> ${file}.dts
		fi

		if [ "x${got_pruin_a}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, pruin,     ${label}A(PIN_INPUT, ${pruin_mode_a}) ${label}B(PIN_INPUT, ${default_mode_b}))	/* ${pruin_name_a} */" >> ${file}.dts
		fi

		if [ "x${got_pruin_b}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, pruin,     ${label}A(PIN_INPUT, ${default_mode_a}) ${label}B(PIN_INPUT, ${pruin_mode_b}))	/* ${pruin_name_b} */" >> ${file}.dts
		fi

		if [ "x${got_mcan_a}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, can,       ${label}A(${mcan_pinmux_a}, ${mcan_mode_a}) ${label}B(PIN_INPUT, ${default_mode_b}))	/* ${mcan_name_a} */" >> ${file}.dts
		fi

		if [ "x${got_mcan_b}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, can,       ${label}A(PIN_INPUT, ${default_mode_a}) ${label}B(${mcan_pinmux_b}, ${mcan_mode_b}) )	/* ${mcan_name_b} */" >> ${file}.dts
		fi

		if [ "x${got_gpio_a}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, gpio,      ${label}A(PIN_INPUT, ${gpio_mode_a}) ${label}B(PIN_INPUT, ${default_mode_b}))	/* ${gpio_name_a} */" >> ${file}.dts
			echo "	BONE_PIN(${label}, gpio_pu,   ${label}A(PIN_INPUT_PULLUP, ${gpio_mode_a}) ${label}B(PIN_INPUT, ${default_mode_b}))" >> ${file}.dts
			echo "	BONE_PIN(${label}, gpio_pd,   ${label}A(PIN_INPUT_PULLDOWN, ${gpio_mode_a}) ${label}B(PIN_INPUT, ${default_mode_b}))" >> ${file}.dts
		else
			echo "	BONE_PIN(${label}, gpio,      ${label}A(PIN_INPUT, ${default_mode_a}) ${label}B(PIN_INPUT, ${gpio_mode_b}))	/* ${gpio_name_b} */" >> ${file}.dts
			echo "	BONE_PIN(${label}, gpio_pu,   ${label}A(PIN_INPUT, ${default_mode_a}) ${label}B(PIN_INPUT_PULLUP, ${gpio_mode_b}))" >> ${file}.dts
			echo "	BONE_PIN(${label}, gpio_pd,   ${label}A(PIN_INPUT, ${default_mode_a}) ${label}B(PIN_INPUT_PULLDOWN, ${gpio_mode_b}))" >> ${file}.dts
		fi

		if [ "x${got_i2c_a}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, i2c,       ${label}A(PIN_INPUT_PULLUP, ${i2c_mode_a}) ${label}B(PIN_INPUT, ${default_mode_b}))	/* ${i2c_name_a} */" >> ${file}.dts
		fi

		if [ "x${got_i2c_b}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, i2c,       ${label}A(PIN_INPUT, ${default_mode_a}) ${label}B(PIN_INPUT_PULLUP, ${i2c_mode_b}))	/* ${i2c_name_b} */" >> ${file}.dts
		fi

		if [ "x${got_ehrpwm_a}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, pwm,       ${label}A(PIN_OUTPUT, ${ehrpwm_mode_a}) ${label}B(PIN_INPUT, ${default_mode_b}))	/* ${ehrpwm_name_a} */" >> ${file}.dts
		fi

		if [ "x${got_ehrpwm_b}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, pwm,       ${label}A(PIN_INPUT, ${default_mode_a}) ${label}B(PIN_OUTPUT, ${ehrpwm_mode_b}))	/* ${ehrpwm_name_b} */" >> ${file}.dts
		fi

		if [ "x${got_dmtimer_a}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, timer,     ${label}A(PIN_OUTPUT, ${dmtimer_mode_a}) ${label}B(PIN_INPUT, ${default_mode_b}))	/* ${dmtimer_name_a} */" >> ${file}.dts
		fi

		if [ "x${got_dmtimer_b}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, timer,     ${label}A(PIN_INPUT, ${default_mode_a}) ${label}B(PIN_OUTPUT, ${dmtimer_mode_b}))	/* ${dmtimer_name_b} */" >> ${file}.dts
		fi

		if [ "x${got_eqep_a}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, qep,       ${label}A(PIN_INPUT, ${eqep_mode_a}) ${label}B(PIN_INPUT, ${default_mode_b}))	/* ${eqep_name_a} */" >> ${file}.dts
		fi

		if [ "x${got_eqep_b}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, qep,       ${label}A(PIN_INPUT, ${default_mode_a}) ${label}B(PIN_INPUT, ${eqep_mode_b}))	/* ${eqep_name_b} */" >> ${file}.dts
		fi

		if [ "x${got_spi_a}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, spi,       ${label}A(PIN_OUTPUT, ${spi_mode_a}) ${label}B(PIN_INPUT, ${default_mode_b}))	/* ${spi_name_a} */" >> ${file}.dts
		fi

		if [ "x${got_spi_b}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, spi,       ${label}A(PIN_INPUT, ${default_mode_a}) ${label}B(PIN_OUTPUT, ${spi_mode_b}))	/* ${spi_name_b} */" >> ${file}.dts
		fi

		if [ "x${got_uart_a}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, uart,      ${label}A(${uart_pinmux_a}, ${uart_mode_a}) ${label}B(PIN_INPUT, ${default_mode_b}))	/* ${uart_name_a} */" >> ${file}.dts
		fi

		if [ "x${got_uart_b}" = "xyes" ] ; then
			echo "	BONE_PIN(${label}, uart,      ${label}A(PIN_INPUT, ${default_mode_a}) ${label}B(${uart_pinmux_b}, ${uart_mode_b}))	/* ${uart_name_b} */" >> ${file}.dts
		fi

		echo "" >>${file}.dts

		if [ "x${got_gpio_a}" = "xyes" ] ; then
			echo "#define gpio_${label} gpio_${label}A" >> ${file}-a-bone-pins.h
			gpio_pinmux=$(echo ${gpio_name_a} | sed 's/_/ /g')
			echo "#define gpio_${label}A &main_${gpio_pinmux}	/* ${ball_a}: ${PinID_a} ${sch} */" >> ${file}-a-bone-pins.h
			gpio_pinmux=$(echo ${gpio_name_b} | sed 's/_/ /g')
			echo "#define gpio_${label}B &main_${gpio_pinmux}	/* ${ball_b}: ${PinID_b} ${sch} */" >> ${file}-a-bone-pins.h
		fi

		echo "#define ${label}A(mode, mux) J721E_IOPAD(${cro_a}, mode, mux)	/* ${ball_a}: ${PinID_a} ${sch} */" >> ${file}-b-bone-pins.h
		echo "#define ${label}B(mode, mux) J721E_IOPAD(${cro_b}, mode, mux)	/* ${ball_b}: ${PinID_b} ${sch} */" >> ${file}-b-bone-pins.h
	fi
}

if [ ! -f J721E_DRA829_TDA4VM_AM752x.json ] ; then
	get_json_pkg
fi
