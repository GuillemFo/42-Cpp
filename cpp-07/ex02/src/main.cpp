/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:44:00 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/25 12:53:40 by gforns-s         ###   ########.fr       */
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
	Array<int> mama = bob;
	std::cout << "Size of mama =operator of bob): " << papa.size() << std::endl;
	std::cout << "Vaues inside mama\n";
	for (int i = 0; i < mama.size(); i++)
	{
		std::cout << "mama on " << i << " " << mama[i] << std::endl;
	}
	
	std::cout << "====================================\n";
	std::cout << "Testing Exceptions: \n" << std::endl;

	try
	{
		std::cout << "Testing non number value size for bob\n";
		std::cout << bob['a'] << std::endl;		
		std::cout << "size for bob worked 1?\n";
		
	}
	catch (std::exception &e)
	{
		std::cout << "--- Error: " << e.what() << " ---" << std::endl;
		try
		{
			std::cout << "Testing size for bob\n";
			std::cout << bob[8] << std::endl;
			std::cout << "size for bob worked 2?\n";
		}
		catch (std::exception &e)
		{
			std::cout << "--- Error: " << e.what() << " ---" << std::endl;
			try
			{
				std::cout << "Testing negative size for bob\n";
				std::cout << bob[-2] << std::endl;
				std::cout << "size for bob worked 3?\n";			
			}
			catch (std::exception &e)
			{
				std::cout << "--- Error: " << e.what() << " ---"  << std::endl;
				try
				{
					std::cout << "Testing 0 size for bob\n";
					std::cout << bob[0] << std::endl;
					std::cout << "This should work with no issues\n\n";
				}
				catch (std::exception &e)
				{
					std::cout << "--- Error: " << e.what() << " ---"  << std::endl;
				}
			}
		}
	}
	
	return (0);
}
