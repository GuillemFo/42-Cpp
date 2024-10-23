/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:08:33 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/23 14:05:07 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Default"), _reqGrade(150), _execGrade(150), _isSign(false)
{
	std::cout << "Form " << this->_name << " constructor" << std::endl;
}
Form::Form(std::string nm, int req, int exec, bool def_status) : _name(nm), _reqGrade(req), _execGrade(exec), _isSign(false)
{
	std::cout << "Form " << this->_name << " constructor" << std::endl;
}

Form::~Form()
{
	std::cout << "Form " << this->_name << " destructor" << std::endl;
}

Form::Form(const Form &other) : _name(other.getName()), _reqGrade(other.getReqGrade()), _execGrade(other.getExecGrade()), _isSign(other.getSign())
{
	std::cout << "Copy constructor Form :)"<< std::endl;
}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
		this->_isSign = other._isSign;
	return (*this);
}

std::string	Form::getName() const
{
	return (this->_name);
}

int Form::getReqGrade() const
{
	return (this->_reqGrade);
}

int Form::getExecGrade() const
{
	return (this->_execGrade);
}

bool Form::getSign() const
{
	return (this->_isSign);
}

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high, range [1 - 150].");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low, range [1 - 150].");
}

void Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > this->getReqGrade())
		throw Form::GradeTooLowException();
	this->_isSign = true;
}

std::ostream &operator<<(std::ostream &val, const Form &form)
{
	return (val << "-----------------" << std::endl
			<< "Form name: " << form.getName() << std::endl
			<< "Status: " << (form.getSign() ? "Signed" : "Not signed") << std::endl
			<< "Grade required to sign: " << form.getReqGrade() << std::endl
			<< "Grade required to exectue: " << form.getExecGrade() << std::endl
			<< "-----------------");
}

