#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

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
		Fixed( const int );
		Fixed( const float );
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

std::ostream& operator<< (std::ostream &out, Fixed const& f);

#endif