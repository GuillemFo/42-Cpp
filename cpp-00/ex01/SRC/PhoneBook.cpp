/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:51:32 by gforns-s          #+#    #+#             */
/*   Updated: 2024/08/06 12:56:07 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

PhoneBook::PhoneBook()
{
	index = 0;
}

int	PhoneBook::addContact()
{
	cont[index % 8].fillContact();
	index++;
	return (0);
}

int	PhoneBook::searchContact()
{
	int i = 0;
	std::string str;
	std::cout << "Plsease, type a number to expand the desired contact:" << std::endl;
	if (cont[i].getName() == "")
		std::cout << "Plsease, add a contact before search." << std::endl;
	while (cont[i].getName() != "" )
	{
		std::cout << "[" << i << "]";
		cont[i].printContact_small();
		i++;
	}
	std::getline(std::cin, str);
	if (!number)	//missing the way to check is only number
		std::cout << "Plsease, type a number to expand the desired contact:" << std::endl;
	else if (number) //missing the way to check is only number
		cont[missing number conversion from str var].printContact_big();
	return (0);
}

void	PhoneBook::exitProgram()
{
	exit(0);
}