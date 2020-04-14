
CROSS_COMPILE = arm-linux-
AS		= $(CROSS_COMPILE)as
LD		= $(CROSS_COMPILE)ld
CC		= $(CROSS_COMPILE)gcc
CPP		= $(CC) -E
AR		= $(CROSS_COMPILE)ar
NM		= $(CROSS_COMPILE)nm

STRIP		= $(CROSS_COMPILE)strip
OBJCOPY		= $(CROSS_COMPILE)objcopy
OBJDUMP		= $(CROSS_COMPILE)objdump

export AS LD CC CPP AR NM
export STRIP OBJCOPY OBJDUMP

CFLAGS := -Wall -O2 -g
CFLAGS += -I $(shell pwd)/include

LDFLAGS := -nostdlib

export CFLAGS LDFLAGS

TOPDIR := $(shell pwd)
export TOPDIR

TARGET := data

## ==== Top dir files ====
obj-y += start.o
obj-y += init.o


## ==== Sub folder ====
obj-y += common/


all : start_recursive_build $(TARGET)
	@echo \"$(TARGET)\" has been built!

start_recursive_build:
	make -C ./ -f $(TOPDIR)/Makefile.build

$(TARGET) : built-in.o
	$(CC) -o $(TARGET) built-in.o $(LDFLAGS)
	
	$(LD) -Ttext 0 -Tdata 0xe80 $(TARGET) -o $(TARGET).elf
	$(OBJCOPY) -O binary -S $(TARGET).elf $(TARGET).bin
	$(OBJDUMP) -D $(TARGET).elf > $(TARGET).dis

clean:
	rm -f $(shell find -name "*.o")
	rm -f $(TARGET)
	rm -f $(TARGET).dis $(TARGET).elf $(TARGET).bin

distclean:
	rm -f $(shell find -name "*.o")
	rm -f $(shell find -name "*.d")
	rm -f $(TARGET) $(TARGET).elf $(TARGET).bin $(TARGET).dis
	
