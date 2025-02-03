/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:18:19 by gforns-s          #+#    #+#             */
/*   Updated: 2025/02/03 09:51:00 by gforns-s         ###   ########.fr       */
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
			btc.loadCsvDB();
			btc.compInput(inFile);
		}
	}	
	return (0);
}
