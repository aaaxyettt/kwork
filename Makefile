all: polindrom

polindrom: main.o test_polindrom.o
	g++ main.o test_polindrom.o -o polindrom

main.o: main.cpp
	g++ -c main.cpp

test_polindrom.o: test_polindrom.cpp
	g++ -c test_polindrom.cpp

clean: 
	rm -rf *.o polindrom
