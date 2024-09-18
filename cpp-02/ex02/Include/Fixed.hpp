/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:04:49 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/18 08:56:49 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstring>
#include <fstream>
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
		bool	operator>(const Fixed &b) const;
		bool	operator<(const Fixed &b) const;
		bool	operator>=(const Fixed &b) const;
		bool	operator<=(const Fixed &b) const;
		bool	operator==(const Fixed &b) const;
		bool	operator!=(const Fixed &b) const;

		Fixed	operator+(const Fixed &b) const;
		Fixed	operator-(const Fixed &b) const;
		Fixed	operator*(const Fixed &b) const;
		Fixed	operator/(const Fixed &b) const;
		
		Fixed	operator++(int); // (int = post increase)
		Fixed	operator--(int); // (int = post decrease)
		Fixed	&operator++();
		Fixed	&operator--();
		
		static Fixed	&max(Fixed &a, Fixed &b);
		static Fixed	&min(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};
std::ostream	&operator<<(std::ostream &val, const Fixed &nb);

//https://en.cppreference.com/w/cpp/language/operators
