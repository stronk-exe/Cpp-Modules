/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:22:21 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/21 19:22:26 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( Weapon wpn)
{
	wp->setType(wpn.getType());
}

HumanA::HumanA( std::string _name, Weapon wpn)
{
	name = _name;
	wp->setType(wpn.getType());
}

void	HumanA::attack( void )
{
	std::cout << name << " attacks with their " << wp->getType() << std::endl;
}