/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:10:39 by gforns-s          #+#    #+#             */
/*   Updated: 2025/03/12 11:57:38 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}
PmergeMe::~PmergeMe(){}
PmergeMe::PmergeMe(const PmergeMe &other) { *this = other;}
PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other)
	{
		*this = other;
	}
	return (*this);
}



//Algorithms

void PmergeMe::printV(std::vector<int> &vec, std::string s)
{
	std::cout << "Print Vector " << s << ": " << std::endl;
	std::vector<int>::iterator it_beg = vec.begin();
	std::vector<int>::iterator it_end = vec.end();
	while (it_beg != it_end)
	{
		std::cout << " =" << *it_beg << "= ";
		++it_beg;
	}
	std::cout << std::endl;
}

void PmergeMe::printD(std::deque<int> &vec, std::string s)
{
	std::cout << "Print Deque " << s << ": " << std::endl;
	std::deque<int>::iterator it_beg = vec.begin();
	std::deque<int>::iterator it_end = vec.end();
	while (it_beg != it_end)
	{
		std::cout << " =" << *it_beg << "= ";
	}
	std::cout << std::endl;
}


// Split in pairs 



void PmergeMe::sortV(std::vector<int> &vec)
{
	if (vec.size() <= 1)
		return;

	std::vector<std::pair<int, int> > pairs;
	int last = -1;

	//loop for split and swap :)
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end();)
	{
		int first = *it;
		++it;
		if (it != vec.end())
		{
			int second = *it;
			++it;
			if (first > second)
				std::swap(first, second);
			pairs.push_back(std::make_pair(first, second));
		}
		else
			last = first;
	}

	//merge sort // how should i do this?? im lost :( 

	//PRINT PAIRS AND END
	int i = 1;
	std::vector<std::pair<int, int> >::iterator it_beg = pairs.begin();
	std::vector<std::pair<int, int> >::iterator it_end = pairs.end();
	while (it_beg != it_end)
	{
		std::cout << "Pair[" << i << "]:"<< "{" << it_beg->first << " | " << it_beg->second << "}" << std::endl;
		++i;
		++it_beg;
	}
	if (last >= 0) //remember last only use if not pair for last number alone;
		std::cout << last << std::endl;
	std::cout << "End" << std::endl;
	
/*
	// Store sorted
	std::vector<int> sorted;
	
	for (size_t i = 0; i < pairs.size(); ++i)
	{
		sorted.push_back(pairs[i].second);
	}

	for (size_t i = 0; i < pairs.size(); ++i)
	{
		std::vector<int>::iterator pos = std::lower_bound(sorted.begin(), sorted.end(), last);
		sorted.insert(pos, last);
	}
	vec = sorted;
*/
}

