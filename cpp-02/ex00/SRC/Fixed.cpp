/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:29:27 by codespace         #+#    #+#             */
/*   Updated: 2024/09/10 09:58:48 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor for Fixed was called" << std::endl;
}

int	Fixed::getRawBits() const
{
	return (rawbits);
}

void Fixed::setRawBits( int const raw )
{
	rawbits = raw;
}
