# Overlays for the BeagleBone platform

dtbo-$(CONFIG_ARCH_OMAP2PLUS) += \
	AM335X-PRU-UIO-00A0.dtbo	\
	BBORG_FAN-A000.dtbo

targets += dtbs dtbs_install
targets += $(dtbo-y)

always-y	:= $(dtbo-y)
clean-files	:= *.dtbo
