#include "boid.h"

Boid::Boid(const sf::Vector2f& init_Pos, const sf::Vector2f init_Vel){
    velocity = init_Vel;
    radius = 5;
    boid.setPosition(init_Pos);
    boid.setFillColor(sf::Color::White);
    boid.setOutlineThickness(0);
    boid.setOutlineColor(sf::Color::White);
    boid.setPointCount(50);
    boid.setRadius(radius);
    boid.setOrigin(radius, radius);
}

void Boid::AddForce(const sf::Vector2f& force){
    this->force = force;
    velocity += force;
}

void Boid::move(){
    boid.move(velocity);
}