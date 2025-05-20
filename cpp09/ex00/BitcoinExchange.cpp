/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:58:53 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/20 20:22:07 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
    *this = src;
    // Copy constructor
    this->data = src.data;
    this->date = src.date;
    this->value = src.value;
    this->line = src.line;
    // this->file = src.file;
    // this->dataFile = src.dataFile;
}


BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
    // Assignment operator
    if (this != &rhs)
    {
        this->data = rhs.data;
        this->date = rhs.date;
        this->value = rhs.value;
        this->line = rhs.line;
        // this->file = rhs.file;
        // this->dataFile = rhs.dataFile;
    }
    return *this; 
}

BitcoinExchange::~BitcoinExchange()
{
    
}

void BitcoinExchange::parse_line(const std::string &line)
{
    // std::cout << "Parsing line: " << line << std::endl;
    std::size_t pos = line.find(',');
    if (pos == std::string::npos)
        throw std::runtime_error("Error: could not parse line.");
    date = line.substr(0, pos);
    value = line.substr(pos + 1);
    if (date.empty() || value.empty())
        throw std::runtime_error("Error: could not parse line.");
    data[date] = value;
    // date.clear();
    // value.clear();
}

