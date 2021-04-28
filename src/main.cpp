#include <iostream>
#include "boid.h"

int height = 600, width = 800;

int main(){
    Boid boid;

    sf::RenderWindow window(sf::VideoMode(width, height), "Boids");


    while(window.isOpen()){
        sf::Event e;

        while(window.pollEvent(e)){
            if(e.type == sf::Event::Closed)
                window.close();
        }

        window.clear();    
        window.draw(boid.show());
        window.display();
    }

    return 0;
}