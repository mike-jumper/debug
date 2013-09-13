all: test

dump.o: dump.h dump.c
	gcc -c dump.c

test.o: dump.h test.c
	gcc -c test.c

test: dump.o test.o
	gcc dump.o test.o -o test


