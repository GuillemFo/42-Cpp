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


std::string	rm_Const(const std::string &str)
{
	std::string ret = str;
	return (ret);
}


void	ScalarConverter::convert(const std::string &str)
{
	int		iVal;
	float	fVal;
	double	dVal;
	char	cVal;

	if (str == "-inff")	//check with cmath isinf and so...
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
		// else if	(ckFlo)
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

bool	ckFlo(const std::string str) //check if it has a f at the end // think if its necessary to check if it contains a '.' at some point to be 'f' type or not
{
	float result;
	if (str.find_first_of('f') == str.find_last_of('f') && str.find_first_of('f') == str.length())
	{
		std::string hold = rm_Const(str); //workable
		hold.resize(hold.length() -1); // removes last char from string which should be f
		std::stringstream tmp(hold); //workable to push it to float type
		tmp >> result;	//trying to change it
		if (tmp.fail() || !tmp.eof())	//if fails print non displayable, perform a .clear() and exec double?
		{
			std::cout << "Error loading stringstream" << std::endl;
			return (false);
		}
		return (true);
	}
	return (false);
	
}

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
	i = atoi(tmp.c_str());
	if (i >= 0 && i <= 255)
		isChar(static_cast<char>(i));
	else
		std::cout << "char: " << "Non displayable" << std::endl;	
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}
