





#include <iostream>

void print(const char* str) {
    // str = "Hello, Universe!";
    std::cout << str << std::endl;
}

class A {
    int x;
public:
        void f(int i) const {
            // this->x = i; // Error: cannot assign to 'this' pointer
            const_cast<A*>(this)->x = i; // OK: const_cast removes constnessa   
            std::cout << "x = " << x << std::endl;
        }
   

};

int main() {

    // double a = 7.5f;

    // int b;

    // b = static_cast<int>(a);

    // std::cout << "The value of b is: " << b << std::endl;

    // std::cout << "The value of a is: " << a << std::endl;

    // std::cout << sizeof(a) << std::endl;
    // std::cout << sizeof(b) << std::endl;


    // const char* str = "Hello, World!";

    // // print(const_cast<char*>(str));
    // print(str);


    A a;
    a.f(5);

    return 0;
}