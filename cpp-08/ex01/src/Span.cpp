/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:21:35 by gforns-s          #+#    #+#             */
/*   Updated: 2024/12/09 10:41:04 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int i) : _size(i){};

Span::~Span(){};

Span::Span(const Span &other)
{
	this = &other;
}

Span &operator=(const Span &cpy)
{
	if (this != cpy)
	{

	}
	return (*this);
}

