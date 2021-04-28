#include <iostream>
#include "boid.h"

int height = 600, width = 800;

int main(){
    Boid boid(sf::Vector2f(0,0), sf::Vector2f(0.25,0), sf::Vector2f(0,0));

    sf::RenderWindow window(sf::VideoMode(width, height), "Boids");


    while(window.isOpen()){
        sf::Event e;

        while(window.pollEvent(e)){
            if(e.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        boid.update();    
        window.draw(boid);
        window.display();
    }

    return 0;
}