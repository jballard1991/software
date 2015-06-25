#!/usr/bin/env bash
#Parameter is a kernel Main version line like "2.6.34"
#We check if we have a subdirectory with that name.
#If so, we prepare the build (patching and copying files) if not we tell the user.
echo ""
echo "Makefile detected your kernel version as "$1

if [ -d inc/$1 ] 
	then
		echo ***"FOUND AVAILABLE PATCHSET. PREPARING.***"
		cp inc/$1/acpi-cpufreq.c phc-intel.c
		patch -p1 phc-intel.c inc/$1/linux-phc-0.3.2.patch
	else
		echo "***NO MATCHING PATCHSET FOUND FOR "$1"***"
fi

echo ""

