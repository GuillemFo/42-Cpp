/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:04:49 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/17 10:59:03 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstring>
#include <cmath>

class Fixed
{
	private:
		int fixed;
		static const int fracbits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &a);
		Fixed(const int a);
		Fixed(const float a);
		Fixed	&operator=(const Fixed &b);
		Fixed	&operator>(const Fixed &b);
		Fixed	&operator<(const Fixed &b);
		Fixed	&operator>=(const Fixed &b);
		Fixed	&operator<=(const Fixed &b);
		Fixed	&operator==(const Fixed &b);
		Fixed	&operator!=(const Fixed &b);
		Fixed	&operator+(const Fixed &b);
		Fixed	&operator-(const Fixed &b);
		Fixed	&operator*(const Fixed &b);
		Fixed	&operator/(const Fixed &b);
		/*
		Fixed	&operator++(const Fixed &b); // (int = post increase)
		Fixed	&operator--(const Fixed &b); // (int = post decrease)
		Fixed	&operator++(const Fixed &b);
		Fixed	&operator--(const Fixed &b);
		*/
		

		static Fixed	&min(Fixed &a, Fixed &b);
		static Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		static Fixed	&max(const Fixed &a, const Fixed &b);
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};
std::ostream	&operator<<(std::ostream &val, const Fixed &nb);
