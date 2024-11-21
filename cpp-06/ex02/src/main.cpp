/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:24:29 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/21 13:13:13 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main()
{
	std::cout << "________________" << std::endl;
	std::cout << "Base *" << std::endl;
	std::cout << std::endl;
	Base *Alpha = new A();
	identify(Alpha);
	Base *Bravo = new B();
	identify(Bravo);
	Base *Charlie = new C();
	identify(Charlie);
	std::cout << "________________" << std::endl;

	std::cout << "Base * Error" << std::endl;
	std::cout  << std::endl;
	Base *err = NULL;
	identify(err);
	std::cout << "________________" << std::endl;

	std::cout << "Base * randomized" << std::endl;
	std::cout << std::endl;
	Base *rand = generate();
	identify(rand);
	delete rand;
	std::cout << "________________" << std::endl;
	
	std::cout << "Base without *" << std::endl;
	std::cout << std::endl;
	Base sub_Alpha = A();
	identify(sub_Alpha);
	Base sub_Bravo = B();
	identify(sub_Bravo);
	Base sub_Charlie = C();
	identify(sub_Charlie);
	std::cout << "________________" << std::endl;

	std::cout << "Deletes :)" << std::endl;
	delete Alpha;
	delete Bravo;
	delete Charlie;
	return (0);
}
