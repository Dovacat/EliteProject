CC=gcc
CFLAGS=-Wall -g

all: mat_tracker.o main 

mat_tracker: mat_tracker.h mat_tracker.c
	$(CC) $(CFLAGS) -c mat_tracker.c 

main: main.c mat_tracker.o
	$(CC) $(CFLAGS) main.c mat_tracker.o -o ED_mat_tracker