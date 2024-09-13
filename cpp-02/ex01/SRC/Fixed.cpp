/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:29:27 by codespace         #+#    #+#             */
/*   Updated: 2024/09/13 13:10:55 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called for Fixed" << std::endl;
	fixed = 0;
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
	//std::cout << "getRawBits member function called" << std::endl;
	return (fixed);
}

void Fixed::setRawBits(int const raw)
{
	fixed = raw;
}

Fixed::Fixed(const int a)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(a << fracbits);
}

Fixed::Fixed(const float a)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(static_cast<int>(roundf(a * (1 << fracbits))));
}

float	Fixed::toFloat(void)const
{
	return (static_cast<float>(getRawBits()) / (1 << fracbits));	
}

int		Fixed::toInt(void)const
{
	return (getRawBits() >> fracbits);	
}

std::ostream &operator<<(std::ostream &val, const Fixed &nb)
{
	return (val << nb.toFloat());
}
