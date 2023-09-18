# SPDX-License-Identifier: GPL-2.0
#
# Makefile for the kernel block device drivers.
#
# 12 June 2000, Christoph Hellwig <hch@infradead.org>
# Rewritten to use lists instead of if-statements.
# 

all:
	make -C /lib/modules/`uname -r`/build M=`pwd` modules
# needed for trace events
ccflags-y				+= -I$(src)

obj-$(CONFIG_BLK_DEV_RAM)	+= brdx.o

clean:
	rm -rf *.o *.ko *.mod.c .an* .lab* .tmp_versions Module.symvers Module.markers modules.order .*.cmd *.mod
