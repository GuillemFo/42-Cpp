/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 08:49:44 by codespace         #+#    #+#             */
/*   Updated: 2024/09/10 10:00:45 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
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
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif