CC = g++
FLAGS = -std=c++17 -Wall -g
OBJS = 

all: hw07

hw07: hw07.cpp
	$(CC) $(FLAGS) hw07.cpp -o hw07 $(OBJS)

clean:
	rm *.o hw07 hw07.tar hw07.scr

tar:
	tar cf hw07.tar hw07.scr makefile hw07.cpp
