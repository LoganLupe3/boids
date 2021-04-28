app: main.o boid.o
	g++ main.o boid.o -o app -lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp
	g++ -c main.cpp

boid.o: boid.cpp boid.h
	g++ -c boid.cpp boid.h

clean:
	rm *.o app