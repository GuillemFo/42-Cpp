/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 09:55:26 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/06 13:24:18 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void	Harl::debug(void)
{
	
}

void	Harl::info(void)
{

}

void	Harl::warning(void)
{

}

void	Harl::error(void)
{
	
}

Harl::Harl()
{
	
}

Harl::~Harl()
{
	
}

void	Harl::complain(std::string level)
{
	void (Harl::*actions[])(void) = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	
	std::string str[]{"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; i++)
	{
		if (str[i] == level)
		{
			switch (i)
			{
			case 0:
				this->debug();
				break;
			case 1:
				this->info();
				break;
			case 2:
				this->warning();
				break;
			case 3:
				this->error();
				break;
			default:
				std::cout << "Invalid option" << std::endl;
				break;
			}
		}
	}
}
