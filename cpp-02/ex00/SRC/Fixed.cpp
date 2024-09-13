/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:29:27 by codespace         #+#    #+#             */
/*   Updated: 2024/09/13 13:15:11 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed(0)
{
	std::cout << "Default constructor called for Fixed" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor for Fixed was called" << std::endl;
}

Fixed::Fixed(const Fixed& a)
{
	std::cout << "Copy constructor called for Fixed" << std::endl;
	*this = a;
}

Fixed& Fixed::operator=(const Fixed& b)
{
	std::cout << "Copy assignment operator called for Fixed" << std::endl;
	if (this != &b)
		this->setRawBits(b.getRawBits());
	return (*this);
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed);
}

void Fixed::setRawBits(int const raw)
{
	fixed = raw;
}
