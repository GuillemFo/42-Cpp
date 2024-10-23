/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:10:20 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/23 11:00:08 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat small("small", 151);
		Bureaucrat def;
		std::cout << def << std::endl;
		std::cout << "So if i init def after something not possible and cut by my catch, it will never be inititalized :)" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	Bureaucrat BOB("BOB", 2);
	std::cout << BOB << std::endl;
	std::cout << "Entering Try" << std::endl;
	
	try
	{
		BOB.decrementGrade();
		std::cout << BOB << std::endl;
		BOB.incrementGrade();
		std::cout << BOB << std::endl;
		BOB.incrementGrade();
		std::cout << BOB << std::endl;
		BOB.incrementGrade();
		std::cout << BOB << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr <<e.what() << std::endl;
	}
	try
	{
		Bureaucrat big("big", 0);
		std::cout << "Something else that wont work cuz started with 0 val" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "And thats all folks" << std::endl;
}
