/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 08:45:36 by gforns-s          #+#    #+#             */
/*   Updated: 2025/02/06 10:50:50 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{

}

RPN::~RPN()
{

}

RPN::RPN(const RPN &other)
{
	*this = other;
}

RPN &RPN::operator=(const RPN &other)
{
	if (this != &other)
	{
		this->val = other.val;
	}
	return (*this);
}

bool RPN::IsAllowed(const char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/');	
}

void RPN::checkInput(const std::string in)
{
	for (unsigned int i; i < in.length(); ++i)
	{
		const char c = in[i];
		if (!std::isspace(c) || !std::isdigit(c) || !IsAllowed(c))
			throw std::logic_error("Invalid input");
	}
}
