/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:44:35 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/23 17:44:39 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int _n )
{
	std::cout << "Copy constructor called" << std::endl;
	n = _n;
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
	int raw=0;
	std::cout << "getRawBits member function called" << std::endl;

	return raw;
}

void Fixed::setRawBits( int const raw )
{
//	std::cout << "Deconstractor called" << std::endl;
	n = raw;
}