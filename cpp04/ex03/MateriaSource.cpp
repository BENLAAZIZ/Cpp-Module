/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 02:20:16 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/05 02:23:21 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
        materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& materiaSource) {
    *this = materiaSource;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& materiaSource) {
    if (this == &materiaSource)
        return *this;
    for (int i = 0; i < 4; i++)
    {
        if (materia[i])
            delete materia[i];
        materia[i] = materiaSource.materia[i]->clone();
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++)
    {
        if (materia[i])
            delete materia[i];
    }
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; i++)
    {
        if (!materia[i])
        {
            materia[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const& type) {
    for (int i = 0; i < 4; i++)
    {
        if (materia[i] && materia[i]->getType() == type)
            return materia[i]->clone();
    }
    return NULL;
}
