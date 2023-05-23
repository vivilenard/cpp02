#include "Fixed.hpp"

Fixed::Fixed()	{std::cout << "Default constructor called"	<< std::endl;}

Fixed::Fixed(const int	int_number)
{
	std::cout << "Int constructor called" << std::endl;

	this->setRawBits(int_number * (1 << _n_factional_bits));
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;

	float buf = f * (1 << _n_factional_bits);
	int		i = round(buf);
	this->setRawBits(i);
}

Fixed::~Fixed()	{std::cout << "Destructor called" 			<< std::endl;}


Fixed::Fixed(const Fixed & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	//this->_number_value = copy.getRawBits();
}

int		Fixed::getRawBits( void ) const 
{
	return this->_number_value;
}

void	Fixed::setRawBits( int const raw )
{
	this->_number_value = raw;
}

float Fixed::toFloat( void ) const  //fxed to float
{
	return ((float)getRawBits() / (1 << this->_n_factional_bits)); //--> 2^fractional_bits  --> 2^8
}

int		Fixed::toInt( void ) const //fixed to int
{
	return ((int)round(toFloat()));
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_number_value = rhs.getRawBits();
	return *this;
}

std::ostream & operator<< ( std::ostream & o, Fixed const & rhs ) // fixed point to float
{
	return (o << rhs.toFloat());
}

/*
00000001 << 8 ; 100000000


1111 1111 */

