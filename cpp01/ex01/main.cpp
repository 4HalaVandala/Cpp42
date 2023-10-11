//
// Created by lilya on 01.08.2023.
//
#include "Zombie.h"

void announceAllZombies(Zombie *zombieHorde,const int numberOfZombies) {
    for (int i = 0; i < numberOfZombies; i++) {
        zombieHorde[i].announce();
    }
}

int main () {
   Zombie *firstHorde = zombieHorde(4, "Dewen");
    announceAllZombies(firstHorde, 4);

    delete [] firstHorde;
}



