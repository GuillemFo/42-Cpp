/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 09:55:26 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/06 13:31:00 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl(){}

void	Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void	Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}
void	Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I have been coming for years whereas you started working here since last month." << std::endl;
}
void	Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
Harl::~Harl()
{
	std::cout << "Destructor for Harl class" << std::endl;
}

void	Harl::complain(std::string level)
{
	void (Harl::*actions[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
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
