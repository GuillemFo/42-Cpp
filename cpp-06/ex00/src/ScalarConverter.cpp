/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:51:01 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/18 12:36:43 by gforns-s         ###   ########.fr       */
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

bool	ckCha(const std::string &str)
{
	if (str.length() == 1 && isprint(str[0]))
		return (true);
	return (false);
}


bool	ckInt(const std::string &str)
{
	long	num;
	const char	*tmp = str.c_str();
	char	*endp;
	num = std::strtol(tmp, &endp, 10);
	if (*endp == '\0' && num >= std::numeric_limits<int>::min() && num <= std::numeric_limits<int>::max())
		return (true);
	return (false);
}


bool	ckFlo(const std::string &s)
{
	if (s == "-inff" || s == "+inff" || s == "nanf")
		return (true);
	if (s.empty())
		return false;
	std::string res = s;
	if (res.length() > 0 && res[res.length() - 1] == 'f')
		res.erase(res.length() - 1);
	else 
		return (false);
	double f;
	char* end;
	f = std::strtod(res.c_str(), &end);
	if (end == res.c_str() || *end != '\0' || f < FLOAT_MIN || 
		f > std::numeric_limits<float>::max() || std::isnan(f))
		return (false);
	return (true);
}

bool	ckDou(const std::string &str)
{
	if (str == "-inf" || str == "+inf" || str == "nan")
		return (true);
	if (str.empty())
		return (false);
	double	d;
	char	*end;
	d = std::strtod(str.c_str(), &end);
	if (end == str.c_str() || *end != '\0' || d == std::numeric_limits<double>::infinity()
		|| d == -std::numeric_limits<double>::infinity() || std::isnan(d))
		return (false);
	return (true);
}

char	getType(const std::string &str)
{
	if (ckInt(str))
		return ('i');
	else if (ckDou(str))
		return ('d');
	else if (ckFlo(str)) 
		return ('f');
	else if (ckCha(str))
		return ('c');
	return ('n');
}

void ScalarConverter::convert(const std::string &str)
{
	char type = getType(str);

	if (type == 'c')
	{
		if (isprint(static_cast<int>(str[0])))
			std::cout << "char: " << static_cast<char>(str.at(0)) << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(str.at(0)) << std::endl;
		std::cout << "float: " << static_cast<float>(str.at(0)) << std::endl;
		std::cout << "double: " << static_cast<double>(str.at(0)) << std::endl;
	}
	

	else if (type == 'i')
	{
		int num;
		num = atoi(str.c_str());
		if (num <= 255 && num >= 0)
		{
			if (isprint(num))
				std::cout << "char: " << static_cast<char>(num) << std::endl;
		}
		else
			std::cout << "char: " << "Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(num) << std::endl;
		std::cout << std::fixed << std::setprecision(1); // forces cout to print full number instead of scientific notation
		std::cout << "float: " << std::setprecision(1) << static_cast<float>(num) << std::endl;
		std::cout << "double: " << std::setprecision(1) << static_cast<double>(num) << std::endl;
	}


	else if (type == 'f')
	{
		std::string tmp = str;
		tmp.resize(tmp.length() -1);
		if (str == "-inff" || str == "+inff" || str == "nanf")
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << tmp << "f" << std::endl;
			std::cout << "double: " << tmp << std::endl;
			return ;
		}
		/*
		if (isprint(static_cast<int>()))
			std::cout << "char: " << static_cast<char>() << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>() << std::endl;
		std::cout << "float: " << static_cast<float>() << "f" << std::endl;
		std::cout << "double: " << tmp << std::endl;
		*/
		std::cout << "Is Float" << std::endl;
	}


	else if (type == 'd')
	{
		if (str == "-inf" || str == "+inf" || str == "nan")
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << str << "f" << std::endl;
			std::cout << "double: " << str << std::endl;
			return ;
		}
		std::cout << "is double" << std::endl;
	}

	
	else if (type == 'n')
		std::cout << "is trash" << std::endl;
}
