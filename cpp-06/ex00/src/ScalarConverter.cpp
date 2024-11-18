/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:51:01 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/18 13:51:50 by gforns-s         ###   ########.fr       */
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


bool	ckFlo(const std::string &str)
{
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (true);
	if (str.empty())
		return false;
	std::string res = str;
	size_t pos = str.find('.');
	if (pos == std::string::npos) 
	{
		if (res.length() > 0 && res[res.length() - 1] == 'f')
			res.erase(res.length() - 1);
		else 
			return (false);
		double	f;
		char	*end;
		f = std::strtod(res.c_str(), &end);
		if (end == res.c_str() || *end != '\0' || f < FLOAT_MIN || f > std::numeric_limits<float>::max() || std::isnan(f))
			return (false);
		return (true);
	}
	else
	{
		std::cout << "next step!!!" <<std::endl;
		//proper protection for before the . and after the . to be a digit
	}

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
	if (end == str.c_str() || *end != '\0' || d == std::numeric_limits<double>::infinity() || d == -std::numeric_limits<double>::infinity() || std::isnan(d))
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
			else
				std::cout << "char: " << "Non displayable" << std::endl;
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
		double	d = 0.0;
		char	*endp;
		d = std::strtod(tmp.c_str(), &endp);
		if (d <= 255 && d >= 0)
		{
			if (isprint(static_cast<int>(d)))
				std::cout << "char: " << static_cast<char>(d) << std::endl;
			else
				std::cout << "char: " << "Non displayable" << std::endl;
		}
		else
			std::cout << "char: " << "Non displayable" << std::endl;
		if (d <= INT_MAX && d >= INT_MIN)
			std::cout << "int: " << static_cast<int>(d) << std::endl;
		else
			std::cout << "int: " "Non displayable" << std::endl;
		std::cout << std::fixed << std::setprecision(1); // forces cout to print full number instead of scientific notation
		std::cout << "float: " << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << std::setprecision(1) << static_cast<double>(d) << std::endl;
	}


	else if (type == 'd')
	{
		std::string tmp = str;
		if (str == "-inf" || str == "+inf" || str == "nan")
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << tmp << "f" << std::endl;
			std::cout << "double: " << tmp << std::endl;
			return ;
		}
		double	d = 0.0;
		char	*endp;
		d = std::strtod(tmp.c_str(), &endp);
		if (d <= 255 && d >= 0 && !str.find('.'))
		{
			if (isprint(static_cast<int>(d)))
				std::cout << "char: " << static_cast<char>(d) << std::endl;
			else
				std::cout << "char: " << "Non displayable" << std::endl;
		}
		else
			std::cout << "char: " << "Non displayable" << std::endl;
		if (d <= INT_MAX && d >= INT_MIN)
			std::cout << "int: " << static_cast<int>(d) << std::endl;
		else
			std::cout << "int: " "Non displayable" << std::endl;
		std::cout << std::fixed << std::setprecision(1); // forces cout to print full number instead of scientific notation
		std::cout << "float: " << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << std::setprecision(1) << static_cast<double>(d) << std::endl;
	}

	
	else if (type == 'n')
		std::cout << "Please, enter a valid value" << std::endl;
}
