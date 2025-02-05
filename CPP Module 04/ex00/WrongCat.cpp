/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 02:22:04 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/09 08:26:15 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << this->getType() << " Constructor is caled " << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << this->getType() << " Destructor is caled " << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
	std::cout << "WrongCat Copy Constructor is caled " << std::endl;
	*this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
	if (this != &obj)
		this->type = obj.type;
	std::cout << "WrongCat Copy Assignment Operator is caled " << std::endl;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "The Wrongcat's voice is ****." << std::endl;
}