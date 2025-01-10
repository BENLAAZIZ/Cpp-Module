/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:12:27 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/09 23:10:52 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice& ice) : AMateria(ice)
{
    *this = ice;
}

Ice& Ice::operator=(const Ice& ice)
{
    if (this == &ice)
        return *this;
    this->_type = ice._type;
    return *this;
}

Ice::~Ice()
{
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




