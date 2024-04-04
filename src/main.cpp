#include <stdlib.h>
#include "raylib.h"

#include "particle.hpp"

// Simulation consts
const int WIDTH = 1000;
const int HEIGHT = 1000;
const int INITIAL_FRAMERATE = 60;
const int PARTICLE_NUMBER = 150000;
const float ATTRACTION_RATE = 100;
const float FRICTION_RATE = 0.99;

int main()
{
    SetRandomSeed(1);
    Particle *particles = (Particle*)malloc(PARTICLE_NUMBER * sizeof(Particle));

    for (long int i = 0; i < PARTICLE_NUMBER; i++)
    {
        particles[i] = Particle(WIDTH, HEIGHT);
    }
    

    InitWindow(WIDTH, HEIGHT, "Particle Gaggle");
    SetTargetFPS(INITIAL_FRAMERATE);

    // Game loop
    while (!WindowShouldClose())
    {   
        
        Vector2 mousePosition = (Vector2){(float)GetMouseX(), (float)GetMouseY()};
        for (long int i = 0; i < PARTICLE_NUMBER; i++)
        {   
            if (IsMouseButtonDown(MOUSE_LEFT_BUTTON)) {
                particles[i].attractParticle(mousePosition, ATTRACTION_RATE);
            }
            particles[i].friction(FRICTION_RATE);
            particles[i].moveParticle(WIDTH, HEIGHT);  
        }
        

        // Draw the particles
        BeginDrawing();
            ClearBackground(BLACK);
            for (int i = 0; i < PARTICLE_NUMBER; i++)
            {
                particles[i].drawParticle();
            }
            DrawFPS(10, 10);
        EndDrawing();
    }

    // Closing window
    CloseWindow();
    MemFree(particles);
    return 0;
}

