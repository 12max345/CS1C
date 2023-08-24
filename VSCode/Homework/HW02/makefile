CC = g++
FLAGS = -std=c++17 -Wall -g
OBJS = CardDeck.o

all: hw2

hw2: hw2.cpp CardDeck.o
    $(CC) $(FLAGS) hw2.cpp -o hw2 $(OBJS)

CardDeck.o: CardDeck.cpp cardDeck.h
    $(CC) $(FLAGS) -c CardDeck.cpp -o CardDeck.o

clean:
    rm *.o hw2 hw2.tar hw02.scr

tar:
    tar cf hw2.tar hw02.scr Makefile hw2.cpp cardDeck.h CardDeck.cpp
