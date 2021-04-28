#include <iostream>
#include "boid.h"
#include "flock.h"

int height = 600, width = 800;

int main(){
    Flock flock;

    sf::RenderWindow window(sf::VideoMode(width, height), "Boids");


    while(window.isOpen()){
        sf::Event e;

        while(window.pollEvent(e)){
            if(e.type == sf::Event::Closed)
                window.close();
        }

        window.clear(); 
        for(int i = 0; flock.getNumBoids(); i++){
            window.draw(flock.getBoid(i));
        }
        window.display();
    }

    return 0;
}