/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:18:05 by gforns-s          #+#    #+#             */
/*   Updated: 2025/02/03 09:28:25 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>
#include <ctime>
#include <stdexcept>
#include <cstring>

class BitcoinExchange
{
	private:
		std::map<std::string, float> _csvDB;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &cpy);

		void			loadCsvDB();
		//std::time_t		Date_check(const std::string &date);
		void			compInput(std::fstream &inFile);
		bool			Value_check(float nb);
		
	class InputErr : public std::exception
	{
		public:
			virtual const char* what() const throw();	
	};
	class NumNegative : public std::exception
	{
		public:
			virtual const char* what() const throw();	
	};
	class NumTooLarge : public std::exception
	{
		public:
			virtual const char* what() const throw();	
	};
	class FileOpenErr : public std::exception
	{
		public:
			virtual const char* what() const throw();	
	};
};

