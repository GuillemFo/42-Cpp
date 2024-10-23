/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:08:18 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/23 13:43:09 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		const int			_reqGrade;
		const int 			_execGrade;
		bool				_isSign;	
	public:
		Form();
		Form(std::string nm, int req, int exec, bool def_status);
		~Form();
		Form(const Form &other);
		Form &operator=(const Form &a);
		
		std::string getName() const;
		int	getReqGrade() const;
		int	getExecGrade() const;
		bool getSign() const;
		void beSigned(Bureaucrat &a); ///pending to investigate

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
};
std::ostream &operator<<(std::ostream &val, const Form &who);
