/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:15:52 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/24 13:15:53 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constractor called!" << std::endl;
}

ScavTrap::ScavTrap( std::string _name )
{
	std::cout << "ScavTrap Copy constractor called!" << std::endl;
	name = _name;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

// ClapTrap &ClapTrap::operator=( ClapTrap const & ct )
// {
// 	std::cout << "Copy assignment operator called!" << std::endl;
// 	this->name = ct.name;
// 	return this;
// }

void ScavTrap::attack(const std::string& target)
{
	if (hitPoints && energyPoints)
	{
		std::cout << "ScavTrap " << name << " attacks " << target << " caising " << attackDamage << " points of damage!" << std::endl;
		attackDamage -= 1;
	}
	else
		std::cout << "ScavTrap has no hit points or energy points left!" << std::endl;
}

// void ScavTrap::takeDamage(unsigned int amount)
// {
// 	std::cout << "ScavTrap " << name << " attacked taking " << amount << " points of damage!" << std::endl;
// 	hitPoints -= amount;
// 	energyPoints -= 1;
// }

// void ScavTrap::beRepaired(unsigned int amount)
// {
// 	std::cout << "ScavTrap " << name << " repaires itself getting " << amount << " hit points!" << std::endl;
// 	hitPoints += amount;
// 	energyPoints += 1;
// }

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Deconstractor called!" << std::endl;
}