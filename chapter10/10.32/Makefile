main: main.o
	g++ -Wall -I../headers/ -o main main.o

main.o: ../headers/Sales_item.h main.cc
	g++ -Wall -I../headers/ -c -o main.o main.cc

clean:
	rm ./*.o
	rm main