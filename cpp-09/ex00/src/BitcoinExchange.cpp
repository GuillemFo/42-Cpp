/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:18:21 by gforns-s          #+#    #+#             */
/*   Updated: 2025/01/30 01:20:01 by gforns-s         ###   ########.fr       */
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
		return (false);

	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		daysInMonth[1] = 29;

	return (day <= daysInMonth[month - 1]);
}

std::string trim(const std::string &str)
{
	size_t first = str.find_first_not_of(" ");
	if (first == std::string::npos) return "";
	size_t last = str.find_last_not_of(" ");
	return str.substr(first, last - first + 1);
}


std::string		Date_check(const std::string &date)
{
	int year, month, day;
	char delim1, delim2;

	std::istringstream ss(date);
	ss >> year >> delim1 >> month >> delim2 >> day;
	if (ss.fail() || delim1 != '-' || delim2 != '-' || !isValidDate(year, month, day)) //maybe check with atoi and if is number before passing it...
		std::cout << "Date error" << std::endl;
	return (date); // if the date is wrong stop the calc for this value and go next
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
			std::string	dateKey = Date_check(date);
			_csvDB[dateKey] = nb;
		}
	}
}

void	BitcoinExchange::cmpInput(std::fstream &inFile)
{
	if (!inFile.is_open())
		throw "Missing Data file";
	std::string line2;
	while (std::getline(inFile, line2))
	{
		std::stringstream ss2(line2);
		std::string date2;
		std::string valueStr;
		float nb;
		if (std::getline(ss2, date2, '|'))
		{
			date2 = trim(date2);
			if (std::getline(ss2, valueStr))
			{
				valueStr = trim(valueStr);
				std::stringstream tmp(valueStr);
				tmp >> nb;
				std::string dateKey2 = Date_check(date2);
				if (Value_check(nb))
				{
					_csvDB[dateKey2] = nb;
					//std::cout << "db pos:" << dateKey2 << ":" << nb << ":" << std::endl; //Finally fixed i think
					//std::cout << _csvDB[dateKey2] << std::endl;
				}
			}
		}
	}
}


bool	BitcoinExchange::Value_check(float nb)
{
	if (nb < static_cast<float>(0)  || nb > static_cast<float>(1000))
	{
		if (nb < static_cast<float>(0))
			std::cout << "Error: not a positive number." << std::endl;
		else if (nb > static_cast<float>(1000))
			std::cout << "Error: too large a number." << std::endl;
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
	
