/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:42:58 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/03 11:32:17 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->_brain = new Brain();
	std::cout << "Cat constructor default" << std::endl;
}

Cat::Cat(std::string a) : Animal(a)
{
	this->_brain = new Brain();
	std::cout << "Cat constructor " << _type << std::endl;
}

Cat::Cat(const Cat &other)
{
	this->_brain = new Brain();
	*this = other;
	std::cout << "Cat copy constructor" << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		if (this->_brain != NULL)
		{
			delete this->_brain;
		}
		this->_brain = new Brain(*(other._brain));
	}
	return (*this);
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
