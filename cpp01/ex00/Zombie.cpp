//
// Created by lilya on 30.07.2023.
//

#include "Zombie.h"


void Zombie::announce() {
    std::cout << "BraaaaaaainnnzzzZZZzZZ....";
}


Zombie::~Zombie( void ) {
    std::cout << "Zombie dying.." << std::endl;
}

Zombie::Zombie(std::string name): _name(name) {

}