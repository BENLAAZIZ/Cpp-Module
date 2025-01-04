/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 01:08:16 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/04 01:12:48 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
}

MateriaSource::MateriaSource(MateriaSource const & other)
{
    *this = other;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & other)
{
    if (this != &other)
    {
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
}


