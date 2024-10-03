/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:42:58 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/03 08:45:19 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor default" << std::endl;
}

Cat::Cat(std::string a) : Animal(a)
{
	std::cout << "Cat constructor " << _type << std::endl;
}

Cat::Cat(const Cat &other)
{
	*this = other;
	std::cout << "Cat copy constructor" << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound()
{
	std::cout << "Meow" << std::endl;
}
