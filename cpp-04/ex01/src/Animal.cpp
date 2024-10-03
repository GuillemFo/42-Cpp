/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:34:46 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/03 11:51:18 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("default")
{
	std::cout << "Animal constructor default" << std::endl;
}

Animal::Animal(std::string a)
{
	this->_type = a;
	std::cout << "Animal constructor " << _type << std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << "Animal copy constructor" << std::endl;
}

Animal	&Animal::operator=(const Animal &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

std::string	Animal::getType() const
{
	return (this->_type);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Default sound" << std::endl;
}

/*	This is for testing deep or shallow copies*/
void Animal::setType(std::string a)
{
	this->_type = a;
}

