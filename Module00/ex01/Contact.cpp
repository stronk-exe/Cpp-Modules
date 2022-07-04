#include "Header.hpp"

void	Contact::setFirstName(std::string fName)
{
	firstName = fName;
}

std::string	Contact::getFirstName()
{
	return(firstName);
}

void	Contact::setLastName(std::string lName)
{
	lastName = lName;
}

std::string	Contact::getLastName()
{
	return(lastName);
}

void	Contact::setNickName(std::string nName)
{
	nickName = nName;
}

std::string	Contact::getNickName()
{
	return(nickName);
}

void	Contact::setPhoneNumber(std::string pNumber)
{
	phoneNumber = pNumber;
}

std::string	Contact::getPhoneNumber()
{
	return(phoneNumber);
}

void	Contact::setDarkestSecret(std::string dSecret)
{
	darkestSecret = dSecret;
}

std::string	Contact::getDarkestSecret()
{
	return(darkestSecret);
}