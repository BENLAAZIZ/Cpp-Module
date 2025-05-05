/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:47:23 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/05 15:18:44 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>

class ScalarConverter {
    private:
        ScalarConverter(); // Must be private to prevent instantiation
        ScalarConverter(const ScalarConverter& other); // Copy constructor
        ScalarConverter& operator=(const ScalarConverter& other); // Assignment operator
        ~ScalarConverter(); // Destructor
    public:
        static void convert(const std::string& literal);
};

#endif