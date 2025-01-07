/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 01:51:15 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/07 03:57:45 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

// # include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria *materia[4];
	public:
		Character();
		Character( std::string const & name );
		Character( Character const& src );
		Character & operator=( Character const& rhs );
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif