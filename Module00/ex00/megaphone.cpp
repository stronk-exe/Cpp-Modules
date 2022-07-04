#include <iostream>

int main(int ac, char **av)
{
    int i, x=1;

    if (ac<2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return(0);
    }
    else
    {
        while (x < ac)
        {
            i=0;
            while (av[x][i])
            {
                if (av[x][i] >= 'a' && av[x][i] <= 'z')
                    std::cout << char(av[x][i]-32);
                else
                    std::cout << av[x][i];
                i++;
            }
            if (x+1 < ac)
                std::cout << " ";
            x++;
        }
    }
    std::cout << "" <<std::endl;
}