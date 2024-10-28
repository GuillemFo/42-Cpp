/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:49:38 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/24 16:36:09 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("Default")
{
	std::cout << "Constructor for " << _target << " created using " << getName() << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string nm) : AForm("PresidentialPardonForm", 25, 5), _target(nm) //might need const before param
{
	std::cout << "Constructor for " << _target << " created using " << getName() << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), _target(other._target)
{
	
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) //should i copy the _target too?
{
	AForm::operator=(other);
	return (*this);
}

void PresidentialPardonForm::executeForm() const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
