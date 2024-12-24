/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 23:04:48 by hben-laz          #+#    #+#             */
/*   Updated: 2024/12/24 23:06:01 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

# include <iostream>
# include <fstream>

int handel_file(std::string filename, std::ifstream &inf, std::ofstream &outf);

void put_change(std::string line, std::string s1, std::string s2, std::ifstream &inf, std::ofstream &outf);

#endif