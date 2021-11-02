CC = gcc 
CFLAGS = 
LIB = 

all: main 

header:
	$(CC) $(CFLAGS) -c header.c

main:header
	$(CC) $(CFLAGS) header.o main.c -o main

run:
	./main