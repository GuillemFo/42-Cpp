/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:08:18 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/28 11:30:32 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		const int			_reqGrade;
		const int 			_execGrade;
		bool				_isSign;	
	public:
		AForm();
		AForm(std::string nm, int req, int exec);
		virtual ~AForm();
		AForm(const AForm &other);
		AForm &operator=(const AForm &a);
		
		std::string getName() const;
		int	getReqGrade() const;
		int	getExecGrade() const;
		bool getSign() const;
		void beSigned(Bureaucrat &a);
		void execute(Bureaucrat const & executor) const;
		virtual void	executeForm() const = 0;

	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class FormNotSigned : public std::exception
	{
		public:
			const char *what() const throw();
	};
};
std::ostream &operator<<(std::ostream &val, const AForm &who);
