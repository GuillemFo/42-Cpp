/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:10:39 by gforns-s          #+#    #+#             */
/*   Updated: 2025/02/06 15:29:08 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::~PmergeMe()
{

}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	*this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other)
	{
		this->sequence = other.sequence;
		this->sList = other.sList;
		this->sVec = other.sVec;
	}
	return (*this);
}

bool PmergeMe::isValid(const std::string val) // might change to be a void that will also load into vec and 
{
	const char *str = val.c_str();
	char *endptr;
	long nb = std::strtol(str, &endptr, 10);

	if (endptr != str && *endptr == '\0' && nb <= std::numeric_limits<int>::max() && nb >= 0)//no negative accepted
		return (true);
	return (false);
}


