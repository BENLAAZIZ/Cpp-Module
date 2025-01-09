/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:08:44 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/07 06:04:02 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : type("default") 
{
    // std::cout << "AMateria " << this->getType() << " constructor called" << std::endl;
}

AMateria::AMateria(std::string const& type)
{
    // this->type = type;
    setType(type);
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
    this->type = amateria.type;
    // std::cout << "AMateria " << this->getType() << " assignment operator called" << std::endl;
    return *this;
}

AMateria::~AMateria()
{
    // std::cout << "AMateria " << this->getType() << " destructor called" << std::endl;
}

std::string const& AMateria::getType() const
{
    return this->type;
}

void AMateria::setType(std::string const& type)
{
    this->type = type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    std::cout << "* uses " << this->getType() << std::endl;
}
