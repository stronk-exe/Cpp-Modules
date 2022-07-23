/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 00:42:18 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/23 00:42:19 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Zombie
{
	private:
		std::string	name;
	public:
		~Zombie();
		void announce( void );
		Zombie* newZombie( std::string name );
		void randomChump( std::string name );
		Zombie* zombieHorde( int N, std::string name );
};

#endif