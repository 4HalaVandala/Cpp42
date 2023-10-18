//
// Created by lilya on 26.08.2023.
//

#ifndef CPP42_CLAPTRAP_H
#define CPP42_CLAPTRAP_H
#include "iostream"

class ClapTrap {

public:

    ClapTrap(std::string name);
    ClapTrap();
    ~ClapTrap();

    void attack( const std::string& target );
    void takeDamage( const unsigned int& amount );
    void beRepaired( const unsigned int& amount );
    void status( void );

    void setHp( const int& amount );
    void setAttackDamage( const int& amount );
    void setEnergyPoints( const int& amount );
    void setName( const std::string& name );

    int getHp() const;
    int getAttackDamage() const;
    int getEnergyPoints() const;
    std::string getName() const;

private:

    int _hitPoints;
    int _attackDamage;
    int _energyPoints;
    std::string _name;

};


#endif //CPP42_CLAPTRAP_H
