#ifndef GRAPH_H
#define GRAPH_H

#include <vector>

using namespace std;

struct Reaction
{
    int destination;
    double energy;
};

void addReaction(vector<vector<Reaction>>& graph,
                 int from,
                 int to,
                 double energy);

void printGraph(const vector<vector<Reaction>>& graph);

#endif
