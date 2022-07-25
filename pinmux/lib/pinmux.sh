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
	###Offline: https://www.ti.com/tool/download/SYSCONFIG/1.13.0.2553

	if [ -d ./tmp/ ] ; then
		rm -rf ./tmp/ || true
	fi
	wget -c https://dr-download.ti.com/software-development/ide-configuration-compiler-or-debugger/MD-nsUM6f7Vvb/1.13.0.2553/sysconfig-1.13.0_2553-setup.run
	chmod +x sysconfig-1.13.0_2553-setup.run
	mkdir tmp
	./sysconfig-1.13.0_2553-setup.run --unattendedmodeui none --mode unattended --prefix ./tmp
	cp -v ./tmp/dist/deviceData/J721E_DRA829_TDA4VM_AM752x/J721E_DRA829_TDA4VM_AM752x.json ./
	rm -rf ./tmp/ || true
	rm -rf sysconfig-1.13.0_2553-setup.run || true
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

find_ball () {
	echo "##################"
	echo "${pcbpin}"
	#Use "ball" to get devicePinID & powerDomainID

	#cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin[446]'
	#{
	#  "devicePinID": "ID_2884",
	#  "ball": "AH21",
	#  "powerDomainID": "ID_2638"
	#}

	for number in {0..500}
	do
		#echo "debug-${ball}"
		compare=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .ball' | sed 's/\"//g' || true)
		#echo "debug-${compare}-${number}"
		#echo "debug-${ball}"
		if [ "x${compare}" = "x${ball}" ] ; then
			echo "debug-${ball}-${compare}-${number}"

			#echo "debug-${ball}-----------------------------------------"
			#cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number']'
			#echo "debug-${ball}-----------------------------------------"

			found_devicePinID=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .devicePinID' | sed 's/\"//g' || true)
			found_ball=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .ball' | sed 's/\"//g' || true)
			found_powerDomainID=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .powerDomainID' | sed 's/\"//g' || true)
			echo "devicePinID=${found_devicePinID},ball=${found_ball},powerDomainID=${found_powerDomainID}"
			break;
		fi
	done

	#Using devicePinID find name

	#cat J721E_DRA829_TDA4VM_AM752x.json | jq '.devicePins .ID_2884'
	#{
	#  "id": "ID_2884",
	#  "name": "PRG1_PRU0_GPO19",
	#  "description": "",
	#  "devicePinType": "Default"
	#}

	#echo "debug-${ball}-----------------------------------------"
	#cat J721E_DRA829_TDA4VM_AM752x.json | jq '.devicePins .'${found_devicePinID}''
	#echo "debug-${ball}-----------------------------------------"
	PinID=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.devicePins .'${found_devicePinID}' .name' | sed 's/\"//g' || true)
	echo "name=${PinID}"

	#Using devicePinID find controlRegisterOffset

	#cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .ID_2884'
	#{
	#  "id": "ID_2884",
	#  "devicePinID": "ID_2884",
	#  "controlRegisterOffset": "0x54",
	#  "pupdStateDuringHHV": "Z",
	#  "pupdStateAfterHHV": "",

	#echo "debug-${ball}-----------------------------------------"
	#cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID}''
	#echo "debug-${ball}-----------------------------------------"
	cro=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID}' .controlRegisterOffset' | sed 's/\"//g' || true)
	echo "controlRegisterOffset=${cro}"

	unset pupdStateDuringHHV
	pupdStateDuringHHV=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID}' .pupdStateDuringHHV' | sed 's/\"//g' || true)
	echo "pupdStateDuringHHV=${pupdStateDuringHHV}"

	unset pupdStateAfterHHV
	pupdStateAfterHHV=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID}' .pupdStateAfterHHV' | sed 's/\"//g' || true)
	echo "pupdStateAfterHHV=${pupdStateAfterHHV}"

	#  "pinModeInfo": [
	#    {
	#      "peripheralPinID": "ID_2885",
	#      "mode": "0",
	#      "interfaceName": "PRU_ICSSG1_PRU0",
	#      "signalName": "PRG1_PRU0_GPO19",
	#      "ioDir": ""
	#    },
	#    {
	#      "peripheralPinID": "ID_2886",
	#      "mode": "1",
	#      "interfaceName": "PRU_ICSSG1_PRU0",
	#      "signalName": "PRG1_PRU0_GPI19",
	#      "ioDir": ""
	#    },
	#    {
	#      "peripheralPinID": "ID_2887",
	#      "mode": "2",
	#      "interfaceName": "PRU_ICSSG1_IEP0",
	#      "signalName": "PRG1_IEP0_EDC_SYNC_OUT0",
	#      "ioDir": ""
	#    },
	#    {
	#      "peripheralPinID": "ID_2888",
	#      "mode": "3",
	#      "interfaceName": "PRU_ICSSG1_PWM0",
	#      "signalName": "PRG1_PWM0_TZ_OUT",
	#      "ioDir": ""
	#    },
	#    {
	#      "peripheralPinID": "ID_2889",
	#      "mode": "5",
	#      "interfaceName": "RMII5",
	#      "signalName": "RMII5_TXD0",
	#      "ioDir": ""
	#    },
	#    {
	#      "peripheralPinID": "ID_2845",
	#      "mode": "6",
	#      "interfaceName": "MCAN6",
	#      "signalName": "MCAN6_TX",
	#      "ioDir": ""
	#    },
	#    {
	#      "peripheralPinID": "ID_2890",
	#      "mode": "7",
	#      "interfaceName": "GPIO0",
	#      "signalName": "GPIO0_20",
	#      "ioDir": ""
	#    },
	#    {
	#      "peripheralPinID": "ID_2891",
	#      "mode": "10",
	#      "interfaceName": "VOUT0",
	#      "signalName": "VOUT0_EXTPCLKIN",
	#      "ioDir": ""
	#    },
	#    {
	#      "peripheralPinID": "ID_2892",
	#      "mode": "11",
	#      "interfaceName": "VPFE0",
	#      "signalName": "VPFE0_PCLK",
	#      "ioDir": ""
	#    },
	#    {
	#      "peripheralPinID": "ID_2893",
	#      "mode": "12",
	#      "interfaceName": "MCASP4",
	#      "signalName": "MCASP4_AFSX",
	#      "ioDir": ""
	#    }
	#  ]
	#}

	for number in {0..14}
	do
		cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID}' .pinModeInfo['$number'] .interfaceName'
		compare=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID}' .pinModeInfo['$number'] .interfaceName' | sed 's/\"//g' || true)
		get_name_mode
		echo ${pcbpin}:${ball}:${name}:${mode}:${ioDir}:${number}

#		if [ ! "x${name}" = "xnull" ] ; then
#			echo "/* ${pcbpin}:${ball}:${name}:${mode}:${ioDir} */" >> ${file}.dts
#		fi

		if [ "x${mode}" = "x${default_mode}" ] ; then
			echo default_mode=index=${number}
			default_index=${number}
		fi
	done

	number=${default_index}
	get_name_mode
	echo ${pcbpin}:${ball}:${name}:${mode}:${ioDir}:${number}

	echo "	/* ${pcbpin} (${ball}) ${PinID} (${name}) ${sch} */" >> ${file}.dts

	cp_info_default=${name}

	echo peripheral=${peripheral}
	case "${peripheral}" in
	gpio|pruin)
		pinsetting="PIN_INPUT"
		;;
	pwm|pwm2)
		pinsetting="PIN_OUTPUT_PULLDOWN"
		;;
	i2c)
		pinsetting="PIN_OUTPUT_PULLUP"
		;;
	uart|i2c|spi|spi_cs|spi_sclk)
		pinsetting="PIN_OUTPUT_PULLUP"
		;;
	eqep)
		pinsetting="PIN_OUTPUT_PULLDOWN"
		;;
	emmc|hdmi|audio)
		pinsetting="PIN_OUTPUT_PULLDOWN"
		;;
	*)
		if [ ! "x$peripheral" = "x" ] ; then
			exit 2
		fi
		case "${pupdStateAfterHHV}" in
		PU)
			pinsetting="PIN_OUTPUT_PULLUP"
			;;
		PD)
			pinsetting="PIN_OUTPUT_PULLDOWN"
			;;
		*)
			pinsetting="PIN_INPUT"
			;;
		esac
		;;
	esac

	echo "	BONE_PIN(${pcbpin}, default, ${pcbpin}(${pinsetting}, ${mode}))" >> ${file}.dts

	number=${gpio_index}
	get_name_mode

	echo "	BONE_PIN(${pcbpin}, gpio,    ${pcbpin}(PIN_INPUT, ${mode}))" >> ${file}.dts
	echo "	BONE_PIN(${pcbpin}, gpio_pu, ${pcbpin}(PIN_INPUT_PULLUP, ${mode}))" >> ${file}.dts
	echo "	BONE_PIN(${pcbpin}, gpio_pd, ${pcbpin}(PIN_INPUT_PULLDOWN, ${mode}))" >> ${file}.dts

	gpio_name=${name}
	gpio_pinmux=$(echo ${gpio_name} | sed 's/_/ /g')

	unset got_can_pin
	unset got_eqep_pin
	unset got_pwm_pin
	unset got_pwm2_pin
	unset got_i2c_pin
	unset got_pru_ecap_pin
	unset got_pru_uart_pin
	unset got_pruout_pin
	unset got_pruin_pin
	unset got_spi_pin
	unset got_spi_cs_pin
	unset got_spi_sclk_pin
	unset got_timer_pin

	for number in {0..14}
	do
		cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID}' .pinModeInfo['$number'] .interfaceName'
		compare=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID}' .pinModeInfo['$number'] .interfaceName' | sed 's/\"//g' || true)
		get_name_mode
		if [ ! "x${name}" = "xnull" ] ; then
			echo "debug: pinmux search ${name}"

			case "${name}" in 
			#dcan*_rx)
			#	can_name=${name}
			#	pinsetting="PIN_INPUT_PULLUP"
			#	got_can_pin="enable"
			#	;;
			#dcan*_tx)
			#	can_name=${name}
			#	pinsetting="PIN_OUTPUT_PULLUP"
			#	got_can_pin="enable"
			#	;;
			#eqep*)
			#	eqep_name=${name}
			#	pinsetting="PIN_OUTPUT_PULLUP | INPUT_EN"
			#	got_eqep_pin="enable"
			#	;;
			#ehrpwm*|ecap0_in_pwm0_out)
			#	pwm_name=${name}
			#	pinsetting="PIN_OUTPUT_PULLDOWN | INPUT_EN"
			#	got_pwm_pin="enable"
			#	;;
			#ecap2_in_pwm2_out)
			#	#ignore PocketBeagle...
			#	if [ ! "x${file}" = "xPocketBeagle" ] ; then
			#	if [ ! "x${file}" = "xBeagleBone_Blue" ] ; then
			#		pwm2_name=${name}
			#		pinsetting="PIN_OUTPUT_PULLDOWN | INPUT_EN"
			#		got_pwm2_pin="enable"
			#	fi
			#	fi
			#	;;
			#i2c*_sda|i2c*_scl)
			#	i2c_name=${name}
			#	pinsetting="PIN_OUTPUT_PULLUP | INPUT_EN"
			#	got_i2c_pin="enable"
			#	;;
			#pr1_ecap0*)
			#	pinsetting="PIN_OUTPUT_PULLDOWN | INPUT_EN"
			#	got_pru_ecap_pin="enable"
			#	;;
			#pr1_uart0*)
			#	pinsetting="PIN_OUTPUT_PULLUP | INPUT_EN"
			#	got_pru_uart_pin="enable"
			#	;;
			#pr1_pru*_pru_r30*)
			#	pruout_name=$(echo ${name} | sed 's/pr1_//g' | sed 's/pru_r30_/out/g')
			#	name=${pruout_name}
			#	pinsetting="PIN_OUTPUT_PULLDOWN | INPUT_EN"
			#	got_pruout_pin="enable"
			#	;;
			#pr1_pru*_pru_r31*)
			#	pruin_name=$(echo ${name} | sed 's/pr1_//g' | sed 's/pru_r31_/in/g')
			#	name=${pruin_name}
			#	pinsetting="PIN_INPUT"
			#	got_pruin_pin="enable"
			#	;;
			#spi0_d0|spi1_d0)
			#	spi_name=${name}
			#	pinsetting="PIN_INPUT_PULLUP"
			#	got_spi_pin="enable"
			#	;;
			#spi0_d1|spi1_d1)
			#	spi_name=${name}
			#	pinsetting="PIN_OUTPUT_PULLUP | INPUT_EN"
			#	got_spi_pin="enable"
			#	;;
			#spi0_cs*|spi1_cs*)
			#	spi_cs_name=${name}
			#	pinsetting="PIN_OUTPUT_PULLUP | INPUT_EN"
			#	got_spi_cs_pin="enable"
			#	;;
			#spi*_sclk)
			#	# See: https://www.ti.com/lit/ug/spruh73p/spruh73p.pdf page 4855
			#	# (1) This output signal is also used as a re-timing input. The associated CONF_<module>_<pin>_RXACTIVE bit for the output clock
			#	# must be set to 1 to enable the clock input back to the module.
			#	spi_sclk_name=${name}
			#	pinsetting="PIN_INPUT_PULLUP"
			#	got_spi_sclk_pin="enable"
			#	;;
			#timer*)
			#	if [ "x${disable_timer}" = "x" ] ; then
			#		timer_name=${name}
			#		pinsetting="PIN_OUTPUT_PULLUP | INPUT_EN"
			#		got_timer_pin="enable"
			#	fi
			#	;;
			uart*_rxd)
				echo "	BONE_PIN(${pcbpin}, uart,    ${pcbpin}(PIN_INPUT, ${mode}))	/* ${name} */" >> ${file}.dts
				;;
			uart*_txd)
				echo "	BONE_PIN(${pcbpin}, uart,    ${pcbpin}(PIN_OUTPUT, ${mode}))	/* ${name} */" >> ${file}.dts
				;;
			esac
		fi
	done

	echo "" >> ${file}.dts
}

find_ball_digital () {
	find_ball
	echo "#define gpio_${pcbpin} &main_${gpio_pinmux}	/* ${found_ball}: ${PinID} ${sch} */" >> ${file}-a-bone-pins.h
	echo "#define ${pcbpin}(mode, mux) J721E_IOPAD(${cro}, mode, mux)	/* ${found_ball}: ${PinID} ${sch} */" >> ${file}-b-bone-pins.h
	echo "##################"
}

find_ball_analog () {
	find_ball
	echo "#define gpio_${pcbpin} &main_${gpio_pinmux}	/* ${found_ball}: ${PinID} ${sch} */" >> ${file}-a-bone-pins.h
	echo "#define ${pcbpin}(mode, mux) J721E_WKUP_IOPAD(${cro}, mode, mux)	/* ${found_ball}: ${PinID} ${sch} */" >> ${file}-b-bone-pins.h
	echo "##################"
}

find_pin () {
	echo "##################"
	echo "${label}"

	for number in {0..500}
	do
		compare=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .ball' | sed 's/\"//g' || true)
		if [ "x${compare}" = "x${ball}" ] ; then
			echo "debug-${ball}-${compare}-${number}"

			found_devicePinID_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .devicePinID' | sed 's/\"//g' || true)
			found_ball_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .ball' | sed 's/\"//g' || true)
			found_powerDomainID_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .powerDomainID' | sed 's/\"//g' || true)
			echo "devicePinID_a=${found_devicePinID_a},ball_a=${found_ball_a},powerDomainID_a=${found_powerDomainID_a}"
			break;
		fi
	done

	PinID_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.devicePins .'${found_devicePinID_a}' .name' | sed 's/\"//g' || true)
	echo "name_a=${PinID_a}"

	cro_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .controlRegisterOffset' | sed 's/\"//g' || true)
	echo "controlRegisterOffset_a=${cro_a}"

	unset pupdStateDuringHHV_a
	pupdStateDuringHHV_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .pupdStateDuringHHV' | sed 's/\"//g' || true)
	echo "pupdStateDuringHHV_a=${pupdStateDuringHHV_a}"

	unset pupdStateAfterHHV_a
	pupdStateAfterHHV_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .pupdStateAfterHHV' | sed 's/\"//g' || true)
	echo "pupdStateAfterHHV_a=${pupdStateAfterHHV_a}"

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
	for number_a in {0..14}
	do
		interface_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .pinModeInfo['$number_a'] .interfaceName' | sed 's/\"//g' || true)
		compare=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .pinModeInfo['$number_a'] .interfaceName' | sed 's/\"//g' || true)
		get_name_mode_a
		echo ${label}:${interface_a}:${ball_a}:${name_a}:${mode_a}:${ioDir_a}:

		if [ "x${default}" = "x${interface_a}" ] ; then
			default_name_a=${name_a}
			default_mode_a=${mode_a}
		fi

		case "${interface_a}" in
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

	for number in {0..500}
	do
		compare=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .ball' | sed 's/\"//g' || true)
		if [ "x${compare}" = "x${ball_a}" ] ; then
			echo "debug-${ball_a}-${compare}-${number}"

			found_devicePinID_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .devicePinID' | sed 's/\"//g' || true)
			found_ball_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .ball' | sed 's/\"//g' || true)
			found_powerDomainID_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .powerDomainID' | sed 's/\"//g' || true)
			echo "devicePinID_a=${found_devicePinID_a},ball_a=${found_ball_a},powerDomainID_a=${found_powerDomainID_a}"
			break;
		fi
	done

	for number in {0..500}
	do
		compare=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .ball' | sed 's/\"//g' || true)
		if [ "x${compare}" = "x${ball_b}" ] ; then
			echo "debug-${ball_b}-${compare}-${number}"

			found_devicePinID_b=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .devicePinID' | sed 's/\"//g' || true)
			found_ball_b=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .ball' | sed 's/\"//g' || true)
			found_powerDomainID_b=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.packages .ID_0 .packagePin['$number'] .powerDomainID' | sed 's/\"//g' || true)
			echo "devicePinID_b=${found_devicePinID_b},ball_b=${found_ball_b},powerDomainID_b=${found_powerDomainID_b}"
			break;
		fi
	done

	PinID_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.devicePins .'${found_devicePinID_a}' .name' | sed 's/\"//g' || true)
	echo "name_a=${PinID_a}"

	PinID_b=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.devicePins .'${found_devicePinID_b}' .name' | sed 's/\"//g' || true)
	echo "name_b=${PinID_b}"

	cro_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .controlRegisterOffset' | sed 's/\"//g' || true)
	echo "controlRegisterOffset_a=${cro_a}"

	cro_b=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_b}' .controlRegisterOffset' | sed 's/\"//g' || true)
	echo "controlRegisterOffset_b=${cro_b}"

	unset pupdStateDuringHHV_a
	pupdStateDuringHHV_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .pupdStateDuringHHV' | sed 's/\"//g' || true)
	echo "pupdStateDuringHHV_a=${pupdStateDuringHHV_a}"

	unset pupdStateDuringHHV_b
	pupdStateDuringHHV_b=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_b}' .pupdStateDuringHHV' | sed 's/\"//g' || true)
	echo "pupdStateDuringHHV_b=${pupdStateDuringHHV_b}"

	unset pupdStateAfterHHV_a
	pupdStateAfterHHV_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .pupdStateAfterHHV' | sed 's/\"//g' || true)
	echo "pupdStateAfterHHV_a=${pupdStateAfterHHV_a}"

	unset pupdStateAfterHHV_b
	pupdStateAfterHHV_b=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_b}' .pupdStateAfterHHV' | sed 's/\"//g' || true)
	echo "pupdStateAfterHHV_b=${pupdStateAfterHHV_b}"

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
	for number_a in {0..14}
	do
		interface_a=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .pinModeInfo['$number_a'] .interfaceName' | sed 's/\"//g' || true)
		compare=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_a}' .pinModeInfo['$number_a'] .interfaceName' | sed 's/\"//g' || true)
		get_name_mode_a
		echo ${label}:${interface_a}:${ball_a}:${name_a}:${mode_a}:${ioDir_a}:

		if [ "x${default}" = "x${interface_a}" ] ; then
			default_name_a=${name_a}
			default_mode_a=${mode_a}
		fi

		case "${interface_a}" in
		MCU_ADC0)
			MCU_ADC_a=yes
			break;
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
	for number_b in {0..14}
	do
		interface_b=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_b}' .pinModeInfo['$number_b'] .interfaceName' | sed 's/\"//g' || true)
		compare=$(cat J721E_DRA829_TDA4VM_AM752x.json | jq '.pinCommonInfos .'${found_devicePinID_b}' .pinModeInfo['$number_b'] .interfaceName' | sed 's/\"//g' || true)
		get_name_mode_b
		echo ${label}:${interface_b}:${ball_b}:${name_b}:${mode_b}:${ioDir_b}:

		if [ "x${default}" = "x${interface_b}" ] ; then
			default_name_b=${name_b}
			default_mode_b=${mode_b}
		fi

		case "${interface_b}" in
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
