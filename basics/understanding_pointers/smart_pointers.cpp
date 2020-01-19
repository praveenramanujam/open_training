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
    // /** Unique pointers **/
    // std::unique_ptr<int> p1(new int); //syntax 1
    // std::unique_ptr<int> p2 = std::make_unique<int>(); //syntax 2
    // std::unique_ptr<int> p3;
    // p3.reset(new int); //syntax 3

    // *p2 = 100;
    // std::cout << *p2 << std::endl;
    // p1 = std::move(p2);
    // std::cout << *p1 << std::endl;
    // //std::cout << *p2 << std::endl; // what will happen?

    // /** Shared pointers **/
    std::shared_ptr<int> p5(new int); //syntax 1
    std::shared_ptr<int> p6 = std::make_shared<int>(); //syntax 2
    //std::shared_ptr<int> p7; // Null pointer
    p5 = p6;
    *p5 = 5;
    std::cout << *p5 << std::endl;
    std::cout << *p6 << std::endl;
    p5.reset();
    //std::cout << *p5 << std::endl;
    std::cout << *p6 << std::endl;

    //p7.reset(new int); //syntax 3



    // p6 = p5;
    // *p5 = 100;
    // p5.reset(); //destroys the pointer

    // if (!p5) // check if its NULL
    // {
    //     std::cout << p5 << std::endl;
    // }


    /** Weak pointers **/
/*     std::weak_ptr<int> p8(p7); //syntax 1
    std::weak_ptr<int> p9(p8); //syntax 2

    std::cout << p7.use_count() << std::endl;
 */

    return 0;
}

