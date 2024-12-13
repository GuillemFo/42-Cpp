/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:18:21 by gforns-s          #+#    #+#             */
/*   Updated: 2024/12/13 15:11:40 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	BitcoinExchange::loadCsvDB()
{
	std::fstream db_file("data.csv");
	if (!db_file.is_open())
		throw ("Missing Data file");
	std::string line;
	while (std::getline(db_file, line))
	{
		std::stringstream ss(line);
		std::string date;
		float nb;
		if (std::getline(ss, date, ',') && ss >> nb)
		{
			time_t 	dateKey = Date_check(date);
            _csvDB[dateKey] = nb;
		}
	}
}

std::time_t		BitcoinExchange::Date_check(const std::string date)
{
	strptime();	//https://cppscripts.com/strptime-cpp
	mktime();	//https://www.geeksforgeeks.org/mktime-function-in-c-stl/
}
