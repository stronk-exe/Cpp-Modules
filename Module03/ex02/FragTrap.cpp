/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:30:31 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/24 13:30:32 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "ScavTrap Default constractor called!" << std::endl;
}

FragTrap::FragTrap( std::string _name )
{
	std::cout << "ScavTrap Copy constractor called!" << std::endl;
	name = _name;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

// ClapTrap &ClapTrap::operator=( ClapTrap const & ct )
// {
// 	std::cout << "Copy assignment operator called!" << std::endl;
// 	this->name = ct.name;
// 	return this;
// }

void FragTrap::attack(const std::string& target)
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

void FragTap::highFivesGuys(void)
{
	std::cout << "high fives buddy!" << std::endl;
}

FragTrap::FragTrap(void);
{
	std::cout << "ScavTrap Deconstractor called!" << std::endl;
}