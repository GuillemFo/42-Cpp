/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:26:21 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/02 10:15:46 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ClapTrap.hpp"
//#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	// FragTrap tim("tim");
	// tim.highFivesGuys();
	// FragTrap	bob("bob");
	// FragTrap	kat("kat");

	// for (int i = 0; i < 12; i++)
	// 	bob.attack("Bot 1");
	// bob.beRepaired(100);
	// for (int i = 0; i < 3; i++)
	// 	bob.takeDamage(6);
	// kat.beRepaired(12);
	// kat.takeDamage(20);
	// kat.takeDamage(15);
	// kat.beRepaired(10);

	FragTrap	ron("ron");
	FragTrap	mel("mel");
	FragTrap	def;
	//ron.guardGate();
	def.beRepaired(25);
	//def.guardGate();
	for (int i = 0; i < 5; i++)
	{
		ron.attack("mel");
		mel.takeDamage(20);
	}
	mel.beRepaired(25);
	ron.attack("mel");
	mel.takeDamage(5);
	ron.attack("mel");
	mel.takeDamage(20);
	mel.takeDamage(1);

	return (0);
}


