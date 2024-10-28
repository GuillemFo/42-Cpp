/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:11:12 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/28 10:25:45 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout << "Default const Intern" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(const Intern &other)
{
	*this = other;
	std::cout << "Copy constuctor Intern" << std::endl;
}

Intern &Intern::operator=(const Intern &other)
{
	std::cout << "cpy const" << std::endl;
	(void)other;
	return (*this);
}

AForm *Intern::makeForm(std::string form_nm, std::string target)
{
	int type = -1; //protection
	std::string form_type[3] = {"Presidential", "Robotomy", "Shrubbery"};
	

	for (int i = 0; i < 3 && type == -1; i++)
	{
		if (form_type[i] = form_nm)
		{
			type = i;
		}
	}

	switch(type)
	{
		case 0:
			return (new PresidentialPardonForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new ShrubberyCreationForm(target));
		default:
			throw NoFormType();
	}
}

const char *Intern::NoFormType::what() const throw()
{
	return ("No form type found. Available forms: Presidential, Robotomy or Shrubbery");
}
