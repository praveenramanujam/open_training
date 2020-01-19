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
    //Example of referencing and de-referencing
    // int a = 5;
    // std::cout << "value of a " << a << std::endl;
    // std::cout << "address of a " << &a << std::endl;
    // std::cout << "de-referencing of a " << *(&a) << std::endl;

    // Modifying address
    int *p = new int;
    int *p1;
    *p = 5;
    std::cout << "value of p " << p << std::endl;
    std::cout << "value at address in p " << *p << std::endl;
    p = p + 1;
    std::cout << "value of p " << p << std::endl;
    std::cout << "value at address in p " << *p << std::endl;

    // int a = 5;
    // std::cout << "address of a" << &a  << std::endl;
    
    // *p = a;
    // *p1 = *p;
    // std::cout << "value of p" << p << std::endl;
    // std::cout << "address of a" << &a  << std::endl;
    // //std::cout << "pointer of p" << *p  << std::endl;
    // std::cout << "address of p1" << p1  << std::endl;


    return 0;
}
