#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
    n = 0;
}

Fixed::Fixed( const Fixed &f )
{
	std::cout << "Copy constructor called" << std::endl;
	n  = f.n;
}

Fixed &Fixed::operator=( Fixed const & f )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->n = f.getRawBits();
	return *this;
}

Fixed::Fixed( const int _n )
{
	std::cout << "Int constructor called" << std::endl;
	// n = _n;
	setRawBits(_n << nfb);
}

Fixed::Fixed( const float _n )
{
	std::cout << "Float constructor called" << std::endl;
	// std::cout << "n " << (float)_n / (float)(1 << n) << std::endl;
	// n = (float)_n / (float)(1 << n);
	setRawBits(round(_n * (1 << nfb)));
}

Fixed::~Fixed()
{
	std::cout << "Deconstractor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
	// std::cout << "n " << (float)n / (fl)(1 << nfb) << std::endl;
	return (float)n / (float)(1 << nfb);
}

int Fixed::toInt( void ) const
{
	return (n >> nfb);
}

int Fixed::getRawBits( void ) const
{
	// int raw=0;
	// std::cout << "getRawBits member function called" << std::endl;
    // this->raw = 
	return n;
}

void Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits member function called" << std::endl;
	n = raw;
}

std::ostream & operator << ( std::ostream &output, const Fixed &f )
{
	output << f.toFloat();
	return output;
}