#include <iostream>
#include <vector>
#include <queue>
#include <limits>

#include "graph.h"

using namespace std;

void addReaction(
    vector<vector<Reaction>>& graph,
    int from,
    int to,
    double energy
)
{
    graph[from].push_back({to, energy});
}

void printGraph(
    const vector<vector<Reaction>>& graph
)
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << "Molecule " << i << ":" << endl;

        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << " -> "
                 << graph[i][j].destination
                 << " | Energy: "
                 << graph[i][j].energy
                 << endl;
        }

        cout << endl;
    }
}

vector<double> dijkstra(
    const vector<vector<Reaction>>& graph,
    int start
)
{
    int n = graph.size();

    vector<double> dist(
        n,
        numeric_limits<double>::infinity()
    );

    priority_queue<
        pair<double, int>,
        vector<pair<double, int>>,
        greater<pair<double, int>>
    > pq;

    dist[start] = 0;

    pq.push({0, start});

    while (!pq.empty())
    {
        double currentDistance = pq.top().first;
        int currentNode = pq.top().second;

        pq.pop();

        if (currentDistance > dist[currentNode])
        {
            continue;
        }

        for (const Reaction& reaction : graph[currentNode])
        {
            int next = reaction.destination;
            double energy = reaction.energy;

            if (dist[currentNode] + energy < dist[next])
            {
                dist[next] = dist[currentNode] + energy;

                pq.push({dist[next], next});
            }
        }
    }

    return dist;
}

void printDistances(
    const vector<double>& dist
)
{
    cout << "Minimum Energies\n" << endl;

    for (int i = 0; i < dist.size(); i++)
    {
        cout << "Molecule "
             << i
             << ": "
             << dist[i]
             << endl;
    }
}
