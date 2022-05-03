 
# makefile configuration
COMMON_OBJECTS		= switches.o p2_interrupt_handler.o
CPU             	= msp430g2553
CFLAGS          	= -mmcu=${CPU} -Os -I../h
LDFLAGS		= -L../lib -L/opt/ti/msp430_gcc/include/ 

#switch the compiler (for the internal make rules)
CC              = msp430-elf-gcc
AS              = msp430-elf-gcc -mmcu=${CPU} -c

all:songs.elf

#additional rules for files
songs.elf: ${COMMON_OBJECTS} songs.o 
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^ -lTimer -lLcd 

load: songs.elf
	msp430loader.sh $^

clean:
	rm -f *.o *.elf
