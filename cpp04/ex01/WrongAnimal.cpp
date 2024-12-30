/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 01:54:01 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/30 02:20:20 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    // std::cout << "Default WrongAnimal Constructor is caled " << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    // std::cout << "Destructor WrongAnimal is caled " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
    *this = obj;
    // std::cout << " Copy Constructor is caled " << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    if (this != &obj)
        this->type = obj.type;
    // std::cout << " Copy Assignment Operator is caled " << std::endl;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimals make different sounds." << std::endl;
}