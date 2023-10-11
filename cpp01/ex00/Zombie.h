//
// Created by lilya on 30.07.2023.
//

#ifndef CPP42_ZOMBIE_H
#define CPP42_ZOMBIE_H
#include <iostream>


class Zombie {

public:

    void announce( void );

    Zombie(std::string name);
    ~Zombie( void );

private:
    std::string _name;

};

Zombie* newZombie( std::string name);
void randomChump( std::string name);

#endif //CPP42_ZOMBIE_H
