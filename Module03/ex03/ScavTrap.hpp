/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:15:59 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/24 13:16:00 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	// private:
	// 	std::string name;
	// 	int			hitPoints;
	// 	int			energyPoints;
	// 	int			attackDamage;
	public:
		ScavTrap();
		ScavTrap( std::string );
		ScavTrap & operator=( ScavTrap const & st );
		~ScavTrap();
		void attack(const std::string& target);
		// void takeDamage(unsigned int amount);
		// void beRepaired(unsigned int amount);
		void guardGate();
};

#endif