/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:51:32 by gforns-s          #+#    #+#             */
/*   Updated: 2024/08/03 23:06:41 by codespace        ###   ########.fr       */
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
	index = 0;
	std::cout << "Plsease, select a contact" << std::endl;
	while (index < 8 && (cont[index].getName() != ""))
	{
		std::cout << "Index:" << index << "|" << cont[index].getName() << "|" << cont[index].getSurname() << "|" << cont[index].getNick() << std::endl;
		index++;
	}
	return (0);
}

void	PhoneBook::exitProgram()
{
	exit(0);
}