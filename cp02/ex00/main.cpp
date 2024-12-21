/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:14:31 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/21 02:08:56 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    
Fixed a;

Fixed b( a);

Fixed c,d;

c = d = a = a;

// std::cout << a.getRawBits() << std::endl;
// std::cout << a.getRawBits() << std::endl;
// std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;

return 0;
}

