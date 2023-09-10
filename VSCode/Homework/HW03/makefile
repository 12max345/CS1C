CC = g++
FLAGS = -std=c++17 -Wall -g
OBJS = Employee.o

all: Source

Source: Source.cpp Employee.o
	$(CC) $(FLAGS) Source.cpp -o Source $(OBJS)

Employee.o: Employee.cpp Employee.h
	$(CC) $(FLAGS) -c Employee.cpp -o Employee.o

clean:
	rm *.o Source Source.tar Source.scr

tar:
	tar cf Source.tar Source.scr makefile Source.cpp Employee.h Employee.cpp
