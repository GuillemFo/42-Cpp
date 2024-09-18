/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:06:17 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/18 10:35:51 by gforns-s         ###   ########.fr       */
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

bool	Fixed::operator>(const Fixed &b)	const
{
	return (this->fixed > b.fixed);
}

bool	Fixed::operator<(const Fixed &b)	const
{
	return(this->fixed < b.fixed);
}

bool	Fixed::operator>=(const Fixed &b)	const
{
	return (this->fixed) >= b.fixed;
}

bool	Fixed::operator<=(const Fixed &b)	const
{
	return (this->fixed) <= b.fixed;
}

bool	Fixed::operator==(const Fixed &b)	const
{
	return (this->fixed == b.fixed);
}

bool	Fixed::operator!=(const Fixed &b)	const
{
	return (this->fixed != b.fixed);
}

Fixed	Fixed::operator+(const Fixed &b)	const
{
	return (this->toFloat() + b.toFloat());
}

Fixed	Fixed::operator-(const Fixed &b)	const
{
	return (this->toFloat() - b.toFloat());
}

Fixed	Fixed::operator*(const Fixed &b)	const
{
	return (this->toFloat() * b.toFloat());
}

Fixed	Fixed::operator/(const Fixed &b)	const
{
	return (this->toFloat() / b.toFloat());
}


Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	++(*this);
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	--(*this);			//dunno if its 100% correct
	return (tmp);
}

Fixed	&Fixed::operator++()
{
	++fixed;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	--fixed;
	return (*this);
}

// Fixed	&Fixed::max(Fixed &a, Fixed &b)
// {
	
// }

// Fixed	&Fixed::min(Fixed &a, Fixed &b)
// {

// }

// const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
// {

// }

// const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
// {

// }

