#include <iostream>

// void fn (const int *b) // add const?
// {
//     *b = 500;
//     return;
// }

void fn(int& b) // add const?
{
    b = 500;
    std::cout << &b << std::endl;
    return;
}


int main(int argc, char **argv)
{
    int a = 5;
    int* p;
    p = &a;
    const int b = 5;
    
    std::cout << *p << std::endl;

    delete p;
    p = NULL;

    std::cout << a << std::endl;
    
    // *p = a;
    // *p1 = *p;
    // std::cout << "value of p" << p << std::endl;
    // std::cout << "address of a" << &a  << std::endl;
    // //std::cout << "pointer of p" << *p  << std::endl;
    // std::cout << "address of p1" << p1  << std::endl;


    int *p = new int;
    *p = 5;



    return 0;
}
