#include <SFML/Graphics.hpp>
#ifndef BOID_H
#define BOID_H

class Boid: public sf::CircleShape{
    private:
        sf::Vector2f position;
        sf::Vector2f velocity;
        sf::Vector2f acceleration;
    public:
        Boid(sf::Vector2f pos, sf::Vector2f vel, sf::Vector2f acc);
        Boid();

        sf::CircleShape show();
        void update();
};

#endif