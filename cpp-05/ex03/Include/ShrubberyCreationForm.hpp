/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:48:26 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/28 11:06:29 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public Form
{
	private:
		const std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string nm);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
		void	executeForm() const;
};
