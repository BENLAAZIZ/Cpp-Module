/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 00:35:45 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/04 00:39:16 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(std::string const & type) : AMateria(type)
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure const & other) : AMateria(other)
{
}


Cure & Cure::operator=(Cure const & other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    return *this;
}

std::string const & Cure::getType() const
{
    return this->_type;
}

Cure* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}