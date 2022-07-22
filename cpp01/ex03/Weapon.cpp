/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:22:58 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/21 19:23:03 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string ty )
{
	type = ty;
}

const	std::string	&Weapon::getType( void )
{
	return (type);
}

void	Weapon::setType( std::string ty )
{
	type = ty;
}