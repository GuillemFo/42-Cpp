/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:48:48 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/28 11:06:29 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#include <iostream>

class RobotomyRequestForm : public Form
{
	private:
		const std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string nm);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
		void	executeForm() const;
};
