/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:56:49 by gforns-s          #+#    #+#             */
/*   Updated: 2024/12/09 09:14:01 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include "easyfind.hpp"


int main()
{
	std::vector <int>v;	
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i + 1);
	}
	try
	{
		std::vector<int>::iterator v1 = ::easyfind(v, 3);
		std::cout << *v1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}

/*
https://en.cppreference.com/w/cpp/container/vector
https://en.cppreference.com/w/cpp/container/map
https://en.cppreference.com/w/cpp/container/list
https://en.cppreference.com/w/cpp/container/deque
https://en.cppreference.com/w/cpp/container/stack
*/
