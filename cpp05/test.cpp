

#include <iostream>

int a()
{
    // Throwing an exception
    std::cout << "In function a" << std::endl;
    return 1;
}

int b()
{
    int x = a();
    throw std::runtime_error("Something went wrong");
    std::cout << "In function b" << std::endl;
    return 2;
}

int c()
{
    int x = b();
    std::cout << "In function c" << std::endl;
    return 3;
}

int d()
{
    int x = c();
    std::cout << "In function d" << std::endl;
    return 4;
}



int main()
{
    try
    {
        int x = d();
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}