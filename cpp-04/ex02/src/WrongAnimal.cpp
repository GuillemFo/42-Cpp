/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:34:46 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/03 08:49:35 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongDefault")
{
	std::cout << "WrongAnimal constructor default" << std::endl;
}

WrongAnimal::WrongAnimal(std::string a)
{
	this->_type = a;
	std::cout << "WrongAnimal constructor " << _type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
	std::cout << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong Default sound" << std::endl;
}

