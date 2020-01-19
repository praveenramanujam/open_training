#include <iostream>
#include <queue>
#include <memory>
#include <functional>

class Parent
{
public:
    Parent()
    {
        std::cout << "Parent ctor called\n";
    };

    int parent_function(int& j)
    {
        j = j+1;
        return j;
    }

    ~Parent()
    {
        std::cout << "Parent dtor called\n";
    };
};

class Child: public Parent
{
public:
    Child()
    {
        std::cout << "Child ctor called\n";
    };

/*     int parent_function(int& j)
    {
        //Parent::parent_function(j);
        return j+10;
    } */

    int child_function(int j)
    {
        return j-1;
    }

    ~Child()
    {
        std::cout << "Child dtor called\n";
    };
};

struct Node {
	int x;
    int y;
};

void function()
{
    std::cout << "func called" << std::endl;
}

int function_int(int i, int j, float k)
{
    std::cout << i << std::endl;
}

int main(int argc, char **argv)
{

using namespace std::placeholders;
//1.learning function pointers
void(*fn)() = function;
fn();
/* Denny: please create a generic function which applies a method for each element in a vector*/
//usage of auto

auto fn1 = function;
fn1();

/* Denny: replace function pointer with lambda*/

//3. std bind
auto f1 = std::bind(&function_int, _1, _2, _3);
f1(1,2,3);
/*Denny: what will happen if we swap parameters?*/
/*Denny: create a function template and create a bind*/

//5. casting
Node n{1,2};
int* p = (int*)(&n);
std::cout << p[0] << "," << p[1] << std::endl;

//6. inheritance 
Child c;
int val = 5;
std::cout << c.parent_function(val) << std::endl;


return 0;
}
