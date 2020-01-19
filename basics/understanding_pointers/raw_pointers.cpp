#include <iostream>

void fn(int* const b) // add const?
{
    *b = 500;
    return;
}

/* void fn(int& b) // add const?
{
    b = 500;
    return;
} */

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
    

    int *p = new int;
    *p = 5;



    return 0;
}
