#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed 
{
    private :
         float fixed;
         static const int fractional;
    public :
         Fixed();
         Fixed(const int i);
         Fixed(const float f);
         Fixed(const Fixed& obj);
         Fixed& operator=(const Fixed& obj);
         ~Fixed();
         float toFloat( void ) const;
         int toInt( void ) const;
         float getRawBits( void ) const;
         void setRawBits(const float raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
#endif