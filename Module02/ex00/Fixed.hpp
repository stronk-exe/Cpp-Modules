#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
		int	n;
		static const int nfb=8;
	public:
		Fixed();
		Fixed( const Fixed& f );
		Fixed& operator=( Fixed const & f );// {return f;}
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif