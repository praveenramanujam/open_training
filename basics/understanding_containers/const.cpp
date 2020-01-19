#include <iostream>
#include <vector>

std::vector<int> function(int a)
{
    std::vector<int> b;
    b.push_back(a);
    return b;
};

int main(int argc, char* argv[])
{
    function(5).resize(0);
    return 0;
}