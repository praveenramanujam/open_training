// what does iostream include do?
#include <iostream>

// main always returns int and can take int and char* [] as arguments
int main(int argc, char* argv[])
{


    for(int i = 0; i < argc; i++)
    {
        std::cout << "COUT" << argv[i] << std::endl;
	std::cerr << "ERROR" << argv[i] << std::endl;
	std::clog << "LOG" << argv[i] << std::endl;
    }
    return 0;
}
