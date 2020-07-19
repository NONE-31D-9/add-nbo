all: add_nbo

add_nbo: add_nbo.o main.o
	g++ -o add_nbo add_nbo.o main.o

add_nbo.o: add_nbo.h add_nbo.cpp
	g++ -o add_nbo.o add_nbo.cpp
	
main.o: main.cpp sum.h
	g++ -c -o main.o main.cpp

clean:
	rm -f add_nbo *.0

