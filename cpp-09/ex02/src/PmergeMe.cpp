/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:10:39 by gforns-s          #+#    #+#             */
/*   Updated: 2025/04/10 11:32:55 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(char **av)
{
	parseArgs(av);
}

PmergeMe::PmergeMe(const PmergeMe &other) : vec(other.vec), deq(other.deq) {}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other)
	{
		vec = other.vec;
		deq = other.deq;
	}
	return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::parseArgs(char **av) //ok
{
	for (int i = 1; av[i]; ++i)
	{
		std::string arg(av[i]);
		validNum(arg);
		int val = std::atoi(av[i]);
		if (isDup(val))	//fixed 11/02/25
			throw std::invalid_argument("Duplicated value found.");
		vec.push_back(val);
		deq.push_back(val);
	}
}

void PmergeMe::validNum(const std::string &str)	//ok
{
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (!std::isdigit(str[i]))
			throw std::invalid_argument("Invalid input: not a positive integer.");
	}
	if (str.empty())
		throw std::invalid_argument("Invalid input: empty string.");
}

bool PmergeMe::isDup(int val) const //now should work??
{
	for (size_t i = 0; i < vec.size(); ++i)
	{
		if (vec[i] == val)
			return true;
	}
	return false;
}

void PmergeMe::sortAndMeasure()	// need to double check
{
	std::cout << C_G "Before: " C_RESET;
	printcont(vec, "");

	clock_t startVec = clock();
	fordJohnsonSort(vec);
	clock_t endVec = clock();

	clock_t startDeq = clock();
	fordJohnsonSort(deq);
	clock_t endDeq = clock();

	std::cout << C_Y "After:  " C_RESET;
	printcont(vec, "");

	// Add colors for contrast!!!
	std::cout << "Time to process a range of " C_C << vec.size() << C_RESET " elements with std::vector : " C_R << static_cast<double>(endVec - startVec) * 1000000.0 / CLOCKS_PER_SEC << C_RESET " us" << std::endl;

	std::cout << "Time to process a range of " C_C << deq.size() << C_RESET  " elements with std::deque  : " C_R << static_cast<double>(endDeq - startDeq) * 1000000.0 / CLOCKS_PER_SEC << C_RESET " us" << std::endl;
}

void PmergeMe::printcont(const std::vector<int> &v, const std::string &str) const // idealy const for standards
{
	if (!str.empty())
		std::cout << str << ": ";
	
	for (size_t i = 0; i < v.size(); ++i)
	{
		std::cout << v[i] << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::printcont(const std::deque<int> &d, const std::string &str) const // idealy const for standards
{
	if (!str.empty())
		std::cout << str << ": ";
	
	for (size_t i = 0; i < d.size(); ++i)
	{
		std::cout << d[i] << " ";
	}
	std::cout << std::endl;
}


void PmergeMe::insertSort(std::vector<int> &cont, int left, int right) ////// FINALLYYYYY WORKIIINGGGG!!!! 07/03/25
{
	//Should work now
	for (int i = left + 1; i <= right; ++i)
	{
		int key = cont[i];
		int j = i - 1;
	
		while (j >= left && cont[j] > key)
		{
			cont[j + 1] = cont[j];
			--j;
		}
		cont[j + 1] = key;
	}
}


////// If working for vec, will work for deque?
void PmergeMe::insertSort(std::deque<int> &cont, int left, int right)
{
	for (int i = left + 1; i <= right; ++i)
	{
		int key = cont[i];
		int j = i - 1;
	
		while (j >= left && cont[j] > key)
		{
			cont[j + 1] = cont[j];
			--j;
		}
		cont[j + 1] = key;
	}
}






//This should idealu merge from the figt to left -1 of the half?
//then add the continuous to left?????
//dividir bloques en 2 luego 4 8 etc... hasta no poder tener mas grupos de ese tamano, guardar sobrantes, desde el bloque grande, dividir en 2 hacia atras otra vez, bajando en la 1a iteracion b1 y todos los grupos a, usar los numeros de jacobstal para reindizar la secuencia e ir insertando en funcion de indice, seguir ese bucle hasta tener solo parejas y luego ir insertando en funcion de menor que desde la mitad del 2o bloque, y luego ya ir insertando en fucion de menor que, los numeros restantes
	
//NOT WORKING ....... 11/03/25

void PmergeMe::merge(std::vector<int> &cont, int left, int mid, int right)
{
	std::vector<int> tmp(right - left + 1);
	int i = left, j = mid + 1, k = 0;
	
	while (i <= mid && j <= right)
	{
		if (cont[i] < cont[j])
			tmp[k++] = cont[i++];
		else
			tmp[k++] = cont[j++];
		//std::cout << C_Y "i < mid??" << cont[j+1] C_RESET << std::endl;
	}

	while (i <= mid)
	{
		tmp[k++] = cont[i++];
		//std::cout << C_M "i mid" << cont[i+1] C_RESET << std::endl;
	}

	while (j <= right)
	{
		tmp[k++] = cont[j++];
		//std::cout << C_B "j right" << cont[j+1] C_RESET << std::endl;
	}

	for (int l = 0; l < k; ++l)
	{
		cont[left + l] = tmp[l];
		//std::cout << ""
	}
}


//Should have same logic??

//################################################################
//https://en.cppreference.com/w/cpp/container/deque
//https://en.cppreference.com/w/cpp/container/deque/push_back
//################################################################


void PmergeMe::merge(std::deque<int> &cont, int left, int mid, int right)
{
	std::deque<int> tmp;
	int i = left, j = mid + 1;
	while (i <= mid && j <= right)
	{
		if (cont[i] < cont[j])
			tmp.push_back(cont[i++]);
		else
			tmp.push_back(cont[j++]);
	}
	while (i <= mid)
	{
		//std::cout << C_Y "i < mid" << cont[i+1] <<  "####" C_RESET << std::endl;
		tmp.push_back(cont[i++]);
	}

	while (j <= right) 
	{
		//std::cout << C_M "j <= mid" << cont[i+1] <<  "####" C_RESET << std::endl;
		tmp.push_back(cont[j++]);
	}

	for (int l = 0; l < static_cast<int>(tmp.size()); ++l)
	{
		cont[left + l] = tmp[l];
		//std::cout << C_R "aaaaaaaaaaa" << tmp[l] <<  "@@@@@@" C_RESET << std::endl;
	}
}


void PmergeMe::fordJohnsonSort(std::vector<int> &cont)
{
// This is pure chaos... everything is broken ....
	const int threshold = 10; //threshold for merge or insertion if under x elements
	int n = static_cast<int>(cont.size());
	if (n <= threshold)
		insertSort(cont, 0, n - 1);
	else
	{
		int mid = n / 2;
		std::vector<int> left(cont.begin(), cont.begin() + mid);
		std::vector<int> right(cont.begin() + mid, cont.end());
		fordJohnsonSort(left);
		fordJohnsonSort(right);
		// Seems to work rn?
		for (int i = 0; i < static_cast<int>(left.size()); ++i)
		{
			cont[i] = left[i];
		}

		for (int i = 0; i < static_cast<int>(right.size()); ++i)
		{
			cont[mid + i] = right[i];
		}
		
		merge(cont, 0, mid - 1, n - 1);
	}
}



// I have doubts, the print does not match...
void PmergeMe::fordJohnsonSort(std::deque<int> &cont)
{
	const int threshold = 10;
	int n = static_cast<int>(cont.size());
	if (n <= threshold)
		insertSort(cont, 0, n - 1);
	else
	{
		int mid = n / 2;
		std::deque<int> left(cont.begin(), cont.begin() + mid);
		std::deque<int> right(cont.begin() + mid, cont.end());
		fordJohnsonSort(left);
		fordJohnsonSort(right);
		for (int i = 0; i < static_cast<int>(left.size()); ++i)
		{
			cont[i] = left[i];
			//std::cout << cont[i] << C_R "Here!!" C_RESET << std::endl;
		}

		for (int i = 0; i < static_cast<int>(right.size()); ++i)
		{
			cont[mid + i] = right[i];	
			//std::cout << cont[mid + i] << C_G "Here!!" C_RESET << std::endl;
		}
		
		merge(cont, 0, mid - 1, n - 1);
	}
}






































/*
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
	//









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
*/
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
}
*/












