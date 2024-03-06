#include "graph.h"
#include<iostream>

using namespace std;

int main(){

    Graph g;
    cout<<g.isEdge(0,1)<<endl;
    g.printGraph();
    g.maxDegree();
    g.minDegree();
}
