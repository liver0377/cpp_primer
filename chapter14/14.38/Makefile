all: main

main: main.o
	g++ -o main main.o

main.o: ../headers/StrLength.h
	g++ -I ../headers/ -c main.cc