/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 01:18:21 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/23 08:47:31 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat
{
	protected:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat(const std::string nm, int i);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);

		const std::string getName() const;
		int getGrade();
		int incrementGrade();
		int decrementGrade();
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