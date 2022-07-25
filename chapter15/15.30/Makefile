main: main.o
	g++ -o main main.o

main.o: ../headers/BulkQuote.h  ../headers/Quote.h main.cc
	g++ -I ../headers -c main.cc