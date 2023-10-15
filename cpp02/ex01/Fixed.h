//
// Created by lilya on 11.10.2023.
//

#ifndef CPP42_FIXED_H
#define CPP42_FIXED_H
#include "iostream"
#include "cmath"

class Fixed {

public:

    Fixed();
    ~Fixed();
    Fixed(const Fixed &copy);
    Fixed(const float &copy);
    Fixed(const int &copy);

    Fixed& operator =(const Fixed &copy);

    int getRawBits( void ) const;
    void setRawBits( int const &raw );
    float toFloat( void ) const;
    int toInt( void ) const;

private:

    int _fixedPointValue;
    static int const _numOfFractionalBits;

};

std::ostream& operator <<(std::ostream &stream, Fixed const &src);

#endif //CPP42_FIXED_H
