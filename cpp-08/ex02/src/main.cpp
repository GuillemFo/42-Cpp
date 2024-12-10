/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 09:51:00 by gforns-s          #+#    #+#             */
/*   Updated: 2024/12/10 12:07:37 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top: " << mstack.top() << std::endl;	//	comment if want to compare with list since list wont have this option
	mstack.pop();	//	comment if want to compare with list since list wont have this option
	std::cout << "Size: " << mstack.size() << std::endl;	//	comment if want to compare with list since list wont have this option
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int> tstack;
	tstack.push(99);
	tstack.push(31);
	
	std::cout << "Size custom for tstack: " << tstack.size_custom() << std::endl;	//custom function 

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Mstack content printer: " << std::endl;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl << std::endl << std::endl;

	/* Custom code to test mutantstack and list
	std::list<int> Mmstack;
	Mmstack.push_back(5);
	Mmstack.push_back(17);
	// std::cout << "Top: " << Mmstack.top() << std::endl;
	// Mmstack.pop();
	// std::cout << "Size: " << Mmstack.size() << std::endl;
	Mmstack.push_back(3);
	Mmstack.push_back(5);
	Mmstack.push_back(737);
	Mmstack.push_back(0);

	std::list<int> Ttstack;
	Ttstack.push_back(99);
	Ttstack.push_back(31);
	
	//std::cout << "Size custom: " << Mmstack.size_custom() << std::endl;

	std::list<int>::iterator Iit = Mmstack.begin();
	std::list<int>::iterator Iite = Mmstack.end();
	++Iit;
	--Iit;
	while (Iit != Iite)
	{
	std::cout << *Iit << std::endl;
	++Iit;
	}
	// std::stack<int> Ss(Mmstack);
	*/

return 0;
}
