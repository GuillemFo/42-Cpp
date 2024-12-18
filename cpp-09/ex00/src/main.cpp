/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:18:19 by gforns-s          #+#    #+#             */
/*   Updated: 2024/12/18 22:35:19 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (av[1])
		std::cout << "bobobbob" <<std::endl;
	try
	{
		if (ac == 2)
		{
			BitcoinExchange btc;
			std::fstream inFile(av[1]);
			btc.loadCsvDB();
			btc.cmpInput(inFile);
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	

	return (0);
}
