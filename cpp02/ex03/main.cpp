#include "Point.h"

int main( void )
{
    Point	a(-2, 3);
    Point	b(5,1);
    Point	c(1, 5);
    float	x;
    float	y;

    std::cout << "===Program Is point in triangle?===" << std::endl;
    std::cout << "Give x in float number for point->: ";
    std::cin >> x;
    std::cout << "Give y in float number for point->: ";
    std::cin >> y;
    Point	pt(x, y);

    Point d = a;

    Point bsp;
    if (bsp.bsp(a, b, c, pt))
    {
        std::cout << "The point is in the triangle "  << std::endl;
    }
    else
    {
        std::cout << "No, the point is not in the triangle " << std::endl;
    }
    return (0);
}