/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:10:36 by gforns-s          #+#    #+#             */
/*   Updated: 2025/02/06 15:09:40 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//merge-insert sort algorithm
//https://en.wikipedia.org/wiki/Merge-insertion_sort
//https://www.geeksforgeeks.org/sorting-by-combining-insertion-sort-and-merge-sort-algorithms/


int main(int ac, char **av)
{
	PmergeMe pm;
	try
	{
		if (ac <= 2)
			throw std::invalid_argument("Error"); // check subject!!
		pm.isValid();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}