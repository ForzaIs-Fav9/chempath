#include <iostream>
#include <vector>
#include <queue>
#include <limits>
#include <string>

using namespace std;

int main()
{
    int n = 5;

    vector<string> names = {
        "Bromoethane",
        "Ethanol",
        "Ethene",
        "Ethyl Acetate",
        "Acetic Acid"
    };

    vector<vector<pair<int, double>>> molecules(n);

    // Reactions
    molecules[0].push_back({1, 29.5});
    molecules[0].push_back({2, 5});

    molecules[1].push_back({3, 58.0});

    molecules[4].push_back({3, 15.0});

    molecules[2].push_back({1, 12.0});

    // Dijkstra
    vector<double> dist(n, numeric_limits<double>::infinity());
    vector<int> parent(n, -1);

    priority_queue<
        pair<double, int>,
        vector<pair<double, int>>,
        greater<pair<double, int>>
    > pq;

    int start = 0;

    dist[start] = 0;

    pq.push({0, start});

    while (!pq.empty()) {

        double currentDist = pq.top().first;
        int currentNode = pq.top().second;

        pq.pop();

        if (currentDist > dist[currentNode]) {
            continue;
        }

        for (int i = 0; i < molecules[currentNode].size(); i++) {

            int next = molecules[currentNode][i].first;
            double energy = molecules[currentNode][i].second;

            if (dist[currentNode] + energy < dist[next]) {

                dist[next] = dist[currentNode] + energy;

                parent[next] = currentNode;

                pq.push({dist[next], next});
            }
        }
    }

    int target = 3;

    cout << "Optimal Route:" << endl;

    vector<int> path;

    for (int v = target; v != -1; v = parent[v]) {
        path.push_back(v);
    }

    reverse(path.begin(), path.end());

    for (int i = 0; i < path.size(); i++) {

        cout << names[path[i]];

        if (i + 1 < path.size()) {
            cout << " -> ";
        }
    }

    cout << endl;

    cout << endl;
    cout << "Total Energy: ";
    cout << dist[target] << endl;

    return 0;
}
