/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:49:00 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/18 11:56:04 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"


int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	ScalarConverter::convert(argv[1]);
}
