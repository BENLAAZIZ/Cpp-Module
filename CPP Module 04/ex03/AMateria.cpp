/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:08:44 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/09 23:10:20 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : _type("default") 
{
}

AMateria::AMateria(std::string const& type) : _type(type) 
{
}

AMateria::AMateria(const AMateria& amateria)
{
    *this = amateria;
}

AMateria& AMateria::operator=(const AMateria& amateria) {
    if (this == &amateria)
        return *this;
    this->_type = amateria._type;
    return *this;
}

AMateria::~AMateria()
{
}

std::string const& AMateria::getType() const
{
    return this->_type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    std::cout << "* uses " << this->getType() << std::endl;
}
