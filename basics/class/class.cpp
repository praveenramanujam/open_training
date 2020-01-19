#include <iostream>

class A
{
    public:
        A():
            _b(1),
            _c(2),
            _a(3) 
        {
            std::cout<< _a << " " << _b << " " << _c << std::endl; 
        }
        ~A() {}

    private:
    int _a;
    int _b;
    int _c;
};


int main(int argc, char **argv)
{
    A a;
    return 0;
}