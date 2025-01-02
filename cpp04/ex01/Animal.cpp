/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 01:56:26 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/02 02:29:58 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
}
Animal::Animal(std::string type)
{
    this->type = type;
}


Animal::~Animal()
{
}

Animal::Animal(const Animal& obj)
{
    *this = obj;
}

Animal& Animal::operator=(const Animal& obj)
{
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}


void Animal::makeSound() const
{
    std::cout << "Animals make different sounds." << std::endl;
}