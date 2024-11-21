/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:51:01 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/21 15:09:45 by gforns-s         ###   ########.fr       */
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
	(void)other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return (*this);
}


bool	ckCha(const std::string &str)
{
	if (str.length() == 1 && std::isprint(str[0]))
		return (true);
	return (false);
}


bool	ckInt(const std::string &str)
{
	double	num;
	char	*endp;
	num = std::strtod(str.c_str(), &endp);
	if (endp != str.c_str() || *endp == '\0' || std::isnan(num) || std::isinf(num))
		return (false);
	if ((endp != str.c_str() || *endp == '\0') && (num >= INT_MIN && num <= INT_MAX))
		return (true);
	return (false);
}


bool	ckFlo(const std::string &str)
{
	std::string res = str;
	if (res.length() > 0 && res[res.length() - 1] == 'f')
		res.erase(res.length() - 1);
	else
		return (false);
	double	f;
	char	*endp;
	f = std::strtod(res.c_str(), &endp);
	if (endp == res.c_str() || *endp != '\0')	//check if strtod was ok
		return (false);
	if (std::isnan(f) || std::isinf(f) || (f >= -FLT_MAX && f <= FLT_MAX))
		return (true);
	return (false);
}

bool	ckDou(const std::string &str)
{
	double	d;
	char	*endp;
	d = std::strtod(str.c_str(), &endp);
	if (endp == str.c_str() || *endp != '\0')	//check if strtod was ok
		return (false);
	if ((std::isnan(d) || std::isinf(d)) || (d >= -DBL_MAX && d <= DBL_MAX))
		return (true);
	return (false);
}

char	getType(const std::string &str)
{
	if (str.empty())
		return('n');
	else if (ckInt(str))
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
		if (std::isprint(static_cast<int>(str[0])))
			std::cout << "char: '" << str.at(0) << "'" << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(str.at(0)) << std::endl;
		std::cout << "float: " << static_cast<float>(str.at(0)) << std::endl;
		std::cout << "double: " << static_cast<double>(str.at(0)) << std::endl;
	}
	

	else if (type == 'i')
	{
		int num;
		num = std::atoi(str.c_str());
		if (num <= 255 && num >= 0)
		{
			if (std::isprint(num))
				std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;
			else
				std::cout << "char: " << "Non displayable" << std::endl;
		}
		else
			std::cout << "char: " << "Non displayable" << std::endl;
		std::cout << "int: " << num << std::endl;
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << std::setprecision(1) << static_cast<float>(num) << "f" << std::endl;
		std::cout << "double: " << std::setprecision(1) << static_cast<double>(num) << std::endl;
		
	}


	else if (type == 'f')
	{
		std::string tmp = str;
		tmp.erase(tmp.length() -1);
		float	d = 0.0;
		char	*endp;
		d = std::strtof(tmp.c_str(), &endp);
		if (std::isnan(d) || std::isinf(d))
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << d << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(d) << std::endl;
			return ;
		}
		if (d <= 255 && d >= 0)
		{
			if (std::isprint(static_cast<int>(d)))
				std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
			else
				std::cout << "char: " << "Non displayable" << std::endl;
		}
		else
			std::cout << "char: " << "Non displayable" << std::endl;
		if (d < static_cast<double>(INT_MAX) && d > static_cast<double>(INT_MIN))
			std::cout << "int: " << static_cast<int>(d) << std::endl;
		else
			std::cout << "int: " "Non displayable" << std::endl;
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << d << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(d) << std::endl;
		
	}


	else if (type == 'd')
	{
		double	d = 0.0;
		char	*endp;
		d = std::strtod(str.c_str(), &endp);
		if (std::isnan(d) || std::isinf(d))
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
			std::cout << "double: " << d << std::endl;
			return ;
		}
		if (d <= 255 && d >= 0)
		{
			if (std::isprint(static_cast<int>(d)))
				std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
			else
				std::cout << "char: " << "Non displayable" << std::endl;
		}
		else
			std::cout << "char: " << "Non displayable" << std::endl;
		if (d <= static_cast<double>(INT_MAX) && d >= static_cast<double>(INT_MIN))
			std::cout << "int: " << static_cast<int>(d) << std::endl;
		else
			std::cout << "int: " "Non displayable" << std::endl;
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}

	
	else if (type == 'n')
		std::cout << "Please, enter a valid value" << std::endl;
}
