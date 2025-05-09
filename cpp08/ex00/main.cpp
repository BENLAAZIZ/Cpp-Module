#include <vector>
#include <iostream>
#include <stdexcept>

#include "easyfind.hpp"

int main() {
    std::vector<int> numbers;
    int valueToFind = 5;
    for (int i = 0; i < 5; ++i) {
        numbers.push_back(i);
    }

    try {
        std::vector<int>::iterator it = easyfind(numbers, valueToFind);
        std::cout << "Value found: " << *it << std::endl;
    } catch (const std::runtime_error &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}