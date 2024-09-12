/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 09:55:29 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/12 10:14:07 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl bob;

	bob.complain("debug");
	std::cout << std::endl;
	bob.complain("info");
	std::cout << std::endl;
	bob.complain("warning");
	std::cout << std::endl;
	bob.complain("error");
	std::cout << std::endl;
	bob.complain("random");
	std::cout << std::endl;
	return (0);
}


/*
The goal of this exercise is to use pointers to member functions. This is not a
suggestion
*/