
# Makefile for f2022, ecs36b
# https://macappstore.org/libjson-rpc-cpp/
# https://github.com/cinemast/libjson-rpc-cpp


CC = g++ -std=c++14
CFLAGS = -g


LDFLAGS = 	 -ljsoncpp 
INC_CL	=	common.h location.h person.h record.h test.h thing.h time2.h
OBJ	=	location.o person.o record.o test.o thing.o time2.o
# rules.
all: 	hw2

#
#

location.o: location.cpp
	$(CC) -c $(CFLAGS) location.cpp

person.o: person.cpp
	$(CC) -c $(CFLAGS) person.cpp

record.o: record.cpp
	$(CC) -c $(CFLAGS) record.cpp

test.o: test.cpp
	$(CC) -c $(CFLAGS) test.cpp

thing.o: thing.cpp
	$(CC) -c $(CFLAGS) thing.cpp

time2.o: time2.cpp
	$(CC) -c $(CFLAGS) time2.cpp

hw2: $(OBJ)
	$(CC) -o hw2 $(OBJ) $(LDFLAGS)

clean:
	rm -f *.o *~ hw2

