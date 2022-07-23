/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:22:36 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/21 19:22:38 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// HumanB::HumanB( std::string name )
// {
// 	name = name;
// }

void	HumanB::setWeapon( Weapon &wpn )
{
	wp = &wpn;
}

void	HumanB::attack( void )
{
	std::cout << name << " attacks with their " << wp->getType() << std::endl;
}