/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 02:28:13 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/30 02:31:10 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
  const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound();
j->makeSound();
meta->makeSound();

std::cout << " ----------------------------------- " << std::endl;

const WrongAnimal* wrong = new WrongAnimal();
const WrongAnimal* wrongCat = new WrongCat();

std::cout << wrongCat->getType() << " " << std::endl;
wrongCat->makeSound();
wrong->makeSound();

    return 0;
}
