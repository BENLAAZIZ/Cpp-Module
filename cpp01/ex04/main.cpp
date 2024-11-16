/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 01:10:18 by hben-laz          #+#    #+#             */
/*   Updated: 2024/11/17 00:15:00 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string customReplace(const std::string &str, const std::string &s1, const std::string &s2)
{
    std::string result;
    size_t pos = 0;
    size_t prev = 0;

    while ((pos = str.find(s1, prev)) != std::string::npos)
    {
        result.append(str, prev, pos - prev);
        result.append(s2);
        prev = pos + s1.length();
    }
    result.append(str, prev, std::string::npos);
    return result;
}

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
        while (1)
        {
            pos = line.find(s1, pos);
            if (pos == std::string::npos)
                break;
            line = customReplace(line, s1, s2);
            pos += s2.length();
        }
        outf << line << std::endl;
    }
}

void s()
{
    system("leaks a.out");
}

int main(int ac, char **av)
{
    // atexit(s);
    std::string     filename = av[1];
    std::string     s1 = av[2];
    std::string     s2 = av[3];
    std::ifstream   inf;
    std::ofstream   outf;
    std::string     line;
    
    if (ac != 4)
    {
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
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
