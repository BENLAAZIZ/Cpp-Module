/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:56:52 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/11 13:21:38 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib> 

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter& other) {
    (void)other;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
    (void)other; 
    return *this;
}
ScalarConverter::~ScalarConverter() {}

static bool check_is_Char(const std::string& str) {
    return str.length() == 1 && !std::isdigit(str[0]);
}

static bool check_is_Int(const std::string& str) {
    std::istringstream iss(str);
    int i;
    iss >> std::noskipws >> i;
    return iss.eof() && !iss.fail();
}

static bool check_is_Float(const std::string& str) {
    if (str == "-inff" || str == "+inff" || str == "nanf")
        return true;
    if (str[str.length() - 1] != 'f')
        return false; 
    std::string floatCore = str.substr(0, str.length() - 1);  // remove 'f'
    const char* s = floatCore.c_str();
    char* end;
    std::strtod(s, &end);
    return (*end == '\0');
}

static bool check_is_Double(const std::string& str) {
    if (str == "-inf" || str == "+inf" || str == "nan")
        return true;
    const char* s = str.c_str();
    char* end;
    std::strtod(s, &end);
    return (*end == '\0');
}

void ScalarConverter::convert(const std::string& literal) {
    double value;

    if (check_is_Char(literal)) 
    {
        char c = literal[0];
        value = static_cast<double>(c);
    } 
    else if (check_is_Int(literal))
        value = static_cast<double>(std::atoi(literal.c_str()));
    else if (check_is_Float(literal))
        value = static_cast<double>(std::atof(literal.c_str()));
    else if (check_is_Double(literal))
        value = std::atof(literal.c_str());
    else
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return;
    }

    
    std::cout << "char: ";
    if (value < 0 || value > 127 || value != value)
        std::cout << "impossible" << std::endl;
    else if (!std::isprint(static_cast<char>(value)))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << static_cast<char>(value) << "'" << std::endl;

    std::cout << "int: ";
    if (value < INT_MIN || value > INT_MAX || value != value)
    {
        std::cout << "impossible" << std::endl;
    }
    else
        std::cout << static_cast<int>(value) << std::endl;

    std::cout << "float: " << std::fixed << std::setprecision(1)
              << static_cast<float>(value) << "f" << std::endl;

    std::cout << "double: " << std::fixed << std::setprecision(1)
              << value << std::endl;
}