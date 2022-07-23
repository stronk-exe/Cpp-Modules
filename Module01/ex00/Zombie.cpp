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

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie *Zombie::newZombie( std::string _name )
{
	Zombie *z = new Zombie;
	z->name = _name;
	return (z);
}

void	Zombie::randomChump( std::string name )
{
	Zombie *z = new Zombie;
	z = z->newZombie(name);
	z->announce();
}

Zombie::~Zombie()
{
	std::cout << name << " destroyed!" << std::endl;
}