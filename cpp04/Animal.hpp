/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 23:31:25 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/24 23:47:38 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>

class  Animal
{
    protected:
        std::string type;
    public:
        Animal();
        ~Animal();
        Animal(const Animal& obj);
        Animal& operator=(const Animal& obj);
};

#endif