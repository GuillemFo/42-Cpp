/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 08:49:51 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/01 13:41:57 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class ScavTrap
{
	protected:
		void guardGate();
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(ScavTrap &a);
		ScavTrap operator=(ScavTrap &a);

};
