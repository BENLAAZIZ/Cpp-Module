/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 01:10:18 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/26 19:58:28 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

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
    
    if (handel_file(filename, inf, outf))
        return 1;
    put_change(line, NULL, s2, inf, outf);
    inf.close();
    outf.close();
    return 0;
}
