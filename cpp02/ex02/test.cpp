//
// Created by John Doe on 15.10.2023.
//

#include "Fixed.h"

int main(void)
{
    Fixed		a;
    Fixed const	b(Fixed(5.05f) * Fixed(2));
    Fixed const	c(4);

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max(a, b) << std::endl;
    std::cout << Fixed::min(b, a) << std::endl;
    std::cout << (b > a) << std::endl;
    std::cout << (a > b) << std::endl;
    std::cout << (b > c) << std::endl;

    std::cout << (b < a) << std::endl;
    std::cout << (a < b) << std::endl;
    std::cout << (b < c) << std::endl;

    std::cout << (b >= a) << std::endl;
    std::cout << (a >= b) << std::endl;
    std::cout << (b >= c) << std::endl;

    std::cout << (b <= a) << std::endl;
    std::cout << (a <= b) << std::endl;
    std::cout << (b <= c) << std::endl;

    std::cout << (b >= a) << std::endl;
    std::cout << (a >= b) << std::endl;
    std::cout << (b >= c) << std::endl;

    std::cout << (b == a) << std::endl;
    std::cout << (a == b) << std::endl;
    std::cout << (b == c) << std::endl;

    std::cout << (b != a) << std::endl;
    std::cout << (a != b) << std::endl;
    std::cout << (b != c) << std::endl;

    Fixed t;

    std::cout << (t = b + a) << std::endl;
    std::cout << (t = a + b) << std::endl;
    std::cout << (t = b + c) << std::endl;

    std::cout << (t = b - a) << std::endl;
    std::cout << (t = a - b) << std::endl;
    std::cout << (t = b - c) << std::endl;

    std::cout << (t = b * a) << std::endl;
    std::cout << (t = a * b) << std::endl;
    std::cout << (t = b * c) << std::endl;

    std::cout << (t = b / a) << std::endl;
    std::cout << (t = a / b) << std::endl;
    std::cout << (t = b / c) << std::endl;

    std::cout << ++a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << --a << std::endl;
    std::cout << a-- << std::endl;
    return (0);
}