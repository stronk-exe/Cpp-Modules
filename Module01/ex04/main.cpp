/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 11:17:13 by ael-asri          #+#    #+#             */
/*   Updated: 2022/07/22 11:17:15 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

int main(int ac, char **av)
{
	std::string	data;
	char	*fdata;
	char	*temp;
	size_t		found=0;
	int			i=0, j=0, x=0;

	
	if (ac == 4)
	{
		std::ifstream file(av[1]);
		std::ofstream newfile("newfile.replace");
		fdata = strdup("");
		while (getline(file, data))
		{
			found = data.find(av[2]);
			if (found != std::string::npos)
			{
				while ((i < found) & (data[i] != '\0'))
				{
					fdata[i] = data[i];
					i++;
				}
				x = i+strlen(av[2]);
				while (av[3][j] != '\0')
				{
					fdata[i] = av[3][j];
					i++;
					j++;
				}
				while (j < strlen(av[2]))
				{
					i++;
					j++;
				}
				fdata[i] = '\0';
				i = 0;
				temp = strdup("");
				while (x < data.length())
				{
					temp[i] = data[x];
					i++;
					x++;
				}
				temp[i] = '\0';
				fdata = strcat(fdata, temp);
				newfile << fdata << std::endl;
			}
			else
				newfile << data << std::endl;
		}
		file.close();
	}
	else
		std::cout << "invalid number of arguments\n";
	return (0);
}