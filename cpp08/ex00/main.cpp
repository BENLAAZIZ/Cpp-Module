/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 18:16:43 by hben-laz          #+#    #+#             */
/*   Updated: 2025/05/16 19:51:51 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <set>
#include <vector>
#include <map>
#include <utility>
#include <list>


int main() {
    std::vector<int> numbers;
    int nbr = 2;
    // for (int i = 0; i < 5; ++i) {
    //     numbers.push_back(i);
    // }

    numbers.push_back(4);
    numbers.push_back(40);
    numbers.push_back(-5);
    numbers.push_back(2);
    numbers.push_back(6);

    try {
        std::vector<int>::iterator it = easyfind(numbers, nbr);
        std::cout << "Value found: " << *it << std::endl;
    } catch (const std::runtime_error &e) {
        std::cerr << "exception : " << e.what() << std::endl;
    }

    std::list<char> ch;
    ch.insert(ch.begin(), 'a');
    ch.insert(ch.begin(), 'b');
    ch.insert(ch.begin(), 'c');
    ch.insert(ch.begin(), 'v');

    char c = 'p';
  
    try {
        std::list<char>::iterator it = easyfind(ch, c);
        std::cout << "Value found: " << *it << std::endl;
    } catch (const std::runtime_error &e) {
        std::cerr << "exception : " << e.what() << std::endl;
    }
    return 0;
}