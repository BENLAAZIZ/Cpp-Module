/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:12:13 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/13 22:45:38 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "iter.hpp"


int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    std::string strArr[] = {"Hello", "World", "!"};
    double arrD[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    std::cout << "------- Integer array:" << std::endl;
    iter(arr, 5, print);
    std::cout << std::endl;
    
    std::cout << "------- String array:" << std::endl;
    iter(strArr, 3, print);
    std::cout << std::endl;

    std::cout << "------- Double array:" << std::endl;
    iter(arrD, 5, print);

    return 0;
}

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T >
// void print( T const & x )
// {
//   std::cout << x << std::endl;
//   return;
// }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter( tab, 5, print<const int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }

