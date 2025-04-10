/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:10:25 by gforns-s          #+#    #+#             */
/*   Updated: 2025/04/10 11:11:13 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <stdexcept>
#include <ctime>
#include <cstdlib>

////////////COLORS///////////////////
# define C_R "\x1b[31m" // RED
# define C_G "\x1b[32m" // GREEN
# define C_B "\x1b[34m" // BLUE
# define C_Y "\x1b[33m" // YELLOW
# define C_M "\x1b[35m" // MAGENTA
# define C_C "\x1b[36m" // CYAN
# define C_RESET "\x1b[0m"
////////////////////////////////////

class PmergeMe
{
	private:
		std::vector<int> vec;
		std::deque<int> deq;
		void parseArgs(char **av);
		void validNum(const std::string &str);
		bool isDup(int val) const;

		void printcont(const std::vector<int> &v, const std::string &str) const; //const for safety
		void printcont(const std::deque<int> &d, const std::string &str) const;

		void fordJohnsonSort(std::vector<int> &cont);
		void fordJohnsonSort(std::deque<int> &cont);

		void insertSort(std::vector<int> &cont, int left, int right); // not working properly 25/02/25 :(
		void insertSort(std::deque<int> &cont, int left, int right);

		void merge(std::vector<int> &cont, int left, int mid, int right); //working??
		void merge(std::deque<int> &cont, int left, int mid, int right);
	public:
		PmergeMe();
		PmergeMe(char **av);
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();

		void sortAndMeasure(); //Correct?? need to check last update
};

