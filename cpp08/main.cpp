#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    std::cout << "iterator (modify):" << std::endl;
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        *it *= 10;

    std::cout << "const_iterator (read only):" << std::endl;
    for (std::vector<int>::const_iterator cit = vec.begin(); cit != vec.end(); ++cit)
        std::cout << *cit << std::endl;

    std::cout << "reverse_iterator:" << std::endl;
    for (std::vector<int>::reverse_iterator rit = vec.rbegin(); rit != vec.rend(); ++rit)
        std::cout << *rit << std::endl;

    std::cout << "const_reverse_iterator:" << std::endl;
    for (std::vector<int>::const_reverse_iterator crit = vec.rbegin(); crit != vec.rend(); ++crit)
        std::cout << *crit << std::endl;

    return 0;
}
