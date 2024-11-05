  /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:51:01 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/28 13:50:57 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	*this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return (*this);
}

void	ScalarConverter::convert(const std::string &str)
{
	int		iVal;
	float	fVal;
	double	dVal;
	char	cVal;

	if (str == "-inff")
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "-inff" << std::endl;
		std::cout << "double: " << "-inf" << std::endl;
	}
	else if (str == "+inff")
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "+inff" << std::endl;
		std::cout << "double: " << "+inf" << std::endl;
	}
	else if (str == "nanf")
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "nanf" << std::endl;
		std::cout << "double: " << "nan" << std::endl;
	}
	else if (str == "-inf")
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "impossible" << std::endl;
		std::cout << "double: " << "-inf" << std::endl;
	}
	else if (str == "+inf")
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "impossible" << std::endl;
		std::cout << "double: " << "+inf" << std::endl;
	}
	else if (str == "nan")
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "nanf" << std::endl;
		std::cout << "double: " << "nan" << std::endl;
	}
	else
	{
		if (str.length() == 1)
			isChar(str[0]);
		else if (ckInt(str))	
			isInt(str); 			//use stringstream >> to convert and look for issues with the .fail, if fail, print non convertible and reset the fail status with .clear()
		// else if	()
		// 	isFloat();
		// else if ()	//stof
		// 	isDouble();	//stod	
	}
}

bool	ckInt(const std::string str)
{
	std::stringstream tmp(str);
	int result;

	tmp >> result;
	if (tmp.fail() || !tmp.eof())
	{
		std::cout << "Error loading stringstream" << std::endl;
		return (false);
	}
	return (true);
}

// bool	ckFlo(std::string tmp) //check if it has a f at the end
// {

	
// }

// bool	ckDou(std::stringstream tmp) //check if it has a . somewhere after a number and that has numbers after + no f at the end.
// {


// }


void	isChar(char c)
{
	if (isprint(c) != 0)
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;

}

void	isInt(const std::string str)
{
	std::string tmp(str);
	int i;

	if (i >= 0 && i <= 255)
		isChar(static_cast<char>(i));
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}
