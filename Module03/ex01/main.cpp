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

int main()
{
	ClapTrap ct("stronk");
	ScavTrap st("goat");
	ct.attack("lwz");
	ct.beRepaired(2);
	ct.takeDamage(1);
	st.attack("zombies");
	st.beRepaired(22);
	st.takeDamage(11);
	st.guardGate();
}