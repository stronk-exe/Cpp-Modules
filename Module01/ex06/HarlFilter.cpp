/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 23:29:55 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/22 23:30:01 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

void HarlFilter::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl
				<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl
				<< "I really do!" << std::endl;
}

void HarlFilter::info( void )
{
	std::cout << "[ INFO ]" << std::endl
				<< "I cannot believe adding extra bacon costs more money." << std::endl
				<< "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void HarlFilter::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl
				<< "I think I deserve to have some extra bacon for free." << std::endl
				<< "I've been coming for years whereas you started working here since last month." << std::endl;
}

void HarlFilter::error( void )
{
	std::cout << "[ ERROR ]" << std::endl
				<< "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void HarlFilter::complain( std::string level )
{
	std::string array[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(HarlFilter::*pmf[])(void) = {&HarlFilter::debug, &HarlFilter::info, &HarlFilter::warning, &HarlFilter::error};
	int	i=0;

	while (i < 4)
	{
		if (array[i] == level)
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			while (i<4)
			{
				(this->*pmf[i])();
				std::cout << std::endl;
				i++;
			}
			break;
		case 1:
			while (i<4)
			{
				(this->*pmf[i])();
				std::cout << std::endl;
				i++;
			}
			break;
		case 2:
			while (i<4)
			{
				(this->*pmf[i])();
				std::cout << std::endl;
				i++;
			}
			break;
		case 3:
			while (i<4)
			{
				(this->*pmf[i])();
				std::cout << std::endl;
				i++;
			}
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}