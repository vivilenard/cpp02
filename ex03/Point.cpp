#include "Point.hpp"

Point::Point():_x(0), _y(0){}

Point::Point(const float a, const float b):_x(a), _y(b){}

Point::Point(Point const & a):_x(a._x), _y(a._y){}

Point::~Point(){}

Point & Point::operator=(Point const & p)
{
	(void)p;
	return *this;
}
