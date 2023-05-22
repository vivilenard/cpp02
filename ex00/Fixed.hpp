#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int _number_value;
        static const int _n_factional_bits;
    public:
        Fixed();
        Fixed( Fixed& copy );
        ~Fixed();
        Fixed & operator= ( Fixed const & rightside );
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

# endif