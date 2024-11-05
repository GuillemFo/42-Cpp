/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:49:00 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/05 09:21:06 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ScalarConverter.hpp"
#include <iostream>

#include <cmath>
#include <string>
#include <sstream>
#include <stdexcept>
#include <limits>

int main()
{
	std::string i = "-1";
	std::stringstream tmp(i);
	int result;
	bool flag = true;
	tmp >> result;
	if (tmp.fail() || !tmp.eof())
	{
		std::cout << "Error loading stringstream" << std::endl;
		flag = false;
	}
	if (flag == true)
	std::cout << "Is int: " << result << "f" << std::endl;

	
	return 0;
}


//https://en.cppreference.com/w/cpp/language/static_cast
