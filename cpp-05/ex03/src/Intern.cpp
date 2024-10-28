/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:11:12 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/28 08:32:56 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

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
	
}

Intern &Intern::operator=(const Intern &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
	}
	return (*this);
}

AForm *Intern::makeForm(std::string nmf, std::string target)
{

	//switch to exec each form.
}