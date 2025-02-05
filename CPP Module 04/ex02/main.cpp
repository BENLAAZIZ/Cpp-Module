/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 01:47:09 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/09 23:08:32 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();

	delete j;
	delete i;

	std::cout << "-------------------------------------" << std::endl;

	Cat c1;

	c1.getBrain()->set_idea(8, "I am a cat");
	c1.getBrain()->set_idea(1, "I am a cat");
	c1.getBrain()->set_idea(2, "I am a cat");
	c1.getBrain()->set_idea(3, "I am a cat");
	c1.getBrain()->set_idea(4, "I am a cat");
	c1.getBrain()->set_idea(5, "I am a cat");
	
	std::cout << c1.getBrain()->get_idea(1) << std::endl;

	int n = 6;
	if (n <= 0)
		return 1;
	Animal* ar_animals[n];
	creat_Animals(ar_animals, n);
	std::cout << "-------------------------------------" << std::endl;
	return 0;
}
