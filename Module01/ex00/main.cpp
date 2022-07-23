/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 00:12:58 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/23 00:12:59 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *z;
	z = newZombie("stronk");
	z->announce();
	randomChump("gg");
	randomChump("goat");
	randomChump("nadi");
	delete(z);
}