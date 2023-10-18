//
// Created by lilya on 26.08.2023.
//

#include "ClapTrap.h"

void ClapTrap::setHp(const int& amount) {
    this->_hitPoints = amount;
}
void ClapTrap::setAttackDamage(const int& amount) {
    this->_attackDamage = amount;
}
void ClapTrap::setEnergyPoints(const int& amount) {
    this->_energyPoints = amount;
}
void ClapTrap::setName(const std::string& name) {
    this->_name = name;
}
int ClapTrap::getHp() const {
    return this->_hitPoints;
}
int ClapTrap::getAttackDamage() const {
    return this->_attackDamage;
}
int ClapTrap::getEnergyPoints() const {
    return this->_energyPoints;
}
std::string ClapTrap::getName() const {
    return this->_name;
}

// Member functions

void ClapTrap::attack(const std::string& target) {
    std::cout << getName() << " attacks " << target << " causing " << getAttackDamage() << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(const unsigned int& amount) {
    std::cout << getName() << " getting " << amount << " points of damage! " << std::endl;

    setHp(getHp() - amount);
    setEnergyPoints(getEnergyPoints() - 1);
}
void ClapTrap::beRepaired(const unsigned int& amount) {
    std::cout << getName() << " is repaired himself by " << amount << std::endl;

    setEnergyPoints(getEnergyPoints() - amount);
    setHp(getHp() + amount);
}
void ClapTrap::status( void ) {
    std::cout << getName() << " have hp: " << getHp() << ", energy: " << getEnergyPoints() << std::endl;
}

// Constructors and destructors

ClapTrap::ClapTrap(std::string name):_name(name) {
    setHp(10);
    setEnergyPoints(10);
    setAttackDamage(228);

    std::cout << getName() << " constructor called " << std::endl;
}

ClapTrap::ClapTrap() {
}

ClapTrap::~ClapTrap() {
    std::cout << getName() << " destructor called " << std::endl;
}