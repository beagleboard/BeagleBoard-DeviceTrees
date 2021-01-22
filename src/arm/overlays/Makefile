# Overlays for the BeagleBone platform

dtbo-$(CONFIG_SOC_AM33XX) += \
	BBORG_FAN-A000.dtbo

targets += dtbs dtbs_install
targets += $(dtbo-y)

always		:= $(dtbo-y)
clean-files	:= *.dtbo
