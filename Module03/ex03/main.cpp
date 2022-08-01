/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:18:54 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/24 12:18:55 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	// ClapTrap ct("stronk");
	// ScavTrap st("goat");
	// FragTrap ft("lmsmn");
	// DiamondTrap dt("lfloss");
	// ct.attack("lwz");
	// ct.beRepaired(2);
	// ct.takeDamage(1);
	// st.attack("zombies");
	// st.beRepaired(22);
	// st.takeDamage(11);
	// st.guardGate();
	// ft.attack("l7ercha");
	// ft.beRepaired(22);
	// ft.takeDamage(11);
	// ft.highFivesGuys();
	// whoAmI();
	DiamondTrap	Hero("Hero");
	
	Hero.attack("enemy");
	Hero.takeDamage(20);
	Hero.beRepaired(10);
	Hero.guardGate();
	Hero.highFivesGuys();
	Hero.whoAmI();
	Hero.takeDamage(9999);
	Hero.attack("last one");
	Hero.whoAmI();

}