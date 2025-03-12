/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:10:36 by gforns-s          #+#    #+#             */
/*   Updated: 2025/03/12 09:40:07 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "PmergeMe.hpp"

//merge-insert sort algorithm
//https://en.wikipedia.org/wiki/Merge-insertion_sort
//https://www.geeksforgeeks.org/sorting-by-combining-insertion-sort-and-merge-sort-algorithms/



#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <cstdlib>
#include <sstream>

class PmergeMe {
private:
    std::vector<int> vectorSequence;
    std::deque<int> dequeSequence;

public:
    PmergeMe() {}

    void parseInput(int argc, char **argv) {
        for (int i = 1; i < argc; i++) {
            std::istringstream iss(argv[i]);
            int num;
            if (!(iss >> num) || num <= 0) {
                std::cerr << "Error: Invalid input." << std::endl;
                exit(1);
            }
            vectorSequence.push_back(num);
            dequeSequence.push_back(num);
        }
    }

    // Pairing Phase
    void pairAndSort(std::vector<int>& arr) {
        std::vector<std::pair<int, int> > pairs;
        std::vector<int> leftovers;
        size_t i = 0;

        while (i + 1 < arr.size()) {
            if (arr[i] > arr[i + 1])
                pairs.push_back(std::make_pair(arr[i], arr[i + 1]));
            else
                pairs.push_back(std::make_pair(arr[i + 1], arr[i]));
            i += 2;
        }
        if (arr.size() % 2 != 0) // If odd count, store the last element
            leftovers.push_back(arr.back());

        std::vector<int> mainSeq, smallSeq;
        for (size_t j = 0; j < pairs.size(); j++) {
            mainSeq.push_back(pairs[j].first);
            smallSeq.push_back(pairs[j].second);
        }

        mergeInsertionSort(mainSeq);
        insertRemaining(mainSeq, smallSeq, leftovers);
        arr = mainSeq;
    }

    // Recursive Merge-Insertion Sort
    void mergeInsertionSort(std::vector<int>& arr) {
        if (arr.size() <= 1) return;
        std::vector<int> left, right;
        for (size_t i = 0; i < arr.size(); i++) {
            if (i % 2 == 0)
                left.push_back(arr[i]);
            else
                right.push_back(arr[i]);
        }
        mergeInsertionSort(left);
        mergeInsertionSort(right);
        merge(arr, left, right);
    }

    void merge(std::vector<int>& arr, std::vector<int>& left, std::vector<int>& right) {
        size_t i = 0, j = 0, k = 0;
        while (i < left.size() && j < right.size()) {
            if (left[i] < right[j])
                arr[k++] = left[i++];
            else
                arr[k++] = right[j++];
        }
        while (i < left.size())
            arr[k++] = left[i++];
        while (j < right.size())
            arr[k++] = right[j++];
    }

    // Insertion Phase
    void insertRemaining(std::vector<int>& mainSeq, std::vector<int>& smallSeq, std::vector<int>& leftovers) {
        for (size_t i = 0; i < smallSeq.size(); i++) {
            std::vector<int>::iterator it = mainSeq.begin();
            while (it != mainSeq.end() && *it < smallSeq[i]) {
                ++it;
            }
            mainSeq.insert(it, smallSeq[i]);
        }
        for (size_t i = 0; i < leftovers.size(); i++) {
            std::vector<int>::iterator it = mainSeq.begin();
            while (it != mainSeq.end() && *it < leftovers[i]) {
                ++it;
            }
            mainSeq.insert(it, leftovers[i]);
        }
    }

    // Wrapper function to execute sorting and time measurement
    void process() {
        std::clock_t start, end;

        // Sort using vector
        std::vector<int> vecCopy = vectorSequence;
        start = std::clock();
        pairAndSort(vecCopy);
        end = std::clock();
        double vectorTime = (double)(end - start) / CLOCKS_PER_SEC * 1000000;

        // Sort using deque
        std::deque<int> deqCopy = dequeSequence;
        start = std::clock();
        std::vector<int> deqVector(deqCopy.begin(), deqCopy.end());
        pairAndSort(deqVector);
        end = std::clock();
        double dequeTime = (double)(end - start) / CLOCKS_PER_SEC * 1000000;

        // Print Results
        std::cout << "Before: ";
        for (size_t i = 0; i < vectorSequence.size(); i++)
            std::cout << vectorSequence[i] << " ";
        std::cout << std::endl;

        std::cout << "After: ";
        for (size_t i = 0; i < vecCopy.size(); i++)
            std::cout << vecCopy[i] << " ";
        std::cout << std::endl;

        std::cout << "Time to process a range of " << vectorSequence.size() << " elements with std::vector: " << vectorTime << " us" << std::endl;
        std::cout << "Time to process a range of " << dequeSequence.size() << " elements with std::deque: " << dequeTime << " us" << std::endl;
    }
};

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cerr << "Error: Provide a sequence of positive integers." << std::endl;
        return 1;
    }

    PmergeMe sorter;
    sorter.parseInput(argc, argv);
    sorter.process();

    return 0;
}



/*
int main(int ac, char **av)
{
	std::vector<int>	vec;
	std::deque<int>		deq;
	int	nb;
	try
	{
		if (ac < 2)
			throw std::invalid_argument ("Error"); // check subject!!
		for (int i = 1; i < ac; ++i)
		{
			char *endp;
			long num = std::strtol(av[i], &endp, 10);
			if (*endp != '\0' || num < 0 || num > std::numeric_limits<int>::max())
			{
				throw std::invalid_argument ("Error");
				return (1);
			}
			vec.push_back(static_cast<int>(num));
			deq.push_back(static_cast<int>(num));
		}

	/////// PRINT PRE SORTED AND SORTED??

		std::clock_t startV = std::clock();
		//sortVector ...
		std::clock_t endV = std::clock();

		std::clock_t startD = std::clock();
		//sortDeq ...
		std::clock_t endD = std::clock();

		//clock timers (dont know if correct!!!!!!!)
		double timeV = 1000000.0 * (endV - startV) / CLOCKS_PER_SEC;
		double timeD = 1000000.0 * (endD - startD) / CLOCKS_PER_SEC;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}

*/