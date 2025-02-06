/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:10:36 by gforns-s          #+#    #+#             */
/*   Updated: 2025/02/06 16:14:52 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//merge-insert sort algorithm
//https://en.wikipedia.org/wiki/Merge-insertion_sort
//https://www.geeksforgeeks.org/sorting-by-combining-insertion-sort-and-merge-sort-algorithms/


int main(int ac, char **av)
{
	std::vector<int>	sVec;
	std::deque<int>		sDeq;
	int	nb;
	try
	{
		if (ac < 2)
			throw std::invalid_argument("Error"); // check subject!!
		for (unsigned long i = 1; av[i]; ++i)
		{
			if (isValid(av[i]) == true)
			{
				nb = std::atoi(av[i]);
				sVec.push_back(nb);
				sDeq.push_back(nb);
			}
			else
				throw std::invalid_argument("Error: Argument not valid");
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
