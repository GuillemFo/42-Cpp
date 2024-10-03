/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 08:19:33 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/03 11:32:13 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Dog constructor default" << std::endl;
}

Dog::Dog(std::string a) : Animal(a)
{
	this->_brain = new Brain();
	std::cout << "Dog constructor " << _type << std::endl;
}

Dog::Dog(const Dog &other)
{
	this->_brain = new Brain();
	*this = other;
	std::cout << "Dog copy constructor" << std::endl;
}

Dog	&Dog::operator=(const Dog &other)
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

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}

