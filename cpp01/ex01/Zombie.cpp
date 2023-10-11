//
// Created by lilya on 01.08.2023.
//

#include "Zombie.h"

Zombie::Zombie( void ): _name("") {

}

Zombie::~Zombie() {
    std::cout << "Zombie is dying..." << std::endl;
}

void Zombie::announce() {
    std::cout << "BraaaaaaainnnzzzZZZzZZ...." << std::endl;
}

void Zombie::setName(const std::string name) {
    this -> _name = name;
}