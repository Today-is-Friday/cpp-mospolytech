CC = g++
cflags = -Wall -Werror -Wextra -std=c++20

.PHONY: all lab1

all: lab1

lab1:
	$(CC) $(cflags) lab1/lab1-1.cpp -o lab1-1.out

clean:
	rm -f *.out