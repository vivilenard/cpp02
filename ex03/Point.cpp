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

Fixed	Point::getX() const{return this->_x;}
Fixed	Point::getY() const{return this->_y;}
// Point Point::operator+(Point const &rhs) const
// {
// 	Point constresult;

// 	result._x = this->_x + rhs._x;
// 	return (result);
// }

// Point Point::operator-(Point const &rhs) const

// Point Point::operator*(Point const &rhs) const