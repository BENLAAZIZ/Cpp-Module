/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:14:18 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/07 02:43:24 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure();
		Cure( Cure const & src );
		Cure & operator=( Cure const & rhs );
		~Cure();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif