/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:15:38 by gforns-s          #+#    #+#             */
/*   Updated: 2024/09/13 09:37:03 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Contact.hpp"

class	PhoneBook
{
	private:
		int	contQtt;
		Contact cont[8];
	public:
		PhoneBook();
		int		addContact();
		int		searchContact();
		void	exitProgram();
};
