#include <iostream>
#include <memory>

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
    /** Unique pointers **/
    std::unique_ptr<int> p1(new int); //syntax 1
    std::unique_ptr<int> p2 = std::make_unique<int>(); //syntax 2

    *p2 = 100;
    std::cout << *p2 << std::endl;
    p1 = std::move(p2);
    std::cout << *p1 << std::endl;
    //std::cout << *p2 << std::endl; // what will happen?

    /** Shared pointers **/
    std::shared_ptr<int> p3(new int); //syntax 1
    //std::shared_ptr<int> p4;

    //p4 = p3;
    std::cout << p3.use_count() << std::endl;

    /** Weak pointers **/
    std::weak_ptr<int> p5(p3);
    std::cout << p3.use_count() << std::endl;



    return 0;
}

