# Overlays for the BeagleBone platform

dtbo-$(CONFIG_ARCH_OMAP2PLUS) += \
	BBORG_FAN-A000.dtbo	\
	BB-ADC-00A0.dtbo	\
	BB-BONE-eMMC1-01-00A0.dtbo	\
	BB-HDMI-TDA998x-00A0.dtbo	\
	BONE-ADC.dtbo

targets += dtbs dtbs_install
targets += $(dtbo-y)

always-y	:= $(dtbo-y)
clean-files	:= *.dtbo
