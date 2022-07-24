/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:18:37 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/24 12:18:38 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constractor called!" << std::endl;
}

ClapTrap::ClapTrap( std::string _name )
{
	std::cout << "ClapTrap Copy constractor called!" << std::endl;
	name = _name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

// ClapTrap &ClapTrap::operator=( ClapTrap const & ct )
// {
// 	std::cout << "Copy assignment operator called!" << std::endl;
// 	this->name = ct.name;
// 	return this;
// }

void ClapTrap::attack(const std::string& target)
{
	if (hitPoints && energyPoints)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << " caising " << attackDamage << " points of damage!" << std::endl;
		attackDamage -= 1;
	}
	else
		std::cout << "ClapTrap has no hit points or energy points left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " attacked taking " << amount << " points of damage!" << std::endl;
	hitPoints -= amount;
	energyPoints -= 1;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " repaires itself getting " << amount << " hit points!" << std::endl;
	hitPoints += amount;
	energyPoints += 1;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Deconstractor called!" << std::endl;
}

void guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}