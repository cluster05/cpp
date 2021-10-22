#include <bits/stdc++.h>
using namespace std;

#define V 5

class AdjacencyMatric {
  int graph[V][V] = {0};

public:
  AdjacencyMatric() {}
  void addEdge(int u, int v) { graph[u][v] = 1; }

  void print() {
    for (int i = 0; i < V; i++) {
      for (int j = 0; j < V; j++)
        cout << graph[i][j] << " ";
      cout << endl;
    }
  }
};

class AdjacencyList {
  map<int, vector<pair<int, int>>> graph;

public:
  void addEdge(int u, int v, int value) { graph[u].push_back({v, value}); }

  void print() {

    for (auto ele : graph) {
      cout << ele.first << " | ";
      for (auto value : ele.second) {
        cout << " | " << value.first << " | " << value.second << " | "
             << " -> ";
      }
      cout << "NULL" << endl;
    }
  }
};

int main() {
  AdjacencyList met = AdjacencyList();
  met.addEdge(2, 3, 3);
  met.addEdge(4, 1, 5);
  met.addEdge(5, 5, 7);
  met.addEdge(2, 1, 9);

  met.print();
}