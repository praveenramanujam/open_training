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
    /** RAW pointers **/
    int* p = new int;
    *p = 100;
    std::cout << p << std::endl; // prints the memory
    std::cout << *p << std::endl; //prints the value


    /** passing raw pointers to function **/
    fn(p);
    std::cout << *p << std::endl;

    delete p;

    

    return 0;
}
