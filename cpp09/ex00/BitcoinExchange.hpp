/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:07:25 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/20 20:14:59 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

class BitcoinExchange
{
    public:
        std::map<std::string, std::string> data;
        std::string date;
        std::string value;
        std::string line;
        std::ifstream file;
        std::ifstream dataFile;

        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &src);
        ~BitcoinExchange();
        BitcoinExchange &operator=(const BitcoinExchange &rhs);

        void parse_line(const std::string &line);
        // void processFile(const std::string &filename);
        // void processLine(const std::string &line);
        // void validateDate(const std::string &date);
        // void validateValue(const std::string &value);
        // void printResult(const std::string &date, const std::string &value);
 
};


#endif