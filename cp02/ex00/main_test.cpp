#include <iostream>
#include <vector>


class  array
{
public:
    std::vector<int> data;
    array()
    {

        std::cout <<"constructor "<<std::endl;
    //    data = new int[10];
        for(int i = 0; i < 10; i++)
            data.push_back(i);
    };

    // copy constructor


    array(const array& copy)
    {
          std::cout <<" Copy constructor "<<std::endl;

            // data = new int[10];
            for(int i = 0; i < 10; i++)
                // data[i] = copy.data[i];
                data.push_back(copy.data[i]);
    };

    // copy Assignement operator

    array& operator=(const array &copy)
    {
        std::cout <<"copy assignement operator"<<std::endl;
        if (&copy == this)
            return *this;
        for(int i = 0; i < 10; i++)
            data[i] = copy.data[i];
        return *this;
    }

    ~array()
    {
        // delete[] data;
        std::cout << "Destructor called" << std::endl;
    };
    void Pintdata()
    {
        for(int i = 0; i < 10; i++)
            std::cout << data[i] <<std::endl;
    };

    void set_data(int index, int value)
    {
        data[index] = value;
    };

    // private :

};

void c()
{
    system("leaks ex00");
}

int main()
{
// 
  atexit(c);
    array myRay;
 
//    myRay.Pintdata();
   array myRay2;


   myRay.set_data(0, 15);
   myRay.set_data(5, 0);
   myRay.set_data(8, 2);
   myRay.Pintdata();
    myRay2= myRay;
 
//    std::cout << "***************" << std::endl;

   myRay2.Pintdata();


    return 0;
}