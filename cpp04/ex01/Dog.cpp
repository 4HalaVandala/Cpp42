//
// Created by lilya on 15.08.2023.
//

#include "Dog.h"

Dog::Dog():brain() {
    this->brain = new Brain();
}

Dog::~Dog() {
    delete brain;
}