//
// Created by lilya on 15.08.2023.
//

#ifndef CPP42_ANIMAL_H
#define CPP42_ANIMAL_H
#include "iostream"

class Animal {

public:

    virtual void makeSound();

private:

    std::string _type;

};


#endif //CPP42_ANIMAL_H
