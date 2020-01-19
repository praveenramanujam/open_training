#include <iostream>
#include <utility>
#include <tuple>
#include <list>
#include <stack>
#include <queue>
#include <set>

namespace ltd
{
    template <typename T>
    struct less
    {
        bool operator() (T a, T b)
        {
            return a < b;
        };
    };
}


int main(int argc, char **argv)
{
    // // PAIR
    // std::pair<int, int> n1;
    // std::pair<int, int>n2(5,3);
    // std::pair<int, int>n3 = std::make_pair(1,2);

    // std::cout << n1.first << "," << n1.second << std::endl;
    // std::cout << n2.first << "," << n2.second << std::endl;
    // std::cout << n3.first << "," << n3.second << std::endl;

    // n3.swap(n2);
    // std::cout << ".................." << std::endl;
    // std::cout << n2.first << "," << n2.second << std::endl;
    // std::cout << n3.first << "," << n3.second << std::endl;

    // // TUPLE
    // std::tuple<int, int, float, int> t = std::make_tuple(1, 56, 3.14, 4);
    // auto t1 = std::make_tuple(1, 56, 3.14);
    // std::cout << std::get<0>(t1) << "," << std::get<1>(t1) << "," << std::get<2>(t1) << std::endl;
    // // std::tie -> skip it for later

    // // LIST
    // std::list<int> list;
    // list.push_front(51);
    // list.push_back(31);
    // std::cout << "LIST" << std::endl;
    // for (std::list<int>::iterator it=list.begin(); it != list.end(); ++it)
    // {
    //     *it +=1;
    //     std::cout << ' ' << *it;
    // }
    // std::cout << std::endl;

    // for (int& l: list) {
    //     l +=1;
    // }

    // std::cout << std::endl;
    // std::list<int>::iterator it = list.begin();
    // list.insert(++it,21);

    // std::vector<int> a;
    // a.push_back(1);
    // a.push_back(2);

    // list.insert(it,a.begin(),a.end());

    // for (auto l: list)
    // {
    //     std::cout << ' ' << l;
    // }


    // // Denny: use insert to insert elements in between list
    // // step 1: define a vector having 2 ints
    // // insert the vector at the second position

    // //FORWARD LIST

    // // STACK
    // std::stack<int> a;
    // a.push(1);
    // a.push(2);
    // a.pop();
    // std::cout << a.top() << std::endl;

    // //QUEUE
    // std::queue<int> a;
    // a.push(1);
    // a.push(2);
    // a.pop();
    // std::cout << a.back() << std::endl;

    // //DEQUEUE
    // std::deque<int> a;
    // a.push_front(2);
    // a.push_front(1);
    // a.push_back(3);
    // a.push_back(4);
    // a.pop_back();
    // a.pop_front();
    // std::cout << a.at(1) << std::endl;
    // std::cout << a[3] << std::endl;
    // std::cout << a.back() << std::endl;
    // std::cout << a.front() << std::endl;

    // // SET
    // std::set<int> s;
    // s.insert(5);
    // s.insert(4);
    // s.insert(1);
    // s.insert(5);

    // for(const auto& a: s)
    // {
    //     std::cout << a << std::endl;
    // }
    // s.erase(1);
    // for(const auto& a: s)
    // {
    //     std::cout << a << std::endl;
    // }

    // if (s.find(6) != s.end())
    // {
    //     std::cout << "....."  << *s.find(6) << std::endl;
    // }
    //  // DENNY: fix me! hint, find operator returns iterator

    // PRIORITY QUEUE
    std::priority_queue<int, std::vector<int>, ltd::less<int>> q;
    q.push(1);
    q.push(8);
    q.push(2);

    while(!q.empty())
    {
        std::cout << q.top() << std::endl;
        q.pop(); 
    }
    // Denny: use custom comparator
    // Denny: use template in custom comparator
    
    return 0;
}

