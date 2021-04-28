#include "boid.h"

Boid::Boid(sf::Vector2f pos, sf::Vector2f vel, sf::Vector2f acc){
    position = pos;
    velocity = vel;
    acceleration = acc;
}

Boid::Boid(){
    position = sf::Vector2f(0, 0);
    velocity = sf::Vector2f(0, 0);
    acceleration = sf::Vector2f(0, 0);
}

sf::CircleShape Boid::show(){
    sf::CircleShape boid;
    boid.setRadius(5);
    boid.setOrigin(boid.getRadius(), boid.getRadius());
    boid.setPosition(sf::Vector2f(400, 300));
    boid.setFillColor(sf::Color::White);

    return boid;
}

void Boid::update(){
    position += velocity;
    velocity += acceleration;
}