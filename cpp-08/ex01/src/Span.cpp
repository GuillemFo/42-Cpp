/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:21:35 by gforns-s          #+#    #+#             */
/*   Updated: 2024/12/09 15:17:32 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() :  _nb(0), _size(0)
{
}

Span::Span(unsigned int i) : _size(i)
{
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
		this->_size = other._size;
		this->_nb = other._nb;
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
	if (this->_nb.empty() || this->_nb.size() < 2)
		throw Err2();
	std::vector <int>sorted = _nb;
	std::sort(sorted.begin(), sorted.end());
	int holder = abs(sorted[0] - sorted[1]);
	for (unsigned long i = 0; i < this->_nb.size() - 1; i++)
	{
		if (abs(sorted[i + 1] - sorted[i]) < holder)
			holder = abs(sorted[i + 1] - sorted[i]);
	}
	return (holder);
}

int Span::longestSpan()
{
	if (this->_nb.empty() || this->_nb.size() < 2)
		throw Err2();
	std::vector <int>sorted = this->_nb;
	std::sort(sorted.begin(), sorted.end());
	return (abs(sorted[_size-1] - sorted[0]));
}

size_t Span::getSize()
{
	return (this->_nb.size());
}

void Span::printContent()
{
	for (unsigned long i = 0; i < this->_nb.size(); i++)
	{
		std::cout << this->_nb[i] << std::endl;
	}
}


template<typename InputIterator>
void Span::addRange(InputIterator start, InputIterator end)
{
	
}
//https://en.cppreference.com/w/cpp/algorithm/fill_n
