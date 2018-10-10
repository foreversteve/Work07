all:LinkedList.o Driver.o
	gcc LinkedList.o Driver.o
LinkedList.o: 
	gcc -c LinkedList.c LinkedList.h
Driver.o:
	gcc -c Driver.c LinkedList.c LinkedList.h
run:
	./a.out