CC = g++
FLAGS = -std=c++17 -Wall -g
OBJS = ManageInventory.o

all: hw07

hw07: hw07.cpp ManageInventory.o
	$(CC) $(FLAGS) hw07.cpp -o hw07 $(OBJS)

ManageInventory.o: ManageInventory.cpp ManageInventory.hpp
	$(CC) $(FLAGS) -c ManageInventory.cpp -o ManageInventory.o

clean:
	rm *.o hw07 hw07.tar hw07.scr

tar:
	tar cf hw07.tar hw07.scr makefile hw07.cpp ManageInventory.hpp ManageInventory.cpp
