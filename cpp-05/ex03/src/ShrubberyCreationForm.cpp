/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:48:37 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/28 11:32:37 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Default")
{
	std::cout << "Constructor for " << _target << " created using " << getName() << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string nm) : AForm("ShrubberyCreationForm", 145, 137), _target(nm)
{
	std::cout << "Constructor for " << _target << " created using " << getName() << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), _target(other._target)
{
	
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	AForm::operator=(other);
	return (*this);
}

void ShrubberyCreationForm::executeForm()const
{
	std::ofstream	file;
	const std::string	name = "tmp/" + this->_target + "_shrubbery";
	const char	*filename = name.c_str();

	file.open(filename);
	if (file.fail() == true)
	{
		std::cerr << "Error opening file." << std::endl;
	}
	else
	{
		file << "          0 0  0 0\n"
             "      0 0\\/0\\|0 ()|/ @, 0\n"
             "      0\\/(/0/0||/0 /_/)_0/_0\n"
             "   0() 0\\/0|()|/0\\/ '%' 0 ()\n"
             "  0_\\_0_\\ |0 |0/0__%_/_0 0\n"
             "0   0 0 0| 0| /0 0 % ()0 /0\n"
             " ()0_---()0\\0\\|0-0--%---()~\n"
             "     0     \\|||\n"
             "            |||\n"
             "            |||\n"
             "            |||\n"
             "      , -=-~  .-^- _\"" << std::endl;
		file.close();
	}
}

