/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:21:35 by gforns-s          #+#    #+#             */
/*   Updated: 2024/12/09 12:33:30 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() :  _nb(0), _size(0)
{
}

Span::Span(unsigned int i) : _size(i)
{
	this->_nb.reserve(_size);
}

Span::~Span(){}

Span::Span(const Span &other)
{
	*this = other;
}

Span Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->_nb.resize(other._size);
		this->_size = other._size;
		for (unsigned long i = 0; i < this->_size; i++)
			this->_nb.at(i) = other._nb.at(i);
	}
	return (*this);
}

void Span::addNumber(int i)
{
	if (this->_nb.size() >= this->_size)
		throw Err1();
	this->_nb.push_back(i);
}

int Span::shortestSpan()
{
	//pending
	return (100);
}

int Span::longestSpan()
{
	//pending
	return (-100);
}

size_t Span::getSize()
{
	return (this->_nb.size());
}

void Span::printContent()
{
	for (unsigned long i = 0; i < this->_nb.size(); i++)
	{
		std::cout << this->_nb.at(i) << std::endl;
	}
}

//https://en.cppreference.com/w/cpp/algorithm/fill_n
