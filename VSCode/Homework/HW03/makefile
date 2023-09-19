CC = g++
FLAGS = -std=c++17 -Wall -g
OBJS = Date.o Employee.o Programmer.o SoftwareArchitect.o

all: Source

Source: Source.cpp Date.o Employee.o Programmer.o SoftwareArchitect.o
	$(CC) $(FLAGS) Source.cpp -o Source $(OBJS)

Date.o: Date.cpp Date.h
	$(CC) $(FLAGS) -c Date.cpp -o Date.o

Employee.o: Employee.cpp Employee.h
	$(CC) $(FLAGS) -c Employee.cpp -o Employee.o

Programmer.o: Programmer.cpp Programmer.h
	$(CC) $(FLAGS) -c Programmer.cpp -o Programmer.o

SoftwareArchitect.o: SoftwareArchitect.cpp SoftwareArchitect.h
	$(CC) $(FLAGS) -c SoftwareArchitect.cpp -o SoftwareArchitect.o

clean:
	rm *.o Source Source.tar Source.scr

tar:
	tar cf Source.tar Source.scr makefile Source.cpp Date.h Date.cpp Employee.h Employee.cpp
