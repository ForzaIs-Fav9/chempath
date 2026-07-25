#include <iostream>
#include <vector>

#include "graph.h"

using namespace std;

int main()
{
    int n = 4;

    vector<vector<Reaction>> graph(n);

    addReaction(graph, 0, 1, 29.5);
    addReaction(graph, 0, 2, 5.0);

    addReaction(graph, 1, 2, 78.9);

    addReaction(graph, 2, 3, 84.6);
    addReaction(graph, 2, 3, 9.0);

    addReaction(graph, 3, 0, 97.0);

    cout << "Reaction Network\n" << endl;

    printGraph(graph);

    vector<double> dist = dijkstra(graph, 0);

    cout << endl;

    printDistances(dist);

    return 0;
}
