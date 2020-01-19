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
typedef std::shared_ptr<Node> NodePtr;

std::vector<Node> path(Node neighbor, int x)
{

};

void main(int argc, char **argv)
{
    Node start(1,NULL);
    std::vector<Node> graph;
    
    std::queue<SearchNodePtr> queue;
    // set start as discovered
    queue.push(new SearchNode{start, NodePtr()});
    while (!queue.empty())
    {
        SearchNodePtr current = queue.front();
        for (uint32_t neighbor_id : current->node.neighbors)
        {
            if (/** check if it is visited**/)
            {
                // set it as visited
                neighbor = graph[neighbor_id]
                queue.push(neighbour);
                if (current.id == goal.id)
                {
                    return path(neighbor,x);
                }
            }
        }
    }
}