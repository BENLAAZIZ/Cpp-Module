/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 00:13:46 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/27 02:20:54 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    // std::cout << "Default Constructor is caled " << std::endl;
}

Dog::~Dog()
{
    // std::cout << "Destructor is caled " << std::endl;
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
    *this = obj;
    // std::cout << " Copy Constructor is caled " << std::endl;
}

Dog& Dog::operator=(const Dog& obj)
{
    if (this != &obj)
        this->type = obj.type;
    // std::cout << " Copy Assignment Operator is caled " << std::endl;
}

std::string Dog::getType() const
{
    return this->type;
}

void Dog::setType(std::string type)
{
    this->type = type;
}


void Dog::makeSound()
{
    std::cout << "The dog's voice is hoo hoo." << std::endl;
}


