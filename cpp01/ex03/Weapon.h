//
// Created by lilya on 01.08.2023.
//

#ifndef CPP42_WEAPON_H
#define CPP42_WEAPON_H

#include "iostream"

class Weapon {

public:

    Weapon(const std::string);
    Weapon();
    ~Weapon();

   const std::string getType() const;
    void setType(const  std::string type);

private:

    std::string _type;

};


#endif //CPP42_WEAPON_H
