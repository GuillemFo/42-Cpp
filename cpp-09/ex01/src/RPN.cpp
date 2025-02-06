/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 08:45:36 by gforns-s          #+#    #+#             */
/*   Updated: 2025/02/06 12:54:36 by gforns-s         ###   ########.fr       */
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
		this->stack = other.stack;
	}
	return (*this);
}

int		RPN::getResult() const
{
	return (this->result);
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
			throw std::invalid_argument("Error: Invalid argument");
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
		if (std::isdigit(block[0]))
			stack.push(std::atoi(block.c_str()));
		else if (isAllowed(block[0]))
		{
			if (stack.empty())
				throw std::logic_error("Error: Stack is empty");
			int nb = stack.top();
			stack.pop();
			if (stack.empty())
				throw std::logic_error("Error: Stack is empty");
			int nb2 = stack.top();
			stack.pop();
			if (block[0] == '/' && nb == 0)
			{
				throw std::invalid_argument("Error: Invalid argument");
			}
			result = sendMath(block[0], nb, nb2);
			stack.push(result);
		}
	}
}

int RPN::sendMath(char c, int nb, int nb2)
{
	switch (c)
	{
		case '+':
			return (nb2 + nb);
		case '-':
			return (nb2 - nb);
		case '*':
			return (nb2 * nb);
		case '/':
			return (nb2 / nb);
	}
	return (0);
}

void RPN::checkIfEnd()
{
	stack.pop();
	if (!stack.empty())
		throw std::logic_error("Error: Invalid argument");
	std::cout << getResult() << std::endl;
}
