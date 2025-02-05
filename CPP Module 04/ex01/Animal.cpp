/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 01:56:26 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/09 08:41:21 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Animal default constructor called." << std::endl;
}
Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Animal : " << this->getType() << " constructor called." << std::endl;
}


Animal::~Animal()
{
    std::cout << "Animal : " << this->getType() << " destructor called." << std::endl;
}

Animal::Animal(const Animal& obj)
{
    std::cout << "Animal copy constructor called." << std::endl;
    *this = obj;
}

Animal& Animal::operator=(const Animal& obj)
{
    if (this != &obj)
        this->type = obj.type;
    std::cout << "Animal copy assignment operator called." << std::endl;
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