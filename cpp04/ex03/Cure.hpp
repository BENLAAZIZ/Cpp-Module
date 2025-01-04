/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 00:35:36 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/04 00:40:21 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP


#include <iostream>

#include "AMateria.hpp"


class Cure : public AMateria
{
    public:
        Cure();
        Cure(std::string const & type);
        virtual ~Cure();
        Cure(Cure const & other);
        Cure & operator=(Cure const & other);
        std::string const & getType() const;
        virtual Cure* clone() const;
        virtual void use(ICharacter& target);
};

#endif