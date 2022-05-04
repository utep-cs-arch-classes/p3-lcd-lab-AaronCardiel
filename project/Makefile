# makefile configuration
COMMON_OBJECTS		= switches.o p2_interrupt_handler.o stateMachine.o shapes.o wdtInterruptHandler.o buzzer.o songPlayer.o songs.o
CPU             	= msp430g2553
CFLAGS          	= -mmcu=${CPU} -Os -I../h
LDFLAGS		= -L../lib -L/opt/ti/msp430_gcc/include/ 

#switch the compiler (for the internal make rules)
CC              = msp430-elf-gcc
AS              = msp430-elf-gcc -mmcu=${CPU} -c

all:songs.elf

#additional rules for files
songs_c.elf: ${COMMON_OBJECTS} executeState_c.o
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^ -lTimer -lLcd 
	
songs_s.elf: ${COMMON_OBJECTS} executeState_s.o
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^ -lTimer -lLcd 

load_s: songs_s.elf
	msp430loader.sh $^
	
load_c: songs_c.elf
	msp430loader.sh $^

clean:
	rm -f *.o *.elf
