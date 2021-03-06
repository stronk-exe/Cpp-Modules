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

int main()
{
	// ClapTrap ct("stronk");
	// ScavTrap st("goat");
	// FragTrap ft("lmsmn");
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
	ScavTrap Hero("Hero");

	Hero.attack("Enemy");
	Hero.beRepaired(10);
	Hero.guardGate();
	Hero.takeDamage(66666);
	Hero.attack("last Enemy");
	Hero.guardGate();

	std::cout << std::endl << "************************" << std::endl << std::endl;

	FragTrap Enemy("Hero");

	Enemy.attack("Human");
	Enemy.beRepaired(10);
	Enemy.highFivesGuys();
	Enemy.takeDamage(66666);
	Enemy.attack("last Human");
	Enemy.highFivesGuys();
}