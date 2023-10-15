//
// Created by lilya on 11.10.2023.
//

#include "Fixed.h"

int const::Fixed::_numOfFractionalBits = 8;

// * MEMBER FUNCTIONS *

int Fixed::getRawBits() const
{
    return this->_fixedPointValue;
}

void Fixed::setRawBits(const int &raw)
{
    this->_fixedPointValue = raw;
}

float Fixed::toFloat( void ) const
{
    return ((float)this->_fixedPointValue / (1 << this->_numOfFractionalBits));
}

int Fixed::toInt( void ) const
{
    return ((int)this->_fixedPointValue / (1 << this->_numOfFractionalBits));
}

Fixed Fixed::min( Fixed const &a, Fixed const &b )
{
   return a.getRawBits() < b.getRawBits() ?  a :  b;
}

Fixed Fixed::max( Fixed const &a, Fixed const &b )
{
    return a.getRawBits() > b.getRawBits() ?  a :  b;
}

// * CONSTRUCTORS AND DESTRUCTORS  *

Fixed::Fixed()
{
    this->_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &copy)
{
    this->setRawBits(copy.getRawBits());
}

Fixed::Fixed(const float &copy)
{
    this->setRawBits(roundf(copy * (1 << this->_numOfFractionalBits)));
}

Fixed::Fixed(const int &copy)
{
    this->setRawBits(copy * (1 << this->_numOfFractionalBits));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called " << std::endl;
}

// * OPERATORS OVERLOADING *

// * COMPARISON OPERATORS *

int Fixed::operator >(const Fixed &copy) const
{
    return (this->getRawBits() > copy.getRawBits());
}

int Fixed::operator <(const Fixed &copy) const
{
    return (this->getRawBits() < copy.getRawBits());
}

int Fixed::operator >=(const Fixed &copy) const
{
    return (this->getRawBits() >= copy.getRawBits());
}

int Fixed::operator <=(const Fixed &copy) const
{
    return (this->getRawBits() <= copy.getRawBits());
}

int Fixed::operator ==(const Fixed &copy) const
{
    return (this->getRawBits() == copy.getRawBits());
}

int Fixed::operator !=(const Fixed &copy) const
{
    return (this->getRawBits() != copy.getRawBits());
}

// * ASSIGNMENT OPERATOR *

Fixed &Fixed::operator=( Fixed const &copy )
{
    if (this != &copy) {
        this->setRawBits(copy.getRawBits());
    }
    return (*this);
}

// * ARITHMETIC OPERATORS *

Fixed& Fixed::operator +(const Fixed &copy)
{
    this->setRawBits(this->getRawBits() + copy.getRawBits());
    return (*this);
}

Fixed& Fixed::operator -(const Fixed &copy)
{
    this->setRawBits(this->getRawBits() - copy.getRawBits());
    return (*this);
}

Fixed Fixed::operator *(const Fixed &copy)
{
    Fixed temp;

    temp._fixedPointValue = this->_fixedPointValue * copy.toFloat();
    return (temp);
}

Fixed Fixed::operator /(const Fixed &copy)
{
    Fixed temp;

    temp._fixedPointValue = this->_fixedPointValue * copy.toFloat();
    return (temp);
}

// * PRE/POST INCREMENT/DECREMENT *

Fixed & Fixed::operator--(void)
{
    this->_fixedPointValue--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp;

    temp._fixedPointValue = this->_fixedPointValue--;
    return (temp);
}

Fixed & Fixed::operator++(void)
{
    this->_fixedPointValue++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp;

    temp._fixedPointValue = this->_fixedPointValue++;
    return (temp);
}

std::ostream & operator<<(std::ostream &str, Fixed const &src)
{
    str << src.toFloat();
    return (str);
}