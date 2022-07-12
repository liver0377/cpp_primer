all: tmp

tmp: tmp.o
	g++ -I ./headers -o tmp tmp.o

tmp.o: 
	g++ -I ./headers -c tmp.cc   

clean:
	rm ./tmp*