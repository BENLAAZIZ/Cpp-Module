/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 01:51:05 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/07 05:46:50 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("default")
{
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
}

Character::Character(std::string const& name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
}

Character::Character(const Character& character)
{
	*this = character;
}

Character&	Character::operator=(const Character& character)
{
	if (this == &character)
		return *this;
	this->_name = character._name;
	for (int i = 0; i < 4; i++)
	{
		if (materia[i])
			delete materia[i];
		materia[i] = character.materia[i];
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (materia[i])
			delete materia[i];
	}
}

std::string	const& Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++)
	{
		if (!materia[i])
		{
			materia[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx >= 4 || !materia[idx])
		return;
	materia[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !materia[idx])
		return;
	materia[idx]->use(target);
}