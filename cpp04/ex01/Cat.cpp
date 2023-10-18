//
// Created by lilya on 15.08.2023.
//

#include "Cat.h"


Cat::Cat():brain() {
    this->brain = new Brain();
}
Cat::~Cat() {
    delete brain;
}