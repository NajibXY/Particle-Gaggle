#pragma once
#include "raylib.h"
#include <stdlib.h>
#include <math.h>

class Particle
{
private:

    Color color;
    Vector2 position;
    Vector2 velocity;

public:
    Particle(int width, int height);
    Particle(Vector2 position, Vector2 velocity, Color color);
    
    float getDistance(Vector2 position);
    Vector2 getDistanceFromOtherPoint(Vector2 otherPosition);

    void moveParticle(int width, int height);
    void drawParticle();

    void attractParticle(Vector2 positionToAttract, float attractionRate);
    void friction(float frictionRate);
};