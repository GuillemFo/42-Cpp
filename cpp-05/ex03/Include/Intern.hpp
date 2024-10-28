/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:11:15 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/28 11:06:29 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class Intern
{
	private:

	public:
		Intern();
		~Intern();
		Intern(const Intern &other);
		Intern &operator=(const Intern &other);
		
		Form	*makeForm(const std::string form_nm, const std::string target);
		class NoFormType : public std::exception
		{
			public:
				const char *what() const throw();
		};	
};

