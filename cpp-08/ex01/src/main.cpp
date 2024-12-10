/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:56:49 by gforns-s          #+#    #+#             */
/*   Updated: 2024/12/10 09:41:09 by gforns-s         ###   ########.fr       */
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

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	Span empty;
	try
	{
		std::cout << "Size for empty: "<< empty.getSize() << std::endl;
		std::cout << "Trying addNumber on empty" << std::endl;
		empty.addNumber(6);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Size for empty: "<< empty.getSize() << std::endl;
		std::cout << "Longest Span empty: ";
		std::cout << empty.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}	
	Span small = Span(3);
	try
	{
		std::cout << "Size for small: "<< small.getSize() << std::endl;
		small.addNumber(6);
		std::cout << "Size for small after addNumber: "<< small.getSize() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Size for small: "<< small.getSize() << std::endl;
		std::cout << "Longest Span small: ";
		std::cout << small.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	Span multi = Span(22);
	std::vector<int> val;
	for (int i = 0; i < 25; i++)
	{
		val.push_back(i);
	}
	try
	{
		multi.addRange(val.begin(), val.end());
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	multi.printContent();



	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "###############################" << std::endl;

	Span big_diff = Span(15000);
	std::vector<int> big_ex;
	srand(time(NULL));
	for (int i = 0; i < 15000; i++)
	{
		big_ex.push_back(i * rand());
	}
	
	try
	{
		big_diff.addRange(big_ex.begin(), big_ex.end());
		std::cout << "Longest Span for 15000: " << big_diff.longestSpan() << std::endl;
		std::cout << "Shortest Span for 15000: " << big_diff.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}



	return 0;
}
