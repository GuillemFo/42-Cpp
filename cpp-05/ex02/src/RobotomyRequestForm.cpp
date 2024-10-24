/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:49:35 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/24 16:36:18 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Default")
{
	std::cout << "Constructor for " << _target << " created using " << getName() << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string nm) : AForm("RobotomyRequestForm", 72, 45), _target(nm) //might need const before param
{
	std::cout << "Constructor for " << _target << " created using " << getName() << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), _target(other._target)
{
	
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) //should i copy the _target too?
{
	AForm::operator=(other);
	return (*this);
}

void RobotomyRequestForm::executeForm()const
{
	std::srand(std::time(NULL));

	std::cout << "Imagine some drilling noises XD" << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << this->_target << " has succesfully robotomized" << std::endl;
	else
		std::cout << "the robotomy failed on " << this->_target << std::endl;
}
