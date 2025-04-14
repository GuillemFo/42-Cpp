/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:05:40 by gforns-s          #+#    #+#             */
/*   Updated: 2025/04/14 10:21:34 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


/*
std::stack <int>val; //first in last out // 4 2 8 * + // 8*2 // 4 16 + // 20
*/

//Used stack because is the most convinient for first in last out since push and pop are the way to go for this ex.

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
		stack.checkIfEnd();

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
