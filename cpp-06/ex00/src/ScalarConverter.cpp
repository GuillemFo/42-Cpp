/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:51:01 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/18 11:06:52 by gforns-s         ###   ########.fr       */
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

bool	ckInt(const std::string &str) // Error on max int min int and negatives!!!
{
	std::stringstream tmp(str);
	long result;

	tmp >> result;
	if (tmp.fail() || !tmp.eof())
	{
		tmp.clear();
		return (false);
	}
	if (result < std::numeric_limits<int>::min() || result > std::numeric_limits<int>::max())
        return false;
	return (true);
}

bool	ckFlo(const std::string &str)
{
	float result;
	if (str == "-inff" || str == "+inff" || str == "nanf")
        return (true);
	else if (str[0] != '.' && (str.length() -1) != '.')
	{
		size_t a = str.find_first_of('.');
		if (a != std::string::npos)
		{
			if (!(a > 0 && std::isdigit(str[a - 1])) || !(a < str.size() - 1 && std::isdigit(str[a + 1])))
				return (false);
		}
		if (str.find_first_of('f') == str.find_last_of('f') && str.find_first_of('f') == (str.length() -1))
		{
			std::string hold = str;
			hold.resize(hold.length() -1);
			std::stringstream tmp(hold);
			tmp >> result;
			if (tmp.fail() || !tmp.eof())
			{
				tmp.clear();
				return (false);
			}
			return (true);
		}
	}
	return (false);
}

bool	ckDou(const std::string &str)
{
	double result;
	if (str == "-inf" || str == "+inf" || str == "nan")
		return (true);
	else if (str[0] != '.' && (str.length() -1) != '.')
	{
		size_t a = str.find_first_of('.');
		if (a != std::string::npos)
		{
			if (!(a > 0 && std::isdigit(str[a - 1])) || !(a < str.size() - 1 && std::isdigit(str[a + 1])))
				return (false);
		}
		std::stringstream tmp(str);
		tmp >> result;
		if (tmp.fail() || !tmp.eof())
		{
			tmp.clear();
			return (false);
		}
		return (true);
	}
	return (false);
}

char    getType(const std::string &str)
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

void ScalarConverter::convert(const std::string& str)
{
	char type = getType(str);

	if (type == 'c')
	{
		if (isprint(str[0]))
			std::cout << "char: " << static_cast<char>(str[0]) << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(str[0]) << std::endl;
		std::cout << "double: " << static_cast<double>(str[0]) << std::endl;
	}
	

	else if (type == 'i')
	{
		int i;
		i = atoi(str.c_str());
		if (isprint(i))
			std::cout << "char: " << static_cast<char>(i) << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(i) << std::endl;
		std::cout << "float: " << static_cast<float>(i) << std::endl;
		std::cout << "double: " << static_cast<double>(i) << std::endl;
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
