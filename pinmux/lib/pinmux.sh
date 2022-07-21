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
	###Offline: https://www.ti.com/tool/download/SYSCONFIG/1.7.0_1746

	if [ -d ./tmp/ ] ; then
		rm -rf ./tmp/ || true
	fi
	wget -c https://dr-download.ti.com/software-development/ide-configuration-compiler-or-debugger/MD-nsUM6f7Vvb/1.7.0_1746/sysconfig-1.7.0_1746-setup.run
	chmod +x sysconfig-1.7.0_1746-setup.run
	mkdir tmp
	./sysconfig-1.7.0_1746-setup.run --unattendedmodeui none --mode unattended --prefix ./tmp
	cp -v ./tmp/dist/deviceData/J721E_DRA829_TDA4VM_AM752x/J721E_DRA829_TDA4VM_AM752x.json ./
	rm -rf ./tmp/ || true
	rm -rf sysconfig-1.7.0_1746-setup.run || true
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

if [ ! -f J721E_DRA829_TDA4VM_AM752x.json ] ; then
	get_json_pkg
fi
