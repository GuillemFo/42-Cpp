/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:34:00 by gforns-s          #+#    #+#             */
/*   Updated: 2024/10/03 08:59:57 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
j->makeSound();
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
meta->makeSound();

const Animal* test = new Dog("Bobtail");
std::cout << test->getType() << " " << std::endl;
test->makeSound();

Cat tst("test");
std::cout << tst.getType() << " " << std::endl;
tst.makeSound();

delete	meta;
delete	j;
delete	i;
return 0;
}
