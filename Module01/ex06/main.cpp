/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 23:30:14 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/22 23:30:15 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		HarlFilter hrf;
		hrf.complain(av[1]);
	}
	else
		std::cout << "invalid number of arguments\n";
	return (1);
}