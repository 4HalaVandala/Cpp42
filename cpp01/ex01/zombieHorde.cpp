//
// Created by lilya on 01.08.2023.
//
#include "Zombie.h"

Zombie* zombieHorde(const int n,const std::string name) {
    Zombie *zombie = new Zombie[n];

    for (int i = 0; i < n; i++) {
        zombie[n].setName(name);
    }
    return (zombie);
}