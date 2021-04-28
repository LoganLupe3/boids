#include "boid.h"

Boid::Boid(sf::Vector2f pos, sf::Vector2f vel, sf::Vector2f acc){
    setPosition(pos);
    velocity = vel;
    acceleration = acc;
    setRadius(5);
    setOrigin(getRadius(), getRadius());
    setPosition(sf::Vector2f(400, 300));
    setFillColor(sf::Color::White);
}

Boid::Boid(){
    setPosition(sf::Vector2f(0, 0));
    velocity = sf::Vector2f(0, 0);
    acceleration = sf::Vector2f(0, 0);
    setRadius(5);
    setOrigin(getRadius(), getRadius());
    setPosition(sf::Vector2f(400, 300));
    setFillColor(sf::Color::White);
}

void Boid::update(){
    if((getPosition().x <= (800-getRadius()) && getPosition().x >= 800-getRadius()) || (getPosition().x <= getRadius() && getPosition().x >= 0)){
        velocity.x *= -1;
    }
    setPosition(getPosition() + velocity);
    velocity += acceleration;
}