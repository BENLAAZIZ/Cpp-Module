/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 01:46:59 by hben-laz          #+#    #+#             */
/*   Updated: 2025/01/09 23:05:19 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
#define Dog_HPP

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

void	creat_Animals(Animal* ar_animals[], int n);

#endif