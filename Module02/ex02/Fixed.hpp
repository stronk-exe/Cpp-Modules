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

		bool operator>(const Fixed &f) const;
		bool operator<(const Fixed &f) const;
		bool operator>=(const Fixed &f) const;
		bool operator<=(const Fixed &f) const;
		bool operator==(const Fixed &f) const;
		bool operator!=(const Fixed &f) const;

		Fixed operator+(const Fixed &f) const;
		Fixed operator-(const Fixed &f) const;
		Fixed operator*(const Fixed &f) const;
		Fixed operator/(const Fixed &f) const;

		Fixed &operator++( void );
		Fixed operator++( int );
		Fixed &operator--( void );
		Fixed operator--( int );

		Fixed &min( Fixed &a, Fixed &b );
		Fixed const &min( Fixed const &a, Fixed const &b );
		static const Fixed &max( Fixed &a, Fixed &b );
		static const Fixed &max( Fixed const &a, Fixed const &b );

		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

std::ostream& operator<< (std::ostream &out, Fixed const& f);

#endif