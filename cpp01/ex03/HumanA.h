//
// Created by lilya on 01.08.2023.
//

#ifndef CPP42_HUMANA_H
#define CPP42_HUMANA_H

#include "Weapon.h"
#include "iostream"
class HumanA {

public:

    HumanA(const std::string name, Weapon& weapon);
    ~HumanA();

    void attack();
    void setWeapon(std::string weaponName);

    std::string getName();

private:

    std::string _name;
    Weapon& _weapon;

};


#endif //CPP42_HUMANA_H
