trout.o: trout.h trout.c
	gcc -c trout.c
util.o: util.h util.c
		gcc -c util.c
main.o: main.c trout.h
		gcc -c main.c

trout: trout.o util.o main.o
	gcc *.o -Wall -o trout
