/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:22:31 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/21 19:22:32 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon		&wp;
	public:
	//	HumanA( Weapon );
		HumanA( std::string name, Weapon &wp): name(name), wp(wp) {};
		void	attack( void );
};

#endif