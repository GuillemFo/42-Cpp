/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:26:19 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/21 13:02:39 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
	
}

Base *generate(void)
{
	srand(static_cast<unsigned int>(time(0)));
	int num = rand() %3;

	if (num == 0)
		return (new A);

	else if (num == 1)
		return (new B);

	else if (num == 2)
		return (new C);
		
	return (new A);
}


void identify(Base *p)
{
	try
	{

		A *_A = dynamic_cast<A *>(p);
		B *_B = dynamic_cast<B *>(p);
		C *_C = dynamic_cast<C *>(p);

		if (_A)
			std::cout << "A Class identified" << std::endl;
		else if (_B)
			std::cout << "B Class identified" << std::endl;
		else if (_C)
			std::cout << "C Class identified" << std::endl;
	}
	catch (...)
	{
	}
	
}

void identify(Base& p)
{
	(void)p;
	std::cout << "missing still\n";	
}
