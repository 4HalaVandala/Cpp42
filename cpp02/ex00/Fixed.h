//
// Created by lilya on 11.10.2023.
//

#ifndef CPP42_FIXED_H
#define CPP42_FIXED_H
#include "iostream"


class Fixed {

public:

    Fixed();
    ~Fixed();
    Fixed(const Fixed &copy);

    Fixed& operator =(const Fixed &copy);

    int getRawBits( void ) const;
    void setRawBits( int const &raw );

private:

    int _fixedPointValue;
    static int const _numOfFractionalBits;

};


#endif //CPP42_FIXED_H
