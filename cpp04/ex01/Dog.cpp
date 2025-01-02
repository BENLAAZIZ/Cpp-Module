/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 00:13:46 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/03 00:05:18 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

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