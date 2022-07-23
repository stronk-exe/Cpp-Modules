/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 00:12:49 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/23 00:12:50 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string _name )
{
	name = _name;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie *newZombie( std::string name )
{
	Zombie *z = new Zombie(name);
	if (!z)
	{
		std::cout << "Memory allocation failed!" << std::endl;
		exit(1);
	}
	return (z);
}

void	randomChump( std::string name )
{
	Zombie *z = new Zombie(name);
	if (!z)
	{
		std::cout << "Memory allocation failed!" << std::endl;
		exit(1);
	}
	z = newZombie(name);
	z->announce();
}

Zombie::~Zombie()
{
	std::cout << name << " destroyed!" << std::endl;
}