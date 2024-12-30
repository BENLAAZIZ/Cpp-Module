/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 00:14:13 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/30 02:14:17 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    // std::cout << "Default Cat Constructor is caled " << std::endl;
}

Cat::~Cat()
{
    // std::cout << "Destructor Cat is caled " << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
    // std::cout << " Copy Constructor is caled " << std::endl;
    *this = obj;
}

Cat& Cat::operator=(const Cat& obj)
{
    if (this != &obj)
        this->type = obj.type;
    // std::cout << " Copy Assignment Operator is caled " << std::endl;
    return *this;
}

std::string Cat::getType() const
{
    return this->type;
}

void Cat::setType(std::string type)
{
    this->type = type;
}

void Cat::makeSound() const
{
    std::cout << "The cat's voice is meow." << std::endl;
}