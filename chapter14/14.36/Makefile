all: main

main: main.o
	g++ -o main main.o

main.o: ../headers/PrintString.h
	g++ -I ../headers/ -c main.cc