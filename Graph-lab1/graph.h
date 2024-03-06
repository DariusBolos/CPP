#include <vector>

class Graph {
private:



    std::vector<int> list[100];

public:

    Graph();

    void addEdge(int x, int y);

    bool isEdge(int x, int y);

    void printGraph();

    void maxDegree();

    void minDegree();

};