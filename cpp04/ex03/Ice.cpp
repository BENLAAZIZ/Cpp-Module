/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:12:27 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/07 06:00:41 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
    // std::cout << "Ice : " << this->getType() << " constructor called" << std::endl;
}

Ice::Ice(const Ice& ice) : AMateria(ice)
{
    // std::cout << "Ice : " << this->getType() << " copy constructor called" << std::endl;
    *this = ice;
}

Ice& Ice::operator=(const Ice& ice)
{
    if (this == &ice)
        return *this;
    // std::cout << "Ice : assignment operator called" << std::endl;
    this->type = ice.type;
    return *this;
}

Ice::~Ice()
{
    // std::cout << "Ice : " << this->getType() << " destructor called" << std::endl;
}

AMateria *Ice::clone() const
{
    AMateria *materia = new Ice(*this);
    return materia;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}




