/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:22:41 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/21 19:22:42 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon		*wp;
	public:
		HumanB( std::string name ): name(name) {};
		// HumanB( std::string name, Weapon wp): name(name), wp(wp) {};
		// HumanB( std::string name, Weapon wp): name(name), wp(wp) {};
		void	setWeapon( Weapon );
		void	attack( void );
};

#endif