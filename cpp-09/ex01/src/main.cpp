/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:05:40 by gforns-s          #+#    #+#             */
/*   Updated: 2025/02/06 11:09:54 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


/*
std::stack <int>val; //first in last out // 4 2 8 * + // 8*2 // 4 16 + // 20
*/


int main(int ac, char **av)
{
	RPN stack;
	try 
	{
		if (ac != 2)
			throw std::logic_error("Error: Expected 1 string"); 
		const std::string input = av[1];
		stack.checkInput(input);
		stack.solve(input);

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
}
