CC = g++
FLAGS = -std=c++17 -Wall -g
OBJS = 

all: hw06

hw06: hw06.cpp
	$(CC) $(FLAGS) hw06.cpp -o hw06 $(OBJS)

clean:
	rm *.o hw06 hw06.tar hw06.scr

tar:
	tar cf hw06.tar hw06.scr makefile hw06.cpp
