/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:10:39 by gforns-s          #+#    #+#             */
/*   Updated: 2025/02/06 16:11:25 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


bool isValid(const std::string val)
{
	const char *str = val.c_str();
	char *endptr;
	long nb = std::strtol(str, &endptr, 10);

	if (endptr != str && *endptr == '\0' && nb <= std::numeric_limits<int>::max() && nb >= std::numeric_limits<int>::min())
		return (true);
	return (false);
}

//Algorithms

std::vector<int>	mergeInsertSortVector(std::vector<int>	unsortedVec)
{

}

std::deque<int>		mergeInsertSortDeque(std::deque<int> unsortedDeque)
{
	
}

