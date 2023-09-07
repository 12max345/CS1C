CC = g++
FLAGS = -std=c++17 -Wall -g
OBJS = RandomNumbers.o

all: Source

Source: Source.cpp RandomNumbers.o
	$(CC) $(FLAGS) Source.cpp -o Source $(OBJS)

RandomNumbers.o: RandomNumbers.cpp RandomNumbers.h
	$(CC) $(FLAGS) -c RandomNumbers.cpp -o RandomNumbers.o

clean:
	rm *.o Source Source.tar Source.scr

tar:
	tar cf Source.tar Source.scr Makefile Source.cpp RandomNumbers.h RandomNumbers.cpp
