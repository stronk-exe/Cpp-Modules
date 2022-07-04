#include "Header.hpp"

int	s_isalpha(std::string s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!isalpha(s[i]))
			return(0);
		i++;
	}
	return (1);
}

int	s_isdigit(std::string s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!isdigit(s[i]))
			return(0);
		i++;
	}
	return (1);
}

int	s_isalphanum(std::string s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!isprint(s[i]))
			return(0);
		i++;
	}
	return (1);
}

int add(Contact *ct, int i)
{
	std::string t;
    if (i == 8)
        i = 0;

    /*          firstName           */
    while (1)
	{
        std::cout << ">> First name?" << std::endl;
        std::cin >> t;
        if (s_isalpha(t) && !t.empty())
        {
            ct[i].setFirstName(t);
            break;
        }
        std::cout << "invalid form\n";
    }

    /*          lasttName           */
    while (1)
	{
        std::cout << ">> Last name?" << std::endl;
        std::cin >> t;
        if (s_isalpha(t) && !t.empty())
        {
            ct[i].setLastName(t);
            break;
        }
        std::cout << "invalid form\n";
    }

    /*          nickName           */
    while (1)
	{
        std::cout << ">> nick name?" << std::endl;
        std::cin >> t;
        if (s_isalphanum(t) && !t.empty())
        {
            ct[i].setNickName(t);
            break;
        }
        std::cout << "invalid form\n";
    }

    /*          phoneNumber           */
    while (1)
	{
        std::cout << ">> Phone name?" << std::endl;
        std::cin >> t;
        if (s_isdigit(t) && t.length() == 10)
        {
            ct[i].setPhoneNumber(t);
            break;
        }
        std::cout << "invalid form\n";
    }

    /*          darkestSecret           */
    while (1)
	{
        std::cout << ">> Darkest secret?" << std::endl;
        std::cin >> t;
        if (s_isalphanum(t) && !t.empty())
        {
            ct[i].setDarkestSecret(t);
            break;
        }
        std::cout << "invalid form\n";
    }
    i++;
    return (i);
}

void	search(Contact *ct, int x)
{
    if (x>=0)
    {
        std::cout << "--------------------------------------------" << std::endl;
        std::cout << "|    index"; //index
        std::cout << "| firstName"; //first name
        std::cout << "| last name"; //last name
        std::cout << "|  nickname|" << std::endl; //nickname
        std::cout << "--------------------------------------------" << std::endl;
        int i=0;
        if (x>8)
            x = 8;
        while (i < x)
        {
            std::cout << std::setw(10);
            std::cout << i;
            std::cout << '|';
            std::cout << std::setw(10);
            if ((ct[i].getFirstName()).size() >= 10)
                std::cout << (ct[i].getFirstName()).substr(0, 9) + '.';
            else
                std::cout << ct[i].getFirstName();
            std::cout << '|';
            std::cout << std::setw(10);
            if ((ct[i].getLastName()).size() >= 10)
                std::cout << (ct[i].getLastName()).substr(0, 9) + '.';
            else
                std::cout << ct[i].getLastName();
            std::cout << '|';
            std::cout << std::setw(10);
            if ((ct[i].getNickName()).size() >= 10)
                std::cout << (ct[i].getNickName()).substr(0, 9) + '.';
            else
                std::cout << ct[i].getNickName();
            std::cout << '|';
            std::cout << std::endl;
            i++;
        }
        // search with index
        std::string  t;
        while (1)
        {
            std::cout << "search for a contact\n";
            std::cin >> t;
            if (s_isdigit(t))
            {
                int n = stoi(t);
                if (n >= 0 && n<x)
                {
                    std::cout << "First name: " + ct[n].getFirstName() +"\n";
                    std::cout << "Last name: " + ct[n].getLastName() +"\n";
                    std::cout << "nickname: " + ct[n].getNickName() +"\n";
                    std::cout << "Phone number: " + ct[n].getPhoneNumber() +"\n";
                    std::cout << "Darkest secret: " + ct[n].getDarkestSecret() +"\n";
                    break;
                }
            }
            std::cout << "invalid contact\n";
        }
    }
    else
        std::cout << "the phonebook has no contacts\n";
}

int main()
{
	std::string cmd;
	Contact     ct[8];
    int         i;
    int         s;

    i = 0;
    s = 0;
    while (1)
    {
        std::cout << "Enter a command\n- ADD\n- SEARCH\n- EXIT" << std::endl;
        std::cin >> cmd;
        if (!cmd.compare("ADD"))
    	{
        	i = add(ct, i);
            s++;
        }
        else if (!cmd.compare("SEARCH"))
        	search(ct, s);
        else if (!cmd.compare("EXIT"))
            break;
    }
    return (1);
}