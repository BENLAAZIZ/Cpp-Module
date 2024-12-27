/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 23:34:54 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/25 00:19:21 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "default";
    std::cout << "Default Constructor is caled " << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destructor is caled " << std::endl;
}

Animal::Animal(const Animal& obj)
{
    *this = obj;
    std::cout << " Copy Constructor is caled " << std::endl;
}

Animal& Animal::operator=(const Animal& obj)
{
    if (this != &obj)
        this->type = obj.type;
    std::cout << " Copy Assignment Operator is caled " << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::setType(std::string type)
{
    this->type = type;
}

void Animal::makeSound() const
{
    std::cout << "Animal Sound" << std::endl;
}