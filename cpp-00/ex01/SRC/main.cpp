/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:52:25 by gforns-s          #+#    #+#             */
/*   Updated: 2024/08/06 12:46:28 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	PhoneBook book;
	std::string in;
	std::cout << "Welcome to my PhoneBook" << std::endl;
	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	while (1)
	{
		std::getline(std::cin, in);
		if (in == "ADD")
			book.addContact();
		else if (in == "SEARCH")
			book.searchContact();
		else if (in == "EXIT")
			book.exitProgram();
		else
			std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	}
}
