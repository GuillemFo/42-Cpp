/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:52:25 by gforns-s          #+#    #+#             */
/*   Updated: 2024/08/26 15:32:03 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int	main()
{
	PhoneBook book;
	std::string in;
	std::cout << "Welcome to my PhoneBook" << std::endl;
	while (1)
	{
		std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, in);
		if (std::cin.eof())
			exit (1);
		else if (in == "ADD")
			book.addContact();
		else if (in == "SEARCH")
			book.searchContact();
		else if (in == "EXIT")
			book.exitProgram();
	}
}
