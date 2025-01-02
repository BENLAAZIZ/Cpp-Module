/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 00:13:55 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/02 23:58:32 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
#define Dog_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class  Dog : public Animal
{
    private:
        Brain* attribute;
    public:
        Dog();
        ~Dog();
        Dog(const Dog& obj);
        Dog& operator=(const Dog& obj);
        void makeSound() const;
        Brain* getBrain() const;
};

#endif