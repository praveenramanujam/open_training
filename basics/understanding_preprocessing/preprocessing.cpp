// what does iostream include do?
#include <iostream>

#define TEST1

// main always returns int and can take int and char* [] as arguments
int main(int argc, char* argv[])
{

#ifdef TEST1
    for(int i = 0; i < argc; i++)
    {
        std::cout << argv[i] << std::endl;
    }
#endif

#ifdef TEST2
    for(int i = 0; i < argc; i++)
    {
        std::cout << "ARGS": argv[i] << std::endl;
    }
#endif


    return 0;
}
