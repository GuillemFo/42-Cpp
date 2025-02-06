/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:10:25 by gforns-s          #+#    #+#             */
/*   Updated: 2025/02/06 15:28:52 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>
#include <iterator>
#include <algorithm>
#include <ctime>
#include <exception>
#include <limits>


class PmergeMe
{
	protected:
		std::string			sequence;
		std::vector<int>	sVec;
		std::list<int>		sList;

		// timer start, timer vec, timer list
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);

		bool	isValid(const std::string val);
	

};
