CC = g++
FLAGS = -std=c++17 -Wall -g
OBJS = CardDeckClass.o

all: hw2

hw2: hw2.cpp CardDeckClass.o
    $(CC) $(FLAGS) hw2.cpp -o hw2 $(OBJS)

CardDeckClass.o: CardDeckClass.cpp cardDeckHeader.h
    $(CC) $(FLAGS) -c CardDeckClass.cpp -o CardDeckClass.o

clean:
    rm *.o hw2 hw2.tar hw02.scr

tar:
    tar cf hw2.tar hw02.scr Makefile hw2.cpp cardDeckHeader.h CardDeckClass.cpp
