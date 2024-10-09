/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 01:18:18 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/09 11:10:30 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string nm, int i) : name(nm)
{
	std::cout << "Bureaucrat " << this->name << " constructor" << std::endl;
	try
	{
		if (i > 150)
			throw Bureaucrat::GradeTooHighException;
		else if (i < 1)
			throw Bureaucrat::GradeTooLowException;
		else if (i >= 1 && i <= 150)
			grade = i;
		else
			throw Bureaucrat::SendHelp;
	}
	catch(int nbr)
	{
		if (nbr < 1)
			std::cout << " Is this the way to do it?" << std::endl;
	}
	
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << this->name << " destructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	*this = other;
	std::cout << "Copy constructor " << &other << std::endl;

}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "help me :(" << std::endl;
	if (this != &other)
	{
		this->grade = other.grade;
	}
	return (*this);
}

const std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade()
{
	return (this->grade);	
}

