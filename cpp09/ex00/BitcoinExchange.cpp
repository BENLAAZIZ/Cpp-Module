/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:58:53 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/21 10:03:11 by hben-laz         ###   ########.fr       */
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


std::string BitcoinExchange::get_value(const std::string& key) const
{
	std::map<std::string, std::string>::const_iterator it = data.find(key);
	return (it != data.end()) ? it->second : "";
}

void BitcoinExchange::set_map(const std::string& key, const std::string& value) {
    data[key] = value;
}

//------------------------



void BitcoinExchange::process_database()
{
    // std::cout << "Parsing line: " << line << std::endl;

    // store the data data.csv in a map
		std::ifstream data_file("data.csv");
		if (!data_file.is_open())
			throw std::runtime_error("Error: could not open data.csv.");
		std::string line;
		while (std::getline(data_file, line))
        {
             std::size_t pos = line.find(',');
            if (pos == std::string::npos)
                throw std::runtime_error("Error: could not parse line.");
            date = line.substr(0, pos);
            value = line.substr(pos + 1);
            if (date.empty() || value.empty())
                throw std::runtime_error("Error: could not parse line.");
            set_map(this->date, this->value);
            date.clear();
            value.clear();
        }
			// bit.parse_line(line);
		std::cout << "Data loaded successfully." << std::endl;
		// map with iterator

    	// for (std::map<std::string, std::string>::iterator it = data.begin(); it != data.end(); ++it)
		// {

		// 	std::cout << it->first << " => " << it->second << std::endl;
		// }
}

static int check_white_space(const std::string& str, int *white_space)
{
	int space = 0;
	for (size_t i = 0; str[i]; ++i)
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32) 
		{
			if (str[i] == 32)
				space++;
			else
				(*white_space)++;
		}
	}
	return space;
}

bool BitcoinExchange::parse_line(const std::string &line)
{
    int white_space = 0;
	if (check_white_space(line, &white_space) == 2)
	{
		if (white_space != 0)
			return (false);
	}
	else
		return (false);
    std::istringstream iss(line);
    std::string _date, pipe, _value;
	if (!(iss >> _date >> pipe >> _value))
        return (false);
    if (pipe != "|")
        return (false);
    if (_date.empty() || _value.empty())
        return (false);
    std::cout << _date << " => " << _value << std::endl;
    if(check_date(_date) == false)
        return (false);
    return true;
        
    
}

 bool BitcoinExchange::check_date(const std::string &date)
 {
    //Y-M-D   
    if(date.size() != 10)
    {
        std::cerr << "Error: bad date format." << std::endl;
        return (false);
    }
    if(date[4] != '-' || date[7] != '-')
    {
        std::cerr << "Error: bad date format." << std::endl;
        return (false);
    }
    for (size_t i = 0; i < date.size(); ++i)
    {
        if (i == 4 || i == 7)
            continue;
        if (!isdigit(date[i]))
        {
            std::cerr << "Error: bad date format." << std::endl;
            return (false);
        }
    }
    
 }

void BitcoinExchange::process_file(const std::string &filename)
{

        std::ifstream file(filename);
		if (!file.is_open())
			throw std::runtime_error("Error: could not open file.");
    	std::string line;
		while (std::getline(file, line))
		{
			// Process each line
            if(parse_line(line) == false)
            {
                std::cerr << "Error: could not parse line." << std::endl;
                continue;
            }
			// std::cout << line << std::endl;
		}
	
}







	

