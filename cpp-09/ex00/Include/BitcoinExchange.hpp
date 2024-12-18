/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:18:05 by gforns-s          #+#    #+#             */
/*   Updated: 2024/12/18 22:42:34 by gforns-s         ###   ########.fr       */
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
		std::map<std::time_t, float> _csvDB;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &cpy);

		void			loadCsvDB();
		//std::time_t		Date_check(const std::string &date);
		void			cmpInput(std::fstream &inFile);
		float			Value_check(float nb);
		
	class DateError : public std::exception
	{
		public:
			const char* what() const throw();		
	};
};

