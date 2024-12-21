/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 21:54:53 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/21 02:18:22 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 8;

Fixed::Fixed()
{
    this->fixed = 2;
    // std::cout<<"Default constructor called"<<std::endl;
}


Fixed::Fixed(const Fixed& obj)
{
        this->fixed = obj.fixed;
    // std::cout<<"Copy constructor called"<<std::endl;
}

Fixed Fixed::operator=(const Fixed& obj)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    if (this != &obj)
        this->fixed = obj.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    // std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits( void ) const
{
    // std::cout<<"getRawBits member function called"<<std::endl;
    return this->fixed;
}

void Fixed::setRawBits( int const raw )
{
    this->fixed = raw;
}
