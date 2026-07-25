#ifndef GRAPH_H
#define GRAPH_H

#include <vector>

using namespace std;

struct Reaction
{
    int destination;
    double energy;
};

struct DijkstraResult
{
    vector<double> dist;
    vector<int> parent;
};

void addReaction(
    vector<vector<Reaction>>& graph,
    int from,
    int to,
    double energy
);

void printGraph(
    const vector<vector<Reaction>>& graph
);

DijkstraResult dijkstra(
    const vector<vector<Reaction>>& graph,
    int start
);

void printDistances(
    const vector<double>& dist
);

void printPath(
    const vector<int>& parent,
    int target
);

#endif
