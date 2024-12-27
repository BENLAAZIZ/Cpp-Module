/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 00:14:13 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/27 02:21:10 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Default Constructor is caled " << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor is caled " << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
    *this = obj;
    std::cout << " Copy Constructor is caled " << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
    if (this != &obj)
        this->type = obj.type;
    std::cout << " Copy Assignment Operator is caled " << std::endl;
}

std::string Cat::getType() const
{
    return this->type;
}

void Cat::setType(std::string type)
{
    this->type = type;
}

void Cat::makeSound()
{
    std::cout << "The cat's voice is meow." << std::endl;
}