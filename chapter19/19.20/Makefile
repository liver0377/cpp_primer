main: main.o
	g++ -o main main.o

main.o: main.cc ../headers/Query.h
	g++ -I ../headers -c main.cc 