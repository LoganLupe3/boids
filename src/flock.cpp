#include "flock.h"

Flock::Flock(){
    numBoids = 1;
    boids = new Boid[numBoids];
}

Flock::~Flock(){
    delete boids;
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
    }
}