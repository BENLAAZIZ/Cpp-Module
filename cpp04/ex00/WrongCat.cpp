/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 02:22:04 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/30 02:24:32 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    // std::cout << "Default WrongCat Constructor is caled " << std::endl;
}

WrongCat::~WrongCat()
{
    // std::cout << "Destructor WrongCat is caled " << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
    // std::cout << " Copy Constructor is caled " << std::endl;
    *this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    if (this != &obj)
        this->type = obj.type;
    // std::cout << " Copy Assignment Operator is caled " << std::endl;
    return *this;
}

std::string WrongCat::getType() const
{
    return this->type;
}

void WrongCat::setType(std::string type)
{
    this->type = type;
}

void WrongCat::makeSound() const
{
    std::cout << "The Wrongcat's voice is meow." << std::endl;
}