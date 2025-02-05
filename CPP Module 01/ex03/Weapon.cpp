/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:02:57 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/26 16:06:46 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    type = "default";
}

Weapon::Weapon(std::string _type)
{
    type = _type;
}

Weapon::~Weapon()
{
    
}

std::string Weapon::getType() const
{
    return type;
}

void Weapon::setType(std::string _type)
{
    type = _type;
}
