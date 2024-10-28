/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 01:18:21 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/28 11:27:13 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AForm.hpp"
// #include <string>
// #include <stdexcept>

class AForm;

class Bureaucrat
{
	protected:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string nm, int i);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);

		const std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(AForm &form);
		void executeForm(AForm const & form);
		
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();		
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();		
		};
};
std::ostream &operator<<(std::ostream &val, const Bureaucrat &grade);
