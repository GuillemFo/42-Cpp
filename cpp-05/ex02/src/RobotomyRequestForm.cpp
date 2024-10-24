/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:49:35 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/24 09:57:00 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 145, 137), _target("Default")
{
	std::cout << "Constructor for " << _target << "created using " << getName() << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string nm) : AForm("RobotomyRequestForm", 145, 137), _target(nm) //might need const before param
{
	std::cout << "Constructor for " << _target << "created using " << getName() << std::endl;
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

