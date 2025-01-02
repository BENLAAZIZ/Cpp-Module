/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 02:28:13 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/03 00:51:35 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void  f()
{
	system("leaks ex01");
}

int main()
{
	// atexit(f);
	// std::cout << "==================== Dog ====================" << std::endl;
	// Animal* j = new Dog();
	// j->makeSound(); //will output the cat sound!
	// std::cout << "==================== Cat ====================" << std::endl;
	// Animal* i = new Cat();
	// i->makeSound();
	// std::cout << " type of i " << i->getType() << std::endl;
	// std::cout << "==================== WrongCat ====================" << std::endl;
	// const WrongAnimal* k = new WrongCat();
	// k->makeSound();
	// std::cout << "==================== dellet Dog ====================" << std::endl;
	// delete j;//should not create a leak
	// std::cout << "==================== dellet Cog ====================" << std::endl;
	// delete i;
	// delete k;

	Cat c1;

	c1.getBrain()->set_idea(0, "I am a cat");
	c1.getBrain()->set_idea(1, "I am a cat");
	c1.getBrain()->set_idea(2, "I am a cat");
	c1.getBrain()->set_idea(3, "I am a cat");
	c1.getBrain()->set_idea(4, "I am a cat");
	c1.getBrain()->set_idea(5, "I am a cat");

	for (int i = 0; i < 100; i++)
	{
		std::cout << c1.getBrain()->get_idea(i) << std::endl;
	}


	// Dog basic;
	// {
	// Dog tmp = basic;
	// }

	return 0;
}
