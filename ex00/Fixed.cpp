#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_number_value = 0;
}
Fixed::~Fixed()	{std::cout << "Destructor called" << std::endl;}

Fixed::Fixed( const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &	Fixed::operator=(Fixed const & rightside)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_number_value = rightside.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_number_value;
}

void	Fixed::setRawBits( int const raw ) 
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_number_value = raw;
}
