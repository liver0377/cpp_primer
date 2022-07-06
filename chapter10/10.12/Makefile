all: main

main.o: main.cc ../headers/Sales_data.h
	g++ -c main.cc -I../headers

main: main.o
	g++ -o main main.o

clean:
	@-rm ./*.o
	@-rm main