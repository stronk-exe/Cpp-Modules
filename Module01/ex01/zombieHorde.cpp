/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 00:44:02 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/23 00:44:03 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *z = new Zombie[N];
	if (!z)
	{
		std::cout << "Memory allocation failed!" << std::endl;
		exit(1);
	}
	int	i=0;
	while (i<N)
	{
		z[i].setName(name);
		i++;
	}
	return (z);
}