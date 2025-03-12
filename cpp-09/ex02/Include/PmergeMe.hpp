/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:10:25 by gforns-s          #+#    #+#             */
/*   Updated: 2025/03/12 11:36:28 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <algorithm>
#include <ctime>
#include <stdexcept>
#include <limits>


class PmergeMe
{
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);

		void	sortV(std::vector<int>	&vec);
		void	sortD(std::deque<int> &deq);
		void 	printV(std::vector<int> &vec, std::string s);
		void 	printD(std::deque<int> &vec, std::string s);

		///////prints??
};


