/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:07:25 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/21 11:34:07 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <istream>
#include <map>

class BitcoinExchange
{
        std::map<std::string, std::string> data;
        std::string date;
        std::string value;
        
    public:
 
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &src);
        ~BitcoinExchange();
        BitcoinExchange &operator=(const BitcoinExchange &rhs);

        void process_database();
        std::string	get_value(const std::string& key) const;
        void set_map(const std::string& key, const std::string& value);
        void process_file(const std::string &file);
        bool parse_line(const std::string &line);
        bool check_date(const std::string &date);
        bool check_value(const std::string &value);
        void print_data_line(const std::string &line);
        // void processFile(const std::string &filename);
        // void processLine(const std::string &line);
        // void validateDate(const std::string &date);
        // void validateValue(const std::string &value);
        // void printResult(const std::string &date, const std::string &value);
 
};


#endif