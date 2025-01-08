/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:08:44 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/07 05:03:00 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : _type("default") 
{
    // std::cout << "AMateria " << this->getType() << " constructor called" << std::endl;
}

AMateria::AMateria(std::string const& type) : _type(type) 
{
    // std::cout << "AMateria " << this->getType() << " constructor called" << std::endl; 
}

AMateria::AMateria(const AMateria& amateria)
{
    // std::cout << "AMateria " << this->getType() << " copy constructor called" << std::endl;
    *this = amateria;
}

AMateria& AMateria::operator=(const AMateria& amateria) {
    if (this == &amateria)
        return *this;
    this->_type = amateria._type;
    // std::cout << "AMateria " << this->getType() << " assignment operator called" << std::endl;
    return *this;
}

AMateria::~AMateria()
{
    // std::cout << "AMateria " << this->getType() << " destructor called" << std::endl;
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
