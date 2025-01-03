/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 02:28:13 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/03 02:29:30 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


void  f()
{
	system("leaks ex01");
}

int main()
{
	// atexit(f);
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
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

	return 0;
}
