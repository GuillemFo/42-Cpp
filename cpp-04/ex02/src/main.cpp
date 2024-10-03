/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:34:00 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/03 12:57:26 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	//When creating and abstact base class, we need to transform a shared function into a virtual one with =0 and define the proper actions.
// const AAnimal* meta = new AAnimal();
// meta->makeSound();
// delete	meta;
// std::cout << std::endl;

const AAnimal* j = new Dog();
std::cout << j->getType() << " " << std::endl;
j->makeSound();
delete	j;
std::cout << std::endl;

const AAnimal* i = new Cat();
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
delete	i;
std::cout << std::endl;

const AAnimal* bobt = new Dog("Bobtail");
std::cout << bobt->getType() << " " << std::endl;
bobt->makeSound();
delete bobt;
std::cout << std::endl;

Cat tst("test");
std::cout << tst.getType() << " " << std::endl;
tst.makeSound();
std::cout << std::endl;

const WrongAnimal* z = new WrongCat();
std::cout << z->getType() << " " << std::endl;
z->makeSound();
delete	z;
std::cout << std::endl;

return 0;
}
