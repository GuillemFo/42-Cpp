/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 08:49:44 by codespace         #+#    #+#             */
/*   Updated: 2024/09/12 09:32:39 by gforns-s         ###   ########.fr       */
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
		Fixed& 	operator=(const Fixed &b);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};