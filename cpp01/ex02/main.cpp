/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:08:43 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/21 19:08:44 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string *p = &s;
	std::string &r = s;

	std::cout << "The memory address of the string variable: " << &s << std::endl;
	std::cout << "The memory address held by stringPTR: " << p << std::endl;
	std::cout << "The memory address held by stringREF: " << &r << std::endl<< std::endl;

	std::cout << "The value of the string variable: " << s << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *p << std::endl;
	std::cout << "The value pointed to by stringREF: " << r << std::endl;
}