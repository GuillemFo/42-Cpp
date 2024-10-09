/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 01:18:18 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/09 10:35:29 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string nm, int i) : name(nm), grade(i)
{
	std::cout << "Bureaucrat " << this->name << " constructor" << std::endl;
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

