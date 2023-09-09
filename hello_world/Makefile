obj-m := hello_world.o	#states that there is one module to be built from the object file hello_world.o

KERNEL_DIR = /lib/modules/$(shell uname -r)/build

all:
	make -C $(KERNEL_DIR) M=$(PWD) modules	#M= option causes that makefile to move back into your module source directory before trying to build the modules target
clean:
	make -C $(KERNEL_DIR) M=$(PWD) clean
