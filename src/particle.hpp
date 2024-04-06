#pragma once
#include "raylib.h"
#include <stdlib.h>
#include <math.h>

class Particle
{
private:

    // Particle properties
    Color color;
    Vector2 position;
    Vector2 velocity;

public:
    // Constructors
    Particle(int width, int height);
    Particle(Vector2 position, Vector2 velocity, Color color);
    
    // Getters
    float getDistance(Vector2 position);
    // Returns a vector that points from the particle to the other position
    Vector2 getDistanceFromOtherPoint(Vector2 otherPosition);

    // Setters
    void moveParticle(int width, int height);

    // Draws the particle
    void drawParticle();

    // Attracts the particle to a position
    void attractParticle(Vector2 positionToAttract, float attractionRate);
    // Applies friction to the particle
    void friction(float frictionRate);
};