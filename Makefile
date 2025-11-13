CC = g++
cflags = -Wall -Werror -Wextra -std=c++20

.PHONY: all lab1 lab2

all: lab1 lab2

lab1: lab1/lab1-1.cpp lab1/lab1-2.cpp
	$(CC) $(cflags) lab1/lab1-1.cpp -o lab1-1.out
	$(CC) $(cflags) lab1/lab1-2.cpp -o lab1-2.out

lab2: lab2/lab2-1.cpp lab2/lab2-2.cpp lab2/lab2-3.cpp lab2/lab2-4.cpp
	$(CC) $(cflags) lab2/lab2-1.cpp -o lab2-1.out
	$(CC) $(cflags) lab2/lab2-2.cpp -o lab2-2.out
	$(CC) $(cflags) lab2/lab2-3.cpp -o lab2-3.out
	$(CC) $(cflags) lab2/lab2-4.cpp -o lab2-4.out

clean:
	rm -f *.out