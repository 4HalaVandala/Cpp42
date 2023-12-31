//
// Created by lilya on 15.10.2023.
//

#include "Point.h"

Point::Point():_x(0),_y(0)
{
}

Point::Point( Point const & copy ):_x(copy._x), _y(copy._y)
{
}

Point::Point( float const &a, float const &b ):_x(a),_y(b)
{
}

Point::~Point()
{
}

Point Point::operator = (const Point &copy)
{
  Point tmp(copy);

  return tmp;
}

//

bool Point::bsp(Point const &a, Point const &b, Point const &c, Point const &s)
{
    Fixed as_x = s._x - a._x;
    Fixed as_y = s._y - a._y;

    bool s_ab = (b._x - a._x) * as_y - (b._y - a._y) * as_x > 0;

    if ((c._x - a._x) * as_y - (c._y - a._y) * as_x > 0 == s_ab)
        return false;
    if ((c._x - b._x) * (s._y - b._y) - (c._y - b._y)*(s._x - b._x) > 0 != s_ab)
        return false;
    return true;
}