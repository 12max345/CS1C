CC = g++
FLAGS = -std=c++17 -Wall -g
OBJS = Lottery.o

all: Source

Source: Source.cpp Lottery.o
	$(CC) $(FLAGS) Source.cpp -o Source $(OBJS)

Lottery.o: Lottery.cpp Lottery.h
	$(CC) $(FLAGS) -c Lottery.cpp -o Lottery.o

clean:
	rm *.o Source Source.tar Source.scr

tar:
	tar cf Source.tar Source.scr makefile Source.cpp Lottery.h Lottery.cpp
