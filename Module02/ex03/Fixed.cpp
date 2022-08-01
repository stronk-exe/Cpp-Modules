#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
    n = 0;
}

Fixed::Fixed( const Fixed &f )
{
	// std::cout << "Copy constructor called" << std::endl;
	n  = f.n;
}

Fixed &Fixed::operator=( Fixed const & f )
{
	// std::cout << "Copy assignment operator called" << std::endl;
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
	// std::cout << "Deconstractor called" << std::endl;
}

/////////////////////////////////////////////////////////////////////

bool Fixed::operator>(const Fixed &f) const
{
	return n > getRawBits();
}

bool Fixed::operator<(const Fixed &f) const
{
	return n < getRawBits();
}

bool Fixed::operator>=(const Fixed &f) const
{
	return n >= getRawBits();
}

bool Fixed::operator<=(const Fixed &f) const
{
	return n <= getRawBits();
}

bool Fixed::operator==(const Fixed &f) const
{
	return n == getRawBits();
}

bool Fixed::operator!=(const Fixed &f) const
{
	return n != getRawBits();
}

Fixed Fixed::operator+(const Fixed &f) const
{
	Fixed t;

	t.setRawBits((n + f.getRawBits()) >> nfb);
	return t;
}

Fixed Fixed::operator-(const Fixed &f) const
{
	Fixed t;

	t.setRawBits((n - f.getRawBits()) >> nfb);
	return t;
}

Fixed Fixed::operator*(const Fixed &f) const
{
	Fixed t;

	t.setRawBits((n * f.getRawBits()) >> nfb);
	// return ->n - f.getRawBits();
	return t;
}

Fixed Fixed::operator/(const Fixed &f) const
{
	Fixed t;

	t.setRawBits((n / f.getRawBits()) >> nfb);
	return t;
}

Fixed &Fixed::operator++( void )
{
	++n;
	return *this;
}

Fixed Fixed::operator++( int )
{
	Fixed t(*this);
	++(*this);
	return t;
}

Fixed &Fixed::operator--( void )
{
	--n;
	return *this;
}

Fixed Fixed::operator--( int f )
{
	return n-f;
}

Fixed &Fixed::min( Fixed &a, Fixed &b )
{
	if (a.getRawBits() > b.getRawBits())
		return b;
	else
		return a;
}

Fixed const &Fixed::min( Fixed const &a, Fixed const &b )
{
	if (a.getRawBits() > b.getRawBits())
		return b;
	else
		return a;
}

const Fixed &Fixed::max( Fixed &a, Fixed &b )
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;
}

const Fixed &Fixed::max( Fixed const &a, Fixed const &b )
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;
}

//////////////////////////////////////////////////////

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