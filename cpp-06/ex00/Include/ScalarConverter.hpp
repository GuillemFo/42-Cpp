/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:51:04 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/21 09:36:06 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <climits>
#include <cmath>	
#include <cfloat>	//use this!!! if c++ limits lib is used, uses templates!!
#include <cstdlib>
#include <iomanip>	//for setprecision


class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		~ScalarConverter();
		ScalarConverter &operator=(const ScalarConverter &cpy);
	public:
		static void convert(const std::string &in);
};
