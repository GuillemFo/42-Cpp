/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:56:49 by gforns-s          #+#    #+#             */
/*   Updated: 2024/12/09 10:19:13 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include <vector>
#include <list>
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
		std::cout << "Test for vector:" << std::endl;
		std::vector<int>::iterator v1 = ::easyfind(v, 3);
		std::cout << *v1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::list <int>lst;
	int array[10] = {1, 4, 5, 88, 21, 3, 41, 90, 12, 77};
	for (int i = 0; i < 10; i++)
	{
		lst.push_back(array[i]);
	}
	try
	{
		std::cout << "Test for list 1: (contains element)" << std::endl;
		std::list <int>::iterator lst1 = ::easyfind(lst, 41);
		std::cout << *lst1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Test for list 2: (does not contain element)" << std::endl;
		std::list <int>::iterator lst2 = ::easyfind(lst, 42);
		std::cout << *lst2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
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
