/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:14:31 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/28 02:43:45 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    
// Fixed a;
// Fixed const b( 10 );
// Fixed const c( 42.42f );
// Fixed const d( b );
// a = Fixed( 1234.4321f );


// std::cout << "a is " << a << std::endl;
// std::cout << "b is " << b << std::endl;
// std::cout << "c is " << c << std::endl;
// std::cout << "d is " << d << std::endl;

// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// std::cout << "d is " << d.toInt() << " as integer" << std::endl;


Fixed const b( 3 );

// c = a + b;

// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// std::cout << "c is " << c.toInt() << " as integer" << std::endl;

// std::cout << " c = a + b  c is " << c.toInt() << " as float" << std::endl;

// c = a - b;

// std::cout << "c = a - b  c is " << c.toInt() << " as float" << std::endl;

// c = a * b;

// std::cout << "c = a * b  c is " << c.toInt() << " as float" << std::endl;

// if ((a == b) == false)
//     std::cout << "false" << std::endl;

// c = a / b;

// std::cout << " c = a / b c is " << c.toInt() << " as float" << std::endl;

// ++a;

// std::cout <<"a is "<< a++ << std::endl;
// std::cout <<"a is "<< ++a << std::endl;
// std::cout <<"a is "<< a-- << std::endl;
// std::cout <<"a is "<< a-- << std::endl;

// std::cout <<"a is "<< a << std::endl;


Fixed const c(2);
Fixed  const a( 1 );
Fixed d =  Fixed::min(c, a);

std::cout<<d<<std::endl;



return 0;
}

