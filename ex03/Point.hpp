#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const	_x;
		Fixed const	_y;

	public:
		Point();
		Point(Fixed const x, Fixed const y);
		Point(const float a, const float b);
		Point(Point const & a);
		~Point();

		Fixed	getX()	const;
		Fixed	getY()	const;

		Point & operator=(Point const & p);
};

# endif