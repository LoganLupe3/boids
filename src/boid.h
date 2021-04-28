#include <SFML/Graphics.hpp>
#ifndef BOID_H
#define BOID_H

class Boid: public sf::CircleShape{
    private:
        sf::Vector2f velocity;
        sf::Vector2f acceleration;
    public:
        Boid(sf::Vector2f pos, sf::Vector2f vel, sf::Vector2f acc);
        Boid();
        
        void update();

        void setVelocity(sf::Vector2f vel);
        void setAcceleration(sf::Vector2f acc);

        sf::Vector2f getVelocity();
        sf::Vector2f getAcceleration();

        sf::Vector2f getRandomVelocity();
        sf::Vector2f getRandomAcceleration();
};

#endif