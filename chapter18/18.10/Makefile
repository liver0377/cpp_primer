all: 1 2

1: 1.o
	g++ -o 1 1.o

1.o: 1.cc ../headers/Sales_data.h
	g++ -I ../headers -c 1.cc 

2: 2.o
	g++ -o 2 2.o

2.o: 2.cc ../headers/Sales_data.h
	g++ -I ../headers -c 2.cc