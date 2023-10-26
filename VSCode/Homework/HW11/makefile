CC = g++
FLAGS = -std=c++17 -Wall -g
OBJS = 

all: hw11

hw11: hw11.cpp
	$(CC) $(FLAGS) hw11.cpp -o hw11 $(OBJS)

clean:
	rm *.o hw11 hw11.tar hw11.scr

tar:
	tar cf hw11.tar hw11.scr makefile hw11.cpp
