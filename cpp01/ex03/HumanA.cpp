//
// Created by lilya on 01.08.2023.
//

#include "HumanA.h"


void HumanA::attack() {
    std::cout << getName() << " attacks with their " << this->_weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string name, Weapon& weapon):_name(name), _weapon(weapon) {}

void HumanA::setWeapon(std::string weaponName) {
    this -> _weapon.setType(weaponName);
}

std::string HumanA::getName() {
    return (this -> _name);
}
HumanA::~HumanA() {}