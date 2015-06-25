# change KERNELSRC to the location of your kernel build tree only if
# autodetection does not work, e.g.:
# KERNELSRC=/usr/src/linux
# or run make with KERNELSRC parameter, e.g.:
# make KERNELSRC=/usr/src/linux
#-------------------------------------------------------------------------------------------------#

KERNELSRC?=/lib/modules/`uname -r`/build

#check if we can find the file utsrelease.h ... if not it may be because there are no kernel-headers installed.
#-> Store output of "find" .. check if StringLength of the output is more than "" (nothing).
UTSREL := $(shell find $(KERNELSRC)/include/ -type f -name 'utsrelease.h')
ifeq ($(strip $(UTSREL)),)
 $(error File utsrelease.h not found. Do you have the matching Kernel-Headers installed?); #die if file not found
endif

KERNELVERSION=$(shell awk -F\" '/REL/ {print $$2}' $(UTSREL))
KERNELMAJOR=$(shell echo $(KERNELVERSION)|head -c3)
FULLVERSION=$(shell echo $(KERNELVERSION)|head -c6)

KBUILD_BASENAME=

obj-m += phc-intel.o

CC=gcc
#EXTRA_CFLAGS+=-c -Wall -Wstrict-prototypes -Wno-trigraphs -O2 -fomit-frame-pointer -fno-strict-aliasing -fno-common -pipe
EXTRA_CFLAGS+=-c -Wall -Wstrict-prototypes -Wno-trigraphs -O2 -fno-strict-aliasing -fno-common -pipe -DCONFIG_ENABLE_MUST_CHECK=y -DCONFIG_ENABLE_WARN_DEPRECATED=y
INCLUDE=-I$(KERNELSRC)/include

ifeq ($(KERNELVERSION),)
$(error \
Kernel version not found, maybe you need to install appropriate kernel-headers\
or run make with KERNELSRC parameter, e.g.: make KERNELSRC=/usr/src/linux)
endif

ifneq ($(KERNELMAJOR), 2.6)
$(error Only support for 2.6 series kernels)
endif 


TARGET := phc-intel.ko
SOURCE := phc-intel.c


all: prepare $(TARGET)
	@echo ""
	@echo "Modules should now be ready to install."
	@echo "If you do not want to test your new modules before installing,"
	@echo "you possibly want to run   make install   to install them now."
	@echo ""
	
help:
	@echo Possible targets:
	@echo -e all\\t- default - builds kernel module
	@echo -e prepare\\t- patches the clean source and copy it to the base directory
	@echo -e install\\t- copies module binary to /lib/modules/$(KERNELVERSION)/extra/
	@echo -e clean\\t- removes all binaries and temporary files

phc-intel.ko: $(SOURCE)
	$(MAKE) -C $(KERNELSRC) SUBDIRS=$(PWD) modules

phc-intel.o: $(SOURCE)
	$(CC) $(INCLUDE) $(CFLAGS) -DMODVERSIONS -DMODULE -D__KERNEL__ -o $(TARGET) $(SOURCE)

clean:
	rm -f *~ *.o *.s *.ko *.mod.c .*.cmd *.rej *.c *.c.orig Module.symvers Module.markers modules.order
	rm -rf .tmp_versions

install: $(TARGET)
	install -m 644 -o root -g root phc-intel.modprobe /etc/modprobe.d/phc-intel.conf
	mkdir -p ${DESTDIR}/lib/modules/$(KERNELVERSION)/extra
	install -m 644 -o root -g root $(TARGET) ${DESTDIR}/lib/modules/$(KERNELVERSION)/extra/
	depmod $(KERNELVERSION) -a

prepare:
	@./prepare.sh $(FULLVERSION)
