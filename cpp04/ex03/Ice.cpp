/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:12:27 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/05 01:56:24 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    
}

Ice::Ice(const Ice& ice) : AMateria(ice) {
    
    *this = ice;
}

Ice& Ice::operator=(const Ice& ice)
{
    if (this == &ice)
        return *this;
    this->type = ice.type;
    return *this;
}

Ice::~Ice() {}

AMateria *Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    AMateria::use(target);
}




