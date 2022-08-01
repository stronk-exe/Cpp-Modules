/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:30:39 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/24 13:30:41 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	// private:
	// 	std::string name;
	// 	int			hitPoints;
	// 	int			energyPoints;
	// 	int			attackDamage;
	public:
		FragTrap();
		FragTrap( std::string );
		FragTrap & operator=( FragTrap const & ft );
		~FragTrap();
		void attack(const std::string& target);
		// void takeDamage(unsigned int amount);
		// void beRepaired(unsigned int amount);
		void highFivesGuys(void);
};

#endif