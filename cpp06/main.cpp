





#include <iostream>

void print(const char* str) {
    // str = "Hello, Universe!";
    std::cout << str << std::endl;
}

int main() {

    double a = 7.5f;

    int b;

    b = static_cast<int>(a);

    std::cout << "The value of b is: " << b << std::endl;

    std::cout << "The value of a is: " << a << std::endl;

    std::cout << sizeof(a) << std::endl;
    std::cout << sizeof(b) << std::endl;


    const char* str = "Hello, World!";

    // print(const_cast<char*>(str));
    print(str);
    return 0;
}