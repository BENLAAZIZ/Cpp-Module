/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 01:45:09 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/09 23:05:37 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	attribute = new Brain();
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::~Cat()
{
	delete attribute;
	std::cout << "Cat destructor called." << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	attribute = new Brain(*obj.attribute);
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
	if (this != &obj)
	{
		Animal::operator=(obj);
		delete attribute;
		attribute = new Brain(*obj.attribute);
	}
	std::cout << "Cat copy assignment operator called." << std::endl;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "The cat's voice is meow." << std::endl;
}

Brain* Cat::getBrain() const
{
	return attribute;
}