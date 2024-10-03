/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:34:00 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/03 13:04:18 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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
std::cout << std::endl;

const Animal* j = new Dog();
std::cout << j->getType() << " " << std::endl;
j->makeSound();
delete	j;
std::cout << std::endl;

const Animal* i = new Cat();
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
delete	i;
std::cout << std::endl;

const Animal* bobt = new Dog("Bobtail");
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


Animal* deep = new Cat("deep");
Animal* d_test = new Cat(*static_cast<Cat*>(deep));
std::cout << std::endl;
std::cout << "Before change: "<< d_test->getType() << " " << std::endl;
std::cout << std::endl;
deep->setType("CHANGE DEEP");
std::cout << "Change applied to deep: " <<deep->getType() << " " << std::endl;
std::cout << std::endl;
std::cout << "After change is: " << d_test->getType() << " " << std::endl;
std::cout << std::endl;
delete deep;
delete d_test;

return 0;
}
