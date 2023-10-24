CC = g++
FLAGS = -std=c++17 -Wall -g
OBJS = 

all: hw10

hw10: hw10.cpp
	$(CC) $(FLAGS) hw10.cpp -o hw10 $(OBJS)

clean:
	rm *.o hw10 hw10.tar hw10.scr

tar:
	tar cf hw10.tar hw10.scr makefile hw10.cpp
