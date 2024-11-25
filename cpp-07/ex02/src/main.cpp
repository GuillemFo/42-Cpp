/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:44:00 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/25 12:24:29 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>


int main()
{
	Array<int> test1;
	std::cout << "Def construct for test1" << std::endl;
	std::cout << "Size of test1: " << test1.size() << std::endl;

	std::cout << "====================================\n";
	Array<int> bob(8);
	std::cout << "Size of bob: " << bob.size() << std::endl;

	for (int i = 0; i < bob.size(); i++)
	{
		bob[i] = i*10+1;
	}
	for (int i = 0; i < bob.size(); i++)
	{
		std::cout << "bob on " << i << " " << bob[i] << std::endl;
	}
	std::cout << "====================================\n";
	Array<int> papa(bob);
	std::cout << "Size of papa(copy of bob): " << papa.size() << std::endl;
	std::cout << "Vaues inside papa\n";
	for (int i = 0; i < papa.size(); i++)
	{
		std::cout << "papa on " << i << " " << papa[i] << std::endl;
	}
	
	std::cout << "====================================\n";
	std::cout << "Testing Exceptions: \n";

	try
	{
		std::cout << "Testing non number value size for bob\n";
		std::cout << bob['a'] << std::endl;		
		
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		try
		{
			std::cout << "Testing size for bob\n";
			std::cout << bob[9] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
			try
			{
				std::cout << "Testing negative size for bob\n";
				std::cout << bob[-2] << std::endl;
				
			}
			catch (std::exception &e)
			{
				std::cout << "Error: " << e.what() << std::endl;
				try
				{
					std::cout << "Testing 0 size for bob\n";
					std::cout << bob[0] << std::endl;
				}
				catch (std::exception &e)
				{
					std::cout << "Error: " << e.what() << std::endl;
				}
				std::cout << "This works with no issues :)\n";
			}
		}
	}
	
	return (0);
}
