/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 00:25:00 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/04 00:43:06 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(std::string const & type) : AMateria(type)
{
}

Ice::~Ice()
{
}


Ice::Ice(Ice const & other) : AMateria(other)
{
}


Ice & Ice::operator=(Ice const & other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    return *this;
}

std::string const & Ice::getType() const
{
    return this->_type;
}


void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}


