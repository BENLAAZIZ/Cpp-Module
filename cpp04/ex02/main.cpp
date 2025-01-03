/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 02:28:13 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/03 19:57:47 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


void  f()
{
	system("leaks ex02");
}

int main()
{
	atexit(f);

	const Animal* i = new Cat();
	const Animal* j = new Dog();
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();

	delete j;
	delete i;

	// Cat c1;

	// c1.getBrain()->set_idea(8, "I am a cat");
	// c1.getBrain()->set_idea(1, "I am a cat");
	// c1.getBrain()->set_idea(2, "I am a cat");
	// c1.getBrain()->set_idea(3, "I am a cat");
	// c1.getBrain()->set_idea(4, "I am a cat");
	// c1.getBrain()->set_idea(5, "I am a cat");

	// std::cout << "Cat's ideas:  " << c1.getBrain()->get_idea(8) << std::endl;

	// for (int i = 0; i < 100; i++)
	// {
	// 	std::cout << c1.getBrain()->get_idea(i) << std::endl;
	// }


	// Dog basic;
	// {
	// Dog tmp = basic;
	// }


	// const Animal* j[3] = {new Dog(), new Dog(), new Dog()};
	// const Animal* i[3] = {new Cat(), new Cat(), new Cat()};

	// for (int k = 0; k < 3; k++)
	// 	delete j[k];
	// for (int k = 0; k < 3; k++)
	// 	delete i[k];
	return 0;
}
