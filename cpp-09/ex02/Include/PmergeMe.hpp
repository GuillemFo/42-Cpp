/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:10:25 by gforns-s          #+#    #+#             */
/*   Updated: 2025/02/06 16:09:18 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <iterator>
#include <algorithm>
#include <ctime>
#include <exception>
#include <limits>

std::vector<int>	mergeInsertSortVector(std::vector<int>	unsortedVec);
std::deque<int>		mergeInsertSortDeque(std::deque<int> unsortedDeque);
// timer start, timer vec, timer deq
bool	isValid(const std::string val);

