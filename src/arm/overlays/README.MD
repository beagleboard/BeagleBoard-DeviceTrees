This is a shared repo with our Linux Kernel...

WIP:

For any overlay already present on https://github.com/beagleboard/bb.org-overlays/tree/master/src/arm you need to first commit with the original content with the file renamed: "ABC.dts" -> "ABC-overlay.dts"

Then add the overlay name to the Makefile in this directory:

dtbo-$(CONFIG_SOC_AM33XX) += \
	BB-SPIDEV0-00A0.dtbo \
	BB-SPIDEV1-00A0.dtbo

ToDo:

While building, filter out overlay directory, then rip out the -overlay text and use 'dtbo' extension
