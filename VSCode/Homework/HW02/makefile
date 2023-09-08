CC = g++
FLAGS = -std=c++17 -Wall -g
OBJS = Deck.o

all: Source

Source: Source.cpp Deck.o
	$(CC) $(FLAGS) Source.cpp -o Source $(OBJS)

Deck.o: Deck.cpp Deck.h
	$(CC) $(FLAGS) -c Deck.cpp -o Deck.o

clean:
	rm *.o Source Source.tar Source.scr

tar:
	tar cf Source.tar Source.scr makefile Source.cpp Deck.h Deck.cpp
