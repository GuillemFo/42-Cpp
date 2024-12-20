/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:18:21 by gforns-s          #+#    #+#             */
/*   Updated: 2024/12/20 17:45:39 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::~BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	*this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
	{
		this->_csvDB = other._csvDB;
	}
	return (*this);
}



bool isValidDate(int year, int month, int day)
{
	if (year < 1900 || month < 1 || month > 12 || day < 1)
		return false;

	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		daysInMonth[1] = 29;

	return day <= daysInMonth[month - 1];
}

std::time_t		Date_check(const std::string &date)
{
	struct tm tmDate = {};
	if (strptime(date.c_str(), "%Y-%m-%d", &tmDate) == NULL)
		std::cout << "Date not valid" << std::endl;
	return (mktime(&tmDate));
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

void	BitcoinExchange::cmpInput(std::fstream &inFile)
{
	if (!inFile.is_open())
		throw "Missing Data file";
	std::string line;
	while (std::getline(inFile, line))
	{
		std::stringstream ss1(line);
		std::string date2;
		
		float nb;
		if (std::getline(ss1, date2, '|') && ss1 >> nb)
		{
			time_t	dateKey = Date_check(date2);
			if (Value_check(nb) == true)
				std::cout << "maybe works:" << _csvDB[dateKey] * nb << std::endl;
			else
				std::cout << "Not valid:" << nb << std::endl;
		}
	}
}



bool	BitcoinExchange::Value_check(float nb)
{
	if (static_cast<float>(0) > nb && static_cast<float>(1000) > nb)
	{
		std::cout << "Error too big or too small number" << std::endl;
		return (false);
	}
	return (true);
}
const char *BitcoinExchange::DateError::what(void) const throw()
{
	return ("Invalid date!!");
}

	//https://cppscripts.com/strptime-cpp
	//https://www.geeksforgeeks.org/mktime-function-in-c-stl/
