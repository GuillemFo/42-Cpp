/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:15:38 by gforns-s          #+#    #+#             */
/*   Updated: 2024/08/26 15:31:55 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include "Contacts.hpp"

class	PhoneBook
{
	private:
		int	contQtt;
		Contacts cont[8];
	public:
		PhoneBook();
		int		addContact();
		int		searchContact();
		void	exitProgram();
};