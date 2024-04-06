# Particle Simulator in C++ with Raylib Library

## Author: [Najib El Khadir](https://github.com/NajibXY)
## French Version [README-fr](https://github.com/NajibXY/Particle-Gaggle-using-CPP-and-Raylib/blob/master/README-fr.md)

## 1. Motivations

<img align="right" src="https://github.com/NajibXY/Particle-Gaggle-using-CPP-and-Raylib/blob/master/assets/particles.gif">

- In order to discover more about the possibilities Raylib's C++ library, I created this small particle simulator where the player can click with their mouse to attract the generated particles towards the pointer.
- The particles also have a velocity that is maintained even when the mouse click is released.

</br> </br></br> </br></br> </br> </br> </br>
## 2. Technologies Used

- C++14
- Raylib Library for video game development
- The template used for the Raylib project configuration comes from this repository: https://github.com/educ8s/Raylib-CPP-Starter-Template-for-VSCODE-V2

## 3. Implemented Rules

- The particles are the size of a pixel.
- They are initialized with a random position and initial velocity.
- When the user holds the left button of their mouse in the game window, a displacement vector is applied to the particles towards the mouse pointer.
- During movement, friction is applied to the particles.
- The velocity vector of the particles remains after releasing the click and fades with successive applications of friction.
  
## 4. Possible Improvements

- Collisions between particles (to be added to the friction currently applied by the simulation).
- Acceleration of nearby particles increased compared to those further away, for more "black hole-y" realism.
- Customization of the applied attraction.
- Other fun functions to apply to the particles: pulsation, repulsion, etc.
  
## 5. Running the Project

- If you simply want to have fun with the simulation, you can download the .exe file from the main repository: [main.exe](https://github.com/NajibXY/Particle-Gaggle-using-CPP-and-Raylib/blob/master/main.exe)

## Compiling, Forking, Improving the Project

### Prerequisites

- Installation of C++ (preferably version 14).
- Installation of Raylib for C++: https://www.raylib.com/

### Steps

- Download or fork the project.
- Open the project in VS Code via the main.code-workspace file.
- Press F5 to compile and run.
- From there, you can make any modifications you want to the forked project.
