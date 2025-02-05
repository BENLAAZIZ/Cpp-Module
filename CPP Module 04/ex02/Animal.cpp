/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 01:44:34 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/09 09:07:27 by hben-laz         ###   ########.fr       */
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
    std::cout << "Animal : " << this->type << " constructor called." << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal : " << this->type << " destructor called." << std::endl;
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