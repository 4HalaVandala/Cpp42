//
// Created by lilya on 15.08.2023.
//

#ifndef CPP42_CAT_H
#define CPP42_CAT_H
#include "../ex01/Animal.h"

class Cat: public Animal {

public:

    virtual void makeSound();

private:

    std::string _type;

};


#endif //CPP42_CAT_H
