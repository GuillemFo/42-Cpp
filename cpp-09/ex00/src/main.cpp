/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:18:19 by gforns-s          #+#    #+#             */
/*   Updated: 2025/02/03 12:11:14 by gforns-s         ###   ########.fr       */
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
		- Invalid dates on incoming file (are not printed in console)
		- Rounding up to the closest existant value before the specific date if no value found
 */
