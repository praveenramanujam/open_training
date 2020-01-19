#include <iostream>
#include <iterator> 
#include <map>

int main(int argc, char **argv)
{
    std::map<int,int> number_pair;
    number_pair.insert(std::pair<int,int>(1,2));
    number_pair.insert(std::pair<int,int>(5,6));
    number_pair.insert(std::pair<int,int>(3,4));
    for (auto& pair : number_pair)
    {
        std::cout << pair.first << std::endl;
        std::cout << pair.second << std::endl;
    }
}