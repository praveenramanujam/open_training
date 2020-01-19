#include <iostream>
#include <queue>
#include <memory>

struct Node {
	uint32_t id;
  std::vector<uint32_t> neighbors;
};

struct SearchNode {
    Node node;
    std::shared_ptr<Node> parent;
};

typedef std::shared_ptr<SearchNode> SearchNodePtr;

std::vector<Node> path(Node neighbor, int x)
{

};

void main(int argc, char **argv)
{
    Node start(1,NULL);
    std::vector<Node> graph;
    
    std::queue<SearchNodePtr> queue;
    // set start as discovered
    queue.push(new SearchNode{start, SearchNodePtr()});
    while (!queue.empty())
    {
        Node current;
        current = queue.top();
        for (uint32_t neighbor_id : current.neighbours)
        {
            if // check if it is visited
            {
                // set it as visited
                // set neighbour parent as current
                queue.push(neighbour);
                if (current.id == goal.id)
                {
                    return path(neighbor,x);
                }
            }
        }
    }
}
