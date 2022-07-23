/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 00:42:23 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/23 00:42:26 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *z;
	z = z->zombieHorde(3, "stronk");
	int i=0;
	while (i<3)
	{
		z[i].announce();
		i++;
	}
	// delete(z);
	// i = 0;
	// while (i<3)
	// {
	// 	i++;
	// }
	z->~Zombie();
	system("leaks zombieHorde");
}