/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:18:05 by gforns-s          #+#    #+#             */
/*   Updated: 2024/12/20 18:47:09 by codespace        ###   ########.fr       */
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
		void			cmpInput(std::fstream &inFile);
		bool			Value_check(float nb);
		
	class DateError : public std::exception
	{
		public:
			const char* what() const throw();		
	};
};

