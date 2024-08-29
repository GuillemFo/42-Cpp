/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:15:38 by gforns-s          #+#    #+#             */
/*   Updated: 2024/08/29 08:11:08 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
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