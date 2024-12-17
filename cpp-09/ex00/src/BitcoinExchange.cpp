/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:18:21 by gforns-s          #+#    #+#             */
/*   Updated: 2024/12/17 09:38:45 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool isValidDate(int year, int month, int day)
{
	if (year < 1900 || month < 1 || month > 12 || day < 1)
		return false;

	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		daysInMonth[1] = 29;

	return day <= daysInMonth[month - 1];
}


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
			time_t	dateKey = Date_check(date);
			_csvDB[dateKey] = nb;
		}
	}
}

std::time_t		BitcoinExchange::Date_check(const std::string date)
{

}

float	BitcoinExchange::Value_check()
{


}

	//https://cppscripts.com/strptime-cpp
	//https://www.geeksforgeeks.org/mktime-function-in-c-stl/
	