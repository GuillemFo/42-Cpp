/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 08:47:05 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/25 09:33:44 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>



void	change(std::string &in)
{
	std::string a ="Alpha";
	in = a;
}


int main()
{
	std::string addr[4] = {"bob", "mike", "kan", "tango"};
	std::string i;
	std::cout <<"Before:\n";
	for (int i = 0; i < 4; i++)
	{
		std::cout << addr[i] << std::endl;
	}
	std::cout << "\n";
	::iter(addr, 4, change);
	std::cout << "After:\n";
	
	for (int i = 0; i < 4; i++)
	{
		std::cout << addr[i] << std::endl;
	}

	return (0);
}
