#include "graph.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

Graph::Graph(){

    ifstream f;
    f.open("data.in");
    f >> n;
    f >> m;
    int x,y;
    for(int i=0; i<m; i++){
        f>>x>>y;
        addEdge(x,y);
    }

}

void Graph::addEdge(int x, int y){
    list[x].push_back(y);
    list[y].push_back(x);
}

bool Graph::isEdge(int x, int y){
    return std::count(list[x].begin(), list[x].end(), y);
}

void Graph::printGraph() {
    for (int i = 0; i < n; i++){
        cout << "node " << i << " is linked to the nodes: ";
        for (auto element : list[i])
            cout << element << " ";
        cout << endl;
    }
}

void Graph::maxDegree() {
    int maximum = 0;
    for (int i = 0; i < n; i++){
        int currentSize = list[i].size();
        if (currentSize > maximum)
            maximum = currentSize;
    }

    cout << maximum << '\n';
}

void Graph::minDegree() {
    int minimum;
    minimum = INT_MAX;
    for (int i = 0; i < n; i++){
        int currentSize = list[i].size();
        if (currentSize < minimum)
            minimum = currentSize;
    }

    cout << minimum << '\n';
}