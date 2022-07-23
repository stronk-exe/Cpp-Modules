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

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	Zombie *z = new Zombie[N];
	int	i=0;
	while (i<N)
	{
		z[i].name = name;
		i++;
	}
	return (z);
}