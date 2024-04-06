# Simulateur de particules en C++ avec la bibliothèque Raylib

## Auteur : [Najib El khadir](https://github.com/NajibXY)

## 1. Motivations

<img align="right" src="https://github.com/NajibXY/Particle-Gaggle-using-CPP-and-Raylib/blob/master/assets/particles.gif">

- Dans l'optique d'en découvrir encore plus sur les possibilités de la bibliothèque Raylib, j'ai réalisé ce petit simulateur de particules où le joueur peut cliquer avec le pointeur de sa souris afin d'attirer les particules générés vers le pointeur.
- Les particules ont également une vélocité qu'elles conservent même quand le clic de la souris est relâché.

</br> </br></br> </br></br> </br>
## 2. Technologies utilisées

- C++14
- Librairie Raylib pour le développement de jeu vidéo
- Le template utilisé pour la configuration du projet Raylib provient de ce dépôt : https://github.com/educ8s/Raylib-CPP-Starter-Template-for-VSCODE-V2

## 3. Règles implémentées

- Les particules font la taille d'un pixel
- Elles sont initialisées avec une position et une vélocité initiale aléatoire.
- Quand l'utilisateur clique sur le bouton gauche de sa souris dans la fenêtre de jeu, les particules, un vecteur de déplacement s'applique sur les particules vers le pointeur de la souris.
- Lors des déplacement, une friction s'applique sur les particules.
- Le vecteur vitesse des particules demeure après relâchement du clic et s'estompe avec les applications successives de la friction.
  
## 4. Améliorations possibles

- Collisions entre les particules (à ajouter à la friction appliquée par la simulatioon)
- Accélération des particules proches augmentée par rapport à celles éloignées
- Customisation de l'attraction appliquée
- D'autres fonctions drôles à appliquer sur les particules : pulsation, repoussement, etc.
  
## 5. Exécuter le projet

- Si vous souhaitez simplement vous amuser avec la simulation, vous pouvez télécharger le .exe présent dans le dépôt principal : [main.exe](https://github.com/NajibXY/Particle-Gaggle-using-CPP-and-Raylib/blob/master/main.exe)

## Compilation, duplication, amélioration du projet

### Pré-requis 

- Installation de C++ (14 de préférence)
- Installation de Raylib pour C++ : https://www.raylib.com/

### Etapes

- Télécharger ou Forker le projet
- Ouvrir le projet dans VS Code via le fichier main.code-workspace
- F5 pour compiler et exécuter
- A partir de là vous pouvez effectuer toutes les modifications que vous souhaitez sur le fork du projet
