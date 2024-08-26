/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:51:32 by gforns-s          #+#    #+#             */
/*   Updated: 2024/08/26 13:44:27 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

PhoneBook::PhoneBook()
{
	contQtt = 0;
}

int	PhoneBook::addContact()
{
	cont[contQtt % 8].fillContact();
	contQtt++;
	return (0);
}

int	PhoneBook::searchContact()
{
	int i = 0;
	std::string str;
	if (contQtt == 0)
	{	
		std::cout << "Plsease, add a contact before search." << std::endl;
		return (1);
	}
	std::cout << "Available contacts:" << std::endl;
	while (i < contQtt  && i < 8)
	{
		std::cout << "[" << i << "]";
		cont[i].printContact_small();
		i++;  
	}
	do
	{
		std::cout << "Plsease, type a number to expand the desired contact:" << std::endl;
		getline(std::cin, str);
		if (std::cin.eof())
			exit (1);
		else if (!str.empty())
		{
			size_t e = 0;
			while (e < str.length())
			{
				if (!isdigit(str[e]))
				{
					str = "";
					std::cout << "Only numbers allowed" << std::endl;
					break;
				}
				e++;
			}
			if (!str.empty() && atoi(str.c_str()) >= i)
				str = "";
		}
	}
	while (str.empty());
	cont[atoi(str.c_str())].printContact_big();
	return (0);
}

void	PhoneBook::exitProgram()
{
	exit(0);
}