#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int v) {
    for (int i = 0; i < v; ++i) {
        cout << "Vertex " << i << ":";
        for (size_t j = 0; j < adj[i].size(); ++j) {
            cout << " -> " << adj[i][j];
        }
        cout << endl;
    }
}

int main() {
    int v = 4;
    vector<int> adj[v];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    
    printGraph(adj, v);
    
    return 0;
}

