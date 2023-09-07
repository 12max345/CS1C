CC = g++
FLAGS = -std=c++17 -Wall -g
OBJS = CardDeck.o

all: Source

Source: Source.cpp CardDeck.o
	$(CC) $(FLAGS) Source.cpp -o Source $(OBJS)

CardDeck.o: CardDeck.cpp CardDeck.h
	$(CC) $(FLAGS) -c CardDeck.cpp -o CardDeck.o

clean:
	rm *.o Source Source.tar Source.scr

tar:
	tar cf Source.tar Source.scr Makefile Source.cpp CardDeck.h CardDeck.cpp
