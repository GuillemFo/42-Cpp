/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:18:19 by gforns-s          #+#    #+#             */
/*   Updated: 2025/02/04 11:02:02 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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
	}	
	return (0);
}


/*
	NOT WORKING:
		- Invalid dates on incoming file need to be expanded to the exception prints properly
		- Rounding up to the closest existant when date before existing in database. 
		- ALL PRINTS ARE NOT CORRECT, MISSING AMMOUNT OF COINS BEFORE THE CALC!!!
		


	The idea: store the map strptime -> mktime so it sorts itself and i do not need to check dates or anything, just iterator --
	
 */
