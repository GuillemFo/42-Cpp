/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:26:19 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/21 13:40:51 by gforns-s         ###   ########.fr       */
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
		else
			std::cout << "Cannot be identified" << std::endl;
	}
	catch (...)
	{
	}
	
}

void identify(Base &p)
{
	try
	{
		A &_A = dynamic_cast<A &>(p);
		(void)_A;
		std::cout << "A Class identified" << std::endl;
	}
	catch (...)
	{
		try
		{
			B &_B = dynamic_cast<B &>(p);
			(void)_B;
			std::cout << "B Class identified" << std::endl;
		}
		catch(...)
		{
			try
			{
				C &_C = dynamic_cast<C &>(p);
				(void)_C;
				std::cout << "C Class identified" << std::endl;
			}
			catch (...)
			{
				std::cout << "Cannot be identified" << std::endl;
			}
		}
	}
}
