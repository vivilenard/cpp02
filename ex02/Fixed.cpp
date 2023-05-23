#include "Fixed.hpp"

Fixed::Fixed()	{std::cout << "Default constructor called"	<< std::endl;}
Fixed::~Fixed()	{std::cout << "Destructor called" 			<< std::endl;}

Fixed::Fixed(const int	int_number)
{
	std::cout << "Int constructor called" << std::endl;

	this->setRawBits(int_number * (1 << _n_factional_bits));
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;

	this->setRawBits(f * (1 << _n_factional_bits));
}

Fixed::Fixed(const Fixed & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

int		Fixed::getRawBits( void ) const 	{
	return this->_number_value;
}

void	Fixed::setRawBits( int const raw )	{
	this->_number_value = raw;
}

float	Fixed::toFloat( void ) const	{
	return ((float)getRawBits() / (1 << this->_n_factional_bits));
} 										//--> 2^fractional_bits  --> 2^8

int		Fixed::toInt( void ) const	{
	return ((int)roundf(toFloat()));
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_number_value = rhs.getRawBits();
	return *this;
}

std::ostream & operator<< ( std::ostream & o, Fixed const & rhs ){
	return (o << rhs.toFloat());
}

//comparison operators

// Fixed & Fixed::operator> (Fixed const & rhs)
// {
// 	if (this->_number_value )
// }

//arithmetric operators

//unary

Fixed	Fixed::operator+ (Fixed const & rhs) const
{
	Fixed result;

	result.setRawBits(this->_number_value + rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator- (Fixed const & rhs) const
{
	Fixed result;

	result.setRawBits(this->_number_value - rhs.getRawBits());
	return (result);
}

//binary

Fixed	Fixed::operator* (Fixed const & rhs) const
{
	Fixed result;

	result.setRawBits(this->_number_value * rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator/ (Fixed const & rhs) const
{
	Fixed result;

	result.setRawBits(this->_number_value / rhs.getRawBits());
	return (result);
}

2 * 4  2 ^ 3

0000 0010
0000 0100

0000 1000


0000 1000   8 * 8 = 8 ^ 2;    
0000 1000

0100 0000

4 * 4 = 4 + 4 + 4 + 4

8 * 5; 2 * 2 * 2 * 2 * 2 + 2 * 2           32 + 8

0000 0101
0000 1000

0010 1000