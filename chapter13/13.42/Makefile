all: main

main: main.o
	g++ -I ../headers -o main main.o	

main.o: ../headers/StrVec.h
	g++ -I ../headers -c main.cc 
	 