//
// Created by lilya on 01.08.2023.
//
#include "Zombie.h"

void randomChump( std::string name) {
    Zombie zombie(name);

    std::cout<< name + ": ";

    zombie.announce();
}