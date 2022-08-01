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
	std::cout << "FragTrap Default constractor called!" << std::endl;
	name = "stronk";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap( std::string _name )
{
	std::cout << "FragTrap Copy constractor called!" << std::endl;
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
		std::cout << "FragTrap " << name << " attacks " << target << " caising " << attackDamage << " points of damage!" << std::endl;
		attackDamage -= 1;
	}
	else
		std::cout << "FragTrap has no hit points or energy points left!" << std::endl;
}

// void FragTrap::takeDamage(unsigned int amount)
// {
// 	std::cout << "ScavTrap " << name << " attacked taking " << amount << " points of damage!" << std::endl;
// 	hitPoints -= amount;
// 	energyPoints -= 1;
// }

// void FragTrap::beRepaired(unsigned int amount)
// {
// 	std::cout << "ScavTrap " << name << " repaires itself getting " << amount << " hit points!" << std::endl;
// 	hitPoints += amount;
// 	energyPoints += 1;
// }

void FragTrap::highFivesGuys( void )
{
	if (energyPoints > 0)
		std::cout << "high five buddy!" << std::endl;
	else
		std::cout << "dude has no energy points!" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap Deconstractor called!" << std::endl;
}