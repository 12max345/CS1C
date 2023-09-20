CC = g++
FLAGS = -std=c++17 -Wall -g
OBJS = 

all: Source

Source: Source.cpp
	$(CC) $(FLAGS) Source.cpp -o Source $(OBJS)

clean:
	rm *.o Source Source.tar Source.scr

tar:
	tar cf Source.tar Source.scr makefile Source.cpp
