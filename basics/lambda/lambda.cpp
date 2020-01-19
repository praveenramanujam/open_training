#include <iostream>
#include <functional>

bool function2 (std::function<int(int)> function1)
{
    std::cout << function1(4) << std::endl;
    return true;
}

int main(int argc, char **argv)
{
    int a = 1;
    auto function1 = [&a] (int multiplier)
    {
        return a*multiplier;
    };
    function2(function1);

    return 0;
}