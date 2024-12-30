/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 01:56:26 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/30 02:13:59 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    // std::cout << "Default Animal Constructor is caled " << std::endl;
}

Animal::~Animal()
{
    // std::cout << "Destructor Animal is caled " << std::endl;
}

Animal::Animal(const Animal& obj)
{
    *this = obj;
    // std::cout << " Copy Constructor is caled " << std::endl;
}

Animal& Animal::operator=(const Animal& obj)
{
    if (this != &obj)
        this->type = obj.type;
    // std::cout << " Copy Assignment Operator is caled " << std::endl;
    return *this;
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
    std::cout << "Animals make different sounds." << std::endl;
}