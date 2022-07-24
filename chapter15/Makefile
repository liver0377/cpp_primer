tmp: tmp.o
	g++ -o tmp tmp.o

tmp.o: ./headers/BulkQuote.h ./headers/DiscQuote.h ./headers/Quote.h
	g++ -I ./headers -c tmp.cc