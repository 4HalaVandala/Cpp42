//
// Created by lilya on 15.08.2023.
//
#include "Brain.h"
#include "Cat.h"
#include "Dog.h"
#include "Animal.h"

int main() {
    Animal* animal;
    Brain* brain;
    for (int i = 0; i < 10; i++) {
        brain->ideas[i] = new Cat();
    }
}