/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:39:30 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/20 17:39:11 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"


int const Fixed::fractional = 8;


Fixed::Fixed()
{
    std::cout<<"Default constructor called"<<std::endl;
    this->rawBits = 0;
}


Fixed::Fixed(const Fixed& copy) 
{
    std::cout<<"Copy constructor called"<<std::endl;
        this->rawBits = copy.rawBits;
}


Fixed& Fixed::operator=(const Fixed& copy)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    if (this != &copy)
        this->rawBits = copy.rawBits;
    return (*this);
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout<<"getRawBits member function called"<<std::endl;
    return (this->rawBits);
}

void Fixed::setRawBits( int const raw )
{
    this->rawBits = raw;
}