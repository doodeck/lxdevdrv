# lxdevdrv

## Build on Amazon Linux 2023
```
Linux Device Drivers
sudo yum install git
sudo yum install make
sudo yum install kernel-devel
make -C /lib/modules/`uname -r`/build M=`pwd` modules
sudo insmod helloworld.ko
sudo rmmod helloworld
sudo yum install bpftrace

```
