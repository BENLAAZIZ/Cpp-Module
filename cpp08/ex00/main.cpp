/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 18:16:43 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/19 12:51:27 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <set>

int main() {
    std::vector<int> numbers;
    int nbr = 2;

    numbers.push_back(4);
    numbers.push_back(40);
    numbers.push_back(-5);
    numbers.push_back(2);
    numbers.push_back(6);

    try {
        std::vector<int>::iterator it = easyfind(numbers, nbr);
        std::cout << "Value found: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cerr << "exception : " << e.what() << std::endl;
    }

    std::list<char> ch;
    ch.insert(ch.begin(), 'a');
    ch.insert(ch.begin(), 'b');
    ch.insert(ch.begin(), 'c');
    ch.insert(ch.begin(), 'v');

    char c_value = 'p';
  
    try {
        std::list<char>::iterator it = easyfind(ch, c_value);
        std::cout << "Value found: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cerr << "exception : " << e.what() << std::endl;
    }

    std::set<int> s;
    s.insert(1);
    s.insert(-50);
    s.insert(10);
    s.insert(4);

    int s_value = 10;
    try {
        std::set<int>::iterator it = easyfind(s, s_value);
        std::cout << "Value found: " << *it << std::endl;
    } catch (std::exception &e) {
        std::cerr << "exception : " << e.what() << std::endl;
    }
    
    return 0;
}