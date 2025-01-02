/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 01:38:23 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/02 23:34:04 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class  Cat : public Animal
{
    private:
        Brain* attribute;
    public:
        Cat();
        ~Cat();
        Cat(const Cat& obj);
        Cat& operator=(const Cat& obj);
        void makeSound() const;
        Brain* getBrain() const;
};

#endif