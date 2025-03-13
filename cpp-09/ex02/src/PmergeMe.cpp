/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:10:39 by gforns-s          #+#    #+#             */
/*   Updated: 2025/03/13 15:15:01 by gforns-s         ###   ########.fr       */
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
	std::vector<int>::iterator it = vec.begin();
	while (it != vec.end())
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
	//https://dev.to/emuminov/human-explanation-and-step-by-step-visualisation-of-the-ford-johnson-algorithm-5g91

	//merge sort // how should i do this?? im lost :( merge groups and sort them for its second value. repeat froming bigger groups that can be paired. once max reach change algorithm??
	// ./PmergeMe 11 2 17 0 16 8 6 15 10 3 21 1 18 9 14 19 12 5 4 20 13 7 
	//std::cout << "INFO??:" << pairs.size() << "'" << std::endl;
	

	//dividir bloques en 2 luego 4 8 etc... hasta no poder tener mas grupos de ese tamano, guardar sobrantes, desde el bloque grande, dividir en 2 hacia atras otra vez, bajando en la 1a iteracion b1 y todos los grupos a, usar los numeros de jacobstal para reindizar la secuencia e ir insertando en funcion de indice, seguir ese bucle hasta tener solo parejas y luego ir insertando en funcion de menor que desde la mitad del 2o bloque, y luego ya ir insertando en fucion de menor que, los numeros restantes

	//jacobsthal
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

