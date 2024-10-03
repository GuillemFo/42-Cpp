/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 09:55:55 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/03 10:09:19 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Brain copy constructor" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "operator= called" << std::endl;
	if (this != &other)
	{
		for (int i =0; i < NB_IDEAS; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return (*this);
}
