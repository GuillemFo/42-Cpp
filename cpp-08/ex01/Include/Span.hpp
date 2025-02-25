/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:21:39 by gforns-s          #+#    #+#             */
/*   Updated: 2024/12/11 08:29:59 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdexcept>
#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	protected:
		std::vector <int>_nb;
		unsigned int _size;
		
	public:
		Span();
		Span(unsigned int);
		~Span();
		Span(const Span &other);
		Span &operator=(const Span &cpy);
		
		//	Tools
		size_t getSize();
		void printContent();
		
		//	Subject
		void addNumber(int i);
		void addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);
		
		int shortestSpan();
		int longestSpan();
		

		class Err1 : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class Err2 : public std::exception
		{
			public:
				const char *what() const throw();
		};
};
