#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_number_value;
		static const int	_n_factional_bits;

	public:
		Fixed	();
		Fixed	( const int );
		Fixed	( const float );
		Fixed	( Fixed& copy );
		~Fixed	();
		Fixed	& operator= ( Fixed const & rightside );
		Fixed	& operator<< ( Fixed const & rightside ); //implement next pls
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		float	toFloat( void ) const;
		int		toInt( void ) const;
};

# endif