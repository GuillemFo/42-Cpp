/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:49:00 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/05 10:17:14 by gforns-s         ###   ########.fr       */
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
	std::string str = "55";
	std::string tmp(str);
	int i;
	i = atoi(tmp.c_str());
	if (i >= 0 && i <= 255)
	{
		if (isprint(i) != 0)
			std::cout << "char: " << static_cast<char>(i) << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
	}
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
	
	return 0;
}


//https://en.cppreference.com/w/cpp/language/static_cast
