/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 19:28:53 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/05 19:28:54 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <cstdlib>

class Contact
{
	private:
		std::string		firstName;
        std::string		lastName;
        std::string 	nickName;
        std::string     phoneNumber;
        std::string		darkestSecret;
	public:
		void	setFirstName(std::string);
		std::string	getFirstName(void);
		void	setLastName(std::string);
		std::string	getLastName(void);
		void	setNickName(std::string);
		std::string	getNickName(void);
		void	setPhoneNumber(std::string);
		std::string		getPhoneNumber(void);
		void	setDarkestSecret(std::string);
		std::string	getDarkestSecret(void);
};

class	PhoneBook
{
	private:
		Contact	ct[8];
	public:
		int		add(int);
		void	search(int);
		// Contact getContact(void);
		// void	setContact(Contact);
};

#endif