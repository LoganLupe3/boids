#include "boid.h"

class Flock{
    private:
        int numBoids;
        sf::Vector2f averageLocalVelocity;
        Boid *boids;

    public:
        Flock();
        ~Flock();

        void incNumBoids();
        void decNumBoids();

        void addBoid();
        void delBoid(int index);

        sf::Vector2f getAverageLocalVelocity();
};