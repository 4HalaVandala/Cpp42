//
// Created by lilya on 26.08.2023.
//

#include "ScavTrap.h"

// Constructors and destructors

ScavTrap::ScavTrap( ScavTrap const &src ) {
    std::cout << " Copy constructor called from ScavTrap" << std::endl;
    *this = src;
}
ScavTrap::ScavTrap( void ) {
    std::cout << "Default constructor called from ScavTrap" << std::endl;

    setName("Any default name");
    setAttackDamage(20);
    setEnergyPoints(50);
    setHp(100);
}
ScavTrap::ScavTrap( const std::string &name ) {
    std::cout << "ScavTrap constructor with [name] parameter called" << std::endl;

    setName(name);
    setAttackDamage(20);
    setEnergyPoints(50);
    setHp(100);
}
ScavTrap::~ScavTrap( void ) {
    std::cout << "Scav trap destructor called" << std::endl;
}

// Assignment operators

ScavTrap & ScavTrap::operator=( ScavTrap const & src ) {
    if ( this != &src ) {
        setName(src.getName());
        setAttackDamage(src.getAttackDamage());
        setEnergyPoints(src.getEnergyPoints());
        setHp(src.getHp());
    }
    return *( this );
}

ScavTrap & ScavTrap::operator=( ClapTrap const & src ) {
    if ( this != &src ) {
        setName(src.getName());
        setAttackDamage(src.getAttackDamage());
        setEnergyPoints(src.getEnergyPoints());
        setHp(src.getHp());
    }
    return *( this );
}

// Member functions

void ScavTrap::guardGate() {
    std::cout << this->getName() << " is protecting gate " << std::endl;
}

void ScavTrap::attack( const std::string & target ) {
    std::cout << getName() << " hits " << target << " by " << getAttackDamage() << " damage!" << std::endl;
}