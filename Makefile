CC = g++
cflags = -Wall -Werror -Wextra -std=c++20

.PHONY: all lab1 lab2 lab3 lab4 lab5 lab5-2

all: lab1 lab2 lab3 lab4 lab5 lab5-2

lab1: lab1/lab1-1.cpp lab1/lab1-2.cpp
	$(CC) $(cflags) lab1/lab1-1.cpp -o lab1-1.out
	$(CC) $(cflags) lab1/lab1-2.cpp -o lab1-2.out

lab2: lab2/lab2-1.cpp lab2/lab2-2.cpp lab2/lab2-3.cpp lab2/lab2-4.cpp
	$(CC) $(cflags) lab2/lab2-1.cpp -o lab2-1.out
	$(CC) $(cflags) lab2/lab2-2.cpp -o lab2-2.out
	$(CC) $(cflags) lab2/lab2-3.cpp -o lab2-3.out
	$(CC) $(cflags) lab2/lab2-4.cpp -o lab2-4.out

lab3: lab3/lab3-1.cpp lab3/lab3-2.cpp
	$(CC) $(cflags) lab3/lab3-1.cpp -o lab3-1.out
	$(CC) $(cflags) lab3/lab3-2.cpp -o lab3-2.out

lab4: lab4/lab4-1.cpp lab4/lab4-2.cpp lab4/lab4-4.cpp lab4/gun.cpp
	$(CC) $(cflags) -DLAB4_1 lab4/lab4-1.cpp lab4/gun.cpp -o lab4-1.out
	$(CC) $(cflags) lab4/lab4-2.cpp lab4/gun.cpp -o lab4-2.out
	$(CC) $(cflags) lab4/lab4-4.cpp -o lab4-4.out

lab5: lab5/gun.cpp lab5/lab5.h lab5/lab5-1.cpp lab5/lab5-2.cpp lab5/magicional_gun.cpp
	$(CC) $(cflags) lab5/gun.cpp lab5/lab5.h lab5/lab5-1.cpp lab5/magicional_gun.cpp -o lab5-1.out
	$(CC) $(cflags) lab5/gun.cpp lab5/lab5.h lab5/lab5-2.cpp lab5/magicional_gun.cpp -o lab5-2.out

lab5-2: lab5-2/gun.cpp lab5-2/lab5.h lab5-2/lab5-2.cpp lab5-2/magicional_gun.cpp lab5-2/one_time_gun.cpp
	$(CC) $(cflags) lab5-2/gun.cpp lab5-2/lab5.h lab5-2/lab5-2.cpp lab5-2/magicional_gun.cpp lab5-2/one_time_gun.cpp -o lab5-3.out

clean:
	rm -f *.out