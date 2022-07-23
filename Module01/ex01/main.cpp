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
	int i=0, N=3;
	Zombie *z = zombieHorde(N, "stronk");
	if (!z)
	{
		std::cout << "Memory allocation failed!" << std::endl;
		exit(1);
	}
	while (i<N)
	{
		z[i].announce();
		i++;
	}
	delete[] z;
}