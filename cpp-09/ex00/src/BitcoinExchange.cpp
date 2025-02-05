/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:18:21 by gforns-s          #+#    #+#             */
/*   Updated: 2025/02/05 12:45:15 by gforns-s         ###   ########.fr       */
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

std::string trim(const std::string &str)	//ok?
{
	size_t first = str.find_first_not_of(" ");
	if (first == std::string::npos)
		return ("");
	size_t last = str.find_last_not_of(" ");
		return (str.substr(first, last - first + 1));
}


bool Date_check(const std::string &date)
{
	int year, month, day;
	char delim1, delim2;
	
	std::istringstream ss(date);
	ss >> year >> delim1 >> month >> delim2 >> day;
	if (ss.fail() || delim1 != '-' || delim2 != '-' || !isValidDate(year, month, day))
		return (false);
	return (true);
}


time_t BitcoinExchange::DateToTime(const std::string dat)
{
	std::tm tmp = {};
	strptime(dat.c_str(), "%Y-%m-%d", &tmp);
	return (mktime(&tmp));
}


void	BitcoinExchange::loadCsvDB()
{
	std::fstream db_file("data.csv");
	if (!db_file.is_open())
	{
		throw BitcoinExchange::MissingDB();
	}
	std::string line2;
	std::getline(db_file, line2);
	if (line2 != "date,exchange_rate")
		throw BitcoinExchange::FirstLineDB_Err();
	std::string line;
	while (std::getline(db_file, line))
	{
		std::stringstream ss(line);
		std::string date;
		float nb;
		try
		{
			if (std::getline(ss, date, ',') && ss >> nb)
			{
				if (!Date_check(date))
					throw "Error: bad input =>" + date;
				else
				{
					//std::string	dateKey = date;
					//_csvDB[dateKey] = nb;
					
					_csvDB[BitcoinExchange::DateToTime(date)] = nb;
				}
			}	
			else
				throw "Error: bad input =>" + line2;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}		
	}
}

void BitcoinExchange::compInput(std::fstream &inFile)
{
	try
	{
		if (!inFile.is_open())
			throw BitcoinExchange::FileOpenErr();	
		std::string line;
		std::getline(inFile, line);
		if (line != "date | value")
			throw BitcoinExchange::FirstLineFileErr();

		while (std::getline(inFile, line))
		{
			std::stringstream ss2(line);
			std::string date2, valueStr;
			float nb;

			try 
			{
				if (std::getline(ss2, date2, '|'))
				{
					date2 = trim(date2);
					if (!Date_check(date2))
						throw std::string("Error: bad input => ") + date2;

					if (std::getline(ss2, valueStr))
					{
						valueStr = trim(valueStr);
						std::stringstream tmp(valueStr);
						tmp >> nb;
						time_t dateKey2 = BitcoinExchange::DateToTime(date2);

						if (Value_check(nb))
						{
							std::map<time_t, float>::iterator it = _csvDB.find(dateKey2);
							if (it != _csvDB.end())
								std::cout << date2 << " => " << nb  << " = " << it->second * nb << std::endl;
							else
							{
								it = _csvDB.lower_bound(dateKey2);
								if (it != _csvDB.begin())
								{
									--it;
									std::cout << date2 << " => " << nb << " = " << it->second * nb << std::endl;
								}
								else
								{
									std::cout << date2 << " => " << nb  << " = " << _csvDB.begin()->second * nb << std::endl;
								}
							}
						}
						else if (nb < static_cast<float>(0))
							throw BitcoinExchange::NumNegative();
						else if (nb > static_cast<float>(1000))
							throw BitcoinExchange::NumTooLarge();
						else
							throw std::string("Error: bad input => ") + line;
					}
				}
				else
					throw std::string("Error: bad input => ") + line;
			}
			catch (const std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
			catch (const std::string &msg)
			{
				std::cout << msg << std::endl;
			}
			catch (const char *msg)
			{
				std::cout << msg << std::endl;
			}
		}
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::string &msg)
	{
		std::cout << msg << std::endl;
	}
	catch (const char *msg)
	{
		std::cout << msg << std::endl;
	}
}


bool	BitcoinExchange::Value_check(float nb)
{

	if (nb < static_cast<float>(0) || nb > static_cast<float>(1000))
		return (false);
	return (true);
}


const char *BitcoinExchange::FileOpenErr::what() const throw()
{
	return ("Error: could not open file.");
}

const char *BitcoinExchange::NumNegative::what() const throw()
{
	return ("Error: not a positive number.");
}

const char *BitcoinExchange::NumTooLarge::what() const throw()
{
	return ("Error: too large a number.");
}

const char *BitcoinExchange::MissingDB::what() const throw()
{
	return ("Error: missing database, ensure there is a data.csv file");
}

const char *BitcoinExchange::FirstLineFileErr::what() const throw()
{
	return ("Error: expected 'data | value' on first line of the loaded file and all the data should be structured as it");
}

const char *BitcoinExchange::FirstLineDB_Err::what() const throw()
{
	return ("Error: expected 'date,exchange_rate' on first line of the database (data.csv) and all the data should be structured as it");
}

	//https://cppscripts.com/strptime-cpp
	//https://www.geeksforgeeks.org/mktime-function-in-c-stl/
	
