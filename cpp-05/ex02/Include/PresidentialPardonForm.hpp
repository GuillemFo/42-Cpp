/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:49:37 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/24 08:54:58 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : AForm
{
	private:
		const std::string _target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string nm);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
};