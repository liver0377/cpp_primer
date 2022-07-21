all: main.o main

main: main.o
	g++ -o main main.o

main.o: ../headers/StrLength.h main.cc
	g++ -I ../headers/ -c main.cc