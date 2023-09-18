# https://www.linkedin.com/learning/linux-device-drivers/build-and-load-a-loadable-module?autoSkip=true&resume=false
all:
	make -C /lib/modules/`uname -r`/build M=`pwd` modules
obj-m += helloworld.o
clean:
	rm -rf *.o *.ko *.mod.c .an* .lab* .tmp_versions Module.symvers Module.markers modules.order .*.cmd *.mod
