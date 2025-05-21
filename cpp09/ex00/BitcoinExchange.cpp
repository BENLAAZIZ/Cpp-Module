/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:58:53 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/21 12:05:52 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

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
	if (this != &rhs)
	{
		this->data = rhs.data;
		this->date = rhs.date;
		this->value = rhs.value;
	}
	return *this; 
}

BitcoinExchange::~BitcoinExchange() {}

std::string BitcoinExchange::get_value(const std::string& key) const
{
	std::map<std::string, std::string>::const_iterator it = data.find(key);
	return (it != data.end()) ? it->second : "";
}

void BitcoinExchange::set_map(const std::string& key, const std::string& value) 
{
	data[key] = value;
}

void BitcoinExchange::process_database()
{
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

bool BitcoinExchange::check_value(const std::string &value)
{
	
	// if (value.find('.') != std::string::npos)
	// {
	// 	if (value.find('.') == 0 || value.find('.') == value.size() - 1)
	// 	{
	// 		std::cerr << "Error: bad input" << std::endl;
	// 		return (false);
	// 	}
	// }
	if (atof(value.c_str()) < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return (false);
	}
	if (atof(value.c_str()) > 1000)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return (false);
	}
	return true;
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
	{
		std::cerr << "Error: bad input => " << line << std::endl;
		return (false);
	}
	std::istringstream iss(line);
	std::string _date, pipe, _value;
	if (!(iss >> _date >> pipe >> _value))
	{
		std::cerr << "Error: bad input => " << line << std::endl;
		return (false);
	}
	if (pipe != "|")
	{
		std::cerr << "Error: bad input => " << pipe << std::endl;
		return (false);
	}
	if (_date.empty() || _value.empty())
	{
		std::cerr << "Error: bad input => " << line << std::endl;
		return (false);
	}
	if(check_date(_date) == false)
	{
		std::cerr << "Error: bad input => " << _date << std::endl;
		return (false);
	}
	if (check_value(_value) == false)
		return (false);
	return true; 
}

static bool check_day(int years, int month, int day)
{
	if (month == 2)
	{
		if ((years % 4 == 0 && years % 100 != 0 ) || years % 400 == 0)
		{
			if (day < 1 || day > 29)
				return (false);
		}
		else
		{
			if (day < 1 || day > 28)
				return (false);
		}
	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day < 1 || day > 30)
			return (false);
	}
	else
	{
		if (day < 1 || day > 31)
			return (false);
	}
	return (true);
}

bool BitcoinExchange::check_date(const std::string &date)
{  
	if(date.size() != 10)
	{
		std::cerr << "Error: bad input => " << date << std::endl;
		return (false);
	}
	if(date[4] != '-' || date[7] != '-')
	{
		std::cerr << "Error: bad input => " << date << std::endl;
		return (false);
	}
	for (size_t i = 0; i < date.size(); ++i)
	{
		if (i == 4 || i == 7)
			continue;
		if (!isdigit(date[i]))
			return (false);
	}
	std::string year = date.substr(0, 4);
	std::string month = date.substr(5, 2);
	std::string day = date.substr(8, 2);
	if(atoi(year.c_str()) < 2009 || atoi(year.c_str()) > 2025)
		return (false);
	if (atoi(month.c_str()) < 1 || atoi(month.c_str()) > 12)
		return (false);
	if(check_day(atoi(year.c_str()), atoi(month.c_str()), atoi(day.c_str())) == false)
		return (false);
	return (true);
}

void BitcoinExchange::print_data_line(const std::string &line)
{
	std::istringstream iss(line);
	std::string _date, pipe, _value;
	if (!(iss >> _date >> pipe >> _value))
	{
		std::cerr << "Error: bad input => " << line << std::endl;
		return;
	}
	if(_date != get_value(_date))
	{
		// find the closest date
		std::map<std::string, std::string>::iterator it = data.lower_bound(_date);
		if (it != data.begin())
			it--;
		_date = it->first;	
	}
	float result  = atof(_value.c_str()) * atof(get_value(_date).c_str());
	std::cout << _date << " => " << _value << " = " << result << std::endl;
}

void BitcoinExchange::process_file(const std::string &filename)
{

	std::ifstream file(filename);
	if (!file.is_open())
		throw std::runtime_error("Error: could not open file.");
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		if(parse_line(line) == false)
			continue;
		print_data_line(line);
	}
}