/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:44:27 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/23 17:46:59 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		Fixed( int n );
		Fixed& operator=( Fixed const & f );// {return f;}
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif