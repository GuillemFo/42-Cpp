/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:15:38 by gforns-s          #+#    #+#             */
/*   Updated: 2024/08/06 11:11:30 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Contacts.hpp"

class	PhoneBook
{
	private:
		int	index;
		Contacts cont[8];
	public:
		PhoneBook();
		int		addContact();
		int		searchContact();
		void	exitProgram();
};