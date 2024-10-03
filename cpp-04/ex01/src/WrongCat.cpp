/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:42:58 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/03 08:50:05 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor default" << std::endl;
}

WrongCat::WrongCat(std::string a) : WrongAnimal(a)
{
	std::cout << "WrongCat constructor " << _type << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
	std::cout << "WrongCat copy constructor" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Meow" << std::endl;
}
