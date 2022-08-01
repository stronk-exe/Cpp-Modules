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

int main()
{
	// ClapTrap ct("stronk");
	// ct.attack("lwz");
	// ct.beRepaired(2);
	// ct.takeDamage(1);
	ClapTrap	hero("Hero");
	ClapTrap	no_one;

	hero.attack("enemy");
	no_one.attack("the bus");
	hero.beRepaired(100);
	hero.takeDamage(99999);
	no_one.attack("last enemy");
	no_one.beRepaired(99);
}