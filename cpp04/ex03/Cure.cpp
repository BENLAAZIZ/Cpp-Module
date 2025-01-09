/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:14:09 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/09 09:21:28 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
	// std::cout << "Cure : " << this->getType() << " constructor called" << std::endl;
}


Cure::Cure(const Cure& cure) : AMateria(cure)
{
	// std::cout << "Cure : " << this->getType() << " copy constructor called" << std::endl;
	*this = cure;
}

Cure& Cure::operator=(const Cure& cure)
{
	if (this == &cure)
		return *this;
	// std::cout << "Cure : assignment operator called" << std::endl;
	this->_type = cure._type;
	return *this;
}


Cure::~Cure()
{
		// std::cout << "Cure : " << this->getType() << " destructor called" << std::endl;
}

AMateria *Cure::clone() const
{
	AMateria *materia = new Cure(*this);
	return materia;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
