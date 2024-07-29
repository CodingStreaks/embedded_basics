TOOLCHAIN_PATH := ~/x-tools/avr8-gnu-toolchain-linux_x86_64
CC := $(TOOLCHAIN_PATH)/bin/avr-gcc
OBJ_COPY := $(TOOLCHAIN_PATH)/bin/avr-objcopy
LIBS :=
CFLAGS := -Wall -O3 -mmcu=atmega328p

PROGAMMER := avrdude
PROGAMMER_OPTIONS := -p ATmega328P -b 115200 -c arduino -P /dev/ttyUSB0 -D -U

SRC=$(wildcard src/$(PROJ)/*.c)

program: $(PROJ).hex
	$(PROGAMMER) $(PROGAMMER_OPTIONS) flash:w:$(PROJ).hex:i

all: $(PROJ).out
	$(OBJ_COPY) -O ihex $(PROJ).out $(PROJ).hex

$(PROJ).out: $(SRC)
	$(CC) -o $(PROJ).out $^ $(CFLAGS) $(LIBS)
	

