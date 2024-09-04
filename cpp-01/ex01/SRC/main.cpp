/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:01:41 by gforns-s          #+#    #+#             */
/*   Updated: 2024/08/29 14:39:34 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int i = 0;
	Zombie* s = zombieHorde(10, "BOB");
	while (i < 10)
	{
		s[i].announce();
		i++;
	}
	delete []s;
}