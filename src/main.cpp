#include <iostream>
#include <vector>

#include "graph.h"

using namespace std;

int main()
{
    int n = 4;

    vector<vector<Reaction>> graph(n);

    addReaction(graph, 0, 1, 29.5);
    addReaction(graph, 0, 2, 5);

    addReaction(graph, 1, 2, 78.9);

    addReaction(graph, 2, 3, 84.6);
    addReaction(graph, 2, 3, 9);

    addReaction(graph, 3, 0, 97.0);

    printGraph(graph);

    return 0;
}
