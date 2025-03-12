/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:10:39 by gforns-s          #+#    #+#             */
/*   Updated: 2025/03/12 09:35:37 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


//Algorithms




void PmergeMe::sortV(std::vector<int> &vec)
{
	if (vec.size() <= 1)
		return;

	std::vector<std::pair<int, int> > pairs;
	int last = -1;

	for (std::vector<int, int>iterator it = vec.begin(); it != vec.end();)
	{
		int first = *it;
		++it;
		if (it != vec.end())
		{
			int second = *it;
			++it;
			if (first > second)
				std::swap(first, second);
			pairs.puch_back(std::make_pair(first, second));
		}
		else
			last = first;
	}

		/// sorting pairs from begin to end creating A and B and and sorting it;
	//std::sort
	
	std::vector<int> sorted;
	
	for (size_t i = 0; i < pairs.size(); ++i)
	{
		sorted.push_back(pairs[i].second);
	}

	for (size_t i = 0; i < pairs.size(); ++i)
	{
		std::vector<int, int>::iterator pos = std::lower_bound(sorted.begin(), sorted.end(), last);
		sorted.insert(pos, last);
	}
	vec = sorted;
}


void PmergeMe::sortD(std::deque<int> &deq)
{
	{
	if (deq.size() <= 1)
		return;

	std::deque<std::pair<int, int> > pairs;
	int last = -1;

	for (std::deque<int, int>::iterator it = deq.begin(); it != deq.end();)
	{
		int first = *it;
		++it;
		if (it != deq.end())
		{
			int second = *it;
			++it;
			if (first > second)
				std::swap(first, second);
			pairs.puch_back(std::make_pair(first, second));
		}
		else
			last = first;
	}

		/// sorting pairs from begin to end creating A and B and and sorting it;
	//std::sort
	
	std::deque<int, int> sorted;
	for (size_t i = 0; i < pairs.size(); ++i)
	{
		sorted.push_back(pairs[i].second);
	}

	for (size_t i = 0; i < pairs.size(); ++i)
	{
		typename T::Iterator pos = std::lower_bound(sorted.begin(), sorted.end(), last);
		sorted.insert(pos, last);
	}
	deq = sorted;
	}
}
