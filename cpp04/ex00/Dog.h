//
// Created by lilya on 15.08.2023.
//

#ifndef CPP42_DOG_H
#define CPP42_DOG_H
#include "../ex01/Animal.h"

class Dog: public Animal {

public:

    void makeSound();

private:

    std::string _type;

};


#endif //CPP42_DOG_H
