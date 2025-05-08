#include <iostream>
#include <vector>

int main() {
    std::vector<int> window;

    // Add samples
    window.push_back(10);
    window.push_back(20);
    window.front() = 30;

    std::vector<int>::iterator it;
    for (it = window.begin(); it != window.end(); ++it)
        std::cout << *it << " ";


    std::cout << "\nFront: " << window.at(0) << ", Back: " << window.back() << std::endl;


    return 0;
}