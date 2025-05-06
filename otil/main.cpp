


#include <iostream>

class Shape {
    public:
    int a;
    int geta() { return a; }
    virtual ~Shape() {
            std::cout << "Destructor of Shape called" << std::endl;
        }
       virtual void atrea(int s){ a = s;};
};

class Square : public Shape {
    public:

   
    ~Square() {
                std::cout << "Destructor of Square called" << std::endl;
            }
     void atrea(int s){ a = s * s;};
};

class Circle : public Shape {
    public:

        void  atrea(int s){ a = 3.14 * s * s;};
};



void f()
{
    system("leaks a.out");
}
int main()
{
    atexit(f);
    Shape *s = new Square();

    s->atrea(2);
    std::cout << "Area of square: " << s->geta() << std::endl;
    delete s;

}