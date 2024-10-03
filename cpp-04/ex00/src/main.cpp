/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:34:00 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/03 09:38:24 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
meta->makeSound();
delete	meta;

const Animal* j = new Dog();
std::cout << j->getType() << " " << std::endl;
j->makeSound();

const Animal* i = new Cat();
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!

const Animal* bobt = new Dog("Bobtail");
std::cout << bobt->getType() << " " << std::endl;
bobt->makeSound();
delete bobt;

Cat tst("test");
std::cout << tst.getType() << " " << std::endl;
tst.makeSound();

delete	j;
delete	i;

const WrongAnimal* z = new WrongCat();
std::cout << z->getType() << " " << std::endl;
z->makeSound();
delete	z;

return 0;
}
