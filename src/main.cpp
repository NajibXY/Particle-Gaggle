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
    // Initialize the particles array
    SetRandomSeed(1);
    Particle *particles = (Particle*)malloc(PARTICLE_NUMBER * sizeof(Particle));

    // Initialize the particles with random positions and velocities
    for (long int i = 0; i < PARTICLE_NUMBER; i++)
    {
        particles[i] = Particle(WIDTH, HEIGHT);
    }
    

    InitWindow(WIDTH, HEIGHT, "Particle Gaggle");
    SetTargetFPS(INITIAL_FRAMERATE);

    // Game loop
    while (!WindowShouldClose())
    {   
        // Update the particles position
        Vector2 mousePosition = (Vector2){(float)GetMouseX(), (float)GetMouseY()};
        for (long int i = 0; i < PARTICLE_NUMBER; i++)
        {   
            // Attract the particles to the mouse
            if (IsMouseButtonDown(MOUSE_LEFT_BUTTON)) {
                particles[i].attractParticle(mousePosition, ATTRACTION_RATE);
            }
            // Apply friction to the particles to slow them down over time
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
            DrawFPS(WIDTH-100, 10);
        EndDrawing();
    }

    // Closing window
    CloseWindow();
    MemFree(particles);
    return 0;
}

