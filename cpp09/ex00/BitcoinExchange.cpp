/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:58:53 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/20 22:52:41 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
    if (this == &src)
        return;
    this->data = src.data;
    this->date = src.date;
    this->value = src.value;
}


BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
    // Assignment operator
    if (this != &rhs)
    {
        this->data = rhs.data;
        this->date = rhs.date;
        this->value = rhs.value;
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
   setHeader(this->date, this->value);
    date.clear();
    value.clear();
}

std::string BitcoinExchange::getHeader(const std::string& key) const
{
	std::map<std::string, std::string>::const_iterator it = data.find(key);
	return (it != data.end()) ? it->second : "";
}

void BitcoinExchange::setHeader(const std::string& key, const std::string& value) {
    data[key] = value;
}

//------------------------



// static int check_white_space(const std::string& str, int *white_space)
// {
// 	int space = 0;
// 	for (size_t i = 0; str[i]; ++i)
// 	{
// 		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32) 
// 		{
// 			if (str[i] == 32)
// 				space++;
// 			else
// 				(*white_space)++;
// 		}
// 	}
// 	return space;
// }

// 	int white_space = 0;
// 	if (check_white_space(line, &white_space) == 2)
// 	{
// 		if (white_space != 0)
// 			return (set_status_code(400), false);
// 	}
// 	else
// 		return (set_status_code(400), false);



	// std::string date, pipe, value;
	// if (!(iss >> date >> pipe >> value))

