CC = g++
CFLAGS = -Wall -g

main: main.o matrix.o
	${CC} ${CFLAGS} main.o matrix.o -o main

main.o: main.cpp matrix.h
	${CC} ${CFLAGS} -c main.cpp

matrix.o: matrix.cpp matrix.h
	${CC} ${CFLAGS} -c matrix.cpp

clean: 
	rm -f main *.o