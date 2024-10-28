/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:10:20 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/28 10:27:08 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat	BOB("BOB", 145);
	Bureaucrat	Linx("Linx", 1);
	AForm		*shrubberyForm = new ShrubberyCreationForm("Xmas");
	AForm		*robotomyForm = new RobotomyRequestForm("Roger");
	AForm		*pardonForm = new PresidentialPardonForm("Pal");

	try
	{
		std::cout << BOB << std::endl;
		std::cout << Linx << std::endl;
		std::cout << *shrubberyForm << std::endl;
		std::cout << *robotomyForm << std::endl;
		std::cout << *pardonForm << std::endl;

		BOB.signForm(*shrubberyForm);
		BOB.executeForm(*shrubberyForm);

		std::cout << *shrubberyForm << std::endl;

		Linx.executeForm(*shrubberyForm);

		std::cout << *robotomyForm << std::endl;
		BOB.signForm(*robotomyForm);
		Linx.signForm(*robotomyForm);
		Linx.executeForm(*robotomyForm);

		BOB.signForm(*pardonForm);
		BOB.executeForm(*pardonForm);
		Linx.executeForm(*pardonForm);
		Linx.signForm(*pardonForm);
		Linx.executeForm(*pardonForm);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	delete shrubberyForm;
	delete robotomyForm;
	delete pardonForm;
	return (0);
}
