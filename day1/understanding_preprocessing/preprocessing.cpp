// what does iostream include do?
#include <iostream>
#include <chrono>


#define TEST

// #define PI 3.1415
// #define DEGTORAD(deg) (deg * PI / 180)

// #undef TEST

// #ifndef TEST
// #define TEST2
// #else
// #define TEST1
// #endif

template <typename Z, typename T>
Z sum(Z x, T y) 
{ 
   return x + y; 
}

// int myfunction() 
// {
    
//     static const int i = 5;
//     static int j;
    
//     std::cout <<"normal integer :" << i << std::endl << "static integer :" << j << std::endl;
//     // i++;
//     j++;
    
    
    
//     return i;
// }

// float sum (const int& a,const int& b)
// {
//     return a + b;
// }

// float sum (const float& a,const int& b)
// {
//     return (int)(a + b);
// }


// main always returns int and can take int and char* [] as arguments
int main(int argc, char* argv[])
{
    
    std::cout << "sum = " << sum(std::string("ab"),std::string("bb")) << std::endl;
    // double rad = DEGTORAD(90);
    // std::cout << "radians = " << rad << std::endl;

    // int x = 5;
    // int &i = x;
    // std::cout << "i = " << *(&i) << " x = " << *(&x) << std::endl;

    // int a[5]{5};
    // int i(5);

    // for(int i=0; i < sizeof(a)/sizeof(int); i++)
    // {
    //     std::cout << "index " << i << " has value " << a[i] << std::endl;
    // }

    // auto start = std::chrono::high_resolution_clock::now();
    // for (int i=0; i < 10000; i++)  
    // myfunction();

    // auto finish = std::chrono::high_resolution_clock::now();
    // std::chrono::duration<double> elapsed = finish - start;
    // std::cout << "Elapsed time: " << elapsed.count() << std::endl;

    // int a;
    // bool b;
    // char c;
    // float d;
    // double e;
    // void f; (You cannot declare a variable of type void.)
    // wchar_t g;
    // int16_t h = -32768;
    // uint16_t i = h;
    // std::cout << "uint16_t " << i << std::endl;

    // std::cout << "sizeof void " << sizeof(a) << std::endl;
    // std::cout << "sizeof void " << sizeof(b) << std::endl;
    // std::cout << "sizeof void " << sizeof(c) << std::endl;
    // std::cout << "sizeof void " << sizeof(d) << std::endl;
    // std::cout << "sizeof void " << sizeof(e) << std::endl;
    // std::cout << "sizeof void" << sizeof(f) << std::endl;
    // std::cout << "sizeof void" << sizeof(g) << std::endl;

    
// #if defined(TEST) 
//     for(int i = 0; i < argc; i++)
//     {
//         std::cout << "out" << argv[i] << std::endl;
//     }
// #endif

// #if defined(TEST1) 
//     for(int i = 0; i < argc; i++)
//     {
//         std::cerr << "error" << argv[i] << std::endl;
//         std::clog << "log" << argv[i] << std::endl;
//     }
// #endif

    return 0;
}
