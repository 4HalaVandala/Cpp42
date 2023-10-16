//
// Created by lilya on 15.10.2023.
//

#ifndef CPP42_POINT_H
#define CPP42_POINT_H
#include "Fixed.h"

class Point {

public:

    Point();
    Point( Point const & copy );
    Point( float const &a, float const &b );
    ~Point();

    Point operator = (const Point &copy);

    bool bsp(Point const &a, Point const &b, Point const &c, Point const &s);

private:

    Fixed const _x;
    Fixed const _y;

};


#endif //CPP42_POINT_H
