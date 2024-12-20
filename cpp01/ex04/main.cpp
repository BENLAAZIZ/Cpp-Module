/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 01:10:18 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/20 23:28:50 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


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
    while (std::getline(inf, line))
    {
        size_t pos = 0;
   
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outf << line << std::endl;
    }
}


int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr<<"unvalid number of arguments"<<std::endl;
        return 1;
    }
    std::string     filename = av[1];
    std::string     s1 = av[2];
    std::string     s2 = av[3];
    std::ifstream   inf;
    std::ofstream   outf;
    std::string     line;
    
    if (s1.empty() || s2.empty())
    {
        std::cerr << "s1 and s2 must not be empty" << std::endl;
        return 1;
    }
    if (handel_file(filename, inf, outf))
        return 1;
    put_change(line, s1, s2, inf, outf);
    inf.close();
    outf.close();
    return 0;
}
