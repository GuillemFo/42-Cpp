/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:34:46 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/03 12:49:36 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("default")
{
	std::cout << "AAnimal constructor default" << std::endl;
}

AAnimal::AAnimal(std::string a)
{
	this->_type = a;
	std::cout << "AAnimal constructor " << _type << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	*this = other;
	std::cout << "AAnimal copy constructor" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

std::string	AAnimal::getType() const
{
	return (this->_type);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << "Default sound" << std::endl;
}

