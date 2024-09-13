/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 08:49:44 by codespace         #+#    #+#             */
/*   Updated: 2024/09/13 11:09:07 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
class Fixed
{
	private:
		int fixed;
		static const int fracbits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& a);
		Fixed(const int a);
		Fixed(const float a);
		Fixed	& operator=(const Fixed &b);
		Fixed	&operator<<(const Fixed &b);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};
