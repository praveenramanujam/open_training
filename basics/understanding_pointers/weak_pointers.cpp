#include <iostream>
#include <memory>


class Node;
class Edge;

class Node
{
    public:
        ~Node() {
            std::cout << "Node is destroyed" << std::endl;
        }
        void addEdge(std::shared_ptr<Edge> edge) {
            _edge = edge;
        }
    private:
        std::shared_ptr<Edge> _edge;
};

class Edge
{
    public:
        ~Edge() {
            std::cout << "Edge is destroyed" << std::endl;
        }
        void addNodes(std::shared_ptr<Node>n1, std::shared_ptr<Node>n2) {
            _n1 = n1;
            _n2 = n2;
        }
        std::shared_ptr<Node> _n1;
        std::shared_ptr<Node> _n2;
};

int main(int argc, char **argv)
{
    // create nodes
    std::shared_ptr<Node> n1 = std::make_shared<Node>();
    std::shared_ptr<Node> n2 =  std::make_shared<Node>();

    // create edges for the created nodes
    std::shared_ptr<Edge> e = std::make_shared<Edge>();
    e->addNodes(n1, n2);

    // destroy the node
    n1.reset();
    n2.reset();

    // expected_behavior  that the count of edge n1 should zero if n1 was destroyed???
    std::cout << e->_n1.use_count() << std::endl;

    std::cout << "End of program" << std::endl;
    return 0;
}

