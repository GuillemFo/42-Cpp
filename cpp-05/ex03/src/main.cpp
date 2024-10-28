/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:10:20 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/28 11:57:52 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Intern someRandomIntern;
		Bureaucrat top("Kan", 1);
		Bureaucrat mid("Bob", 50);
		Bureaucrat low("Loise", 140);

		AForm* form;


		form = someRandomIntern.makeForm("robotomy request", "Bender"); //this creates the form
		std::cout << std::endl << "Created Form: " << std::endl << *form << std::endl;

		form->beSigned(mid);	//uses a bureaucrat to sign the form
		top.executeForm(*form);	//executes through a bureaucrat
		std::cout << std::endl;
		delete form;

		form = someRandomIntern.makeForm("shrubbery creation", "Garden");
		std::cout << std::endl << "Created Form: " << std::endl << *form << std::endl;

		low.signForm(*form);	//signs the form through a bureaucrat 
		mid.signForm(*form);
		mid.executeForm(*form);	//executes through a bureaucrat
		top.executeForm(*form);
		std::cout << std::endl;
		delete form;

		form = someRandomIntern.makeForm("presidential pardon", "Arthur Dent");
		std::cout << std::endl << "Created Form: " << std::endl << *form << std::endl;

		mid.signForm(*form);
		top.signForm(*form);
		top.executeForm(*form);
		std::cout << std::endl;
		delete form;

		form = someRandomIntern.makeForm("time off request", "Root");	//this form does not exist and will force an exception
	} 
	catch (const std::exception &e)
	{
		std::cout << std::endl;
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}

