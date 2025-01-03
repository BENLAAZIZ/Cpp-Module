/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 02:28:13 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/02 02:29:44 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void  f()
{
	system("leaks ex00");
}

int main()
{
		// atexit(f);
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		// Cat cat;

		// Cat cat2;

		// cat2 = cat;

		// std::cout << " +++++++++++++++++++++++++++ " << std::endl;
		// 	std::cout << cat.getType() << " " << std::endl;
		// 	std::cout << cat2.getType() << " " << std::endl;
		// 	cat.makeSound();
		// 	cat2.makeSound();
		// std::cout << " +++++++++++++++++++++++++++ " << std::endl;

		std::cout << j->getType() << " " << std::endl;

		std::cout << i->getType() << " " << std::endl;


		i->makeSound();
		j->makeSound();
		meta->makeSound();

		// std::cout << " ----------------------------------- " << std::endl;

		// const WrongAnimal* wrong = new WrongAnimal();
		// const WrongAnimal* wrongCat = new WrongCat();

		// std::cout << wrongCat->getType() << " " << std::endl;
		// wrongCat->makeSound();
		// wrong->makeSound();

		delete meta;
		delete j;
		delete i;
		// delete wrong;
		// delete wrongCat;

		return 0;
}
