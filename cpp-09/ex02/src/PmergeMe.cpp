/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:10:39 by gforns-s          #+#    #+#             */
/*   Updated: 2025/03/12 09:19:34 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


//Algorithms

template <typename T>
void mergeInsertSort(T &container)
{
	if (container.size() <= 1)
		return;

	std::vector<std::pair<int, int> > pairs;
	int last = -1;

	for (typename T::iterator it = container.begin(); it != container.end();)
	{
		int first = *it;
		++it;
		if (it != container.end())
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
	std::sort(pairs.begin(), pairs.end(), [](const std::pair<int, int> &a, const std::pair<int, int> &b){return (a.second < b.second);})
	
	T sorted;
	for (size_t i = 0; i < pairs.size(); ++i)
	{
		sorted.push_back(pairs[i].second);
	}

	for (size_t i = 0; i < pairs.size(); ++i)
	{
		typename T::Iterator pos = std::lower_bound(sorted.begin(), sorted.end(), last);
		sorted.insert(pos, last);
	}
	container = sorted;
}

void PmergeMe::sortV(std::vector<int> &vec)
{
	mergeInsertSort(vec);
}

void PmergeMe::sortD(std::deque<int> &deq)
{
	mergeInsertSort(deq);
}
