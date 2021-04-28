#include <SFML/Graphics.hpp>
#ifndef BOID_H
#define BOID_H

struct Boid{
    sf::CircleShape boid;
    float radius;

    sf::Vector2f velocity;
    sf::Vector2f force;

    Boid(const sf::Vector2f& init_Pos, const sf::Vector2f init_Vel);
    void AddForce(const sf::Vector2f& force);
    void move();
};

#endif