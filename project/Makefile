# makfile configuration

CPU             	= msp430g2553

CFLAGS          	= -mmcu=${CPU} -Os -I../h

LDFLAGS		= -L../lib -L/opt/ti/msp430_gcc/include/



#switch the compiler (for the internal make rules)

CC              = msp430-elf-gcc

AS              = msp430-elf-gcc -mmcu=${CPU} -c

all:project3.elf



#additional rules for files

project3.elf: ${COMMON_OBJECTS} buzzer.o main.o wdt_handler.o

	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^ -lTimer -lLcd -lShape -lCircle -lp2sw



load: project3.elf

	msp430loader.sh project3.elf



clean:



	rm -f *.o *.elf
