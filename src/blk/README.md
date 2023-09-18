## Block device ramdisk

```
mkdir adir
sudo mknod ard b 99 1
make
sudo insmod brdx.ko
sudo mkfs -t ext2 ard
sudo mount ard adir
cd adir/
df -h .
sudo touch dup
ls -ltr
sudo umount adir/
sudo rmmod brdx 
rmdir adir
sudo rm -fR ard 
```
