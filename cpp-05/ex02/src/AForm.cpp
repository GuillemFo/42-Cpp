/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:08:33 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/24 10:21:23 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default"), _reqGrade(150), _execGrade(150), _isSign(false)
{
	std::cout << "AForm " << this->_name << " constructor" << std::endl;
}
AForm::AForm(std::string nm, int req, int exec) : _name(nm), _reqGrade(req), _execGrade(exec), _isSign(false)
{
	std::cout << "AForm " << this->_name << " constructor" << std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm " << this->_name << " destructor" << std::endl;
}

AForm::AForm(const AForm &other) : _name(other.getName()), _reqGrade(other.getReqGrade()), _execGrade(other.getExecGrade()), _isSign(other.getSign())
{
	std::cout << "Copy constructor AForm :)"<< std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
		this->_isSign = other._isSign;
	return (*this);
}

std::string	AForm::getName() const
{
	return (this->_name);
}

int AForm::getReqGrade() const
{
	return (this->_reqGrade);
}

int AForm::getExecGrade() const
{
	return (this->_execGrade);
}

bool AForm::getSign() const
{
	return (this->_isSign);
}

const char *AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high, range [1 - 150].");
}

const char *AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low, range [1 - 150].");
}

const char *AForm::FormNotSigned::what() const throw()
{
	return ("Form not signed, can't execute");
}

void AForm::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > this->getReqGrade())
		throw AForm::GradeTooLowException();
	this->_isSign = true;
}

std::ostream &operator<<(std::ostream &val, const AForm &form)
{
	return (val << "-----------------" << std::endl
			<< "Form name: " << form.getName() << std::endl
			<< "Status: " << (form.getSign() ? "Signed" : "Not signed") << std::endl
			<< "Grade required to sign: " << form.getReqGrade() << std::endl
			<< "Grade required to exectue: " << form.getExecGrade() << std::endl
			<< "-----------------");
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (this->getSign() == false)
		throw AForm::FormNotSigned();
	else if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();
	//execute 
	
}
