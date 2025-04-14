/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:10:36 by gforns-s          #+#    #+#             */
/*   Updated: 2025/04/14 10:28:31 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//merge-insert sort algorithm
//https://en.wikipedia.org/wiki/Merge-insert_sort
//https://www.geeksforgeeks.org/sorting-by-combining-insert-sort-and-merge-sort-algorithms/


#include "PmergeMe.hpp"

//Used vector and deque to show how optimal is vector vs deque since with vector the cpu can access the next elements faster due loading it on cache and deque uses memory blocks and needs to access which requires more time.
int main(int ac, char **av)
{
	try
	{
		if (ac == 1)
			throw std::invalid_argument("At least one numeric argument is required.");
		PmergeMe sorter(av);
		sorter.sortAndMeasure();
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return 1;
	}
	return 0;
}

