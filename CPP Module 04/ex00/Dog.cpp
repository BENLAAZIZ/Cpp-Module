/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 00:13:46 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/09 08:23:34 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << getType() << " constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << getType() << " destructor called" << std::endl;
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
	*this = obj;
}

Dog& Dog::operator=(const Dog& obj)
{
	if (this != &obj)
		Animal::operator=(obj);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "The dog's voice is hoo hoo." << std::endl;
}


