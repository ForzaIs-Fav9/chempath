#include <iostream>
#include "graph.h"

using namespace std;

void addReaction(vector<vector<Reaction>>& graph,
                 int from,
                 int to,
                 double energy)
{
    graph[from].push_back({to, energy});
}

void printGraph(const vector<vector<Reaction>>& graph)
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << "Molecule " << i << ":" << endl;

        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << " -> ";

            cout << graph[i][j].destination;

            cout << " | Energy: ";

            cout << graph[i][j].energy << endl;
        }

        cout << endl;
    }
}
