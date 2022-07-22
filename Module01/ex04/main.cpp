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

	fdata = strdup("");
	temp = strdup("");
	if (ac == 4)
	{
		std::ifstream file(av[1]);
		std::ofstream newfile("newfile.replace");
		while (getline(file, data))
		{
			// std::cout << "whats good user, " << data << std::endl;
			found = data.find(av[2]);
			if (found != std::string::npos)
			{
				// std::cout << "it's present here " << found << std::endl;
				// data.copy(fdata, found, 0);
				while (i < found)
				{
					fdata[i] = data[i];
				//	std::cout <<fdata[i];
					i++;
				}
			//	std::cout << "data till found: " << fdata << std::endl;
				x = i+strlen(av[2]);
				while (av[3][j] != '\0')
				{
					fdata[i] = av[3][j];
				//	std::cout <<fdata[i];
					i++;
					j++;
					// found++;
				}
			//	std::cout << j << i <<x<< std::endl;
				while (j < strlen(av[2]))
				{
					i++;
					j++;
				}
				std::cout << i << std::endl;
				i = 0;
				while (x < data.length())
				{
					temp[i] = data[x];
				//	std::cout <<fdata[i];
					i++;
					x++;
				}
				// data.copy(fdata,x,data.length())
				strcat(fdata, temp);
				// fdata[i] = '\0';
				// std::cout << fdata << "-\n";
				// exit(1);
				// fdata = data;
				// while (av[3][i] != '\0')
				// {
				// 	i++;
				// }
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