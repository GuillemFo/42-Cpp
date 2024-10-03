/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 08:19:33 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/03 08:44:24 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor default" << std::endl;
}

Dog::Dog(std::string a) : Animal(a)
{
	std::cout << "Dog constructor " << _type << std::endl;
}

Dog::Dog(const Dog &other)
{
	*this = other;
	std::cout << "Dog copy constructor" << std::endl;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound()
{
	std::cout << "Bark" << std::endl;
}

