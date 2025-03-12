/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:10:36 by gforns-s          #+#    #+#             */
/*   Updated: 2025/03/12 11:37:49 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//merge-insert sort algorithm
//https://en.wikipedia.org/wiki/Merge-insertion_sort
//https://www.geeksforgeeks.org/sorting-by-combining-insertion-sort-and-merge-sort-algorithms/


int main(int ac, char **av)
{
	PmergeMe	mer;
	std::vector<int>	vec;
	std::deque<int>		deq;

	try
	{
		if (ac < 2)
			throw std::invalid_argument ("Error"); // check subject!!
		for (int i = 1; i < ac; ++i)
		{
			char *endp;
			long num = std::strtol(av[i], &endp, 10);
			if (*endp != '\0' || num < 0 || num > std::numeric_limits<int>::max())
			{
				throw std::invalid_argument ("Error");
				return (1);
			}
			vec.push_back(static_cast<int>(num));
			deq.push_back(static_cast<int>(num));
		}
			mer.printV(vec, "Unsorted");


/*
	/////// PRINT PRE SORTED AND SORTED??

		std::clock_t startV = std::clock();
		//sortVector ...
		std::clock_t endV = std::clock();

		std::clock_t startD = std::clock();
		//sortDeq ...
		std::clock_t endD = std::clock();

		//clock timers (dont know if correct!!!!!!!)
		double timeV = 1000000.0 * (endV - startV) / CLOCKS_PER_SEC;
		double timeD = 1000000.0 * (endD - startD) / CLOCKS_PER_SEC;
*/
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
