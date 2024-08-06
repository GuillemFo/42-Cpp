/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:51:32 by gforns-s          #+#    #+#             */
/*   Updated: 2024/08/06 12:20:26 by codespace        ###   ########.fr       */
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
	
	std::cout << "Plsease, type a number to expand the desired contact:" << std::endl;
	while (1)
	{
		std::cout << "[" << index % 8 << "]";
		// if (
			cont[index % 8].printContact_small(); // == 1)
			// break;
	}
	return (0);
}

void	PhoneBook::exitProgram()
{
	exit(0);
}