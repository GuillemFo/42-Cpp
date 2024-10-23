/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 01:18:18 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/23 08:53:33 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string nm, int i) : _name(nm)
{
	std::cout << "Bureaucrat " << this->_name << " constructor" << std::endl;
	try
	{
		if (i > 150)
			throw Bureaucrat::GradeTooHighException("Grade too high");
		else if (i < 1)
			throw Bureaucrat::GradeTooLowException("Grade too low");
		else if (i >= 1 && i <= 150)
			_grade = i;

	}
	catch(int nbr)
	{
		if (nbr < 1)
			std::cout << " Is this the way to do it?" << std::endl;
	}
	
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << this->_name << " destructor" << std::endl;
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
		this->_grade = other._grade;
	}
	return (*this);
}

const std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade()
{
	return (this->_grade);	
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high, range [1 - 150].");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low, range [1 - 150].");
}
