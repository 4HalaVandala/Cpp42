//
// Created by lilya on 02.08.2023.
//

#ifndef CPP42_HUMANB_H
#define CPP42_HUMANB_H
#include "Weapon.h"
#include "iostream"

class HumanB {

public:

    HumanB();
    HumanB(std::string name);
    ~HumanB();

    void setWeapon(Weapon& weapon);
    void attack();

    std::string getName();

private:

    std::string _name;
    Weapon* _weapon;

};


#endif //CPP42_HUMANB_H
