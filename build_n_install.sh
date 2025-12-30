#!/bin/bash
set -euo pipefail
run_install() {

 if [ "$EUID" -ne 0 ] ; then
  echo "DeviceTrees: Install ,password required for sudo..."
   sudo "$@"
  else
    "$@"
  fi
  }
  make clean
	if [ -f /sys/devices/soc0/family ] ; then
		make clean
		soc_family="$(cat /sys/devices/soc0/family )"
    else
	 soc_family=""
	fi
	if[ -f /boot/firmware/extlinux/extlinux.conf ]; then
		case "$soc_family" in
		AM62X|J721E|J722S)
			make -j4 all_arm64
			echo "DeviceTrees: Built"
			run_install make install_arm64
			echo "DeviceTrees: Installed"
			;;
			*)
			make -j4
			echo "DeviceTrees: Built"
			;;
		esac
	else
		case "${soc_family}" in
		AM33xx)
			make -j4 all_arm
			echo "DeviceTrees: Built"
			;;
		esac
	 else
	else
	 case "$soc_family" in
	 AM33xx)
	  make -j4 all_arm
	  echo "DeviceTrees: Built"
	  run_installed make install_arm
	  echo "DeviceTrees: Installed"
	  ;;
	  *)
		make -j4
		echo "DeviceTrees: Built"
	    ;;
	esac
fi
