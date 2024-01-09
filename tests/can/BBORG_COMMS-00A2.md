# Test Nodes

```
debian@192.168.2.39
debian@192.168.2.40
```

# Configuration

```
debian@40-am335x-bbb:~$ cat /boot/uEnv.txt 
uname_r=6.1.46-ti-r19
cmdline=coherent_pool=1M net.ifnames=0 rng_core.default_quality=100
enable_uboot_overlays=1
disable_uboot_overlay_video=1
uboot_overlay_pru=AM335X-PRU-UIO-00A0.dtbo
```

```
debian@40-am335x-bbb:~$ sudo beagle-version | grep UBOOT
UBOOT: Booted Device-Tree:[am335x-boneblack-uboot.dts]
UBOOT: Loaded Overlay:[AM335X-PRU-UIO-00A0.kernel]
UBOOT: Loaded Overlay:[BB-ADC-00A0.kernel]
UBOOT: Loaded Overlay:[BB-BONE-eMMC1-01-00A0.kernel]
UBOOT: Loaded Overlay:[BBORG_COMMS-00A2.kernel]
```

# Bring up can on both devices

```
sudo ip link set can0 type can bitrate 500000 ; sudo ifconfig can0 up
```

# Enable Receiver:
```
debian@39-am335x-bbb:~$ candump can0
```

# Transmit test data:

```
debian@40-am335x-bbb:~$ cansend can0 123#DEADBEEF
```

# Result:
```
debian@39-am335x-bbb:~$ candump can0
  can0  123   [4]  DE AD BE EF
```
