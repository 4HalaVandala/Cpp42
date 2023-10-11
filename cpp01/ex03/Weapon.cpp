//
// Created by lilya on 01.08.2023.
//

#include "Weapon.h"

const std::string Weapon::getType() const {
    return (this-> _type);
}

 void Weapon::setType(const std::string type )  {
    this -> _type = type;
}

Weapon::Weapon(const std::string type):_type(type) {

}
Weapon::~Weapon() {

}
Weapon::Weapon() {}