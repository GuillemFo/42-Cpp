/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:08:33 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/23 13:31:00 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _reqGrade(10), _execGrade(5), _sign(false)
{
	std::cout << "Form " << this->_name << " constructor" << std::endl;
}
Form::Form(std::string nm, int req, int exec, bool def_status) : _name(nm), _reqGrade(req), _execGrade(exec), _sign(def_status) 
{
	std::cout << "Form " << this->_name << " constructor" << std::endl;
}

Form::~Form()
{
	std::cout << "Form " << this->_name << " destructor" << std::endl;
}

Form::Form(const Form &other)
{
	*this = other;
	std::cout << "Copy constructor Form :)"<< std::endl;
}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
		this->_sign = other._sign;
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

bool Form::getSign()
{
	return (this->_sign);
}



