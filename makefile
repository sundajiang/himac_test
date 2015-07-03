#CC = arm-linux-gcc
CC = gcc

objects = himac_test.o  mr_common.o

himac_test:$(objects)
	$(CC) -g -o himac_test $(objects)
himac_test.o:himac_test.c
	$(CC) -c -g himac_test.c -o himac_test.o
mr_common.o:mr_common.c
	$(CC) -c -g mr_common.c -o mr_common.o

clean:
	rm *.o himac_test
