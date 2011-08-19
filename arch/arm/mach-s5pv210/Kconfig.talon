# arch/arm/mach-s5pv210/Kconfig.talon
#
# Copyright 2011 existz
#	existz <robbeane@gmail.com>
#
# Licensed under GPLv2

menuconfig TALON
	bool "Talon Kernel Settings"
	default y

if TALON

config GALAXY_I897
       bool "select Captivate"
       depends on ARIES_EUR
       help
       Captivate specific settings

config S5P_BIGMEM
       bool "select Bigmem memory config"
       default n
       help 
         Enable 353MB memory config. Breaks 720p recording

config DISABLE_PRINTK
       bool "Disable Printk in Kernel"
       depends on EXPERIMENTAL
       help
         Disable printk completely in the kernel to reduce overhead

config GPU_OC
       bool "enable GPU Overclock"
       default n
       help 
         Enables GPU overclock for SGX540 (for future use)

choice
	prompt "Frequency Choices"
	default CPU_1200

config CPU_1440
       bool "1440mhz Overclock"

config CPU_1400
       bool "1400mhz Overclock"

config CPU_1300
       bool "1300mhz Overclock"

config CPU_1200
       bool "1200mhz Overclock"

config CPU_UV
       bool "1000mhz No-OC"

endchoice

endif
