/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:02:57 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/16 00:03:45 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
    type = _type;
}

Weapon::~Weapon()
{
    
}

std::string Weapon::getType()
{
    return type;
}

void Weapon::setType(std::string _type)
{
    type = _type;
}
