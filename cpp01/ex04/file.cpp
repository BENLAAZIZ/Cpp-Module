/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 23:04:34 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/24 23:07:49 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

int handel_file(std::string filename, std::ifstream &inf, std::ofstream &outf)
{
    inf.open(filename);

    if(!inf.is_open())
    {
        std::cerr << "Failed to open " << filename << std::endl;
        return 1;
    }

    outf.open(filename + ".replace");

    if(!outf.is_open())
    {
        std::cerr << "Failed to create " << filename + ".replace" << std::endl;
        inf.close();
        return 1;
    }
    return 0;
}

void put_change(std::string line, std::string s1, std::string s2, std::ifstream &inf, std::ofstream &outf)
{
    while (std::getline(inf, line, '\0'))
    {
        size_t pos = 0;
        
        if (s1.empty())
        {
            outf << line;
            continue ;
        }
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            if (!s2.empty())
                line.insert(pos, s2);
            pos += s2.length();
        }
        outf << line;
    }
}
