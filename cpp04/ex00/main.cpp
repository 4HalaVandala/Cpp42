//
// Created by lilya on 15.08.2023.
//
#include "../ex01/Animal.h"
#include "Cat.h"
#include "Dog.h"

int main() {
    Animal animal;
    animal.makeSound();

    Dog dog;
    dog.makeSound();

    Cat cat;
    cat.makeSound();

     Animal*  c = new Cat();
     c->makeSound();
}