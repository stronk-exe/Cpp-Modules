#include <iostream>
#include <string>

using namespace std;

class PhoneBook
{
    private:
        Contact ct[8];
    public:
        string getPhoneBook();
};

string PhoneBook::getPhoneBook()
{
    return contact;
};

class Contact
{
    private:
		// string name;
        string  firstName;
        string  lastName;
        string  nickName;
        int     ctt;
        int     phoneNumber;
        string  darkestSecret;
    public:
        void getContact(string firstName, string lastName, string nickName, int phoneNumber, string darkestSecret)
        {
            this.firstName
        };
};

int main()
{
    // instance of class PhoneBook
    Contact ct;
    string haraka;

    ct.firstName = "gg";
    

    while (1)
    {
        cout << "DIR CHI 7ARAKA" <<endl;
        cin >> haraka;
        if (!haraka.compare("ADD"))
        {
           // while (1)
            //{
                cout << ">> First name?" <<endl;
                cin >> ct.firstName;
                cout << ">> Last name?" <<endl;
                cin >> ct.lastName;
                cout << ">> Nickname?" <<endl;
                cin >> ct.nickName;
                cout << ">> Phone number?" <<endl;
                cin >> ct.phoneNumber;
                cout << ">> Darkest secret?" <<endl;
                cin >> ct.darkestSecret;
                if (!(ct.firstName).empty() && !(ct.lastName).empty() && !(ct.nickName).empty()
                    /*&& !(ct.phoneNumber).empty()*/ && !(ct.darkestSecret).empty())
                {
                    std::cout << "we ok" << std::endl;
                }
                else
                {
                    std::cout << "we not" << std::endl;
                }
           // }
        }
        else if (!haraka.compare("SEARCH"))
        {
            std::cout << "|           "; //index
            std::cout << "|           "; //first name
            std::cout << "|           "; //last name
            std::cout << "|           |" << std::endl; //nickname
            std::cout << "HAHOWA" + ct.firstName << std::endl;
        }
        else if (!haraka.compare("EXIT"))
        {
        //  destroy everything
            // return (0);
            break;
        }
     //   free(haraka);
    }
    return (1);
}