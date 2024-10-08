/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:27:42 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/25 08:47:28 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void){

    ClapTrap    bob("bob");
    ClapTrap    kat("kat");

    for (int i = 0; i < 12; i++)
        bob.attack("Bot 1");
    bob.beRepaired(100);
    for (int i = 0; i < 3; i++)
        bob.takeDamage(6);
    kat.beRepaired(12);
    kat.takeDamage(20);
    kat.takeDamage(15);
    kat.beRepaired(10);
    return (0);

}
