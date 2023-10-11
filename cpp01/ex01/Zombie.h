//
// Created by lilya on 01.08.2023.
//

#ifndef CPP42_ZOMBIE_H
#define CPP42_ZOMBIE_H
#include "iostream"

class Zombie {

public:
    void announce( void );
    Zombie();
    ~Zombie();

    void setName( const std::string name);

private:
    std::string _name;

};

Zombie* zombieHorde(const int n,const std::string name);


#endif //CPP42_ZOMBIE_H
