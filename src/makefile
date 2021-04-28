app: main.o boid.o flock.o
	g++ main.o boid.o -o app -lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp
	g++ -c main.cpp

boid.o: boid.cpp boid.h
	g++ -c boid.cpp boid.h

flock.o: flock.cpp flock.h
	g++ -c flock.cpp flock.h

clean:
	rm *.o app