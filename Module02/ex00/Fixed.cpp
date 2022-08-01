#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
    n = 0;
}

Fixed::Fixed( const Fixed &f )
{
	std::cout << "Copy constructor called" << std::endl;
	n  = f.getRawBits();
}

Fixed &Fixed::operator=( Fixed const & f )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->n = f.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Deconstractor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	// int raw=0;
	std::cout << "getRawBits member function called" << std::endl;
    // this->raw = 
	return n;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	n = raw;
}