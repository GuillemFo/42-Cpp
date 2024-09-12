/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 08:49:28 by codespace         #+#    #+#             */
/*   Updated: 2024/09/12 09:30:37 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main( void ) 
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;


	Fixed d;
	std::cout << "D1 "<< d.getRawBits() << std::endl;
	d.setRawBits(10);
	std::cout << "D2 " << d.getRawBits() << std::endl;
	Fixed e;
	e = d;
	std::cout << "E = D " <<e.getRawBits() << std::endl;
	return 0;
}
