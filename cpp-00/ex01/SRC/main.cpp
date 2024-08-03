/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:52:25 by gforns-s          #+#    #+#             */
/*   Updated: 2024/08/03 23:05:01 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	PhoneBook book;
	std::string in;
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
