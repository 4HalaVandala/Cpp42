//
// Created by lilya on 01.08.2023.
//
#include "Zombie.h"

Zombie* newZombie( std::string name) {
    Zombie *zombie = new Zombie(name);

    return zombie;
}