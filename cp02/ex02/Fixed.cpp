/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 21:54:53 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/21 17:38:36 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


const int Fixed::fractional = 8;

Fixed::Fixed()
{
    // std::cout<<"Default constructor called"<<std::endl;
    this->fixed = 0;
}

Fixed::Fixed(const int i)
{
    // std::cout<<"Int constructor called"<<std::endl;
    this->fixed = i << fractional;
}

Fixed::Fixed(const float f)
{
    // std::cout<<"Float constructor called"<<std::endl;
    this->fixed = roundf(f * (1 << fractional));
}

Fixed::Fixed(const Fixed& obj) { 
    *this = obj;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    // std::cout<<"Copy assignment operator called"<<std::endl;
    if (this != &obj)
        this->fixed = obj.fixed;
    return *this;
}

Fixed::~Fixed()
{
    // std::cout<<"Destructor called"<<std::endl;
}


int Fixed::toInt( void ) const
{
    return (this->fixed / (1 << fractional));
}

float Fixed::toFloat( void ) const
{
    return ((float)this->fixed / (1 << fractional));
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}

//----------        > < >= <= == !=   -------------------------------

bool Fixed::operator>(const Fixed& obj) const
{
    if (this->fixed > obj.fixed)
        return true;
    return false;
}

bool Fixed::operator<(const Fixed& obj) const
{
    if (this->fixed < obj.fixed)
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed& obj) const
{
    if (this->fixed >= obj.fixed)
        return true;
    return false;
}

bool Fixed::operator<=(const Fixed& obj) const
{
    if (this->fixed <= obj.fixed)
        return true;
    return false;
}

bool Fixed::operator==(const Fixed& obj) const
{
    // if (this->fixed == obj.fixed)
    //     return true;
    // return false;
    return (this->fixed == obj.fixed);
}

bool Fixed::operator!=(const Fixed& obj) const
{
    if (this->fixed != obj.fixed)
        return true;
    return false;
}

//-------------      +  -  *  /    --------------------------------





Fixed Fixed::operator+(const Fixed& obj) const
{
    Fixed res;

    res.fixed = this->fixed + obj.fixed;
    return res;
}


Fixed Fixed::operator-(const Fixed& obj) const
{
     Fixed res;
    
    res.fixed = (this->fixed - obj.fixed);
    return res;
}

Fixed Fixed::operator*(const Fixed& obj) const
{
     Fixed res;
    
    res.fixed = ((this->fixed  * obj.fixed) / (1 << fractional));
    return res;
}

Fixed Fixed::operator/(const Fixed& obj) const
{
     Fixed res;
    
    res.fixed = this->fixed / obj.fixed;
    return res;
}


// ---------------------- obj++ and ++obj  obj-- and --obj---------------------

Fixed& Fixed::operator++()
{
    // ++this->fixed;
    Fixed& d = *this;
    d.fixed++;
    return d;
}

Fixed Fixed::operator++(int)
{
    Fixed old = *this;

    operator++();
    return old;
    
}

Fixed& Fixed::operator--()
{
    this->fixed -= 1;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed old = *this;

    operator--();
    return old;
    
}

// ---------------------- min and  max -----------------------

Fixed& Fixed::min(Fixed& obj1, Fixed& obj2)
{
    if (obj1.fixed < obj2.fixed)
        return obj1;
    return obj2;
}

const Fixed& Fixed::min(const Fixed& obj1, const Fixed& obj2)
{
    if (obj1.fixed < obj2.fixed)
        return obj1;
    return obj2;
}


Fixed& Fixed::max(Fixed& obj1, Fixed& obj2)
{
    if (obj1.fixed > obj2.fixed)
        return obj1;
    return obj2;
}

const Fixed& Fixed::max(const Fixed& obj1, const Fixed& obj2)
{
    if (obj1.fixed > obj2.fixed)
        return obj1;
    return obj2;
}



            