/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 08:52:54 by gforns-s          #+#    #+#             */
/*   Updated: 2024/04/30 14:34:17 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (1);
	}
	for (int j = 1; av[j] != NULL; j++)
	{
		for (int i = 0; av[j][i] != '\0'; i++)
		{
			std::cout << (char)std::toupper(av[j][i]);
		}
	}
	std::cout << "\n";
	return (0);
}
