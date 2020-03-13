CC = g++
Flags = -std=c++14 - Wall - g
OBJS = Shape.o Rectangle.o Circle.o

all: hw09ec

hw09ec: hw09ec.cpp Shape.o Rectangle.o Circle.o
	$(CC) $(FLAGS) hw09ec.cpp -o hw09ec $(OBJS)

Shape.o: Shape.cpp Shape.h
	$(CC) $(FLAGS) -c Shape.cpp -o Shape.o

Rectangle.o: Rectangle.cpp Rectangle.h
	$(CC) $(FLAGS) -c Rectangle.cpp -o Rectangle.o

Circle.o: Circle.cpp Circle.h
	$(CC) $(FLAGS) -c Circle.cpp -o Circle.o

clean:
	rm*.o hw09ec hw09ec.tar

tar:
	tar cf hw09ec.tar hw09ec.scr makefile hw09ec.cpp Shape.cpp Shape.h Rectangle.cpp Rectangle.h Circle.cpp Circle.h
