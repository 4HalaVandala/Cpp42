//
// Created by lilya on 11.10.2023.
//

#include "Fixed.h"

int const::Fixed::_numOfFractionalBits = 8;

int Fixed::getRawBits() const {
    std::cout << "GetRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

void Fixed::setRawBits(const int &raw) {
    this->_fixedPointValue = raw;
}

Fixed::Fixed() {
    this->_fixedPointValue = 0;

    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called" << std::endl;

    this->setRawBits(copy.getRawBits());
}

Fixed::~Fixed() {
    std::cout << "Destructor called " << std::endl;
}

Fixed &Fixed::operator=( Fixed const &copy ) {
    std::cout<< "Copy assigment called" << std::endl;

    if (this != &copy) {
        this->setRawBits(copy.getRawBits());
    }
    return (*this);
}