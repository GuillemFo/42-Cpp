/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:44:00 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/25 11:44:47 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>


int main()
{
	Array<int> test1;
	std::cout << "Def construct--> Array<int> test1" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	std::cout << "Size of test1: " << test1.size() << std::endl;

	std::cout << "====================================\n";
	Array<int> bob(8);




	try
	{
		
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	return (0);
}
