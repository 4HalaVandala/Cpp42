//
// Created by lilya on 02.08.2023.
//

#include "HumanB.h"


void HumanB::setWeapon(Weapon& weapon) {
    this -> _weapon = &weapon;
}

void HumanB::attack() {
    std::cout << getName() << " attacks with their " << this->_weapon -> getType() << std::endl;
}

std::string HumanB::getName() {
    return (this -> _name);
}
HumanB::HumanB() {

}
HumanB::HumanB(std::string name):_name(name),_weapon(nullptr) {

}
HumanB::~HumanB() {}