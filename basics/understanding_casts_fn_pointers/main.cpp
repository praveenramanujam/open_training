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

    virtual int parent_function(int j)
    {
        j = j+1;
        return j;
    }

    virtual ~Parent()
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

    int child_function(int j) const
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
std::cout << c.child_function(val) << std::endl;

//7. polymorphism

Parent* p1 = new Child();
p1->parent_function(5);
//Denny: use dynamic cast to access child class
//Denny: try without virtual in destructor and see what happens

return 0;
}
