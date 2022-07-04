#ifndef SAMPLE_CLASS_H // CONTACT
#define SAMPLE_CLASS_H // CONTACT

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
        std::string     		phoneNumber;
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
		Contact	ct;
	public:
		Contact getContact(void);
		void	setContact(Contact);
};

#endif