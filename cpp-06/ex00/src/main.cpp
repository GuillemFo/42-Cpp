/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:49:00 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/30 09:45:16 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ScalarConverter.hpp"
#include <iostream>

int main()
{
	std::string in = "Test";
	char* mod = std::strcpy(in, in.c_str());
	

	std::cout << "opt: " << static_cast<char>(mod) << std::endl;
	return 0;
}


//https://en.cppreference.com/w/cpp/language/static_cast
