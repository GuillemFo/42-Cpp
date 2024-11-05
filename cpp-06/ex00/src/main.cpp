/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:49:00 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/05 11:12:59 by gforns-s         ###   ########.fr       */
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
	std::string str = "550.f";
	std::string tmp(str);
	size_t pos = tmp.find(".");
	size_t len = tmp.length();
	size_t fpos = tmp.find_last_of("f");
	if ((pos != 0 && pos != std::string::npos) && pos != len && pos != (len -1))
	{
		if (fpos != std::string::npos && fpos == tmp.find_first_of("f"))	//check if prev to f is not .
		//if else checking f - 1 to be a number then using stringsream load the string - the f to a float type or double type and if it works, its a float.
			std::cout << "ok" << std::endl;
		else
			std::cout << "Double?" << std::endl;
	}
	else
		std::cout << "not valid" << std::endl;
	
	return 0;
}


//https://en.cppreference.com/w/cpp/language/static_cast
//https://chatgpt.com/c/6729e70d-5a94-800a-9c25-4f57ef2d64eb
//https://cplusplus.com/reference/string/string/find/
//https://cplusplus.com/reference/string/string/npos/
