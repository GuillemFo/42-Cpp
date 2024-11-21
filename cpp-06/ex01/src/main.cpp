/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:24:29 by gforns-s          #+#    #+#             */
/*   Updated: 2024/11/21 11:39:29 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main( void )
{
	Data	*data = new Data;


	data->my_Char = 80;
	data->my_Num = 557916;
	data->my_Float = 781.001e2f;
	data->my_Double = 945689776.78423210;
	data->my_LInt_ptr = 0;
	data->my_ULInt = 247891;
	data->my_UintPtr_T_ptr = NULL;
	data->my_Uint64_T = 535489;
	data->my_LDouble = -00000.99441;

	uintptr_t ptr;


	std::cout << "_________________________" << std::endl;
	std::cout << "____function return______" << std::endl;
	std::cout << Serializer::serialize(data) << std::endl;
	std::cout << (ptr = Serializer::serialize(data)) << std::endl;
	Data	*new_data = Serializer::deserialize(ptr);
	std::cout << new_data << std::endl;
	std::cout << "_________________________" << std::endl;
	std::cout << "____Serializing value____________" << std::endl;
	ptr = Serializer::serialize(data);
	std::cout << "_________________________" << std::endl;
	std::cout << "____Deserializing value____" << std::endl;
	std::cout << Serializer::deserialize(ptr)->my_Char << std::endl;
	std::cout << new_data->my_Char << std::endl;
	std::cout << "_________________________" << std::endl;
	std::cout << Serializer::deserialize(ptr)->my_Num << std::endl;
	std::cout << new_data->my_Num << std::endl;
	std::cout << "_________________________" << std::endl;
	std::cout << Serializer::deserialize(ptr)->my_Float << std::endl;
	std::cout << new_data->my_Float << std::endl;
	std::cout << "_________________________" << std::endl;
	std::cout << Serializer::deserialize(ptr)->my_Double << std::endl;
	std::cout << new_data->my_Double << std::endl;
	std::cout << "_________________________" << std::endl;
	std::cout << Serializer::deserialize(ptr)->my_LInt_ptr << std::endl;
	std::cout << new_data->my_LInt_ptr << std::endl;
	std::cout << "_________________________" << std::endl;
	std::cout << Serializer::deserialize(ptr)->my_ULInt << std::endl;
	std::cout << new_data->my_ULInt << std::endl;
	std::cout << "_________________________" << std::endl;
	std::cout << Serializer::deserialize(ptr)->my_UintPtr_T_ptr << std::endl;
	std::cout << new_data->my_UintPtr_T_ptr << std::endl;
	std::cout << "_________________________" << std::endl;
	std::cout << Serializer::deserialize(ptr)->my_Uint64_T << std::endl;
	std::cout << new_data->my_Uint64_T << std::endl;
	std::cout << "_________________________" << std::endl;
	std::cout << Serializer::deserialize(ptr)->my_LDouble << std::endl;
	std::cout << new_data->my_LDouble << std::endl;
	std::cout << "_________________________" << std::endl;
	return 0;
}
