/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 01:18:18 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/28 11:31:29 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :_name("Default"), _grade(150)
{
	std::cout << "Bureaucrat " << this->_name << " constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string nm, int i) : _name(nm)
{
	std::cout << "Bureaucrat " << this->_name << " constructor" << std::endl;
	if (i > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (i < 1)
		throw Bureaucrat::GradeTooLowException();
	_grade = i;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << this->_name << " destructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other.getName())
{
	*this = other;
	std::cout << "Copy constructor :)"<< std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	//std::cout << "help me :(" << std::endl;
	//std::cout << "Operator =" << std::endl;
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

int Bureaucrat::getGrade() const
{
	return (this->_grade);	
}

void	Bureaucrat::incrementGrade()
{
	if (this->getGrade() <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= 1;
}

void	Bureaucrat::decrementGrade()
{
	if (this->getGrade() >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += 1;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high, range [1 - 150].");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low, range [1 - 150].");
}

std::ostream &operator<<(std::ostream &val, const Bureaucrat &who)
{
	return (val << who.getName() << ", bureaucrat grade " << who.getGrade());
}

void Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed" << form.getName() << std::endl;
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cout << "Bureaucrat " << this->getName() << " couldn't sign form because " << e.what() << std::endl;
	}
	
}

void Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << "Bureaucrat "<< this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Bureaucrat " << this->getName() << " could not execute form because " << e.what() << std::endl;
	}
}
