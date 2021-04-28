#include "boid.h"
#include <vector>
#ifndef FLOCK_H
#define FLOCK_H

class Flock{
    private:
        int numBoids;
        sf::Vector2f averageLocalVelocity;
        std::vector<Boid> boids;

    public:
        Flock();
        ~Flock();

        void incNumBoids();
        void decNumBoids();

        void addBoid();
        void delBoid(int index);

        int getNumBoids();

        Boid getBoid(int i);

        sf::Vector2f getAverageLocalVelocity();
};

#endif