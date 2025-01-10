/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 00:13:46 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/09 23:08:05 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

Dog::Dog() : Animal("Dog")
{
	attribute = new Brain();
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::~Dog()
{
	delete attribute;
	std::cout << "Dog destructor called." << std::endl;
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
	attribute = new Brain(*obj.attribute);
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& obj)
{
	if (this != &obj)
	{
		Animal::operator=(obj);
		delete attribute;
		attribute = new Brain(*obj.attribute);
	}
	std::cout << "Dog copy assignment operator called." << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "The Dog's voice is how how !" << std::endl;
}

Brain* Dog::getBrain() const
{
	return attribute;
}

void creat_Animals(Animal* ar_animals[], int n)
{
	 std::cout << "---------------- Creating Animals  ----------------" << std::endl;
	for (int i = 0; i < n / 2; i++)
		ar_animals[i] = new Dog();
	for (int i = n / 2; i < n; i++)
		ar_animals[i] = new Cat();
	std::cout << "---------------- type of each Animal ----------------" << std::endl;
	for (int i = 0; i < n; i++)
		std::cout << "animal " << i + 1 << " : " << ar_animals[i]->getType()<< std::endl;
		
	std::cout << "---------------- Deleting each Animal ----------------" << std::endl;
	for (int i = 0; i < n; i++){
		std::cout << "animal " << i + 1 << " :" << std::endl;
		delete ar_animals[i];
	}
	std::cout << std::endl;
}