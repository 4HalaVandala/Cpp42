//
// Created by lilya on 30.07.2023.
//
#include "Zombie.h"

int main() {
    {
        Zombie zomb2("Patrick");
        zomb2.announce();
    }
    {
        Zombie *zomb1 = newZombie("Rick");
        zomb1->announce();

        delete zomb1;
    }
    {
        randomChump("Monkey");
    }
}
