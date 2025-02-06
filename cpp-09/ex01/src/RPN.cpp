/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 08:45:36 by gforns-s          #+#    #+#             */
/*   Updated: 2025/02/06 11:44:43 by gforns-s         ###   ########.fr       */
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

bool RPN::isAllowed(const char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/');	
}

void RPN::checkInput(const std::string& in)
{
	for (unsigned int i = 0; i < in.length(); ++i)
	{
		const char c = in[i];
		if (!std::isspace(c) && !std::isdigit(c) && !isAllowed(c))
			throw std::logic_error("Invalid input");
	}
}

void RPN::solve(const std::string &in)
{
	std::stringstream tool(in);
	std::string block;
	while (tool >> block)
	{
		if (block.length() != 1)
			throw std::logic_error("Parameter too long");
		else
		{
			if (!std::isdigit(block[0]))
				throw std::logic_error("Invalid input");
			else if (std::isdigit(block[0]))
				val.push(std::atoi(block.c_str()));
			else if (isAllowed(block[0]))
			{
				if (block.empty())
					throw std::logic_error("Error: Stack is empty");
				
			}	
		}
	}
}
