#include <stdlib.h>
#include <vector>
#include "flock.h"

Flock::Flock(){
    numBoids = 1;
}

void Flock::incNumBoids(){
    numBoids++;
}

void Flock::decNumBoids(){
    numBoids--;
}

void Flock::addBoid(){
    if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
        Boid boid;

        sf::Vector2i temp = sf::Mouse::getPosition();
        sf::Vector2f position = static_cast<sf::Vector2f>(temp);
        sf::Vector2f velocity = boid.getRandomVelocity();
        sf::Vector2f acceleration = boid.getRandomAcceleration();

        boid.setPosition(position);
        boid.setVelocity(velocity);
        boid.setAcceleration(acceleration);

        incNumBoids();

        Boid *newSize = new Boid[numBoids];

        for(int i = 0; i < numBoids - 1; i++){
            newSize[i] = boids[i];
        }
        boids = newSize;

        delete newSize;
    }
}

int Flock::getNumBoids(){ return numBoids; }

Boid Flock::getBoid(int i){
    return boids[i];
}