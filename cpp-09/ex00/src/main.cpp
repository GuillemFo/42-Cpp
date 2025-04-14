/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:18:19 by gforns-s          #+#    #+#             */
/*   Updated: 2025/04/14 10:34:26 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


//Used map because is the easiest way to insert manage and find data and use [] to work with them without iterating it entirely.
int	main(int ac, char **av)
{
	if (av[1])
	{
		if (ac == 2)
		{
			BitcoinExchange btc;
			std::fstream inFile(av[1]);
			try
			{
				btc.loadCsvDB();
			}
			catch(const std::exception& e)
			{
				std::cout << e.what() << std::endl;
				return (-1);
			}
			btc.compInput(inFile);
		}
		else
		{
			std::cout << "Error: Too may arguments" << std::endl;
		}
	}
	else
	{
		std::cout << "Error: No arguments found" << std::endl;
	}
	return (0);
}


/*
	NOT WORKING:
		- If database contains something wrong, the error crashes because the exception. need to build exception in a string type and catch a string msg.
		


	The idea: store the map strptime -> mktime so it sorts itself and i do not need to check dates or anything, just iterator --
	
 */
