pile: main.o Pile.o
	g++ main.o Pile.o

main.o: main.cpp
	g++ -c main.cpp

Pile.o: Pile.cpp
	g++ -c Pile.cpp

clean:
	rm *.o