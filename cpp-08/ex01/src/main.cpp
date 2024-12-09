/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:56:49 by gforns-s          #+#    #+#             */
/*   Updated: 2024/12/09 13:38:47 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Span.hpp"


int main()
{
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Content: " << std::endl;
	sp.printContent();
	std::cout << std::endl;
	
	std::cout << "Shortest Span: ";
	std::cout << sp.shortestSpan() << std::endl;
	
	std::cout << "Longest Span: ";
	std::cout << sp.longestSpan() << std::endl;

	Span empty;
	try
	{
		std::cout << "Size: "<< empty.getSize() << std::endl;
		empty.addNumber(6);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Size: "<< empty.getSize() << std::endl;
		std::cout << "Longest Span empty: ";
		std::cout << empty.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}


	
	return 0;
}
