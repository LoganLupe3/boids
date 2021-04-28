#include "boid.h"

const int RADIUS = 10;

//Fully loaded Boid constructor
Boid::Boid(sf::Vector2f pos, sf::Vector2f vel, sf::Vector2f acc){
    setPosition(pos);
    velocity = vel;
    acceleration = acc;
    setRadius(RADIUS);
    setOrigin(getRadius(), getRadius());
    setPosition(sf::Vector2f(400, 300));
    setFillColor(sf::Color::White);
}

//Default Boid constructor
Boid::Boid(){
    setPosition(sf::Vector2f(0, 0));
    velocity = sf::Vector2f(0, 0);
    acceleration = sf::Vector2f(0, 0);
    setRadius(RADIUS);
    setOrigin(RADIUS, RADIUS);
    setPosition(sf::Vector2f(400, 300));
    setFillColor(sf::Color::White);
}

//Function to update boid position and velocity in order to create movement
void Boid::update(){
    if((getPosition().x <= (800-RADIUS) && getPosition().x >= 800-RADIUS) || (getPosition().x <= RADIUS && getPosition().x >= 0)){
        velocity.x *= -1;
    }
    setPosition(getPosition() + velocity);
    velocity += acceleration;
}

void Boid::setVelocity(sf::Vector2f vel){ velocity = vel; }
void Boid::setAcceleration(sf::Vector2f acc){ acceleration = acc; }

sf::Vector2f Boid::getVelocity(){ return velocity; }
sf::Vector2f Boid::getAcceleration(){ return acceleration; }


//Get a random velocity
sf::Vector2f Boid::getRandomVelocity(){
    srand(time(NULL));    

    return sf::Vector2f((rand() % 1), (rand() % 1));
}
//Get a random acceleration
sf::Vector2f Boid::getRandomAcceleration(){
    srand(time(NULL));    

    return sf::Vector2f((rand() % 1), (rand() % 1));
}